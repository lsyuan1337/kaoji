/* Generated code for Python module 'torchvision.io.video'
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

/* The "module_torchvision$io$video" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torchvision$io$video;
PyDictObject *moduledict_torchvision$io$video;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[216];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[216];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torchvision.io.video"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 216; i++) {
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
void checkModuleConstants_torchvision$io$video(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 216; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_b06f105c81d86cd4b02dc29ba4fd777f;
static PyCodeObject *codeobj_f218b25d6e97f81f0cb00f2411078ddd;
static PyCodeObject *codeobj_0f5aa72a19dbfc4e44b253c49fdc12cf;
static PyCodeObject *codeobj_a479dc32942d5a5814cdb0c3fc9b24ab;
static PyCodeObject *codeobj_012637fd97447ef4302b59dd1c8152a8;
static PyCodeObject *codeobj_3a17fdfb85bb57eef47b9c6155abfe30;
static PyCodeObject *codeobj_0d740f2c74221caad499831a0606a98e;
static PyCodeObject *codeobj_a985c1067a6e6cdaa56b423b6eb76d71;
static PyCodeObject *codeobj_54d6148e2de9995d6ff2407749a39ac3;
static PyCodeObject *codeobj_779287960ee4dff96253bc7e21c99c02;
static PyCodeObject *codeobj_1d3b0f036dd07d541b91ed71269bd9b1;
static PyCodeObject *codeobj_76e43b447f04eedbd622627b90cf3255;
static PyCodeObject *codeobj_1d92cade93d44fa308560eee05747da7;
static PyCodeObject *codeobj_ce1cc95610de63da8f005c4827c26a76;
static PyCodeObject *codeobj_d9e16e97b785632f0c91cc69dd528e17;
static PyCodeObject *codeobj_cdd7a9f4050fd89eaa5b0cfe8c1eed32;
static PyCodeObject *codeobj_34e2fb326e18c688368e7f1d201b5910;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[201]); CHECK_OBJECT(module_filename_obj);
    codeobj_b06f105c81d86cd4b02dc29ba4fd777f = MAKE_CODE_OBJECT(module_filename_obj, 326, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[202], mod_consts[202], mod_consts[203], NULL, 1, 0, 0);
    codeobj_f218b25d6e97f81f0cb00f2411078ddd = MAKE_CODE_OBJECT(module_filename_obj, 327, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[202], mod_consts[202], mod_consts[203], NULL, 1, 0, 0);
    codeobj_0f5aa72a19dbfc4e44b253c49fdc12cf = MAKE_CODE_OBJECT(module_filename_obj, 211, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[202], mod_consts[202], mod_consts[204], NULL, 1, 0, 0);
    codeobj_a479dc32942d5a5814cdb0c3fc9b24ab = MAKE_CODE_OBJECT(module_filename_obj, 216, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[202], mod_consts[202], mod_consts[205], NULL, 1, 0, 0);
    codeobj_012637fd97447ef4302b59dd1c8152a8 = MAKE_CODE_OBJECT(module_filename_obj, 360, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[202], mod_consts[202], mod_consts[206], NULL, 1, 0, 0);
    codeobj_3a17fdfb85bb57eef47b9c6155abfe30 = MAKE_CODE_OBJECT(module_filename_obj, 362, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[202], mod_consts[202], mod_consts[206], NULL, 1, 0, 0);
    codeobj_0d740f2c74221caad499831a0606a98e = MAKE_CODE_OBJECT(module_filename_obj, 411, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[202], mod_consts[202], mod_consts[207], NULL, 1, 0, 0);
    codeobj_a985c1067a6e6cdaa56b423b6eb76d71 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[208], mod_consts[208], NULL, NULL, 0, 0, 0);
    codeobj_54d6148e2de9995d6ff2407749a39ac3 = MAKE_CODE_OBJECT(module_filename_obj, 223, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[129], mod_consts[129], mod_consts[209], NULL, 4, 0, 0);
    codeobj_779287960ee4dff96253bc7e21c99c02 = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[175], mod_consts[175], NULL, NULL, 0, 0, 0);
    codeobj_1d3b0f036dd07d541b91ed71269bd9b1 = MAKE_CODE_OBJECT(module_filename_obj, 348, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[134], mod_consts[134], mod_consts[210], NULL, 1, 0, 0);
    codeobj_76e43b447f04eedbd622627b90cf3255 = MAKE_CODE_OBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], NULL, NULL, 0, 0, 0);
    codeobj_1d92cade93d44fa308560eee05747da7 = MAKE_CODE_OBJECT(module_filename_obj, 357, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[140], mod_consts[140], mod_consts[211], NULL, 1, 0, 0);
    codeobj_ce1cc95610de63da8f005c4827c26a76 = MAKE_CODE_OBJECT(module_filename_obj, 142, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[112], mod_consts[112], mod_consts[212], NULL, 6, 0, 0);
    codeobj_d9e16e97b785632f0c91cc69dd528e17 = MAKE_CODE_OBJECT(module_filename_obj, 238, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[97], mod_consts[97], mod_consts[213], NULL, 4, 0, 0);
    codeobj_cdd7a9f4050fd89eaa5b0cfe8c1eed32 = MAKE_CODE_OBJECT(module_filename_obj, 365, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[138], mod_consts[138], mod_consts[214], NULL, 2, 0, 0);
    codeobj_34e2fb326e18c688368e7f1d201b5910 = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[215], NULL, 9, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__8_complex_call_helper_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_torchvision$io$video$$$function__1__check_av_available(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$io$video$$$function__2__av_available(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$io$video$$$function__3_write_video(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$io$video$$$function__4__read_from_stream(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$io$video$$$function__5__align_audio_frames(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$io$video$$$function__6_read_video(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$io$video$$$function__7__can_read_timestamps_from_packets(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$io$video$$$function__8__decode_video_timestamps(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$io$video$$$function__9_read_video_timestamps(PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_torchvision$io$video$$$function__1__check_av_available(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_76e43b447f04eedbd622627b90cf3255;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_76e43b447f04eedbd622627b90cf3255 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_76e43b447f04eedbd622627b90cf3255)) {
        Py_XDECREF(cache_frame_76e43b447f04eedbd622627b90cf3255);

#if _DEBUG_REFCOUNTS
        if (cache_frame_76e43b447f04eedbd622627b90cf3255 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_76e43b447f04eedbd622627b90cf3255 = MAKE_FUNCTION_FRAME(codeobj_76e43b447f04eedbd622627b90cf3255, module_torchvision$io$video, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_76e43b447f04eedbd622627b90cf3255->m_type_description == NULL);
    frame_76e43b447f04eedbd622627b90cf3255 = cache_frame_76e43b447f04eedbd622627b90cf3255;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_76e43b447f04eedbd622627b90cf3255);
    assert(Py_REFCNT(frame_76e43b447f04eedbd622627b90cf3255) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        tmp_isinstance_inst_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_isinstance_inst_1 == NULL)) {
            tmp_isinstance_inst_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_isinstance_inst_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = PyExc_Exception;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

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
        tmp_raise_type_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_raise_type_1 == NULL)) {
            tmp_raise_type_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 42;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_76e43b447f04eedbd622627b90cf3255, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_76e43b447f04eedbd622627b90cf3255->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_76e43b447f04eedbd622627b90cf3255, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_76e43b447f04eedbd622627b90cf3255,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_76e43b447f04eedbd622627b90cf3255 == cache_frame_76e43b447f04eedbd622627b90cf3255) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_76e43b447f04eedbd622627b90cf3255);
        cache_frame_76e43b447f04eedbd622627b90cf3255 = NULL;
    }

    assertFrameObject(frame_76e43b447f04eedbd622627b90cf3255);

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


static PyObject *impl_torchvision$io$video$$$function__2__av_available(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_779287960ee4dff96253bc7e21c99c02;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_779287960ee4dff96253bc7e21c99c02 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_779287960ee4dff96253bc7e21c99c02)) {
        Py_XDECREF(cache_frame_779287960ee4dff96253bc7e21c99c02);

#if _DEBUG_REFCOUNTS
        if (cache_frame_779287960ee4dff96253bc7e21c99c02 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_779287960ee4dff96253bc7e21c99c02 = MAKE_FUNCTION_FRAME(codeobj_779287960ee4dff96253bc7e21c99c02, module_torchvision$io$video, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_779287960ee4dff96253bc7e21c99c02->m_type_description == NULL);
    frame_779287960ee4dff96253bc7e21c99c02 = cache_frame_779287960ee4dff96253bc7e21c99c02;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_779287960ee4dff96253bc7e21c99c02);
    assert(Py_REFCNT(frame_779287960ee4dff96253bc7e21c99c02) == 2);

    // Framed code:
    {
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        tmp_isinstance_inst_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_isinstance_inst_1 == NULL)) {
            tmp_isinstance_inst_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_isinstance_inst_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = PyExc_Exception;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 0) ? Py_True : Py_False;
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
        exception_tb = MAKE_TRACEBACK(frame_779287960ee4dff96253bc7e21c99c02, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_779287960ee4dff96253bc7e21c99c02->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_779287960ee4dff96253bc7e21c99c02, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_779287960ee4dff96253bc7e21c99c02,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_779287960ee4dff96253bc7e21c99c02 == cache_frame_779287960ee4dff96253bc7e21c99c02) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_779287960ee4dff96253bc7e21c99c02);
        cache_frame_779287960ee4dff96253bc7e21c99c02 = NULL;
    }

    assertFrameObject(frame_779287960ee4dff96253bc7e21c99c02);

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


static PyObject *impl_torchvision$io$video$$$function__3_write_video(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_filename = python_pars[0];
    PyObject *par_video_array = python_pars[1];
    PyObject *par_fps = python_pars[2];
    PyObject *par_video_codec = python_pars[3];
    PyObject *par_options = python_pars[4];
    PyObject *par_audio_array = python_pars[5];
    PyObject *par_audio_fps = python_pars[6];
    PyObject *par_audio_codec = python_pars[7];
    PyObject *par_audio_options = python_pars[8];
    PyObject *var_container = NULL;
    PyObject *var_stream = NULL;
    PyObject *var_audio_format_dtypes = NULL;
    PyObject *var_a_stream = NULL;
    PyObject *var_num_channels = NULL;
    PyObject *var_audio_layout = NULL;
    PyObject *var_audio_sample_fmt = NULL;
    PyObject *var_format_dtype = NULL;
    PyObject *var_frame = NULL;
    PyObject *var_packet = NULL;
    PyObject *var_img = NULL;
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
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_34e2fb326e18c688368e7f1d201b5910;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
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
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
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
    static struct Nuitka_FrameObject *cache_frame_34e2fb326e18c688368e7f1d201b5910 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_34e2fb326e18c688368e7f1d201b5910)) {
        Py_XDECREF(cache_frame_34e2fb326e18c688368e7f1d201b5910);

#if _DEBUG_REFCOUNTS
        if (cache_frame_34e2fb326e18c688368e7f1d201b5910 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_34e2fb326e18c688368e7f1d201b5910 = MAKE_FUNCTION_FRAME(codeobj_34e2fb326e18c688368e7f1d201b5910, module_torchvision$io$video, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_34e2fb326e18c688368e7f1d201b5910->m_type_description == NULL);
    frame_34e2fb326e18c688368e7f1d201b5910 = cache_frame_34e2fb326e18c688368e7f1d201b5910;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_34e2fb326e18c688368e7f1d201b5910);
    assert(Py_REFCNT(frame_34e2fb326e18c688368e7f1d201b5910) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_34e2fb326e18c688368e7f1d201b5910->m_frame.f_lineno = 81;
        tmp_operand_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[3]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooooooooooooooooo";
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
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_34e2fb326e18c688368e7f1d201b5910->m_frame.f_lineno = 81;
        tmp_operand_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[4]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? true : false;
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_34e2fb326e18c688368e7f1d201b5910->m_frame.f_lineno = 82;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_34e2fb326e18c688368e7f1d201b5910->m_frame.f_lineno = 83;
        tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[8]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_video_array);
        tmp_kw_call_arg_value_0_1 = par_video_array;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 84;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[9]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 84;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_34e2fb326e18c688368e7f1d201b5910->m_frame.f_lineno = 84;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_called_instance_3 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[10]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_34e2fb326e18c688368e7f1d201b5910->m_frame.f_lineno = 84;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[11]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_video_array;
            assert(old != NULL);
            par_video_array = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_fps);
        tmp_isinstance_inst_1 = par_fps;
        tmp_isinstance_cls_1 = (PyObject *)&PyFloat_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooooooooooooooooooo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_fps);
        tmp_args_element_value_2 = par_fps;
        frame_34e2fb326e18c688368e7f1d201b5910->m_frame.f_lineno = 89;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[13], tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_fps;
            assert(old != NULL);
            par_fps = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[14]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_filename);
        tmp_tuple_element_1 = par_filename;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[15]);
        frame_34e2fb326e18c688368e7f1d201b5910->m_frame.f_lineno = 91;
        tmp_assign_source_3 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_6 = tmp_with_1__source;
        tmp_called_value_5 = LOOKUP_SPECIAL(tmp_expression_value_6, mod_consts[16]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_34e2fb326e18c688368e7f1d201b5910->m_frame.f_lineno = 91;
        tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
        Py_DECREF(tmp_called_value_5);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_7 = tmp_with_1__source;
        tmp_assign_source_5 = LOOKUP_SPECIAL(tmp_expression_value_7, mod_consts[17]);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_assign_source_6;
        tmp_assign_source_6 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_with_1__enter);
        tmp_assign_source_7 = tmp_with_1__enter;
        assert(var_container == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_container = tmp_assign_source_7;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        CHECK_OBJECT(var_container);
        tmp_expression_value_8 = var_container;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[18]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_video_codec);
        tmp_kw_call_arg_value_0_2 = par_video_codec;
        CHECK_OBJECT(par_fps);
        tmp_kw_call_dict_value_0_2 = par_fps;
        frame_34e2fb326e18c688368e7f1d201b5910->m_frame.f_lineno = 92;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_6, args, kw_values, mod_consts[19]);
        }

        Py_DECREF(tmp_called_value_6);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_stream == NULL);
        var_stream = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_video_array);
        tmp_expression_value_10 = par_video_array;
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[20]);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_subscript_value_1 = mod_consts[21];
        tmp_assattr_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_9, tmp_subscript_value_1, 2);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_stream);
        tmp_assattr_target_1 = var_stream;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[22], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_video_array);
        tmp_expression_value_12 = par_video_array;
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[20]);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_subscript_value_2 = mod_consts[23];
        tmp_assattr_value_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_11, tmp_subscript_value_2, 1);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_stream);
        tmp_assattr_target_2 = var_stream;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[24], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_video_codec);
        tmp_cmp_expr_left_1 = par_video_codec;
        tmp_cmp_expr_right_1 = mod_consts[25];
        tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assattr_value_3 = mod_consts[26];
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assattr_value_3 = mod_consts[27];
        condexpr_end_1:;
        CHECK_OBJECT(var_stream);
        tmp_assattr_target_3 = var_stream;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[28], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_options);
        tmp_or_left_value_1 = par_options;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_or_right_value_1 = MAKE_DICT_EMPTY();
        tmp_assattr_value_4 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF(tmp_or_left_value_1);
        tmp_assattr_value_4 = tmp_or_left_value_1;
        or_end_1:;
        CHECK_OBJECT(var_stream);
        tmp_assattr_target_4 = var_stream;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[29], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_audio_array);
        tmp_cmp_expr_left_2 = par_audio_array;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = DICT_COPY(mod_consts[30]);
        assert(var_audio_format_dtypes == NULL);
        var_audio_format_dtypes = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_dict_value_0_3;
        CHECK_OBJECT(var_container);
        tmp_expression_value_13 = var_container;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[18]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_audio_codec);
        tmp_kw_call_arg_value_0_3 = par_audio_codec;
        CHECK_OBJECT(par_audio_fps);
        tmp_kw_call_dict_value_0_3 = par_audio_fps;
        frame_34e2fb326e18c688368e7f1d201b5910->m_frame.f_lineno = 111;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_7, args, kw_values, mod_consts[19]);
        }

        Py_DECREF(tmp_called_value_7);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_a_stream == NULL);
        var_a_stream = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assattr_value_5;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_audio_options);
        tmp_or_left_value_2 = par_audio_options;
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        tmp_or_right_value_2 = MAKE_DICT_EMPTY();
        tmp_assattr_value_5 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        Py_INCREF(tmp_or_left_value_2);
        tmp_assattr_value_5 = tmp_or_left_value_2;
        or_end_2:;
        CHECK_OBJECT(var_a_stream);
        tmp_assattr_target_5 = var_a_stream;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[29], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(par_audio_array);
        tmp_expression_value_15 = par_audio_array;
        tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[20]);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_subscript_value_3 = mod_consts[31];
        tmp_assign_source_11 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_14, tmp_subscript_value_3, 0);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_num_channels == NULL);
        var_num_channels = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_num_channels);
        tmp_cmp_expr_left_3 = var_num_channels;
        tmp_cmp_expr_right_3 = mod_consts[23];
        tmp_condition_result_5 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        tmp_assign_source_12 = mod_consts[32];
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_assign_source_12 = mod_consts[33];
        condexpr_end_2:;
        assert(var_audio_layout == NULL);
        Py_INCREF(tmp_assign_source_12);
        var_audio_layout = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var_container);
        tmp_expression_value_20 = var_container;
        tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[34]);
        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[35]);
        Py_DECREF(tmp_expression_value_19);
        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_subscript_value_4 = mod_consts[31];
        tmp_expression_value_17 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_18, tmp_subscript_value_4, 0);
        Py_DECREF(tmp_expression_value_18);
        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[36]);
        Py_DECREF(tmp_expression_value_17);
        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[37]);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_audio_sample_fmt == NULL);
        var_audio_sample_fmt = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[38]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_audio_format_dtypes);
        tmp_dict_arg_value_1 = var_audio_format_dtypes;
        CHECK_OBJECT(var_audio_sample_fmt);
        tmp_key_value_1 = var_audio_sample_fmt;
        tmp_args_element_value_3 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_value_1, tmp_key_value_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 118;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_34e2fb326e18c688368e7f1d201b5910->m_frame.f_lineno = 118;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_format_dtype == NULL);
        var_format_dtype = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_audio_array);
        tmp_args_element_value_4 = par_audio_array;
        frame_34e2fb326e18c688368e7f1d201b5910->m_frame.f_lineno = 119;
        tmp_called_instance_6 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_7, mod_consts[8], tmp_args_element_value_4);
        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_34e2fb326e18c688368e7f1d201b5910->m_frame.f_lineno = 119;
        tmp_called_instance_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[11]);
        Py_DECREF(tmp_called_instance_6);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_format_dtype);
        tmp_args_element_value_5 = var_format_dtype;
        frame_34e2fb326e18c688368e7f1d201b5910->m_frame.f_lineno = 119;
        tmp_assign_source_15 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[39], tmp_args_element_value_5);
        Py_DECREF(tmp_called_instance_5);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = par_audio_array;
            assert(old != NULL);
            par_audio_array = tmp_assign_source_15;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_dict_value_0_4;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[40]);
        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[41]);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_audio_array);
        tmp_kw_call_arg_value_0_4 = par_audio_array;
        CHECK_OBJECT(var_audio_sample_fmt);
        tmp_kw_call_dict_value_0_4 = var_audio_sample_fmt;
        CHECK_OBJECT(var_audio_layout);
        tmp_kw_call_dict_value_1_1 = var_audio_layout;
        frame_34e2fb326e18c688368e7f1d201b5910->m_frame.f_lineno = 121;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_4, tmp_kw_call_dict_value_1_1};
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_9, args, kw_values, mod_consts[42]);
        }

        Py_DECREF(tmp_called_value_9);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_frame == NULL);
        var_frame = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_audio_fps);
        tmp_assattr_value_6 = par_audio_fps;
        CHECK_OBJECT(var_frame);
        tmp_assattr_target_6 = var_frame;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[43], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(var_a_stream);
        tmp_expression_value_24 = var_a_stream;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[44]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_frame);
        tmp_args_element_value_6 = var_frame;
        frame_34e2fb326e18c688368e7f1d201b5910->m_frame.f_lineno = 125;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_10);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_17 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_17;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_18 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_18 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooo";
                exception_lineno = 125;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_19 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_packet;
            var_packet = tmp_assign_source_19;
            Py_INCREF(var_packet);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_7;
        if (var_container == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_called_instance_8 = var_container;
        CHECK_OBJECT(var_packet);
        tmp_args_element_value_7 = var_packet;
        frame_34e2fb326e18c688368e7f1d201b5910->m_frame.f_lineno = 126;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_8, mod_consts[46], tmp_args_element_value_7);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_3);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 125;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_1;
    loop_end_1:;
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

    goto try_except_handler_4;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_25;
        CHECK_OBJECT(var_a_stream);
        tmp_expression_value_25 = var_a_stream;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[44]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_34e2fb326e18c688368e7f1d201b5910->m_frame.f_lineno = 128;
        tmp_iter_arg_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_11);
        Py_DECREF(tmp_called_value_11);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_20 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_20;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_21 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_21 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooo";
                exception_lineno = 128;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_22 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_packet;
            var_packet = tmp_assign_source_22;
            Py_INCREF(var_packet);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_8;
        if (var_container == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_instance_9 = var_container;
        CHECK_OBJECT(var_packet);
        tmp_args_element_value_8 = var_packet;
        frame_34e2fb326e18c688368e7f1d201b5910->m_frame.f_lineno = 129;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_9, mod_consts[46], tmp_args_element_value_8);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_4);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 128;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
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
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(par_video_array);
        tmp_iter_arg_3 = par_video_array;
        tmp_assign_source_23 = MAKE_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_for_loop_3__for_iterator == NULL);
        tmp_for_loop_3__for_iterator = tmp_assign_source_23;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_24 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_24 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooo";
                exception_lineno = 131;
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
            PyObject *old = var_img;
            var_img = tmp_assign_source_25;
            Py_INCREF(var_img);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_2;
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_expression_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[47]);
        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[41]);
        Py_DECREF(tmp_expression_value_26);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(var_img);
        tmp_tuple_element_2 = var_img;
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[48]);
        frame_34e2fb326e18c688368e7f1d201b5910->m_frame.f_lineno = 132;
        tmp_assign_source_26 = CALL_FUNCTION(tmp_called_value_12, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_frame;
            var_frame = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        tmp_assattr_value_7 = mod_consts[49];
        CHECK_OBJECT(var_frame);
        tmp_assattr_target_7 = var_frame;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[50], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_7;
        }
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_element_value_9;
        if (var_stream == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 134;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_expression_value_28 = var_stream;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[44]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(var_frame);
        tmp_args_element_value_9 = var_frame;
        frame_34e2fb326e18c688368e7f1d201b5910->m_frame.f_lineno = 134;
        tmp_iter_arg_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_13);
        if (tmp_iter_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_27 = MAKE_ITERATOR(tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_for_loop_4__for_iterator;
            tmp_for_loop_4__for_iterator = tmp_assign_source_27;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT(tmp_for_loop_4__for_iterator);
        tmp_next_source_4 = tmp_for_loop_4__for_iterator;
        tmp_assign_source_28 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_28 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooo";
                exception_lineno = 134;
                goto try_except_handler_8;
            }
        }

        {
            PyObject *old = tmp_for_loop_4__iter_value;
            tmp_for_loop_4__iter_value = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT(tmp_for_loop_4__iter_value);
        tmp_assign_source_29 = tmp_for_loop_4__iter_value;
        {
            PyObject *old = var_packet;
            var_packet = tmp_assign_source_29;
            Py_INCREF(var_packet);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_10;
        if (var_container == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 135;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_called_instance_10 = var_container;
        CHECK_OBJECT(var_packet);
        tmp_args_element_value_10 = var_packet;
        frame_34e2fb326e18c688368e7f1d201b5910->m_frame.f_lineno = 135;
        tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_10, mod_consts[46], tmp_args_element_value_10);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_5);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 134;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_8;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_7;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 131;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_7;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_4;
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

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_29;
        if (var_stream == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 138;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_29 = var_stream;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[44]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_34e2fb326e18c688368e7f1d201b5910->m_frame.f_lineno = 138;
        tmp_iter_arg_5 = CALL_FUNCTION_NO_ARGS(tmp_called_value_14);
        Py_DECREF(tmp_called_value_14);
        if (tmp_iter_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_30 = MAKE_ITERATOR(tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_for_loop_5__for_iterator == NULL);
        tmp_for_loop_5__for_iterator = tmp_assign_source_30;
    }
    // Tried code:
    loop_start_5:;
    {
        PyObject *tmp_next_source_5;
        PyObject *tmp_assign_source_31;
        CHECK_OBJECT(tmp_for_loop_5__for_iterator);
        tmp_next_source_5 = tmp_for_loop_5__for_iterator;
        tmp_assign_source_31 = ITERATOR_NEXT(tmp_next_source_5);
        if (tmp_assign_source_31 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_5;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooo";
                exception_lineno = 138;
                goto try_except_handler_9;
            }
        }

        {
            PyObject *old = tmp_for_loop_5__iter_value;
            tmp_for_loop_5__iter_value = tmp_assign_source_31;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT(tmp_for_loop_5__iter_value);
        tmp_assign_source_32 = tmp_for_loop_5__iter_value;
        {
            PyObject *old = var_packet;
            var_packet = tmp_assign_source_32;
            Py_INCREF(var_packet);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_11;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_11;
        if (var_container == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 139;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_called_instance_11 = var_container;
        CHECK_OBJECT(var_packet);
        tmp_args_element_value_11 = var_packet;
        frame_34e2fb326e18c688368e7f1d201b5910->m_frame.f_lineno = 139;
        tmp_call_result_6 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_11, mod_consts[46], tmp_args_element_value_11);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_6);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 138;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_9;
    }
    goto loop_start_5;
    loop_end_5:;
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

    Py_XDECREF(tmp_for_loop_5__iter_value);
    tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_5__for_iterator);
    Py_DECREF(tmp_for_loop_5__for_iterator);
    tmp_for_loop_5__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_4;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_for_loop_5__iter_value);
    tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_5__for_iterator);
    Py_DECREF(tmp_for_loop_5__for_iterator);
    tmp_for_loop_5__for_iterator = NULL;
    goto try_end_6;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_6 == NULL) {
        exception_keeper_tb_6 = MAKE_TRACEBACK(frame_34e2fb326e18c688368e7f1d201b5910, exception_keeper_lineno_6);
    } else if (exception_keeper_lineno_6 != 0) {
        exception_keeper_tb_6 = ADD_TRACEBACK(exception_keeper_tb_6, frame_34e2fb326e18c688368e7f1d201b5910, exception_keeper_lineno_6);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6);
    // Tried code:
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_4 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_6 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        nuitka_bool tmp_assign_source_33;
        tmp_assign_source_33 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_33;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_15 = tmp_with_1__exit;
        tmp_args_element_value_12 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_13 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_14 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_34e2fb326e18c688368e7f1d201b5910->m_frame.f_lineno = 138;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_operand_value_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_15, call_args);
        }

        if (tmp_operand_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 138;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_34e2fb326e18c688368e7f1d201b5910->m_frame) frame_34e2fb326e18c688368e7f1d201b5910->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_10;
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 91;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_34e2fb326e18c688368e7f1d201b5910->m_frame) frame_34e2fb326e18c688368e7f1d201b5910->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_10;
    branch_end_4:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_3;
    // End of try:
    try_end_7:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_6;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_6:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
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
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_call_result_7;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_16 = tmp_with_1__exit;
        frame_34e2fb326e18c688368e7f1d201b5910->m_frame.f_lineno = 138;
        tmp_call_result_7 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_16, mod_consts[52]);

        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_8);
            Py_XDECREF(exception_keeper_value_8);
            Py_XDECREF(exception_keeper_tb_8);

            exception_lineno = 138;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_7);
    }
    branch_no_6:;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_2;
    // End of try:
    try_end_8:;
    {
        bool tmp_condition_result_9;
        nuitka_bool tmp_cmp_expr_left_6;
        nuitka_bool tmp_cmp_expr_right_6;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_6 = tmp_with_1__indicator;
        tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
        tmp_condition_result_9 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_call_result_8;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_17 = tmp_with_1__exit;
        frame_34e2fb326e18c688368e7f1d201b5910->m_frame.f_lineno = 138;
        tmp_call_result_8 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_17, mod_consts[52]);

        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_8);
    }
    branch_no_7:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_34e2fb326e18c688368e7f1d201b5910, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_34e2fb326e18c688368e7f1d201b5910->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_34e2fb326e18c688368e7f1d201b5910, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_34e2fb326e18c688368e7f1d201b5910,
        type_description_1,
        par_filename,
        par_video_array,
        par_fps,
        par_video_codec,
        par_options,
        par_audio_array,
        par_audio_fps,
        par_audio_codec,
        par_audio_options,
        var_container,
        var_stream,
        var_audio_format_dtypes,
        var_a_stream,
        var_num_channels,
        var_audio_layout,
        var_audio_sample_fmt,
        var_format_dtype,
        var_frame,
        var_packet,
        var_img
    );


    // Release cached frame if used for exception.
    if (frame_34e2fb326e18c688368e7f1d201b5910 == cache_frame_34e2fb326e18c688368e7f1d201b5910) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_34e2fb326e18c688368e7f1d201b5910);
        cache_frame_34e2fb326e18c688368e7f1d201b5910 = NULL;
    }

    assertFrameObject(frame_34e2fb326e18c688368e7f1d201b5910);

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
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_video_array);
    Py_DECREF(par_video_array);
    par_video_array = NULL;
    CHECK_OBJECT(par_fps);
    Py_DECREF(par_fps);
    par_fps = NULL;
    Py_XDECREF(par_audio_array);
    par_audio_array = NULL;
    Py_XDECREF(var_container);
    var_container = NULL;
    Py_XDECREF(var_stream);
    var_stream = NULL;
    Py_XDECREF(var_audio_format_dtypes);
    var_audio_format_dtypes = NULL;
    Py_XDECREF(var_a_stream);
    var_a_stream = NULL;
    Py_XDECREF(var_num_channels);
    var_num_channels = NULL;
    Py_XDECREF(var_audio_layout);
    var_audio_layout = NULL;
    Py_XDECREF(var_audio_sample_fmt);
    var_audio_sample_fmt = NULL;
    Py_XDECREF(var_format_dtype);
    var_format_dtype = NULL;
    Py_XDECREF(var_frame);
    var_frame = NULL;
    Py_XDECREF(var_packet);
    var_packet = NULL;
    Py_XDECREF(var_img);
    var_img = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_video_array);
    par_video_array = NULL;
    Py_XDECREF(par_fps);
    par_fps = NULL;
    Py_XDECREF(par_audio_array);
    par_audio_array = NULL;
    Py_XDECREF(var_container);
    var_container = NULL;
    Py_XDECREF(var_stream);
    var_stream = NULL;
    Py_XDECREF(var_audio_format_dtypes);
    var_audio_format_dtypes = NULL;
    Py_XDECREF(var_a_stream);
    var_a_stream = NULL;
    Py_XDECREF(var_num_channels);
    var_num_channels = NULL;
    Py_XDECREF(var_audio_layout);
    var_audio_layout = NULL;
    Py_XDECREF(var_audio_sample_fmt);
    var_audio_sample_fmt = NULL;
    Py_XDECREF(var_format_dtype);
    var_format_dtype = NULL;
    Py_XDECREF(var_frame);
    var_frame = NULL;
    Py_XDECREF(var_packet);
    var_packet = NULL;
    Py_XDECREF(var_img);
    var_img = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);
    CHECK_OBJECT(par_video_codec);
    Py_DECREF(par_video_codec);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);
    CHECK_OBJECT(par_audio_fps);
    Py_DECREF(par_audio_fps);
    CHECK_OBJECT(par_audio_codec);
    Py_DECREF(par_audio_codec);
    CHECK_OBJECT(par_audio_options);
    Py_DECREF(par_audio_options);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);
    CHECK_OBJECT(par_video_codec);
    Py_DECREF(par_video_codec);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);
    CHECK_OBJECT(par_audio_fps);
    Py_DECREF(par_audio_fps);
    CHECK_OBJECT(par_audio_codec);
    Py_DECREF(par_audio_codec);
    CHECK_OBJECT(par_audio_options);
    Py_DECREF(par_audio_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$io$video$$$function__4__read_from_stream(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_container = python_pars[0];
    PyObject *par_start_offset = python_pars[1];
    PyObject *par_end_offset = python_pars[2];
    PyObject *par_pts_unit = python_pars[3];
    PyObject *par_stream = python_pars[4];
    PyObject *par_stream_name = python_pars[5];
    PyObject *var_frames = NULL;
    PyObject *var_should_buffer = NULL;
    PyObject *var_extradata = NULL;
    PyObject *var_pos = NULL;
    PyObject *var_d = NULL;
    PyObject *var_o = NULL;
    PyObject *var_seek_offset = NULL;
    PyObject *var_buffer_count = NULL;
    PyObject *var__idx = NULL;
    PyObject *var_frame = NULL;
    PyObject *var_result = NULL;
    PyObject *var_preceding_frames = NULL;
    PyObject *var_first_frame_pts = NULL;
    PyObject *outline_0_var_i = NULL;
    PyObject *outline_1_var_i = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp$comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_listcomp$comparison_chain_1__operand_2 = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_ce1cc95610de63da8f005c4827c26a76;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_inplace_orig;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_iterator_attempt;
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
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    struct Nuitka_FrameObject *frame_0f5aa72a19dbfc4e44b253c49fdc12cf_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    static struct Nuitka_FrameObject *cache_frame_0f5aa72a19dbfc4e44b253c49fdc12cf_2 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    struct Nuitka_FrameObject *frame_a479dc32942d5a5814cdb0c3fc9b24ab_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    static struct Nuitka_FrameObject *cache_frame_a479dc32942d5a5814cdb0c3fc9b24ab_3 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    static struct Nuitka_FrameObject *cache_frame_ce1cc95610de63da8f005c4827c26a76 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ce1cc95610de63da8f005c4827c26a76)) {
        Py_XDECREF(cache_frame_ce1cc95610de63da8f005c4827c26a76);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ce1cc95610de63da8f005c4827c26a76 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ce1cc95610de63da8f005c4827c26a76 = MAKE_FUNCTION_FRAME(codeobj_ce1cc95610de63da8f005c4827c26a76, module_torchvision$io$video, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ce1cc95610de63da8f005c4827c26a76->m_type_description == NULL);
    frame_ce1cc95610de63da8f005c4827c26a76 = cache_frame_ce1cc95610de63da8f005c4827c26a76;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ce1cc95610de63da8f005c4827c26a76);
    assert(Py_REFCNT(frame_ce1cc95610de63da8f005c4827c26a76) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        tmp_iadd_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_iadd_expr_left_1 == NULL)) {
            tmp_iadd_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_iadd_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iadd_expr_right_1 = mod_consts[23];
        tmp_inplace_orig = tmp_iadd_expr_left_1;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = tmp_iadd_expr_left_1;
        if (tmp_inplace_orig != tmp_assign_source_1) {
            UPDATE_STRING_DICT_INPLACE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_1);
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        tmp_mod_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_mod_expr_left_1 == NULL)) {
            tmp_mod_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        assert(!(tmp_mod_expr_left_1 == NULL));
        tmp_mod_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_mod_expr_right_1 == NULL)) {
            tmp_mod_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_mod_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_1 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_sub_expr_left_1 == NULL)) {
            tmp_sub_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 152;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = mod_consts[23];
        tmp_cmp_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 152;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooooNooooooooooo";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ce1cc95610de63da8f005c4827c26a76->m_frame.f_lineno = 153;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[57]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_pts_unit);
        tmp_cmp_expr_left_2 = par_pts_unit;
        tmp_cmp_expr_right_2 = mod_consts[58];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooooooNooooooooooo";
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
        PyObject *tmp_int_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[60]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_start_offset);
        tmp_mult_expr_left_1 = par_start_offset;
        tmp_truediv_expr_left_1 = mod_consts[23];
        CHECK_OBJECT(par_stream);
        tmp_expression_value_2 = par_stream;
        tmp_truediv_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[61]);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 156;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_1 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 156;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 156;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ce1cc95610de63da8f005c4827c26a76->m_frame.f_lineno = 156;
        tmp_int_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_start_offset;
            assert(old != NULL);
            par_start_offset = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_end_offset);
        tmp_cmp_expr_left_3 = par_end_offset;
        tmp_cmp_expr_right_3 = mod_consts[62];
        tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_OBJECT_FLOAT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooNooooooooooo";
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
        PyObject *tmp_assign_source_3;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[63]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_end_offset);
        tmp_mult_expr_left_2 = par_end_offset;
        tmp_truediv_expr_left_2 = mod_consts[23];
        CHECK_OBJECT(par_stream);
        tmp_expression_value_4 = par_stream;
        tmp_truediv_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[61]);
        if (tmp_truediv_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 158;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_2 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        Py_DECREF(tmp_truediv_expr_right_2);
        if (tmp_mult_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 158;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_right_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 158;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ce1cc95610de63da8f005c4827c26a76->m_frame.f_lineno = 158;
        tmp_int_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_int_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = PyNumber_Int(tmp_int_arg_2);
        Py_DECREF(tmp_int_arg_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_end_offset;
            assert(old != NULL);
            par_end_offset = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ce1cc95610de63da8f005c4827c26a76->m_frame.f_lineno = 160;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[65],
            PyTuple_GET_ITEM(mod_consts[66], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_DICT_EMPTY();
        assert(var_frames == NULL);
        var_frames = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = Py_True;
        assert(var_should_buffer == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_should_buffer = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_stream);
        tmp_expression_value_5 = par_stream;
        tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[67]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = mod_consts[68];
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooooNooooooooooo";
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
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_stream);
        tmp_expression_value_7 = par_stream;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[69]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[70]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_extradata == NULL);
        var_extradata = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_extradata);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_extradata);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_cmp_expr_left_5 = mod_consts[71];
        CHECK_OBJECT(var_extradata);
        tmp_cmp_expr_right_5 = var_extradata;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_5 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_5 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(var_extradata);
        tmp_expression_value_8 = var_extradata;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[72]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ce1cc95610de63da8f005c4827c26a76->m_frame.f_lineno = 177;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[73]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pos == NULL);
        var_pos = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_start_value_1;
        PyObject *tmp_stop_value_1;
        CHECK_OBJECT(var_extradata);
        tmp_expression_value_9 = var_extradata;
        CHECK_OBJECT(var_pos);
        tmp_start_value_1 = var_pos;
        tmp_stop_value_1 = Py_None;
        tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tmp_start_value_1, tmp_stop_value_1);
        assert(!(tmp_subscript_value_1 == NULL));
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_d == NULL);
        var_d = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[76];
        CHECK_OBJECT(var_d);
        tmp_args_element_value_4 = var_d;
        frame_ce1cc95610de63da8f005c4827c26a76->m_frame.f_lineno = 179;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_9 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[75],
                call_args
            );
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_o == NULL);
        var_o = tmp_assign_source_9;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(var_o);
        tmp_cmp_expr_left_6 = var_o;
        tmp_cmp_expr_right_6 = Py_None;
        tmp_condition_result_6 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = mod_consts[77];
        CHECK_OBJECT(var_d);
        tmp_args_element_value_6 = var_d;
        frame_ce1cc95610de63da8f005c4827c26a76->m_frame.f_lineno = 181;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_10 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_4,
                mod_consts[75],
                call_args
            );
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_o;
            assert(old != NULL);
            var_o = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    branch_no_6:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(var_o);
        tmp_cmp_expr_left_7 = var_o;
        tmp_cmp_expr_right_7 = Py_None;
        tmp_condition_result_7 = (tmp_cmp_expr_left_7 != tmp_cmp_expr_right_7) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_called_instance_5;
        CHECK_OBJECT(var_o);
        tmp_called_instance_5 = var_o;
        frame_ce1cc95610de63da8f005c4827c26a76->m_frame.f_lineno = 183;
        tmp_cmp_expr_left_8 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_5,
            mod_consts[78],
            PyTuple_GET_ITEM(mod_consts[79], 0)
        );

        if (tmp_cmp_expr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_8 = mod_consts[80];
        tmp_assign_source_11 = RICH_COMPARE_EQ_OBJECT_OBJECT_BYTES(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        Py_DECREF(tmp_cmp_expr_left_8);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_should_buffer;
            assert(old != NULL);
            var_should_buffer = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }
    branch_no_7:;
    branch_no_5:;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(par_start_offset);
        tmp_assign_source_12 = par_start_offset;
        assert(var_seek_offset == NULL);
        Py_INCREF(tmp_assign_source_12);
        var_seek_offset = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_4 = LOOKUP_BUILTIN(mod_consts[81]);
        assert(tmp_called_value_4 != NULL);
        CHECK_OBJECT(var_seek_offset);
        tmp_sub_expr_left_2 = var_seek_offset;
        tmp_sub_expr_right_2 = mod_consts[23];
        tmp_args_element_value_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = mod_consts[31];
        frame_ce1cc95610de63da8f005c4827c26a76->m_frame.f_lineno = 186;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_seek_offset;
            assert(old != NULL);
            var_seek_offset = tmp_assign_source_13;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_should_buffer);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_should_buffer);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        PyObject *tmp_args_element_value_10;
        tmp_called_value_5 = LOOKUP_BUILTIN(mod_consts[81]);
        assert(tmp_called_value_5 != NULL);
        CHECK_OBJECT(var_seek_offset);
        tmp_sub_expr_left_3 = var_seek_offset;
        tmp_sub_expr_right_3 = mod_consts[82];
        tmp_args_element_value_9 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = mod_consts[31];
        frame_ce1cc95610de63da8f005c4827c26a76->m_frame.f_lineno = 190;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_args_element_value_9);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_seek_offset;
            assert(old != NULL);
            var_seek_offset = tmp_assign_source_14;
            Py_DECREF(old);
        }

    }
    branch_no_8:;
    // Tried code:
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        CHECK_OBJECT(par_container);
        tmp_expression_value_10 = par_container;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[83]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooooooNooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_seek_offset);
        tmp_kw_call_arg_value_0_1 = var_seek_offset;
        tmp_kw_call_dict_value_0_1 = Py_False;
        tmp_kw_call_dict_value_1_1 = Py_True;
        CHECK_OBJECT(par_stream);
        tmp_kw_call_dict_value_2_1 = par_stream;
        frame_ce1cc95610de63da8f005c4827c26a76->m_frame.f_lineno = 193;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_6, args, kw_values, mod_consts[84]);
        }

        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooooooNooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_ce1cc95610de63da8f005c4827c26a76, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_ce1cc95610de63da8f005c4827c26a76, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        PyObject *tmp_expression_value_11;
        tmp_cmp_expr_left_9 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooooooooNooooooooooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[85]);
        if (tmp_cmp_expr_right_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooooooooNooooooooooo";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        Py_DECREF(tmp_cmp_expr_right_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooooooooNooooooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_9 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    tmp_return_value = MAKE_LIST_EMPTY(0);
    goto try_return_handler_3;
    goto branch_end_9;
    branch_no_9:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 191;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_ce1cc95610de63da8f005c4827c26a76->m_frame) frame_ce1cc95610de63da8f005c4827c26a76->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooNooooooooooo";
    goto try_except_handler_3;
    branch_end_9:;
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
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[31];
        assert(var_buffer_count == NULL);
        Py_INCREF(tmp_assign_source_15);
        var_buffer_count = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_dircall_arg2_1;
        tmp_called_value_7 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(par_container);
        tmp_expression_value_12 = par_container;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[86]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooooooooNooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_stream_name);
        tmp_dircall_arg2_1 = par_stream_name;
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_args_element_value_11 = impl___main__$$$function__8_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooooooooNooooooooooo";
            goto try_except_handler_4;
        }
        frame_ce1cc95610de63da8f005c4827c26a76->m_frame.f_lineno = 200;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooooooooNooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_16 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooooooooNooooooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_16;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_17 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_17 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooNooooooooooo";
                exception_lineno = 200;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_18 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooooooooNooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_19 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_19 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooNooooooooooo";
            exception_lineno = 200;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_20 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_20 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooNooooooooooo";
            exception_lineno = 200;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_20;
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

                    type_description_1 = "ooooooooNooooooooooo";
                    exception_lineno = 200;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[87];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooNooooooooooo";
            exception_lineno = 200;
            goto try_except_handler_7;
        }
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_6;
    // End of try:
    try_end_2:;
    goto try_end_3;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_21 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var__idx;
            var__idx = tmp_assign_source_21;
            Py_INCREF(var__idx);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_22 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_frame;
            var_frame = tmp_assign_source_22;
            Py_INCREF(var_frame);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(var_frame);
        tmp_ass_subvalue_1 = var_frame;
        if (var_frames == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 201;
            type_description_1 = "ooooooooNooooooooooo";
            goto try_except_handler_5;
        }

        tmp_ass_subscribed_1 = var_frames;
        CHECK_OBJECT(var_frame);
        tmp_expression_value_13 = var_frame;
        tmp_ass_subscript_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[89]);
        if (tmp_ass_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooooNooooooooooo";
            goto try_except_handler_5;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooooNooooooooooo";
            goto try_except_handler_5;
        }
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(var_frame);
        tmp_expression_value_14 = var_frame;
        tmp_cmp_expr_left_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[89]);
        if (tmp_cmp_expr_left_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooooooooNooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(par_end_offset);
        tmp_cmp_expr_right_10 = par_end_offset;
        tmp_condition_result_10 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        Py_DECREF(tmp_cmp_expr_left_10);
        if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooooooooNooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        nuitka_bool tmp_condition_result_11;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        int tmp_truth_name_3;
        PyObject *tmp_cmp_expr_left_11;
        nuitka_digit tmp_cmp_expr_right_11;
        bool tmp_tmp_and_right_value_2_cbool_1;
        CHECK_OBJECT(var_should_buffer);
        tmp_truth_name_3 = CHECK_IF_TRUE(var_should_buffer);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooooNooooooooooo";
            goto try_except_handler_5;
        }
        tmp_and_left_value_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooooNooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        if (var_buffer_count == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 203;
            type_description_1 = "ooooooooNooooooooooo";
            goto try_except_handler_5;
        }

        tmp_cmp_expr_left_11 = var_buffer_count;
        tmp_cmp_expr_right_11 = 5;
        tmp_tmp_and_right_value_2_cbool_1 = RICH_COMPARE_LT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        tmp_and_right_value_2 = tmp_tmp_and_right_value_2_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_11 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_11 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_iadd_expr_left_2;
        nuitka_digit tmp_iadd_expr_right_2;
        if (var_buffer_count == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 204;
            type_description_1 = "ooooooooNooooooooooo";
            goto try_except_handler_5;
        }

        tmp_iadd_expr_left_2 = var_buffer_count;
        tmp_iadd_expr_right_2 = 1;
        tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        assert(!(tmp_result == false));
        tmp_assign_source_23 = tmp_iadd_expr_left_2;
        var_buffer_count = tmp_assign_source_23;

    }
    goto loop_start_1;
    branch_no_11:;
    goto loop_end_1;
    branch_no_10:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 200;
        type_description_1 = "ooooooooNooooooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
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

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    goto try_end_5;
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

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_6 == NULL) {
        exception_keeper_tb_6 = MAKE_TRACEBACK(frame_ce1cc95610de63da8f005c4827c26a76, exception_keeper_lineno_6);
    } else if (exception_keeper_lineno_6 != 0) {
        exception_keeper_tb_6 = ADD_TRACEBACK(exception_keeper_tb_6, frame_ce1cc95610de63da8f005c4827c26a76, exception_keeper_lineno_6);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6);
    // Tried code:
    {
        bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        PyObject *tmp_expression_value_15;
        tmp_cmp_expr_left_12 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooooooNooooooooooo";
            goto try_except_handler_8;
        }
        tmp_cmp_expr_right_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[85]);
        if (tmp_cmp_expr_right_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooooooNooooooooooo";
            goto try_except_handler_8;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
        Py_DECREF(tmp_cmp_expr_right_12);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooooooNooooooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_12 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 199;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_ce1cc95610de63da8f005c4827c26a76->m_frame) frame_ce1cc95610de63da8f005c4827c26a76->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooNooooooooooo";
    goto try_except_handler_8;
    branch_no_12:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    goto try_end_5;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_5:;
    {
        PyObject *tmp_assign_source_24;
        // Tried code:
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_12;
            tmp_called_value_8 = LOOKUP_BUILTIN(mod_consts[91]);
            assert(tmp_called_value_8 != NULL);
            if (var_frames == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[88]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 211;
                type_description_1 = "ooooooooNooooooooooo";
                goto try_except_handler_9;
            }

            tmp_args_element_value_12 = var_frames;
            frame_ce1cc95610de63da8f005c4827c26a76->m_frame.f_lineno = 211;
            tmp_iter_arg_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_12);
            if (tmp_iter_arg_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_1 = "ooooooooNooooooooooo";
                goto try_except_handler_9;
            }
            tmp_assign_source_25 = MAKE_ITERATOR(tmp_iter_arg_3);
            Py_DECREF(tmp_iter_arg_3);
            if (tmp_assign_source_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_1 = "ooooooooNooooooooooo";
                goto try_except_handler_9;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_25;
        }
        {
            PyObject *tmp_assign_source_26;
            tmp_assign_source_26 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_26;
        }
        if (isFrameUnusable(cache_frame_0f5aa72a19dbfc4e44b253c49fdc12cf_2)) {
            Py_XDECREF(cache_frame_0f5aa72a19dbfc4e44b253c49fdc12cf_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_0f5aa72a19dbfc4e44b253c49fdc12cf_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_0f5aa72a19dbfc4e44b253c49fdc12cf_2 = MAKE_FUNCTION_FRAME(codeobj_0f5aa72a19dbfc4e44b253c49fdc12cf, module_torchvision$io$video, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_0f5aa72a19dbfc4e44b253c49fdc12cf_2->m_type_description == NULL);
        frame_0f5aa72a19dbfc4e44b253c49fdc12cf_2 = cache_frame_0f5aa72a19dbfc4e44b253c49fdc12cf_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_0f5aa72a19dbfc4e44b253c49fdc12cf_2);
        assert(Py_REFCNT(frame_0f5aa72a19dbfc4e44b253c49fdc12cf_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_27;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_2 = tmp_listcomp_1__$0;
            tmp_assign_source_27 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_27 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oooo";
                    exception_lineno = 211;
                    goto try_except_handler_10;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_27;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_28;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_28 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_i;
                outline_0_var_i = tmp_assign_source_28;
                Py_INCREF(outline_0_var_i);
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_outline_return_value_1;
            int tmp_truth_name_4;
            // Tried code:
            {
                PyObject *tmp_assign_source_29;
                PyObject *tmp_expression_value_16;
                PyObject *tmp_expression_value_17;
                PyObject *tmp_subscript_value_2;
                if (var_frames == NULL) {

                    FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[88]);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 211;
                    type_description_2 = "oooo";
                    goto try_except_handler_11;
                }

                tmp_expression_value_17 = var_frames;
                CHECK_OBJECT(outline_0_var_i);
                tmp_subscript_value_2 = outline_0_var_i;
                tmp_expression_value_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_2);
                if (tmp_expression_value_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 211;
                    type_description_2 = "oooo";
                    goto try_except_handler_11;
                }
                tmp_assign_source_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[89]);
                Py_DECREF(tmp_expression_value_16);
                if (tmp_assign_source_29 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 211;
                    type_description_2 = "oooo";
                    goto try_except_handler_11;
                }
                {
                    PyObject *old = tmp_listcomp$comparison_chain_1__operand_2;
                    tmp_listcomp$comparison_chain_1__operand_2 = tmp_assign_source_29;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_30;
                PyObject *tmp_cmp_expr_left_13;
                PyObject *tmp_cmp_expr_right_13;
                CHECK_OBJECT(par_start_offset);
                tmp_cmp_expr_left_13 = par_start_offset;
                CHECK_OBJECT(tmp_listcomp$comparison_chain_1__operand_2);
                tmp_cmp_expr_right_13 = tmp_listcomp$comparison_chain_1__operand_2;
                tmp_assign_source_30 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
                if (tmp_assign_source_30 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 211;
                    type_description_2 = "oooo";
                    goto try_except_handler_11;
                }
                {
                    PyObject *old = tmp_listcomp$comparison_chain_1__comparison_result;
                    tmp_listcomp$comparison_chain_1__comparison_result = tmp_assign_source_30;
                    Py_XDECREF(old);
                }

            }
            {
                bool tmp_condition_result_14;
                PyObject *tmp_operand_value_1;
                CHECK_OBJECT(tmp_listcomp$comparison_chain_1__comparison_result);
                tmp_operand_value_1 = tmp_listcomp$comparison_chain_1__comparison_result;
                tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 211;
                    type_description_2 = "oooo";
                    goto try_except_handler_11;
                }
                tmp_condition_result_14 = (tmp_res == 0) ? true : false;
                if (tmp_condition_result_14 != false) {
                    goto branch_yes_14;
                } else {
                    goto branch_no_14;
                }
            }
            branch_yes_14:;
            CHECK_OBJECT(tmp_listcomp$comparison_chain_1__comparison_result);
            tmp_outline_return_value_1 = tmp_listcomp$comparison_chain_1__comparison_result;
            Py_INCREF(tmp_outline_return_value_1);
            goto try_return_handler_11;
            branch_no_14:;
            {
                PyObject *tmp_cmp_expr_left_14;
                PyObject *tmp_cmp_expr_right_14;
                CHECK_OBJECT(tmp_listcomp$comparison_chain_1__operand_2);
                tmp_cmp_expr_left_14 = tmp_listcomp$comparison_chain_1__operand_2;
                CHECK_OBJECT(par_end_offset);
                tmp_cmp_expr_right_14 = par_end_offset;
                tmp_outline_return_value_1 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
                if (tmp_outline_return_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 211;
                    type_description_2 = "oooo";
                    goto try_except_handler_11;
                }
                goto try_return_handler_11;
            }
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_11:;
            CHECK_OBJECT(tmp_listcomp$comparison_chain_1__operand_2);
            Py_DECREF(tmp_listcomp$comparison_chain_1__operand_2);
            tmp_listcomp$comparison_chain_1__operand_2 = NULL;
            CHECK_OBJECT(tmp_listcomp$comparison_chain_1__comparison_result);
            Py_DECREF(tmp_listcomp$comparison_chain_1__comparison_result);
            tmp_listcomp$comparison_chain_1__comparison_result = NULL;
            goto outline_result_2;
            // Exception handler code:
            try_except_handler_11:;
            exception_keeper_type_8 = exception_type;
            exception_keeper_value_8 = exception_value;
            exception_keeper_tb_8 = exception_tb;
            exception_keeper_lineno_8 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF(tmp_listcomp$comparison_chain_1__operand_2);
            tmp_listcomp$comparison_chain_1__operand_2 = NULL;
            Py_XDECREF(tmp_listcomp$comparison_chain_1__comparison_result);
            tmp_listcomp$comparison_chain_1__comparison_result = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_8;
            exception_value = exception_keeper_value_8;
            exception_tb = exception_keeper_tb_8;
            exception_lineno = exception_keeper_lineno_8;

            goto try_except_handler_10;
            // End of try:
            NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
            return NULL;
            outline_result_2:;
            tmp_truth_name_4 = CHECK_IF_TRUE(tmp_outline_return_value_1);
            if (tmp_truth_name_4 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_outline_return_value_1);

                exception_lineno = 211;
                type_description_2 = "oooo";
                goto try_except_handler_10;
            }
            tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            Py_DECREF(tmp_outline_return_value_1);
            if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                goto branch_yes_13;
            } else {
                goto branch_no_13;
            }
        }
        branch_yes_13:;
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_subscript_value_3;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            if (var_frames == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[88]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 211;
                type_description_2 = "oooo";
                goto try_except_handler_10;
            }

            tmp_expression_value_18 = var_frames;
            CHECK_OBJECT(outline_0_var_i);
            tmp_subscript_value_3 = outline_0_var_i;
            tmp_append_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_3);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_2 = "oooo";
                goto try_except_handler_10;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_2 = "oooo";
                goto try_except_handler_10;
            }
        }
        branch_no_13:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_2 = "oooo";
            goto try_except_handler_10;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_24 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_24);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
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
        try_except_handler_10:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
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
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto frame_exception_exit_2;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_9;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0f5aa72a19dbfc4e44b253c49fdc12cf_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0f5aa72a19dbfc4e44b253c49fdc12cf_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0f5aa72a19dbfc4e44b253c49fdc12cf_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0f5aa72a19dbfc4e44b253c49fdc12cf_2,
            type_description_2,
            outline_0_var_i,
            var_frames,
            par_start_offset,
            par_end_offset
        );


        // Release cached frame if used for exception.
        if (frame_0f5aa72a19dbfc4e44b253c49fdc12cf_2 == cache_frame_0f5aa72a19dbfc4e44b253c49fdc12cf_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_0f5aa72a19dbfc4e44b253c49fdc12cf_2);
            cache_frame_0f5aa72a19dbfc4e44b253c49fdc12cf_2 = NULL;
        }

        assertFrameObject(frame_0f5aa72a19dbfc4e44b253c49fdc12cf_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooooNooooooooooo";
        goto try_except_handler_9;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_XDECREF(outline_0_var_i);
        outline_0_var_i = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_i);
        outline_0_var_i = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 211;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_result == NULL);
        var_result = tmp_assign_source_24;
    }
    {
        nuitka_bool tmp_condition_result_15;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_cmp_expr_left_15;
        nuitka_digit tmp_cmp_expr_right_15;
        PyObject *tmp_len_arg_1;
        bool tmp_tmp_and_left_value_3_cbool_1;
        int tmp_and_left_truth_4;
        nuitka_bool tmp_and_left_value_4;
        nuitka_bool tmp_and_right_value_4;
        PyObject *tmp_cmp_expr_left_16;
        PyObject *tmp_cmp_expr_right_16;
        PyObject *tmp_cmp_expr_left_17;
        PyObject *tmp_cmp_expr_right_17;
        if (var_frames == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 212;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_1 = var_frames;
        tmp_cmp_expr_left_15 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_15 = 0;
        tmp_tmp_and_left_value_3_cbool_1 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
        Py_DECREF(tmp_cmp_expr_left_15);
        tmp_and_left_value_3 = tmp_tmp_and_left_value_3_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        CHECK_OBJECT(par_start_offset);
        tmp_cmp_expr_left_16 = par_start_offset;
        tmp_cmp_expr_right_16 = mod_consts[31];
        tmp_and_left_value_4 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
        if (tmp_and_left_value_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_4 == 1) {
            goto and_right_4;
        } else {
            goto and_left_4;
        }
        and_right_4:;
        CHECK_OBJECT(par_start_offset);
        tmp_cmp_expr_left_17 = par_start_offset;
        if (var_frames == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 212;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_17 = var_frames;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_17, tmp_cmp_expr_left_17);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_right_value_3 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_and_right_value_3 = tmp_and_left_value_4;
        and_end_4:;
        tmp_condition_result_15 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_15 = tmp_and_left_value_3;
        and_end_3:;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_assign_source_31;
        // Tried code:
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_iter_arg_4;
            if (var_frames == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[88]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 216;
                type_description_1 = "ooooooooNooooooooooo";
                goto try_except_handler_12;
            }

            tmp_iter_arg_4 = var_frames;
            tmp_assign_source_32 = MAKE_ITERATOR(tmp_iter_arg_4);
            if (tmp_assign_source_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;
                type_description_1 = "ooooooooNooooooooooo";
                goto try_except_handler_12;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_32;
        }
        {
            PyObject *tmp_assign_source_33;
            tmp_assign_source_33 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_33;
        }
        if (isFrameUnusable(cache_frame_a479dc32942d5a5814cdb0c3fc9b24ab_3)) {
            Py_XDECREF(cache_frame_a479dc32942d5a5814cdb0c3fc9b24ab_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_a479dc32942d5a5814cdb0c3fc9b24ab_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_a479dc32942d5a5814cdb0c3fc9b24ab_3 = MAKE_FUNCTION_FRAME(codeobj_a479dc32942d5a5814cdb0c3fc9b24ab, module_torchvision$io$video, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_a479dc32942d5a5814cdb0c3fc9b24ab_3->m_type_description == NULL);
        frame_a479dc32942d5a5814cdb0c3fc9b24ab_3 = cache_frame_a479dc32942d5a5814cdb0c3fc9b24ab_3;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_a479dc32942d5a5814cdb0c3fc9b24ab_3);
        assert(Py_REFCNT(frame_a479dc32942d5a5814cdb0c3fc9b24ab_3) == 2);

        // Framed code:
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_34;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_3 = tmp_listcomp_2__$0;
            tmp_assign_source_34 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_34 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 216;
                    goto try_except_handler_13;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_34;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_35;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_assign_source_35 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_i;
                outline_1_var_i = tmp_assign_source_35;
                Py_INCREF(outline_1_var_i);
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_cmp_expr_left_18;
            PyObject *tmp_cmp_expr_right_18;
            CHECK_OBJECT(outline_1_var_i);
            tmp_cmp_expr_left_18 = outline_1_var_i;
            CHECK_OBJECT(par_start_offset);
            tmp_cmp_expr_right_18 = par_start_offset;
            tmp_condition_result_16 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
            if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;
                type_description_2 = "oo";
                goto try_except_handler_13;
            }
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto branch_yes_16;
            } else {
                goto branch_no_16;
            }
        }
        branch_yes_16:;
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            CHECK_OBJECT(outline_1_var_i);
            tmp_append_value_2 = outline_1_var_i;
            tmp_result = LIST_APPEND0(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;
                type_description_2 = "oo";
                goto try_except_handler_13;
            }
        }
        branch_no_16:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_2 = "oo";
            goto try_except_handler_13;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_assign_source_31 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_assign_source_31);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
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
        try_except_handler_13:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
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
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto frame_exception_exit_3;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_return_exit_3:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_12;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a479dc32942d5a5814cdb0c3fc9b24ab_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a479dc32942d5a5814cdb0c3fc9b24ab_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a479dc32942d5a5814cdb0c3fc9b24ab_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a479dc32942d5a5814cdb0c3fc9b24ab_3,
            type_description_2,
            outline_1_var_i,
            par_start_offset
        );


        // Release cached frame if used for exception.
        if (frame_a479dc32942d5a5814cdb0c3fc9b24ab_3 == cache_frame_a479dc32942d5a5814cdb0c3fc9b24ab_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_a479dc32942d5a5814cdb0c3fc9b24ab_3);
            cache_frame_a479dc32942d5a5814cdb0c3fc9b24ab_3 = NULL;
        }

        assertFrameObject(frame_a479dc32942d5a5814cdb0c3fc9b24ab_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "ooooooooNooooooooooo";
        goto try_except_handler_12;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_XDECREF(outline_1_var_i);
        outline_1_var_i = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_1_var_i);
        outline_1_var_i = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 216;
        goto frame_exception_exit_1;
        outline_result_3:;
        assert(var_preceding_frames == NULL);
        var_preceding_frames = tmp_assign_source_31;
    }
    {
        bool tmp_condition_result_17;
        PyObject *tmp_cmp_expr_left_19;
        nuitka_digit tmp_cmp_expr_right_19;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT(var_preceding_frames);
        tmp_len_arg_2 = var_preceding_frames;
        tmp_cmp_expr_left_19 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_cmp_expr_left_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_19 = 0;
        tmp_condition_result_17 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
        Py_DECREF(tmp_cmp_expr_left_19);
        if (tmp_condition_result_17 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_13;
        tmp_called_value_9 = LOOKUP_BUILTIN(mod_consts[81]);
        assert(tmp_called_value_9 != NULL);
        CHECK_OBJECT(var_preceding_frames);
        tmp_args_element_value_13 = var_preceding_frames;
        frame_ce1cc95610de63da8f005c4827c26a76->m_frame.f_lineno = 218;
        tmp_assign_source_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_13);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_first_frame_pts == NULL);
        var_first_frame_pts = tmp_assign_source_36;
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var_result);
        tmp_expression_value_19 = var_result;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[92]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_14 = mod_consts[31];
        if (var_frames == NULL) {
            Py_DECREF(tmp_called_value_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 219;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_20 = var_frames;
        CHECK_OBJECT(var_first_frame_pts);
        tmp_subscript_value_4 = var_first_frame_pts;
        tmp_args_element_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_4);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 219;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ce1cc95610de63da8f005c4827c26a76->m_frame.f_lineno = 219;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_10, call_args);
        }

        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooooooNooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_17:;
    branch_no_15:;
    if (var_result == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[93]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 220;
        type_description_1 = "ooooooooNooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_result;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ce1cc95610de63da8f005c4827c26a76, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ce1cc95610de63da8f005c4827c26a76->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ce1cc95610de63da8f005c4827c26a76, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ce1cc95610de63da8f005c4827c26a76,
        type_description_1,
        par_container,
        par_start_offset,
        par_end_offset,
        par_pts_unit,
        par_stream,
        par_stream_name,
        var_frames,
        var_should_buffer,
        NULL,
        var_extradata,
        var_pos,
        var_d,
        var_o,
        var_seek_offset,
        var_buffer_count,
        var__idx,
        var_frame,
        var_result,
        var_preceding_frames,
        var_first_frame_pts
    );


    // Release cached frame if used for exception.
    if (frame_ce1cc95610de63da8f005c4827c26a76 == cache_frame_ce1cc95610de63da8f005c4827c26a76) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ce1cc95610de63da8f005c4827c26a76);
        cache_frame_ce1cc95610de63da8f005c4827c26a76 = NULL;
    }

    assertFrameObject(frame_ce1cc95610de63da8f005c4827c26a76);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_3:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_start_offset);
    Py_DECREF(par_start_offset);
    par_start_offset = NULL;
    CHECK_OBJECT(par_end_offset);
    Py_DECREF(par_end_offset);
    par_end_offset = NULL;
    Py_XDECREF(var_frames);
    var_frames = NULL;
    CHECK_OBJECT(var_should_buffer);
    Py_DECREF(var_should_buffer);
    var_should_buffer = NULL;
    Py_XDECREF(var_extradata);
    var_extradata = NULL;
    Py_XDECREF(var_pos);
    var_pos = NULL;
    Py_XDECREF(var_d);
    var_d = NULL;
    Py_XDECREF(var_o);
    var_o = NULL;
    Py_XDECREF(var_seek_offset);
    var_seek_offset = NULL;
    Py_XDECREF(var_buffer_count);
    var_buffer_count = NULL;
    Py_XDECREF(var__idx);
    var__idx = NULL;
    Py_XDECREF(var_frame);
    var_frame = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_preceding_frames);
    var_preceding_frames = NULL;
    Py_XDECREF(var_first_frame_pts);
    var_first_frame_pts = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_start_offset);
    par_start_offset = NULL;
    Py_XDECREF(par_end_offset);
    par_end_offset = NULL;
    Py_XDECREF(var_frames);
    var_frames = NULL;
    Py_XDECREF(var_should_buffer);
    var_should_buffer = NULL;
    Py_XDECREF(var_extradata);
    var_extradata = NULL;
    Py_XDECREF(var_pos);
    var_pos = NULL;
    Py_XDECREF(var_d);
    var_d = NULL;
    Py_XDECREF(var_o);
    var_o = NULL;
    Py_XDECREF(var_seek_offset);
    var_seek_offset = NULL;
    Py_XDECREF(var_buffer_count);
    var_buffer_count = NULL;
    Py_XDECREF(var__idx);
    var__idx = NULL;
    Py_XDECREF(var_frame);
    var_frame = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_preceding_frames);
    var_preceding_frames = NULL;
    Py_XDECREF(var_first_frame_pts);
    var_first_frame_pts = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_container);
    Py_DECREF(par_container);
    CHECK_OBJECT(par_pts_unit);
    Py_DECREF(par_pts_unit);
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);
    CHECK_OBJECT(par_stream_name);
    Py_DECREF(par_stream_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_container);
    Py_DECREF(par_container);
    CHECK_OBJECT(par_pts_unit);
    Py_DECREF(par_pts_unit);
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);
    CHECK_OBJECT(par_stream_name);
    Py_DECREF(par_stream_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$io$video$$$function__5__align_audio_frames(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_aframes = python_pars[0];
    PyObject *par_audio_frames = python_pars[1];
    PyObject *par_ref_start = python_pars[2];
    PyObject *par_ref_end = python_pars[3];
    PyObject *var_start = NULL;
    PyObject *var_end = NULL;
    PyObject *var_total_aframes = NULL;
    PyObject *var_step_per_aframe = NULL;
    PyObject *var_s_idx = NULL;
    PyObject *var_e_idx = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_54d6148e2de9995d6ff2407749a39ac3;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_54d6148e2de9995d6ff2407749a39ac3 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_54d6148e2de9995d6ff2407749a39ac3)) {
        Py_XDECREF(cache_frame_54d6148e2de9995d6ff2407749a39ac3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_54d6148e2de9995d6ff2407749a39ac3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_54d6148e2de9995d6ff2407749a39ac3 = MAKE_FUNCTION_FRAME(codeobj_54d6148e2de9995d6ff2407749a39ac3, module_torchvision$io$video, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_54d6148e2de9995d6ff2407749a39ac3->m_type_description == NULL);
    frame_54d6148e2de9995d6ff2407749a39ac3 = cache_frame_54d6148e2de9995d6ff2407749a39ac3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_54d6148e2de9995d6ff2407749a39ac3);
    assert(Py_REFCNT(frame_54d6148e2de9995d6ff2407749a39ac3) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_audio_frames);
        tmp_expression_value_2 = par_audio_frames;
        tmp_subscript_value_1 = mod_consts[31];
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[89]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_iter_arg_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_2;
            PyTuple_SET_ITEM(tmp_iter_arg_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_audio_frames);
            tmp_expression_value_4 = par_audio_frames;
            tmp_subscript_value_2 = mod_consts[94];
            tmp_expression_value_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_2, -1);
            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[89]);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_iter_arg_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_1 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        assert(!(tmp_assign_source_1 == NULL));
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


            type_description_1 = "oooooooooo";
            exception_lineno = 226;
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


            type_description_1 = "oooooooooo";
            exception_lineno = 226;
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

                    type_description_1 = "oooooooooo";
                    exception_lineno = 226;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[87];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooo";
            exception_lineno = 226;
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
        assert(var_start == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_start = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_end == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_end = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(par_aframes);
        tmp_expression_value_6 = par_aframes;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[20]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = mod_consts[23];
        tmp_assign_source_6 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_3, 1);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_total_aframes == NULL);
        var_total_aframes = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        CHECK_OBJECT(var_end);
        tmp_sub_expr_left_1 = var_end;
        CHECK_OBJECT(var_start);
        tmp_sub_expr_right_1 = var_start;
        tmp_add_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[23];
        tmp_truediv_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_total_aframes);
        tmp_truediv_expr_right_1 = var_total_aframes;
        tmp_assign_source_7 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_step_per_aframe == NULL);
        var_step_per_aframe = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[31];
        assert(var_s_idx == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_s_idx = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(var_total_aframes);
        tmp_assign_source_9 = var_total_aframes;
        assert(var_e_idx == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_e_idx = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_start);
        tmp_cmp_expr_left_1 = var_start;
        CHECK_OBJECT(par_ref_start);
        tmp_cmp_expr_right_1 = par_ref_start;
        tmp_condition_result_1 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooooooooo";
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
        PyObject *tmp_assign_source_10;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        CHECK_OBJECT(par_ref_start);
        tmp_sub_expr_left_2 = par_ref_start;
        CHECK_OBJECT(var_start);
        tmp_sub_expr_right_2 = var_start;
        tmp_truediv_expr_left_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        if (tmp_truediv_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_step_per_aframe);
        tmp_truediv_expr_right_2 = var_step_per_aframe;
        tmp_int_arg_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        Py_DECREF(tmp_truediv_expr_left_2);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_s_idx;
            assert(old != NULL);
            var_s_idx = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_end);
        tmp_cmp_expr_left_2 = var_end;
        CHECK_OBJECT(par_ref_end);
        tmp_cmp_expr_right_2 = par_ref_end;
        tmp_condition_result_2 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooooooooo";
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
        PyObject *tmp_assign_source_11;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_truediv_expr_left_3;
        PyObject *tmp_truediv_expr_right_3;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        CHECK_OBJECT(par_ref_end);
        tmp_sub_expr_left_3 = par_ref_end;
        CHECK_OBJECT(var_end);
        tmp_sub_expr_right_3 = var_end;
        tmp_truediv_expr_left_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        if (tmp_truediv_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_step_per_aframe == NULL) {
            Py_DECREF(tmp_truediv_expr_left_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[95]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 234;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truediv_expr_right_3 = var_step_per_aframe;
        tmp_int_arg_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
        Py_DECREF(tmp_truediv_expr_left_3);
        if (tmp_int_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = PyNumber_Int(tmp_int_arg_2);
        Py_DECREF(tmp_int_arg_2);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_e_idx;
            assert(old != NULL);
            var_e_idx = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(par_aframes);
        tmp_expression_value_7 = par_aframes;
        tmp_tuple_element_2 = mod_consts[96];
        tmp_subscript_value_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_start_value_1;
            PyObject *tmp_stop_value_1;
            PyTuple_SET_ITEM0(tmp_subscript_value_4, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_s_idx);
            tmp_start_value_1 = var_s_idx;
            CHECK_OBJECT(var_e_idx);
            tmp_stop_value_1 = var_e_idx;
            tmp_tuple_element_2 = MAKE_SLICE_OBJECT2(tmp_start_value_1, tmp_stop_value_1);
            assert(!(tmp_tuple_element_2 == NULL));
            PyTuple_SET_ITEM(tmp_subscript_value_4, 1, tmp_tuple_element_2);
        }
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_4);
        Py_DECREF(tmp_subscript_value_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_54d6148e2de9995d6ff2407749a39ac3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_54d6148e2de9995d6ff2407749a39ac3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_54d6148e2de9995d6ff2407749a39ac3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_54d6148e2de9995d6ff2407749a39ac3,
        type_description_1,
        par_aframes,
        par_audio_frames,
        par_ref_start,
        par_ref_end,
        var_start,
        var_end,
        var_total_aframes,
        var_step_per_aframe,
        var_s_idx,
        var_e_idx
    );


    // Release cached frame if used for exception.
    if (frame_54d6148e2de9995d6ff2407749a39ac3 == cache_frame_54d6148e2de9995d6ff2407749a39ac3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_54d6148e2de9995d6ff2407749a39ac3);
        cache_frame_54d6148e2de9995d6ff2407749a39ac3 = NULL;
    }

    assertFrameObject(frame_54d6148e2de9995d6ff2407749a39ac3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_start);
    Py_DECREF(var_start);
    var_start = NULL;
    CHECK_OBJECT(var_end);
    Py_DECREF(var_end);
    var_end = NULL;
    CHECK_OBJECT(var_total_aframes);
    Py_DECREF(var_total_aframes);
    var_total_aframes = NULL;
    Py_XDECREF(var_step_per_aframe);
    var_step_per_aframe = NULL;
    CHECK_OBJECT(var_s_idx);
    Py_DECREF(var_s_idx);
    var_s_idx = NULL;
    CHECK_OBJECT(var_e_idx);
    Py_DECREF(var_e_idx);
    var_e_idx = NULL;
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

    Py_XDECREF(var_start);
    var_start = NULL;
    Py_XDECREF(var_end);
    var_end = NULL;
    Py_XDECREF(var_total_aframes);
    var_total_aframes = NULL;
    Py_XDECREF(var_step_per_aframe);
    var_step_per_aframe = NULL;
    Py_XDECREF(var_s_idx);
    var_s_idx = NULL;
    Py_XDECREF(var_e_idx);
    var_e_idx = NULL;
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
    CHECK_OBJECT(par_aframes);
    Py_DECREF(par_aframes);
    CHECK_OBJECT(par_audio_frames);
    Py_DECREF(par_audio_frames);
    CHECK_OBJECT(par_ref_start);
    Py_DECREF(par_ref_start);
    CHECK_OBJECT(par_ref_end);
    Py_DECREF(par_ref_end);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_aframes);
    Py_DECREF(par_aframes);
    CHECK_OBJECT(par_audio_frames);
    Py_DECREF(par_audio_frames);
    CHECK_OBJECT(par_ref_start);
    Py_DECREF(par_ref_start);
    CHECK_OBJECT(par_ref_end);
    Py_DECREF(par_ref_end);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$io$video$$$function__6_read_video(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_filename = python_pars[0];
    PyObject *par_start_pts = python_pars[1];
    PyObject *par_end_pts = python_pars[2];
    PyObject *par_pts_unit = python_pars[3];
    PyObject *var_get_video_backend = NULL;
    PyObject *var_info = NULL;
    PyObject *var_video_frames = NULL;
    PyObject *var_audio_frames = NULL;
    PyObject *var_audio_timebase = NULL;
    PyObject *var_container = NULL;
    PyObject *var_time_base = NULL;
    PyObject *var_video_fps = NULL;
    PyObject *var_vframes_list = NULL;
    PyObject *var_aframes_list = NULL;
    PyObject *var_vframes = NULL;
    PyObject *var_aframes = NULL;
    PyObject *outline_0_var_frame = NULL;
    PyObject *outline_1_var_frame = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_d9e16e97b785632f0c91cc69dd528e17;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    bool tmp_result;
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
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    struct Nuitka_FrameObject *frame_b06f105c81d86cd4b02dc29ba4fd777f_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    static struct Nuitka_FrameObject *cache_frame_b06f105c81d86cd4b02dc29ba4fd777f_2 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    struct Nuitka_FrameObject *frame_f218b25d6e97f81f0cb00f2411078ddd_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    static struct Nuitka_FrameObject *cache_frame_f218b25d6e97f81f0cb00f2411078ddd_3 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    static struct Nuitka_FrameObject *cache_frame_d9e16e97b785632f0c91cc69dd528e17 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d9e16e97b785632f0c91cc69dd528e17)) {
        Py_XDECREF(cache_frame_d9e16e97b785632f0c91cc69dd528e17);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d9e16e97b785632f0c91cc69dd528e17 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d9e16e97b785632f0c91cc69dd528e17 = MAKE_FUNCTION_FRAME(codeobj_d9e16e97b785632f0c91cc69dd528e17, module_torchvision$io$video, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d9e16e97b785632f0c91cc69dd528e17->m_type_description == NULL);
    frame_d9e16e97b785632f0c91cc69dd528e17 = cache_frame_d9e16e97b785632f0c91cc69dd528e17;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d9e16e97b785632f0c91cc69dd528e17);
    assert(Py_REFCNT(frame_d9e16e97b785632f0c91cc69dd528e17) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d9e16e97b785632f0c91cc69dd528e17->m_frame.f_lineno = 262;
        tmp_operand_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[3]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooooooooooooooo";
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
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d9e16e97b785632f0c91cc69dd528e17->m_frame.f_lineno = 262;
        tmp_operand_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[4]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? true : false;
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d9e16e97b785632f0c91cc69dd528e17->m_frame.f_lineno = 263;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[98];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torchvision$io$video;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[99];
        tmp_level_value_1 = mod_consts[31];
        frame_d9e16e97b785632f0c91cc69dd528e17->m_frame.f_lineno = 265;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torchvision$io$video,
                mod_consts[100],
                mod_consts[31]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[100]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_get_video_backend == NULL);
        var_get_video_backend = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_exists_arg_1;
        CHECK_OBJECT(par_filename);
        tmp_exists_arg_1 = par_filename;
        tmp_operand_value_3 = OS_PATH_FILE_EXISTS(tmp_exists_arg_1);
        if (tmp_operand_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oooooooooooooooo";
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
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[101];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_filename);
            tmp_format_value_1 = par_filename;
            tmp_format_spec_1 = mod_consts[102];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;
                type_description_1 = "oooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[102], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d9e16e97b785632f0c91cc69dd528e17->m_frame.f_lineno = 268;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 268;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_2;
        CHECK_OBJECT(var_get_video_backend);
        tmp_called_value_2 = var_get_video_backend;
        frame_d9e16e97b785632f0c91cc69dd528e17->m_frame.f_lineno = 270;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[103];
        tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "oooooooooooooooo";
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
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_filename);
        tmp_args_element_value_2 = par_filename;
        CHECK_OBJECT(par_start_pts);
        tmp_args_element_value_3 = par_start_pts;
        CHECK_OBJECT(par_end_pts);
        tmp_args_element_value_4 = par_end_pts;
        CHECK_OBJECT(par_pts_unit);
        tmp_args_element_value_5 = par_pts_unit;
        frame_d9e16e97b785632f0c91cc69dd528e17->m_frame.f_lineno = 271;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_return_value = CALL_METHOD_WITH_ARGS4(
                tmp_called_instance_3,
                mod_consts[105],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_2;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d9e16e97b785632f0c91cc69dd528e17->m_frame.f_lineno = 273;
        tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_end_pts);
        tmp_cmp_expr_left_2 = par_end_pts;
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
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[62];
        {
            PyObject *old = par_end_pts;
            assert(old != NULL);
            par_end_pts = tmp_assign_source_2;
            Py_INCREF(par_end_pts);
            Py_DECREF(old);
        }

    }
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_end_pts);
        tmp_cmp_expr_left_3 = par_end_pts;
        CHECK_OBJECT(par_start_pts);
        tmp_cmp_expr_right_3 = par_start_pts;
        tmp_condition_result_5 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oooooooooooooooo";
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
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[106];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_start_pts);
            tmp_format_value_2 = par_start_pts;
            tmp_format_spec_2 = mod_consts[102];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_1 = "oooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[107];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
            CHECK_OBJECT(par_end_pts);
            tmp_format_value_3 = par_end_pts;
            tmp_format_spec_3 = mod_consts[102];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_1 = "oooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 3, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_string_concat_values_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_make_exception_arg_2 = PyUnicode_Join(mod_consts[102], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d9e16e97b785632f0c91cc69dd528e17->m_frame.f_lineno = 279;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 279;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = MAKE_DICT_EMPTY();
        assert(var_info == NULL);
        var_info = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_LIST_EMPTY(0);
        assert(var_video_frames == NULL);
        var_video_frames = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_LIST_EMPTY(0);
        assert(var_audio_frames == NULL);
        var_audio_frames = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[108]);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_audio_timebase == NULL);
        var_audio_timebase = tmp_assign_source_6;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[14]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(par_filename);
        tmp_tuple_element_3 = par_filename;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_3);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[109]);
        frame_d9e16e97b785632f0c91cc69dd528e17->m_frame.f_lineno = 287;
        tmp_assign_source_7 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_3;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_5 = tmp_with_1__source;
        tmp_called_value_5 = LOOKUP_SPECIAL(tmp_expression_value_5, mod_consts[16]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_d9e16e97b785632f0c91cc69dd528e17->m_frame.f_lineno = 287;
        tmp_assign_source_8 = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
        Py_DECREF(tmp_called_value_5);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_3;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_6 = tmp_with_1__source;
        tmp_assign_source_9 = LOOKUP_SPECIAL(tmp_expression_value_6, mod_consts[17]);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_3;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_assign_source_10;
        tmp_assign_source_10 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_with_1__enter);
        tmp_assign_source_11 = tmp_with_1__enter;
        assert(var_container == NULL);
        Py_INCREF(tmp_assign_source_11);
        var_container = tmp_assign_source_11;
    }
    // Tried code:
    // Tried code:
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_container);
        tmp_expression_value_8 = var_container;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[34]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[35]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 288;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_6 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_container);
        tmp_expression_value_12 = var_container;
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[34]);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[35]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_subscript_value_1 = mod_consts[31];
        tmp_expression_value_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_10, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[61]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_audio_timebase;
            assert(old != NULL);
            var_audio_timebase = tmp_assign_source_12;
            Py_DECREF(old);
        }

    }
    branch_no_6:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_expression_value_13;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[108]);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        assert(var_time_base == NULL);
        var_time_base = tmp_assign_source_13;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_container);
        tmp_expression_value_15 = var_container;
        tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[34]);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[68]);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 291;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_7 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_container);
        tmp_expression_value_19 = var_container;
        tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[34]);
        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[68]);
        Py_DECREF(tmp_expression_value_18);
        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_subscript_value_2 = mod_consts[31];
        tmp_expression_value_16 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_17, tmp_subscript_value_2, 0);
        Py_DECREF(tmp_expression_value_17);
        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[61]);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_time_base;
            assert(old != NULL);
            var_time_base = tmp_assign_source_14;
            Py_DECREF(old);
        }

    }
    goto branch_end_7;
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_attribute_value_3;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_container);
        tmp_expression_value_21 = var_container;
        tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[34]);
        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[35]);
        Py_DECREF(tmp_expression_value_20);
        if (tmp_attribute_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_3);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_3);

            exception_lineno = 293;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_8 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_3);
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_container);
        tmp_expression_value_25 = var_container;
        tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[34]);
        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[35]);
        Py_DECREF(tmp_expression_value_24);
        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_subscript_value_3 = mod_consts[31];
        tmp_expression_value_22 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_23, tmp_subscript_value_3, 0);
        Py_DECREF(tmp_expression_value_23);
        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[61]);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_time_base;
            assert(old != NULL);
            var_time_base = tmp_assign_source_15;
            Py_DECREF(old);
        }

    }
    branch_no_8:;
    branch_end_7:;
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(par_start_pts);
        tmp_args_element_value_6 = par_start_pts;
        CHECK_OBJECT(par_end_pts);
        tmp_args_element_value_7 = par_end_pts;
        CHECK_OBJECT(par_pts_unit);
        tmp_args_element_value_8 = par_pts_unit;
        CHECK_OBJECT(var_time_base);
        tmp_args_element_value_9 = var_time_base;
        frame_d9e16e97b785632f0c91cc69dd528e17->m_frame.f_lineno = 296;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS4(
                tmp_called_instance_4,
                mod_consts[110],
                call_args
            );
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_16 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_17 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
        if (tmp_assign_source_17 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooo";
            exception_lineno = 296;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_18 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
        if (tmp_assign_source_18 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooo";
            exception_lineno = 296;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_19 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_19 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooo";
            exception_lineno = 296;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_19;
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

                    type_description_1 = "oooooooooooooooo";
                    exception_lineno = 296;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[111];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooo";
            exception_lineno = 296;
            goto try_except_handler_7;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_7:;
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

    goto try_except_handler_6;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_6:;
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

    goto try_except_handler_5;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_20 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_start_pts;
            assert(old != NULL);
            par_start_pts = tmp_assign_source_20;
            Py_INCREF(par_start_pts);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_21 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_end_pts;
            assert(old != NULL);
            par_end_pts = tmp_assign_source_21;
            Py_INCREF(par_end_pts);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_22 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = par_pts_unit;
            assert(old != NULL);
            par_pts_unit = tmp_assign_source_22;
            Py_INCREF(par_pts_unit);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_attribute_value_4;
        int tmp_truth_name_4;
        CHECK_OBJECT(var_container);
        tmp_expression_value_27 = var_container;
        tmp_expression_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[34]);
        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_attribute_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[68]);
        Py_DECREF(tmp_expression_value_26);
        if (tmp_attribute_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_attribute_value_4);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_4);

            exception_lineno = 297;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_9 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_4);
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_args_element_value_15;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_container);
        tmp_args_element_value_10 = var_container;
        CHECK_OBJECT(par_start_pts);
        tmp_args_element_value_11 = par_start_pts;
        CHECK_OBJECT(par_end_pts);
        tmp_args_element_value_12 = par_end_pts;
        CHECK_OBJECT(par_pts_unit);
        tmp_args_element_value_13 = par_pts_unit;
        CHECK_OBJECT(var_container);
        tmp_expression_value_30 = var_container;
        tmp_expression_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[34]);
        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_expression_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[68]);
        Py_DECREF(tmp_expression_value_29);
        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_subscript_value_4 = mod_consts[31];
        tmp_args_element_value_14 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_28, tmp_subscript_value_4, 0);
        Py_DECREF(tmp_expression_value_28);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_15 = DICT_COPY(mod_consts[113]);
        frame_d9e16e97b785632f0c91cc69dd528e17->m_frame.f_lineno = 298;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_args_element_value_14);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_video_frames;
            assert(old != NULL);
            var_video_frames = tmp_assign_source_23;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(var_container);
        tmp_expression_value_34 = var_container;
        tmp_expression_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[34]);
        if (tmp_expression_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_expression_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[68]);
        Py_DECREF(tmp_expression_value_33);
        if (tmp_expression_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_subscript_value_5 = mod_consts[31];
        tmp_expression_value_31 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_32, tmp_subscript_value_5, 0);
        Py_DECREF(tmp_expression_value_32);
        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[114]);
        Py_DECREF(tmp_expression_value_31);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        assert(var_video_fps == NULL);
        var_video_fps = tmp_assign_source_24;
    }
    {
        bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_video_fps);
        tmp_cmp_expr_left_4 = var_video_fps;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_10 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_float_arg_1;
        CHECK_OBJECT(var_video_fps);
        tmp_float_arg_1 = var_video_fps;
        tmp_dictset_value = TO_FLOAT(tmp_float_arg_1);
        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_info);
        tmp_dictset_dict = var_info;
        tmp_dictset_key = mod_consts[115];
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
    }
    branch_no_10:;
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_attribute_value_5;
        int tmp_truth_name_5;
        CHECK_OBJECT(var_container);
        tmp_expression_value_36 = var_container;
        tmp_expression_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[34]);
        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_attribute_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[35]);
        Py_DECREF(tmp_expression_value_35);
        if (tmp_attribute_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_attribute_value_5);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_5);

            exception_lineno = 311;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_11 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_5);
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_args_element_value_21;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_container);
        tmp_args_element_value_16 = var_container;
        if (par_start_pts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[116]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 314;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_args_element_value_17 = par_start_pts;
        if (par_end_pts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[117]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 315;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_args_element_value_18 = par_end_pts;
        if (par_pts_unit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 316;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_args_element_value_19 = par_pts_unit;
        CHECK_OBJECT(var_container);
        tmp_expression_value_39 = var_container;
        tmp_expression_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[34]);
        if (tmp_expression_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_expression_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[35]);
        Py_DECREF(tmp_expression_value_38);
        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_subscript_value_6 = mod_consts[31];
        tmp_args_element_value_20 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_37, tmp_subscript_value_6, 0);
        Py_DECREF(tmp_expression_value_37);
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_21 = DICT_COPY(mod_consts[119]);
        frame_d9e16e97b785632f0c91cc69dd528e17->m_frame.f_lineno = 312;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21};
            tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_args_element_value_20);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_audio_frames;
            assert(old != NULL);
            var_audio_frames = tmp_assign_source_25;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_40;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_subscript_value_7;
        CHECK_OBJECT(var_container);
        tmp_expression_value_43 = var_container;
        tmp_expression_value_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[34]);
        if (tmp_expression_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_expression_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[35]);
        Py_DECREF(tmp_expression_value_42);
        if (tmp_expression_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_subscript_value_7 = mod_consts[31];
        tmp_expression_value_40 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_41, tmp_subscript_value_7, 0);
        Py_DECREF(tmp_expression_value_41);
        if (tmp_expression_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[120]);
        Py_DECREF(tmp_expression_value_40);
        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        if (var_info == NULL) {
            Py_DECREF(tmp_dictset_value);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[121]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 320;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_dictset_dict = var_info;
        tmp_dictset_key = mod_consts[122];
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
    }
    branch_no_11:;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_d9e16e97b785632f0c91cc69dd528e17, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_d9e16e97b785632f0c91cc69dd528e17, exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        tmp_cmp_expr_left_5 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_5 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_12 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        nuitka_bool tmp_assign_source_26;
        tmp_assign_source_26 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_26;
    }
    {
        bool tmp_condition_result_13;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_8 = tmp_with_1__exit;
        tmp_args_element_value_22 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_23 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_24 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_d9e16e97b785632f0c91cc69dd528e17->m_frame.f_lineno = 320;
        {
            PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24};
            tmp_operand_value_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_8, call_args);
        }

        if (tmp_operand_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        Py_DECREF(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_13 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 320;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_d9e16e97b785632f0c91cc69dd528e17->m_frame) frame_d9e16e97b785632f0c91cc69dd528e17->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
    branch_no_13:;
    goto branch_end_12;
    branch_no_12:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 287;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_d9e16e97b785632f0c91cc69dd528e17->m_frame) frame_d9e16e97b785632f0c91cc69dd528e17->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
    branch_end_12:;
    goto try_end_4;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_14;
        nuitka_bool tmp_cmp_expr_left_6;
        nuitka_bool tmp_cmp_expr_right_6;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_6 = tmp_with_1__indicator;
        tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
        tmp_condition_result_14 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_9 = tmp_with_1__exit;
        frame_d9e16e97b785632f0c91cc69dd528e17->m_frame.f_lineno = 320;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_9, mod_consts[52]);

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_5);
            Py_XDECREF(exception_keeper_value_5);
            Py_XDECREF(exception_keeper_tb_5);

            exception_lineno = 320;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_14:;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_3;
    // End of try:
    try_end_5:;
    {
        bool tmp_condition_result_15;
        nuitka_bool tmp_cmp_expr_left_7;
        nuitka_bool tmp_cmp_expr_right_7;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_7 = tmp_with_1__indicator;
        tmp_cmp_expr_right_7 = NUITKA_BOOL_TRUE;
        tmp_condition_result_15 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_10 = tmp_with_1__exit;
        frame_d9e16e97b785632f0c91cc69dd528e17->m_frame.f_lineno = 320;
        tmp_call_result_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_10, mod_consts[52]);

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_15:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_3:;
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

    goto try_except_handler_2;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_7 == NULL) {
        exception_keeper_tb_7 = MAKE_TRACEBACK(frame_d9e16e97b785632f0c91cc69dd528e17, exception_keeper_lineno_7);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_keeper_tb_7 = ADD_TRACEBACK(exception_keeper_tb_7, frame_d9e16e97b785632f0c91cc69dd528e17, exception_keeper_lineno_7);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
    // Tried code:
    {
        bool tmp_condition_result_16;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_expression_value_44;
        tmp_cmp_expr_left_8 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_cmp_expr_right_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[85]);
        if (tmp_cmp_expr_right_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        Py_DECREF(tmp_cmp_expr_right_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_condition_result_16 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 286;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_d9e16e97b785632f0c91cc69dd528e17->m_frame) frame_d9e16e97b785632f0c91cc69dd528e17->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooo";
    goto try_except_handler_9;
    branch_no_16:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    goto try_end_7;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_7:;
    {
        PyObject *tmp_assign_source_27;
        // Tried code:
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(var_video_frames);
            tmp_iter_arg_2 = var_video_frames;
            tmp_assign_source_28 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;
                type_description_1 = "oooooooooooooooo";
                goto try_except_handler_10;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_28;
        }
        {
            PyObject *tmp_assign_source_29;
            tmp_assign_source_29 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_29;
        }
        if (isFrameUnusable(cache_frame_b06f105c81d86cd4b02dc29ba4fd777f_2)) {
            Py_XDECREF(cache_frame_b06f105c81d86cd4b02dc29ba4fd777f_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_b06f105c81d86cd4b02dc29ba4fd777f_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_b06f105c81d86cd4b02dc29ba4fd777f_2 = MAKE_FUNCTION_FRAME(codeobj_b06f105c81d86cd4b02dc29ba4fd777f, module_torchvision$io$video, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_b06f105c81d86cd4b02dc29ba4fd777f_2->m_type_description == NULL);
        frame_b06f105c81d86cd4b02dc29ba4fd777f_2 = cache_frame_b06f105c81d86cd4b02dc29ba4fd777f_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_b06f105c81d86cd4b02dc29ba4fd777f_2);
        assert(Py_REFCNT(frame_b06f105c81d86cd4b02dc29ba4fd777f_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_30;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_30 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_30 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 326;
                    goto try_except_handler_11;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_30;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_31;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_31 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_frame;
                outline_0_var_frame = tmp_assign_source_31;
                Py_INCREF(outline_0_var_frame);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_called_instance_6;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_frame);
            tmp_called_instance_6 = outline_0_var_frame;
            frame_b06f105c81d86cd4b02dc29ba4fd777f_2->m_frame.f_lineno = 326;
            tmp_called_instance_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[123]);
            if (tmp_called_instance_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
            frame_b06f105c81d86cd4b02dc29ba4fd777f_2->m_frame.f_lineno = 326;
            tmp_append_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[124]);
            Py_DECREF(tmp_called_instance_5);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_2 = "o";
            goto try_except_handler_11;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_27 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_27);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
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
        try_except_handler_11:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
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
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto frame_exception_exit_2;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_10;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b06f105c81d86cd4b02dc29ba4fd777f_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b06f105c81d86cd4b02dc29ba4fd777f_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b06f105c81d86cd4b02dc29ba4fd777f_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b06f105c81d86cd4b02dc29ba4fd777f_2,
            type_description_2,
            outline_0_var_frame
        );


        // Release cached frame if used for exception.
        if (frame_b06f105c81d86cd4b02dc29ba4fd777f_2 == cache_frame_b06f105c81d86cd4b02dc29ba4fd777f_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_b06f105c81d86cd4b02dc29ba4fd777f_2);
            cache_frame_b06f105c81d86cd4b02dc29ba4fd777f_2 = NULL;
        }

        assertFrameObject(frame_b06f105c81d86cd4b02dc29ba4fd777f_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_10;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_XDECREF(outline_0_var_frame);
        outline_0_var_frame = NULL;
        goto outline_result_1;
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

        Py_XDECREF(outline_0_var_frame);
        outline_0_var_frame = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 326;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_vframes_list == NULL);
        var_vframes_list = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_32;
        // Tried code:
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT(var_audio_frames);
            tmp_iter_arg_3 = var_audio_frames;
            tmp_assign_source_33 = MAKE_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_1 = "oooooooooooooooo";
                goto try_except_handler_12;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_33;
        }
        {
            PyObject *tmp_assign_source_34;
            tmp_assign_source_34 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_34;
        }
        if (isFrameUnusable(cache_frame_f218b25d6e97f81f0cb00f2411078ddd_3)) {
            Py_XDECREF(cache_frame_f218b25d6e97f81f0cb00f2411078ddd_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_f218b25d6e97f81f0cb00f2411078ddd_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_f218b25d6e97f81f0cb00f2411078ddd_3 = MAKE_FUNCTION_FRAME(codeobj_f218b25d6e97f81f0cb00f2411078ddd, module_torchvision$io$video, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_f218b25d6e97f81f0cb00f2411078ddd_3->m_type_description == NULL);
        frame_f218b25d6e97f81f0cb00f2411078ddd_3 = cache_frame_f218b25d6e97f81f0cb00f2411078ddd_3;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_f218b25d6e97f81f0cb00f2411078ddd_3);
        assert(Py_REFCNT(frame_f218b25d6e97f81f0cb00f2411078ddd_3) == 2);

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_35;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_2 = tmp_listcomp_2__$0;
            tmp_assign_source_35 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_35 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 327;
                    goto try_except_handler_13;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_35;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_36;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_assign_source_36 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_frame;
                outline_1_var_frame = tmp_assign_source_36;
                Py_INCREF(outline_1_var_frame);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_called_instance_7;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            CHECK_OBJECT(outline_1_var_frame);
            tmp_called_instance_7 = outline_1_var_frame;
            frame_f218b25d6e97f81f0cb00f2411078ddd_3->m_frame.f_lineno = 327;
            tmp_append_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[124]);
            if (tmp_append_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_2 = "o";
            goto try_except_handler_13;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_assign_source_32 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_assign_source_32);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
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
        try_except_handler_13:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
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
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto frame_exception_exit_3;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_return_exit_3:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_12;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f218b25d6e97f81f0cb00f2411078ddd_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f218b25d6e97f81f0cb00f2411078ddd_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f218b25d6e97f81f0cb00f2411078ddd_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f218b25d6e97f81f0cb00f2411078ddd_3,
            type_description_2,
            outline_1_var_frame
        );


        // Release cached frame if used for exception.
        if (frame_f218b25d6e97f81f0cb00f2411078ddd_3 == cache_frame_f218b25d6e97f81f0cb00f2411078ddd_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_f218b25d6e97f81f0cb00f2411078ddd_3);
            cache_frame_f218b25d6e97f81f0cb00f2411078ddd_3 = NULL;
        }

        assertFrameObject(frame_f218b25d6e97f81f0cb00f2411078ddd_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_12;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_XDECREF(outline_1_var_frame);
        outline_1_var_frame = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_1_var_frame);
        outline_1_var_frame = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 327;
        goto frame_exception_exit_1;
        outline_result_2:;
        assert(var_aframes_list == NULL);
        var_aframes_list = tmp_assign_source_32;
    }
    {
        nuitka_bool tmp_condition_result_17;
        int tmp_truth_name_6;
        CHECK_OBJECT(var_vframes_list);
        tmp_truth_name_6 = CHECK_IF_TRUE(var_vframes_list);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_17 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_value_26;
        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_45 == NULL)) {
            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[8]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 330;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_vframes_list);
        tmp_args_element_value_26 = var_vframes_list;
        frame_d9e16e97b785632f0c91cc69dd528e17->m_frame.f_lineno = 330;
        tmp_args_element_value_25 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_8, mod_consts[125], tmp_args_element_value_26);
        if (tmp_args_element_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 330;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d9e16e97b785632f0c91cc69dd528e17->m_frame.f_lineno = 330;
        tmp_assign_source_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_25);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_25);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_vframes == NULL);
        var_vframes = tmp_assign_source_37;
    }
    goto branch_end_17;
    branch_no_17:;
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_47;
        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_46 == NULL)) {
            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[126]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_47 == NULL)) {
            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 332;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[9]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 332;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d9e16e97b785632f0c91cc69dd528e17->m_frame.f_lineno = 332;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_assign_source_38 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_12, mod_consts[127], kw_values, mod_consts[10]);
        }

        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_vframes == NULL);
        var_vframes = tmp_assign_source_38;
    }
    branch_end_17:;
    {
        nuitka_bool tmp_condition_result_18;
        int tmp_truth_name_7;
        CHECK_OBJECT(var_aframes_list);
        tmp_truth_name_7 = CHECK_IF_TRUE(var_aframes_list);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_18 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_instance_9 == NULL)) {
            tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_aframes_list);
        tmp_args_element_value_27 = var_aframes_list;
        tmp_args_element_value_28 = mod_consts[23];
        frame_d9e16e97b785632f0c91cc69dd528e17->m_frame.f_lineno = 335;
        {
            PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28};
            tmp_assign_source_39 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_9,
                mod_consts[128],
                call_args
            );
        }

        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_aframes == NULL);
        var_aframes = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_args_element_value_29;
        tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_10 == NULL)) {
            tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_aframes);
        tmp_args_element_value_29 = var_aframes;
        frame_d9e16e97b785632f0c91cc69dd528e17->m_frame.f_lineno = 336;
        tmp_assign_source_40 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_10, mod_consts[8], tmp_args_element_value_29);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_aframes;
            assert(old != NULL);
            var_aframes = tmp_assign_source_40;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        if (par_pts_unit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 337;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_9 = par_pts_unit;
        tmp_cmp_expr_right_9 = mod_consts[58];
        tmp_condition_result_19 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        if (tmp_condition_result_19 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_expression_value_48 == NULL)) {
            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_expression_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[60]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_start_pts == NULL) {
            Py_DECREF(tmp_called_value_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[116]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 338;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_left_1 = par_start_pts;
        tmp_truediv_expr_left_1 = mod_consts[23];
        CHECK_OBJECT(var_audio_timebase);
        tmp_truediv_expr_right_1 = var_audio_timebase;
        tmp_mult_expr_right_1 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 338;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_30 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_args_element_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 338;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d9e16e97b785632f0c91cc69dd528e17->m_frame.f_lineno = 338;
        tmp_int_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_30);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_30);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_41 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_start_pts;
            par_start_pts = tmp_assign_source_41;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_20;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        if (par_end_pts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[117]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 339;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_10 = par_end_pts;
        tmp_cmp_expr_right_10 = mod_consts[62];
        tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_FLOAT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_expression_value_49 == NULL)) {
            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_expression_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[63]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_end_pts == NULL) {
            Py_DECREF(tmp_called_value_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[117]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 340;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_left_2 = par_end_pts;
        tmp_truediv_expr_left_2 = mod_consts[23];
        CHECK_OBJECT(var_audio_timebase);
        tmp_truediv_expr_right_2 = var_audio_timebase;
        tmp_mult_expr_right_2 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        if (tmp_mult_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 340;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_31 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_right_2);
        if (tmp_args_element_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 340;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d9e16e97b785632f0c91cc69dd528e17->m_frame.f_lineno = 340;
        tmp_int_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_31);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_31);
        if (tmp_int_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_42 = PyNumber_Int(tmp_int_arg_2);
        Py_DECREF(tmp_int_arg_2);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_end_pts;
            par_end_pts = tmp_assign_source_42;
            Py_XDECREF(old);
        }

    }
    branch_no_20:;
    branch_no_19:;
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_args_element_value_35;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_aframes);
        tmp_args_element_value_32 = var_aframes;
        CHECK_OBJECT(var_audio_frames);
        tmp_args_element_value_33 = var_audio_frames;
        if (par_start_pts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[116]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 341;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_34 = par_start_pts;
        if (par_end_pts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[117]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 341;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_35 = par_end_pts;
        frame_d9e16e97b785632f0c91cc69dd528e17->m_frame.f_lineno = 341;
        {
            PyObject *call_args[] = {tmp_args_element_value_32, tmp_args_element_value_33, tmp_args_element_value_34, tmp_args_element_value_35};
            tmp_assign_source_43 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_15, call_args);
        }

        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_aframes;
            assert(old != NULL);
            var_aframes = tmp_assign_source_43;
            Py_DECREF(old);
        }

    }
    goto branch_end_18;
    branch_no_18:;
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_expression_value_51;
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[126]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_51 == NULL)) {
            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 343;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[130]);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 343;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d9e16e97b785632f0c91cc69dd528e17->m_frame.f_lineno = 343;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};
            tmp_assign_source_44 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_16, mod_consts[131], kw_values, mod_consts[10]);
        }

        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_kw_call_value_0_2);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_aframes == NULL);
        var_aframes = tmp_assign_source_44;
    }
    branch_end_18:;
    {
        PyObject *tmp_tuple_element_4;
        CHECK_OBJECT(var_vframes);
        tmp_tuple_element_4 = var_vframes;
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_4);
        CHECK_OBJECT(var_aframes);
        tmp_tuple_element_4 = var_aframes;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_4);
        if (var_info == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[121]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 345;
            type_description_1 = "oooooooooooooooo";
            goto tuple_build_exception_3;
        }

        tmp_tuple_element_4 = var_info;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_4);
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d9e16e97b785632f0c91cc69dd528e17, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d9e16e97b785632f0c91cc69dd528e17->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d9e16e97b785632f0c91cc69dd528e17, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d9e16e97b785632f0c91cc69dd528e17,
        type_description_1,
        par_filename,
        par_start_pts,
        par_end_pts,
        par_pts_unit,
        var_get_video_backend,
        var_info,
        var_video_frames,
        var_audio_frames,
        var_audio_timebase,
        var_container,
        var_time_base,
        var_video_fps,
        var_vframes_list,
        var_aframes_list,
        var_vframes,
        var_aframes
    );


    // Release cached frame if used for exception.
    if (frame_d9e16e97b785632f0c91cc69dd528e17 == cache_frame_d9e16e97b785632f0c91cc69dd528e17) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d9e16e97b785632f0c91cc69dd528e17);
        cache_frame_d9e16e97b785632f0c91cc69dd528e17 = NULL;
    }

    assertFrameObject(frame_d9e16e97b785632f0c91cc69dd528e17);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_3:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_start_pts);
    par_start_pts = NULL;
    Py_XDECREF(par_end_pts);
    par_end_pts = NULL;
    Py_XDECREF(par_pts_unit);
    par_pts_unit = NULL;
    CHECK_OBJECT(var_get_video_backend);
    Py_DECREF(var_get_video_backend);
    var_get_video_backend = NULL;
    Py_XDECREF(var_info);
    var_info = NULL;
    Py_XDECREF(var_video_frames);
    var_video_frames = NULL;
    Py_XDECREF(var_audio_frames);
    var_audio_frames = NULL;
    Py_XDECREF(var_audio_timebase);
    var_audio_timebase = NULL;
    Py_XDECREF(var_container);
    var_container = NULL;
    Py_XDECREF(var_time_base);
    var_time_base = NULL;
    Py_XDECREF(var_video_fps);
    var_video_fps = NULL;
    Py_XDECREF(var_vframes_list);
    var_vframes_list = NULL;
    Py_XDECREF(var_aframes_list);
    var_aframes_list = NULL;
    Py_XDECREF(var_vframes);
    var_vframes = NULL;
    Py_XDECREF(var_aframes);
    var_aframes = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_start_pts);
    par_start_pts = NULL;
    Py_XDECREF(par_end_pts);
    par_end_pts = NULL;
    Py_XDECREF(par_pts_unit);
    par_pts_unit = NULL;
    Py_XDECREF(var_get_video_backend);
    var_get_video_backend = NULL;
    Py_XDECREF(var_info);
    var_info = NULL;
    Py_XDECREF(var_video_frames);
    var_video_frames = NULL;
    Py_XDECREF(var_audio_frames);
    var_audio_frames = NULL;
    Py_XDECREF(var_audio_timebase);
    var_audio_timebase = NULL;
    Py_XDECREF(var_container);
    var_container = NULL;
    Py_XDECREF(var_time_base);
    var_time_base = NULL;
    Py_XDECREF(var_video_fps);
    var_video_fps = NULL;
    Py_XDECREF(var_vframes_list);
    var_vframes_list = NULL;
    Py_XDECREF(var_aframes_list);
    var_aframes_list = NULL;
    Py_XDECREF(var_vframes);
    var_vframes = NULL;
    Py_XDECREF(var_aframes);
    var_aframes = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$io$video$$$function__7__can_read_timestamps_from_packets(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_container = python_pars[0];
    PyObject *var_extradata = NULL;
    struct Nuitka_FrameObject *frame_1d3b0f036dd07d541b91ed71269bd9b1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_1d3b0f036dd07d541b91ed71269bd9b1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1d3b0f036dd07d541b91ed71269bd9b1)) {
        Py_XDECREF(cache_frame_1d3b0f036dd07d541b91ed71269bd9b1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1d3b0f036dd07d541b91ed71269bd9b1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1d3b0f036dd07d541b91ed71269bd9b1 = MAKE_FUNCTION_FRAME(codeobj_1d3b0f036dd07d541b91ed71269bd9b1, module_torchvision$io$video, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1d3b0f036dd07d541b91ed71269bd9b1->m_type_description == NULL);
    frame_1d3b0f036dd07d541b91ed71269bd9b1 = cache_frame_1d3b0f036dd07d541b91ed71269bd9b1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1d3b0f036dd07d541b91ed71269bd9b1);
    assert(Py_REFCNT(frame_1d3b0f036dd07d541b91ed71269bd9b1) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_container);
        tmp_expression_value_4 = par_container;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[34]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[31];
        tmp_expression_value_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[69]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[70]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_extradata == NULL);
        var_extradata = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_extradata);
        tmp_cmp_expr_left_1 = var_extradata;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = mod_consts[133];
        CHECK_OBJECT(var_extradata);
        tmp_cmp_expr_right_2 = var_extradata;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "oo";
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
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_1d3b0f036dd07d541b91ed71269bd9b1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1d3b0f036dd07d541b91ed71269bd9b1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1d3b0f036dd07d541b91ed71269bd9b1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1d3b0f036dd07d541b91ed71269bd9b1,
        type_description_1,
        par_container,
        var_extradata
    );


    // Release cached frame if used for exception.
    if (frame_1d3b0f036dd07d541b91ed71269bd9b1 == cache_frame_1d3b0f036dd07d541b91ed71269bd9b1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1d3b0f036dd07d541b91ed71269bd9b1);
        cache_frame_1d3b0f036dd07d541b91ed71269bd9b1 = NULL;
    }

    assertFrameObject(frame_1d3b0f036dd07d541b91ed71269bd9b1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_extradata);
    Py_DECREF(var_extradata);
    var_extradata = NULL;
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

    Py_XDECREF(var_extradata);
    var_extradata = NULL;
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
    CHECK_OBJECT(par_container);
    Py_DECREF(par_container);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_container);
    Py_DECREF(par_container);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$io$video$$$function__8__decode_video_timestamps(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_container = python_pars[0];
    PyObject *outline_0_var_x = NULL;
    PyObject *outline_1_var_x = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_1d92cade93d44fa308560eee05747da7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_012637fd97447ef4302b59dd1c8152a8_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_012637fd97447ef4302b59dd1c8152a8_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_FrameObject *frame_3a17fdfb85bb57eef47b9c6155abfe30_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_3a17fdfb85bb57eef47b9c6155abfe30_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_1d92cade93d44fa308560eee05747da7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1d92cade93d44fa308560eee05747da7)) {
        Py_XDECREF(cache_frame_1d92cade93d44fa308560eee05747da7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1d92cade93d44fa308560eee05747da7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1d92cade93d44fa308560eee05747da7 = MAKE_FUNCTION_FRAME(codeobj_1d92cade93d44fa308560eee05747da7, module_torchvision$io$video, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1d92cade93d44fa308560eee05747da7->m_type_description == NULL);
    frame_1d92cade93d44fa308560eee05747da7 = cache_frame_1d92cade93d44fa308560eee05747da7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1d92cade93d44fa308560eee05747da7);
    assert(Py_REFCNT(frame_1d92cade93d44fa308560eee05747da7) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_container);
        tmp_args_element_value_1 = par_container;
        frame_1d92cade93d44fa308560eee05747da7->m_frame.f_lineno = 358;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 358;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_container);
        tmp_expression_value_1 = par_container;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[135]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        frame_1d92cade93d44fa308560eee05747da7->m_frame.f_lineno = 360;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts[136], 0), mod_consts[137]);
        Py_DECREF(tmp_called_value_2);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
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
    if (isFrameUnusable(cache_frame_012637fd97447ef4302b59dd1c8152a8_2)) {
        Py_XDECREF(cache_frame_012637fd97447ef4302b59dd1c8152a8_2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_012637fd97447ef4302b59dd1c8152a8_2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_012637fd97447ef4302b59dd1c8152a8_2 = MAKE_FUNCTION_FRAME(codeobj_012637fd97447ef4302b59dd1c8152a8, module_torchvision$io$video, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_012637fd97447ef4302b59dd1c8152a8_2->m_type_description == NULL);
    frame_012637fd97447ef4302b59dd1c8152a8_2 = cache_frame_012637fd97447ef4302b59dd1c8152a8_2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_012637fd97447ef4302b59dd1c8152a8_2);
    assert(Py_REFCNT(frame_012637fd97447ef4302b59dd1c8152a8_2) == 2);

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
                exception_lineno = 360;
                goto try_except_handler_2;
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
            PyObject *old = outline_0_var_x;
            outline_0_var_x = tmp_assign_source_4;
            Py_INCREF(outline_0_var_x);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(outline_0_var_x);
        tmp_expression_value_2 = outline_0_var_x;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[89]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        CHECK_OBJECT(outline_0_var_x);
        tmp_expression_value_3 = outline_0_var_x;
        tmp_append_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[89]);
        if (tmp_append_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
        tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
    }
    branch_no_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 360;
        type_description_2 = "o";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    tmp_return_value = tmp_listcomp_1__contraction;
    Py_INCREF(tmp_return_value);
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

    goto try_return_handler_1;
    frame_exception_exit_2:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_012637fd97447ef4302b59dd1c8152a8_2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_012637fd97447ef4302b59dd1c8152a8_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_012637fd97447ef4302b59dd1c8152a8_2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_012637fd97447ef4302b59dd1c8152a8_2,
        type_description_2,
        outline_0_var_x
    );


    // Release cached frame if used for exception.
    if (frame_012637fd97447ef4302b59dd1c8152a8_2 == cache_frame_012637fd97447ef4302b59dd1c8152a8_2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_012637fd97447ef4302b59dd1c8152a8_2);
        cache_frame_012637fd97447ef4302b59dd1c8152a8_2 = NULL;
    }

    assertFrameObject(frame_012637fd97447ef4302b59dd1c8152a8_2);

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
    Py_XDECREF(outline_0_var_x);
    outline_0_var_x = NULL;
    goto outline_result_1;
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
    exception_lineno = 360;
    goto frame_exception_exit_1;
    outline_result_1:;
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_container);
        tmp_expression_value_4 = par_container;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[86]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        frame_1d92cade93d44fa308560eee05747da7->m_frame.f_lineno = 362;
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_3, &PyTuple_GET_ITEM(mod_consts[136], 0), mod_consts[137]);
        Py_DECREF(tmp_called_value_3);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        assert(tmp_listcomp_2__$0 == NULL);
        tmp_listcomp_2__$0 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_LIST_EMPTY(0);
        assert(tmp_listcomp_2__contraction == NULL);
        tmp_listcomp_2__contraction = tmp_assign_source_6;
    }
    if (isFrameUnusable(cache_frame_3a17fdfb85bb57eef47b9c6155abfe30_3)) {
        Py_XDECREF(cache_frame_3a17fdfb85bb57eef47b9c6155abfe30_3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3a17fdfb85bb57eef47b9c6155abfe30_3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3a17fdfb85bb57eef47b9c6155abfe30_3 = MAKE_FUNCTION_FRAME(codeobj_3a17fdfb85bb57eef47b9c6155abfe30, module_torchvision$io$video, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3a17fdfb85bb57eef47b9c6155abfe30_3->m_type_description == NULL);
    frame_3a17fdfb85bb57eef47b9c6155abfe30_3 = cache_frame_3a17fdfb85bb57eef47b9c6155abfe30_3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3a17fdfb85bb57eef47b9c6155abfe30_3);
    assert(Py_REFCNT(frame_3a17fdfb85bb57eef47b9c6155abfe30_3) == 2);

    // Framed code:
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        tmp_next_source_2 = tmp_listcomp_2__$0;
        tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_7 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_2 = "o";
                exception_lineno = 362;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_listcomp_2__iter_value_0;
            tmp_listcomp_2__iter_value_0 = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
        tmp_assign_source_8 = tmp_listcomp_2__iter_value_0;
        {
            PyObject *old = outline_1_var_x;
            outline_1_var_x = tmp_assign_source_8;
            Py_INCREF(outline_1_var_x);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(outline_1_var_x);
        tmp_expression_value_5 = outline_1_var_x;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[89]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_2 = "o";
            goto try_except_handler_4;
        }
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_append_list_2;
        PyObject *tmp_append_value_2;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_append_list_2 = tmp_listcomp_2__contraction;
        CHECK_OBJECT(outline_1_var_x);
        tmp_expression_value_6 = outline_1_var_x;
        tmp_append_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[89]);
        if (tmp_append_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_2 = "o";
            goto try_except_handler_4;
        }
        tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_2 = "o";
            goto try_except_handler_4;
        }
    }
    branch_no_3:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 362;
        type_description_2 = "o";
        goto try_except_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
    CHECK_OBJECT(tmp_listcomp_2__contraction);
    tmp_return_value = tmp_listcomp_2__contraction;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_4;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_4:;
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
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_3;
    // End of try:


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_return_exit_3:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_3;
    frame_exception_exit_3:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3a17fdfb85bb57eef47b9c6155abfe30_3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3a17fdfb85bb57eef47b9c6155abfe30_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3a17fdfb85bb57eef47b9c6155abfe30_3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3a17fdfb85bb57eef47b9c6155abfe30_3,
        type_description_2,
        outline_1_var_x
    );


    // Release cached frame if used for exception.
    if (frame_3a17fdfb85bb57eef47b9c6155abfe30_3 == cache_frame_3a17fdfb85bb57eef47b9c6155abfe30_3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3a17fdfb85bb57eef47b9c6155abfe30_3);
        cache_frame_3a17fdfb85bb57eef47b9c6155abfe30_3 = NULL;
    }

    assertFrameObject(frame_3a17fdfb85bb57eef47b9c6155abfe30_3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;
    frame_no_exception_2:;
    goto skip_nested_handling_2;
    nested_frame_exit_2:;
    type_description_1 = "o";
    goto try_except_handler_3;
    skip_nested_handling_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    Py_XDECREF(outline_1_var_x);
    outline_1_var_x = NULL;
    goto outline_result_2;
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

    Py_XDECREF(outline_1_var_x);
    outline_1_var_x = NULL;
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
    exception_lineno = 362;
    goto frame_exception_exit_1;
    outline_result_2:;
    goto frame_return_exit_1;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1d92cade93d44fa308560eee05747da7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1d92cade93d44fa308560eee05747da7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1d92cade93d44fa308560eee05747da7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1d92cade93d44fa308560eee05747da7,
        type_description_1,
        par_container
    );


    // Release cached frame if used for exception.
    if (frame_1d92cade93d44fa308560eee05747da7 == cache_frame_1d92cade93d44fa308560eee05747da7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1d92cade93d44fa308560eee05747da7);
        cache_frame_1d92cade93d44fa308560eee05747da7 = NULL;
    }

    assertFrameObject(frame_1d92cade93d44fa308560eee05747da7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_3:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_container);
    Py_DECREF(par_container);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_container);
    Py_DECREF(par_container);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$io$video$$$function__9_read_video_timestamps(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_filename = python_pars[0];
    PyObject *par_pts_unit = python_pars[1];
    PyObject *var_get_video_backend = NULL;
    PyObject *var_video_fps = NULL;
    PyObject *var_pts = NULL;
    PyObject *var_container = NULL;
    PyObject *var_video_stream = NULL;
    PyObject *var_video_time_base = NULL;
    PyObject *var_e = NULL;
    PyObject *var_msg = NULL;
    PyObject *outline_0_var_x = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    struct Nuitka_ExceptionStackItem exception_preserved_3;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    struct Nuitka_FrameObject *frame_0d740f2c74221caad499831a0606a98e_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    static struct Nuitka_FrameObject *cache_frame_0d740f2c74221caad499831a0606a98e_2 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    static struct Nuitka_FrameObject *cache_frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32)) {
        Py_XDECREF(cache_frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32 = MAKE_FUNCTION_FRAME(codeobj_cdd7a9f4050fd89eaa5b0cfe8c1eed32, module_torchvision$io$video, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32->m_type_description == NULL);
    frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32 = cache_frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32);
    assert(Py_REFCNT(frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32->m_frame.f_lineno = 382;
        tmp_operand_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[3]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "oooooooooo";
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
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32->m_frame.f_lineno = 382;
        tmp_operand_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[4]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? true : false;
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[138]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32->m_frame.f_lineno = 383;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[98];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torchvision$io$video;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[99];
        tmp_level_value_1 = mod_consts[31];
        frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32->m_frame.f_lineno = 384;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torchvision$io$video,
                mod_consts[100],
                mod_consts[31]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[100]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_get_video_backend == NULL);
        var_get_video_backend = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_2;
        CHECK_OBJECT(var_get_video_backend);
        tmp_called_value_2 = var_get_video_backend;
        frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32->m_frame.f_lineno = 386;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[103];
        tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "oooooooooo";
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
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_filename);
        tmp_args_element_value_2 = par_filename;
        CHECK_OBJECT(par_pts_unit);
        tmp_args_element_value_3 = par_pts_unit;
        frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32->m_frame.f_lineno = 387;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[139],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_2;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32->m_frame.f_lineno = 389;
        tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_None;
        assert(var_video_fps == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_video_fps = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = MAKE_LIST_EMPTY(0);
        assert(var_pts == NULL);
        var_pts = tmp_assign_source_3;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[14]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(par_filename);
        tmp_tuple_element_1 = par_filename;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[109]);
        frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32->m_frame.f_lineno = 395;
        tmp_assign_source_4 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_4 = tmp_with_1__source;
        tmp_called_value_5 = LOOKUP_SPECIAL(tmp_expression_value_4, mod_consts[16]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32->m_frame.f_lineno = 395;
        tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
        Py_DECREF(tmp_called_value_5);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_5 = tmp_with_1__source;
        tmp_assign_source_6 = LOOKUP_SPECIAL(tmp_expression_value_5, mod_consts[17]);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
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
        assert(var_container == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_container = tmp_assign_source_8;
    }
    // Tried code:
    // Tried code:
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_container);
        tmp_expression_value_7 = var_container;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[34]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[68]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 396;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_container);
        tmp_expression_value_10 = var_container;
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[34]);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[68]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }
        tmp_subscript_value_1 = mod_consts[31];
        tmp_assign_source_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_8, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }
        assert(var_video_stream == NULL);
        var_video_stream = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(var_video_stream);
        tmp_expression_value_11 = var_video_stream;
        tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[61]);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }
        assert(var_video_time_base == NULL);
        var_video_time_base = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[140]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[140]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_container);
        tmp_args_element_value_4 = var_container;
        frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32->m_frame.f_lineno = 400;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_4);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_pts;
            assert(old != NULL);
            var_pts = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }
    goto try_end_1;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_12;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "oooooooooo";
            goto try_except_handler_7;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[85]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "oooooooooo";
            goto try_except_handler_7;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "oooooooooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_2;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "oooooooooo";
            goto try_except_handler_7;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[65]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "oooooooooo";
            goto try_except_handler_7;
        }
        tmp_tuple_element_2 = mod_consts[141];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_filename);
            tmp_format_value_1 = par_filename;
            tmp_format_spec_1 = mod_consts[102];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 402;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_string_concat_values_1);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_5 = PyUnicode_Join(mod_consts[102], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 402;
            type_description_1 = "oooooooooo";
            goto try_except_handler_7;
        }
        frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32->m_frame.f_lineno = 402;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "oooooooooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 399;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32->m_frame) frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooo";
    goto try_except_handler_7;
    branch_end_4:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_7:;
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

    goto try_except_handler_5;
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
        PyObject *tmp_float_arg_1;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(var_video_stream);
        tmp_expression_value_14 = var_video_stream;
        tmp_float_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[114]);
        if (tmp_float_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_12 = TO_FLOAT(tmp_float_arg_1);
        Py_DECREF(tmp_float_arg_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_video_fps;
            assert(old != NULL);
            var_video_fps = tmp_assign_source_12;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
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

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32, exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
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
        nuitka_bool tmp_assign_source_13;
        tmp_assign_source_13 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_13;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_8 = tmp_with_1__exit;
        tmp_args_element_value_6 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_7 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_8 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32->m_frame.f_lineno = 403;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_operand_value_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_8, call_args);
        }

        if (tmp_operand_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooooooooo";
            goto try_except_handler_8;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooooooooo";
            goto try_except_handler_8;
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
        exception_lineno = 403;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32->m_frame) frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooo";
    goto try_except_handler_8;
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 395;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32->m_frame) frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooo";
    goto try_except_handler_8;
    branch_end_5:;
    goto try_end_4;
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

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

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
        PyObject *tmp_called_value_9;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_9 = tmp_with_1__exit;
        frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32->m_frame.f_lineno = 403;
        tmp_call_result_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_9, mod_consts[52]);

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_5);
            Py_XDECREF(exception_keeper_value_5);
            Py_XDECREF(exception_keeper_tb_5);

            exception_lineno = 403;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_7:;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_3;
    // End of try:
    try_end_5:;
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
        PyObject *tmp_called_value_10;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_10 = tmp_with_1__exit;
        frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32->m_frame.f_lineno = 403;
        tmp_call_result_5 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_10, mod_consts[52]);

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_8:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_3:;
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

    goto try_except_handler_2;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 3.
    exception_preserved_3 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_7 == NULL) {
        exception_keeper_tb_7 = MAKE_TRACEBACK(frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32, exception_keeper_lineno_7);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_keeper_tb_7 = ADD_TRACEBACK(exception_keeper_tb_7, frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32, exception_keeper_lineno_7);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
    // Tried code:
    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_expression_value_15;
        tmp_cmp_expr_left_6 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "oooooooooo";
            goto try_except_handler_9;
        }
        tmp_cmp_expr_right_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[85]);
        if (tmp_cmp_expr_right_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "oooooooooo";
            goto try_except_handler_9;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_right_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "oooooooooo";
            goto try_except_handler_9;
        }
        tmp_condition_result_9 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_14);
        var_e = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = mod_consts[142];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(par_filename);
            tmp_format_value_2 = par_filename;
            tmp_format_spec_2 = mod_consts[102];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 405;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[143];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(var_e);
            tmp_format_value_3 = var_e;
            tmp_format_spec_3 = mod_consts[102];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 405;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 3, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_string_concat_values_2);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_assign_source_15 = PyUnicode_Join(mod_consts[102], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "oooooooooo";
            goto try_except_handler_10;
        }
        assert(var_msg == NULL);
        var_msg = tmp_assign_source_15;
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oooooooooo";
            goto try_except_handler_10;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[65]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oooooooooo";
            goto try_except_handler_10;
        }
        CHECK_OBJECT(var_msg);
        tmp_args_element_value_9 = var_msg;
        tmp_args_element_value_10 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[144]);

        if (unlikely(tmp_args_element_value_10 == NULL)) {
            tmp_args_element_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
        }

        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 406;
            type_description_1 = "oooooooooo";
            goto try_except_handler_10;
        }
        frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32->m_frame.f_lineno = 406;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_11, call_args);
        }

        Py_DECREF(tmp_called_value_11);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oooooooooo";
            goto try_except_handler_10;
        }
        Py_DECREF(tmp_call_result_6);
    }
    goto try_end_8;
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

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_9;
    // End of try:
    try_end_8:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto branch_end_9;
    branch_no_9:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 394;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32->m_frame) frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooo";
    goto try_except_handler_9;
    branch_end_9:;
    goto try_end_9;
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

    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(&exception_preserved_3);

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(&exception_preserved_3);

    goto try_end_7;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_7:;
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_7;
        CHECK_OBJECT(var_pts);
        tmp_expression_value_17 = var_pts;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[145]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32->m_frame.f_lineno = 408;
        tmp_call_result_7 = CALL_FUNCTION_NO_ARGS(tmp_called_value_12);
        Py_DECREF(tmp_called_value_12);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(par_pts_unit);
        tmp_cmp_expr_left_7 = par_pts_unit;
        tmp_cmp_expr_right_7 = mod_consts[58];
        tmp_condition_result_10 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_16;
        // Tried code:
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(var_pts);
            tmp_iter_arg_1 = var_pts;
            tmp_assign_source_17 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 411;
                type_description_1 = "oooooooooo";
                goto try_except_handler_11;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_17;
        }
        {
            PyObject *tmp_assign_source_18;
            tmp_assign_source_18 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_18;
        }
        if (isFrameUnusable(cache_frame_0d740f2c74221caad499831a0606a98e_2)) {
            Py_XDECREF(cache_frame_0d740f2c74221caad499831a0606a98e_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_0d740f2c74221caad499831a0606a98e_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_0d740f2c74221caad499831a0606a98e_2 = MAKE_FUNCTION_FRAME(codeobj_0d740f2c74221caad499831a0606a98e, module_torchvision$io$video, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_0d740f2c74221caad499831a0606a98e_2->m_type_description == NULL);
        frame_0d740f2c74221caad499831a0606a98e_2 = cache_frame_0d740f2c74221caad499831a0606a98e_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_0d740f2c74221caad499831a0606a98e_2);
        assert(Py_REFCNT(frame_0d740f2c74221caad499831a0606a98e_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_19;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_19 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_19 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 411;
                    goto try_except_handler_12;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_19;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_20;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_20 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_x;
                outline_0_var_x = tmp_assign_source_20;
                Py_INCREF(outline_0_var_x);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_mult_expr_left_1;
            PyObject *tmp_mult_expr_right_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_x);
            tmp_mult_expr_left_1 = outline_0_var_x;
            if (var_video_time_base == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[146]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 411;
                type_description_2 = "oo";
                goto try_except_handler_12;
            }

            tmp_mult_expr_right_1 = var_video_time_base;
            tmp_append_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 411;
                type_description_2 = "oo";
                goto try_except_handler_12;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 411;
                type_description_2 = "oo";
                goto try_except_handler_12;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_2 = "oo";
            goto try_except_handler_12;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_16 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_16);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
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
        try_except_handler_12:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
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
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto frame_exception_exit_2;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_11;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0d740f2c74221caad499831a0606a98e_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0d740f2c74221caad499831a0606a98e_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0d740f2c74221caad499831a0606a98e_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0d740f2c74221caad499831a0606a98e_2,
            type_description_2,
            outline_0_var_x,
            var_video_time_base
        );


        // Release cached frame if used for exception.
        if (frame_0d740f2c74221caad499831a0606a98e_2 == cache_frame_0d740f2c74221caad499831a0606a98e_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_0d740f2c74221caad499831a0606a98e_2);
            cache_frame_0d740f2c74221caad499831a0606a98e_2 = NULL;
        }

        assertFrameObject(frame_0d740f2c74221caad499831a0606a98e_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooooooooo";
        goto try_except_handler_11;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_XDECREF(outline_0_var_x);
        outline_0_var_x = NULL;
        goto outline_result_1;
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

        Py_XDECREF(outline_0_var_x);
        outline_0_var_x = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 411;
        goto frame_exception_exit_1;
        outline_result_1:;
        {
            PyObject *old = var_pts;
            assert(old != NULL);
            var_pts = tmp_assign_source_16;
            Py_DECREF(old);
        }

    }
    branch_no_10:;
    {
        PyObject *tmp_tuple_element_4;
        if (var_pts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[89]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 413;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_4 = var_pts;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_4);
        CHECK_OBJECT(var_video_fps);
        tmp_tuple_element_4 = var_video_fps;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_4);
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
        exception_tb = MAKE_TRACEBACK(frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32,
        type_description_1,
        par_filename,
        par_pts_unit,
        var_get_video_backend,
        var_video_fps,
        var_pts,
        var_container,
        var_video_stream,
        var_video_time_base,
        var_e,
        var_msg
    );


    // Release cached frame if used for exception.
    if (frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32 == cache_frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32);
        cache_frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32 = NULL;
    }

    assertFrameObject(frame_cdd7a9f4050fd89eaa5b0cfe8c1eed32);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_get_video_backend);
    Py_DECREF(var_get_video_backend);
    var_get_video_backend = NULL;
    Py_XDECREF(var_video_fps);
    var_video_fps = NULL;
    Py_XDECREF(var_pts);
    var_pts = NULL;
    Py_XDECREF(var_container);
    var_container = NULL;
    Py_XDECREF(var_video_stream);
    var_video_stream = NULL;
    Py_XDECREF(var_video_time_base);
    var_video_time_base = NULL;
    Py_XDECREF(var_msg);
    var_msg = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_get_video_backend);
    var_get_video_backend = NULL;
    Py_XDECREF(var_video_fps);
    var_video_fps = NULL;
    Py_XDECREF(var_pts);
    var_pts = NULL;
    Py_XDECREF(var_container);
    var_container = NULL;
    Py_XDECREF(var_video_stream);
    var_video_stream = NULL;
    Py_XDECREF(var_video_time_base);
    var_video_time_base = NULL;
    Py_XDECREF(var_msg);
    var_msg = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);
    CHECK_OBJECT(par_pts_unit);
    Py_DECREF(par_pts_unit);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);
    CHECK_OBJECT(par_pts_unit);
    Py_DECREF(par_pts_unit);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_torchvision$io$video$$$function__1__check_av_available(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$io$video$$$function__1__check_av_available,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_76e43b447f04eedbd622627b90cf3255,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$io$video,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$io$video$$$function__2__av_available(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$io$video$$$function__2__av_available,
        mod_consts[175],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_779287960ee4dff96253bc7e21c99c02,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$io$video,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$io$video$$$function__3_write_video(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$io$video$$$function__3_write_video,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_34e2fb326e18c688368e7f1d201b5910,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$io$video,
        mod_consts[53],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$io$video$$$function__4__read_from_stream(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$io$video$$$function__4__read_from_stream,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ce1cc95610de63da8f005c4827c26a76,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$io$video,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$io$video$$$function__5__align_audio_frames(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$io$video$$$function__5__align_audio_frames,
        mod_consts[129],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_54d6148e2de9995d6ff2407749a39ac3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$io$video,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$io$video$$$function__6_read_video(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$io$video$$$function__6_read_video,
        mod_consts[97],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d9e16e97b785632f0c91cc69dd528e17,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$io$video,
        mod_consts[132],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$io$video$$$function__7__can_read_timestamps_from_packets(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$io$video$$$function__7__can_read_timestamps_from_packets,
        mod_consts[134],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1d3b0f036dd07d541b91ed71269bd9b1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$io$video,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$io$video$$$function__8__decode_video_timestamps(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$io$video$$$function__8__decode_video_timestamps,
        mod_consts[140],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1d92cade93d44fa308560eee05747da7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$io$video,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$io$video$$$function__9_read_video_timestamps(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$io$video$$$function__9_read_video_timestamps,
        mod_consts[138],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cdd7a9f4050fd89eaa5b0cfe8c1eed32,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$io$video,
        mod_consts[147],
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

function_impl_code functable_torchvision$io$video[] = {
    impl_torchvision$io$video$$$function__1__check_av_available,
    impl_torchvision$io$video$$$function__2__av_available,
    impl_torchvision$io$video$$$function__3_write_video,
    impl_torchvision$io$video$$$function__4__read_from_stream,
    impl_torchvision$io$video$$$function__5__align_audio_frames,
    impl_torchvision$io$video$$$function__6_read_video,
    impl_torchvision$io$video$$$function__7__can_read_timestamps_from_packets,
    impl_torchvision$io$video$$$function__8__decode_video_timestamps,
    impl_torchvision$io$video$$$function__9_read_video_timestamps,
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

    function_impl_code *current = functable_torchvision$io$video;
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

    if (offset > sizeof(functable_torchvision$io$video) || offset < 0) {
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
        functable_torchvision$io$video[offset],
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
        module_torchvision$io$video,
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
PyObject *modulecode_torchvision$io$video(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torchvision.io.video");

    // Store the module for future use.
    module_torchvision$io$video = module;

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
        PRINT_STRING("torchvision.io.video: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torchvision.io.video: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torchvision.io.video: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorchvision$io$video\n");

    moduledict_torchvision$io$video = MODULE_DICT(module_torchvision$io$video);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torchvision$io$video,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torchvision$io$video,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[102]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torchvision$io$video,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torchvision$io$video,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torchvision$io$video,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torchvision$io$video);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torchvision$io$video, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torchvision$io$video, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torchvision$io$video, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torchvision$io$video);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torchvision$io$video, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_a985c1067a6e6cdaa56b423b6eb76d71;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_2);
    }
    frame_a985c1067a6e6cdaa56b423b6eb76d71 = MAKE_MODULE_FRAME(codeobj_a985c1067a6e6cdaa56b423b6eb76d71, module_torchvision$io$video);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a985c1067a6e6cdaa56b423b6eb76d71);
    assert(Py_REFCNT(frame_a985c1067a6e6cdaa56b423b6eb76d71) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[151], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[152], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[56];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torchvision$io$video;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[31];
        frame_a985c1067a6e6cdaa56b423b6eb76d71->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[59];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torchvision$io$video;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[31];
        frame_a985c1067a6e6cdaa56b423b6eb76d71->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[74];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_torchvision$io$video;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[31];
        frame_a985c1067a6e6cdaa56b423b6eb76d71->m_frame.f_lineno = 4;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[64];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_torchvision$io$video;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[31];
        frame_a985c1067a6e6cdaa56b423b6eb76d71->m_frame.f_lineno = 5;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[155];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_torchvision$io$video;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[156];
        tmp_level_value_5 = mod_consts[31];
        frame_a985c1067a6e6cdaa56b423b6eb76d71->m_frame.f_lineno = 6;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torchvision$io$video,
                mod_consts[157],
                mod_consts[31]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[157]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_10 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_10);
        tmp_import_from_1__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_torchvision$io$video,
                mod_consts[158],
                mod_consts[31]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[158]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_torchvision$io$video,
                mod_consts[159],
                mod_consts[31]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[159]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_torchvision$io$video,
                mod_consts[160],
                mod_consts[31]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[160]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_torchvision$io$video,
                mod_consts[161],
                mod_consts[31]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[161]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_torchvision$io$video,
                mod_consts[162],
                mod_consts[31]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[162]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_torchvision$io$video,
                mod_consts[163],
                mod_consts[31]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[163]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_16);
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
        PyObject *tmp_assign_source_17;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[11];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_torchvision$io$video;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = Py_None;
        tmp_level_value_6 = mod_consts[31];
        frame_a985c1067a6e6cdaa56b423b6eb76d71->m_frame.f_lineno = 9;
        tmp_assign_source_17 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[1];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_torchvision$io$video;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = Py_None;
        tmp_level_value_7 = mod_consts[31];
        frame_a985c1067a6e6cdaa56b423b6eb76d71->m_frame.f_lineno = 10;
        tmp_assign_source_18 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[164];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_torchvision$io$video;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[165];
        tmp_level_value_8 = mod_consts[21];
        frame_a985c1067a6e6cdaa56b423b6eb76d71->m_frame.f_lineno = 12;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_torchvision$io$video,
                mod_consts[5],
                mod_consts[31]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[5]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[102];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_torchvision$io$video;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[166];
        tmp_level_value_9 = mod_consts[23];
        frame_a985c1067a6e6cdaa56b423b6eb76d71->m_frame.f_lineno = 13;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_torchvision$io$video,
                mod_consts[104],
                mod_consts[31]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[104]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_20);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[0];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_torchvision$io$video;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = Py_None;
        tmp_level_value_10 = mod_consts[31];
        frame_a985c1067a6e6cdaa56b423b6eb76d71->m_frame.f_lineno = 17;
        tmp_assign_source_21 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_21);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[167]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[168]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_2;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 19;

            goto try_except_handler_2;
        }
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[167]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 19;

            goto try_except_handler_2;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[169]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 19;

            goto try_except_handler_2;
        }
        frame_a985c1067a6e6cdaa56b423b6eb76d71->m_frame.f_lineno = 19;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_attribute_value_1;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_2;
        }
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[68]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_2;
        }
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[170]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_2;
        }
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[47]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_2;
        }
        tmp_attribute_value_1 = mod_consts[50];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_5, tmp_attribute_value_1);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_2;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

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
        PyObject *tmp_assign_source_22;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[171];
        frame_a985c1067a6e6cdaa56b423b6eb76d71->m_frame.f_lineno = 21;
        tmp_assign_source_22 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ImportError, tmp_make_exception_arg_1);
        assert(!(tmp_assign_source_22 == NULL));
        UPDATE_STRING_DICT1(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_22);
    }
    branch_no_1:;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_2 == NULL) {
        exception_keeper_tb_2 = MAKE_TRACEBACK(frame_a985c1067a6e6cdaa56b423b6eb76d71, exception_keeper_lineno_2);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_keeper_tb_2 = ADD_TRACEBACK(exception_keeper_tb_2, frame_a985c1067a6e6cdaa56b423b6eb76d71, exception_keeper_lineno_2);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_ImportError;
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
        PyObject *tmp_assign_source_23;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[172];
        frame_a985c1067a6e6cdaa56b423b6eb76d71->m_frame.f_lineno = 31;
        tmp_assign_source_23 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ImportError, tmp_make_exception_arg_2);
        assert(!(tmp_assign_source_23 == NULL));
        UPDATE_STRING_DICT1(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_23);
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 16;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a985c1067a6e6cdaa56b423b6eb76d71->m_frame) frame_a985c1067a6e6cdaa56b423b6eb76d71->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_3;
    branch_end_2:;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_annotations_1;
        tmp_annotations_1 = DICT_COPY(mod_consts[173]);


        tmp_assign_source_24 = MAKE_FUNCTION_torchvision$io$video$$$function__1__check_av_available(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_annotations_2;
        tmp_annotations_2 = DICT_COPY(mod_consts[174]);


        tmp_assign_source_25 = MAKE_FUNCTION_torchvision$io$video$$$function__2__av_available(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[31];
        UPDATE_STRING_DICT0(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[176];
        UPDATE_STRING_DICT0(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_defaults_1;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_defaults_1 = mod_consts[177];
        tmp_dict_key_1 = mod_consts[178];
        tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_3 = _PyDict_NewPresized( 10 );
        {
            PyObject *tmp_expression_value_9;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_subscript_value_7;
            PyObject *tmp_tuple_element_2;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[179];
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
            }

            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[180]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[181];
            tmp_dict_value_1 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[182];
            tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[29];
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[161]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto dict_build_exception_1;
            }
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[159]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[159]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_1 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_2, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[158]);

            if (unlikely(tmp_tuple_element_1 == NULL)) {
                tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[158]);
            }

            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_2, 1, tmp_tuple_element_1);
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_subscript_value_2);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            tmp_subscript_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_2);
            Py_DECREF(tmp_subscript_value_2);
            if (tmp_subscript_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_1);
            Py_DECREF(tmp_subscript_value_1);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[183];
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[161]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto dict_build_exception_1;
            }
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[180]);
            if (tmp_subscript_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_3);
            Py_DECREF(tmp_subscript_value_3);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[122];
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[161]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_4 = (PyObject *)&PyFloat_Type;
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_4);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[184];
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[161]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_5 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_5);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[185];
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[161]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto dict_build_exception_1;
            }
            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[159]);

            if (unlikely(tmp_expression_value_17 == NULL)) {
                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[159]);
            }

            if (tmp_expression_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_2 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_7, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[158]);

            if (unlikely(tmp_tuple_element_2 == NULL)) {
                tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[158]);
            }

            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_7, 1, tmp_tuple_element_2);
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_subscript_value_7);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_subscript_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_7);
            Py_DECREF(tmp_subscript_value_7);
            if (tmp_subscript_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_6);
            Py_DECREF(tmp_subscript_value_6);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[186];
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_28 = MAKE_FUNCTION_torchvision$io$video$$$function__3_write_video(tmp_defaults_1, tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_dict_key_2 = mod_consts[45];
        tmp_dict_value_2 = mod_consts[187];
        tmp_annotations_4 = _PyDict_NewPresized( 7 );
        {
            PyObject *tmp_expression_value_18;
            PyObject *tmp_subscript_value_8;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_subscript_value_13;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[188];
            tmp_dict_value_2 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[189];
            tmp_dict_value_2 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[118];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[51];
            tmp_dict_value_2 = mod_consts[190];
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[191];
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[159]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[159]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;

                goto dict_build_exception_2;
            }
            tmp_tuple_element_3 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_8 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_19;
                PyObject *tmp_subscript_value_9;
                PyObject *tmp_expression_value_20;
                PyObject *tmp_subscript_value_10;
                PyObject *tmp_tuple_element_4;
                PyTuple_SET_ITEM0(tmp_subscript_value_8, 0, tmp_tuple_element_3);
                tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[161]);

                if (unlikely(tmp_expression_value_19 == NULL)) {
                    tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
                }

                if (tmp_expression_value_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 148;

                    goto tuple_build_exception_3;
                }
                tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[163]);

                if (unlikely(tmp_expression_value_20 == NULL)) {
                    tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[163]);
                }

                if (tmp_expression_value_20 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 148;

                    goto tuple_build_exception_3;
                }
                tmp_tuple_element_4 = (PyObject *)&PyLong_Type;
                tmp_subscript_value_10 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_expression_value_21;
                    PyObject *tmp_subscript_value_11;
                    PyObject *tmp_expression_value_22;
                    PyObject *tmp_subscript_value_12;
                    PyTuple_SET_ITEM0(tmp_subscript_value_10, 0, tmp_tuple_element_4);
                    tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[162]);

                    if (unlikely(tmp_expression_value_21 == NULL)) {
                        tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[162]);
                    }

                    if (tmp_expression_value_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 148;

                        goto tuple_build_exception_4;
                    }
                    tmp_subscript_value_11 = mod_consts[192];
                    tmp_tuple_element_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_11);
                    if (tmp_tuple_element_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 148;

                        goto tuple_build_exception_4;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_10, 1, tmp_tuple_element_4);
                    tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[160]);

                    if (unlikely(tmp_expression_value_22 == NULL)) {
                        tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[160]);
                    }

                    if (tmp_expression_value_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 148;

                        goto tuple_build_exception_4;
                    }
                    tmp_subscript_value_12 = (PyObject *)&PyLong_Type;
                    tmp_tuple_element_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_12);
                    if (tmp_tuple_element_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 148;

                        goto tuple_build_exception_4;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_10, 2, tmp_tuple_element_4);
                }
                goto tuple_build_noexception_3;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_4:;
                Py_DECREF(tmp_subscript_value_10);
                goto tuple_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_3:;
                tmp_subscript_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_10);
                Py_DECREF(tmp_subscript_value_10);
                if (tmp_subscript_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 148;

                    goto tuple_build_exception_3;
                }
                tmp_tuple_element_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_9);
                Py_DECREF(tmp_subscript_value_9);
                if (tmp_tuple_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 148;

                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_8, 1, tmp_tuple_element_3);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_subscript_value_8);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_8);
            Py_DECREF(tmp_subscript_value_8);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[186];
            tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[160]);

            if (unlikely(tmp_expression_value_23 == NULL)) {
                tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[160]);
            }

            if (tmp_expression_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_13 = mod_consts[193];
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_13);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_annotations_4);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;


        tmp_assign_source_29 = MAKE_FUNCTION_torchvision$io$video$$$function__4__read_from_stream(tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_annotations_5;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_expression_value_24;
        tmp_dict_key_3 = mod_consts[194];
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[180]);
        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_annotations_5 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_expression_value_25;
            PyObject *tmp_subscript_value_14;
            PyObject *tmp_expression_value_26;
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[195];
            tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[160]);

            if (unlikely(tmp_expression_value_25 == NULL)) {
                tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[160]);
            }

            if (tmp_expression_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_14 = mod_consts[193];
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_14);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[196];
            tmp_dict_value_3 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[197];
            tmp_dict_value_3 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[186];
            tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_expression_value_26 == NULL)) {
                tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
            }

            if (tmp_expression_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[180]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_annotations_5);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;


        tmp_assign_source_30 = MAKE_FUNCTION_torchvision$io$video$$$function__5__align_audio_frames(tmp_annotations_5);

        UPDATE_STRING_DICT1(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_defaults_2;
        PyObject *tmp_annotations_6;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_defaults_2 = mod_consts[198];
        tmp_dict_key_4 = mod_consts[178];
        tmp_dict_value_4 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_6 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_expression_value_27;
            PyObject *tmp_subscript_value_15;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_subscript_value_16;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_subscript_value_17;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_subscript_value_18;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_expression_value_31;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[116];
            tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[163]);

            if (unlikely(tmp_expression_value_27 == NULL)) {
                tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[163]);
            }

            if (tmp_expression_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;

                goto dict_build_exception_4;
            }
            tmp_tuple_element_5 = (PyObject *)&PyFloat_Type;
            tmp_subscript_value_15 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_15, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[157]);

            if (unlikely(tmp_tuple_element_5 == NULL)) {
                tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[157]);
            }

            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_15, 1, tmp_tuple_element_5);
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_subscript_value_15);
            goto dict_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_15);
            Py_DECREF(tmp_subscript_value_15);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[117];
            tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[161]);

            if (unlikely(tmp_expression_value_28 == NULL)) {
                tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
            }

            if (tmp_expression_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;

                goto dict_build_exception_4;
            }
            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[163]);

            if (unlikely(tmp_expression_value_29 == NULL)) {
                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[163]);
            }

            if (tmp_expression_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;

                goto dict_build_exception_4;
            }
            tmp_tuple_element_6 = (PyObject *)&PyFloat_Type;
            tmp_subscript_value_17 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_17, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[157]);

            if (unlikely(tmp_tuple_element_6 == NULL)) {
                tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[157]);
            }

            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_17, 1, tmp_tuple_element_6);
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_subscript_value_17);
            goto dict_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_subscript_value_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_17);
            Py_DECREF(tmp_subscript_value_17);
            if (tmp_subscript_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_16);
            Py_DECREF(tmp_subscript_value_16);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[118];
            tmp_dict_value_4 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[186];
            tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[162]);

            if (unlikely(tmp_expression_value_30 == NULL)) {
                tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[162]);
            }

            if (tmp_expression_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;

                goto dict_build_exception_4;
            }
            tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_expression_value_31 == NULL)) {
                tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
            }

            if (tmp_expression_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;

                goto dict_build_exception_4;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[180]);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_18 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_32;
                PyObject *tmp_expression_value_33;
                PyObject *tmp_subscript_value_19;
                PyObject *tmp_tuple_element_8;
                PyTuple_SET_ITEM(tmp_subscript_value_18, 0, tmp_tuple_element_7);
                tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[1]);

                if (unlikely(tmp_expression_value_32 == NULL)) {
                    tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
                }

                if (tmp_expression_value_32 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 243;

                    goto tuple_build_exception_7;
                }
                tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[180]);
                if (tmp_tuple_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 243;

                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_18, 1, tmp_tuple_element_7);
                tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[159]);

                if (unlikely(tmp_expression_value_33 == NULL)) {
                    tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[159]);
                }

                if (tmp_expression_value_33 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 243;

                    goto tuple_build_exception_7;
                }
                tmp_tuple_element_8 = (PyObject *)&PyUnicode_Type;
                tmp_subscript_value_19 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_subscript_value_19, 0, tmp_tuple_element_8);
                tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[158]);

                if (unlikely(tmp_tuple_element_8 == NULL)) {
                    tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[158]);
                }

                if (tmp_tuple_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 243;

                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM0(tmp_subscript_value_19, 1, tmp_tuple_element_8);
                goto tuple_build_noexception_7;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_8:;
                Py_DECREF(tmp_subscript_value_19);
                goto tuple_build_exception_7;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_7:;
                tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_33, tmp_subscript_value_19);
                Py_DECREF(tmp_subscript_value_19);
                if (tmp_tuple_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 243;

                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_18, 2, tmp_tuple_element_7);
            }
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_subscript_value_18);
            goto dict_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_30, tmp_subscript_value_18);
            Py_DECREF(tmp_subscript_value_18);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_4;
        // Exception handling pass through code for dict_build:
        dict_build_exception_4:;
        Py_DECREF(tmp_annotations_6);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_4:;
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_31 = MAKE_FUNCTION_torchvision$io$video$$$function__6_read_video(tmp_defaults_2, tmp_annotations_6);

        UPDATE_STRING_DICT1(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_annotations_7;
        tmp_annotations_7 = DICT_COPY(mod_consts[199]);


        tmp_assign_source_32 = MAKE_FUNCTION_torchvision$io$video$$$function__7__can_read_timestamps_from_packets(tmp_annotations_7);

        UPDATE_STRING_DICT1(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_annotations_8;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        tmp_dict_key_5 = mod_consts[45];
        tmp_dict_value_5 = mod_consts[187];
        tmp_annotations_8 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_34;
            PyObject *tmp_subscript_value_20;
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[186];
            tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[160]);

            if (unlikely(tmp_expression_value_34 == NULL)) {
                tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[160]);
            }

            if (tmp_expression_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 357;

                goto dict_build_exception_5;
            }
            tmp_subscript_value_20 = (PyObject *)&PyLong_Type;
            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_34, tmp_subscript_value_20);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 357;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_5;
        // Exception handling pass through code for dict_build:
        dict_build_exception_5:;
        Py_DECREF(tmp_annotations_8);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_5:;


        tmp_assign_source_33 = MAKE_FUNCTION_torchvision$io$video$$$function__8__decode_video_timestamps(tmp_annotations_8);

        UPDATE_STRING_DICT1(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_defaults_3;
        PyObject *tmp_annotations_9;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        tmp_defaults_3 = mod_consts[200];
        tmp_dict_key_6 = mod_consts[178];
        tmp_dict_value_6 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_9 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_35;
            PyObject *tmp_subscript_value_21;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_expression_value_36;
            PyObject *tmp_subscript_value_22;
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[118];
            tmp_dict_value_6 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[186];
            tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[162]);

            if (unlikely(tmp_expression_value_35 == NULL)) {
                tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[162]);
            }

            if (tmp_expression_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;

                goto dict_build_exception_6;
            }
            tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[160]);

            if (unlikely(tmp_expression_value_36 == NULL)) {
                tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[160]);
            }

            if (tmp_expression_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;

                goto dict_build_exception_6;
            }
            tmp_subscript_value_22 = (PyObject *)&PyLong_Type;
            tmp_tuple_element_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_36, tmp_subscript_value_22);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;

                goto dict_build_exception_6;
            }
            tmp_subscript_value_21 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_37;
                PyObject *tmp_subscript_value_23;
                PyTuple_SET_ITEM(tmp_subscript_value_21, 0, tmp_tuple_element_9);
                tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[161]);

                if (unlikely(tmp_expression_value_37 == NULL)) {
                    tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
                }

                if (tmp_expression_value_37 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 365;

                    goto tuple_build_exception_9;
                }
                tmp_subscript_value_23 = (PyObject *)&PyFloat_Type;
                tmp_tuple_element_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_23);
                if (tmp_tuple_element_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 365;

                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_21, 1, tmp_tuple_element_9);
            }
            goto tuple_build_noexception_9;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_9:;
            Py_DECREF(tmp_subscript_value_21);
            goto dict_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_9:;
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_35, tmp_subscript_value_21);
            Py_DECREF(tmp_subscript_value_21);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_6;
        // Exception handling pass through code for dict_build:
        dict_build_exception_6:;
        Py_DECREF(tmp_annotations_9);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_6:;
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_34 = MAKE_FUNCTION_torchvision$io$video$$$function__9_read_video_timestamps(tmp_defaults_3, tmp_annotations_9);

        UPDATE_STRING_DICT1(moduledict_torchvision$io$video, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_34);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a985c1067a6e6cdaa56b423b6eb76d71, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a985c1067a6e6cdaa56b423b6eb76d71->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a985c1067a6e6cdaa56b423b6eb76d71, exception_lineno);
    }



    assertFrameObject(frame_a985c1067a6e6cdaa56b423b6eb76d71);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torchvision.io.video", false);

    Py_INCREF(module_torchvision$io$video);
    return module_torchvision$io$video;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$io$video, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torchvision$io$video", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
