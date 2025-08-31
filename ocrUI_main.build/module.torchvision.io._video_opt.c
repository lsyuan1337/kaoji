/* Generated code for Python module 'torchvision.io._video_opt'
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

/* The "module_torchvision$io$_video_opt" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torchvision$io$_video_opt;
PyDictObject *moduledict_torchvision$io$_video_opt;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[173];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[173];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torchvision.io._video_opt"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 173; i++) {
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
void checkModuleConstants_torchvision$io$_video_opt(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 173; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_77b8ce21a72a93ab1ee0772875a59f7f;
static PyCodeObject *codeobj_f1d192cfb5bf29d1618ea4e8e04e29c7;
static PyCodeObject *codeobj_689b1683f4539c878431d0d8310f2d26;
static PyCodeObject *codeobj_11e27d199250456607c380341af1c67a;
static PyCodeObject *codeobj_80e7e06f46a566878668d7aed6219885;
static PyCodeObject *codeobj_b5b89697f6cdabfbc72446e66e77414d;
static PyCodeObject *codeobj_ecd1eb222f2ea94e609bc68c9bd51b0f;
static PyCodeObject *codeobj_5d6592cc3fd0bbd50f68576bd28df6fb;
static PyCodeObject *codeobj_3632336931008e36da9f39ad3a5a8f1b;
static PyCodeObject *codeobj_8e833dfdbfddfd4b59fc7e9690482504;
static PyCodeObject *codeobj_52fa3905b9ad8d87a0290d8b56e9b0e0;
static PyCodeObject *codeobj_bc92708dbd2eef26c8a914a080deb1e7;
static PyCodeObject *codeobj_3afd195c274904ba3a1a59d7f6e18cdf;
static PyCodeObject *codeobj_2bcccd175b33e84896aab69305e0f519;
static PyCodeObject *codeobj_3b809aecb3893f12034f793d2ffb60ba;
static PyCodeObject *codeobj_073df8f645ec9de32511768721c995fd;
static PyCodeObject *codeobj_f4a2e484e194124eb3af8693f1591f7a;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[152]); CHECK_OBJECT(module_filename_obj);
    codeobj_77b8ce21a72a93ab1ee0772875a59f7f = MAKE_CODE_OBJECT(module_filename_obj, 525, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[153], mod_consts[153], mod_consts[154], NULL, 1, 0, 0);
    codeobj_f1d192cfb5bf29d1618ea4e8e04e29c7 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[155], mod_consts[155], NULL, NULL, 0, 0, 0);
    codeobj_689b1683f4539c878431d0d8310f2d26 = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[106], mod_consts[106], mod_consts[156], NULL, 1, 0, 0);
    codeobj_11e27d199250456607c380341af1c67a = MAKE_CODE_OBJECT(module_filename_obj, 26, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[106], mod_consts[106], mod_consts[157], NULL, 3, 0, 0);
    codeobj_80e7e06f46a566878668d7aed6219885 = MAKE_CODE_OBJECT(module_filename_obj, 112, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], mod_consts[34], mod_consts[158], NULL, 3, 0, 0);
    codeobj_b5b89697f6cdabfbc72446e66e77414d = MAKE_CODE_OBJECT(module_filename_obj, 430, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[62], mod_consts[62], mod_consts[159], NULL, 4, 0, 0);
    codeobj_ecd1eb222f2ea94e609bc68c9bd51b0f = MAKE_CODE_OBJECT(module_filename_obj, 80, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[33], mod_consts[33], mod_consts[160], NULL, 6, 0, 0);
    codeobj_5d6592cc3fd0bbd50f68576bd28df6fb = MAKE_CODE_OBJECT(module_filename_obj, 259, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[58], mod_consts[58], mod_consts[161], NULL, 1, 0, 0);
    codeobj_3632336931008e36da9f39ad3a5a8f1b = MAKE_CODE_OBJECT(module_filename_obj, 415, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[143], mod_consts[143], mod_consts[162], NULL, 1, 0, 0);
    codeobj_8e833dfdbfddfd4b59fc7e9690482504 = MAKE_CODE_OBJECT(module_filename_obj, 440, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[149], mod_consts[149], mod_consts[163], NULL, 4, 0, 0);
    codeobj_52fa3905b9ad8d87a0290d8b56e9b0e0 = MAKE_CODE_OBJECT(module_filename_obj, 127, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[66], mod_consts[66], mod_consts[164], NULL, 14, 0, 0);
    codeobj_bc92708dbd2eef26c8a914a080deb1e7 = MAKE_CODE_OBJECT(module_filename_obj, 269, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[141], mod_consts[141], mod_consts[165], NULL, 16, 0, 0);
    codeobj_3afd195c274904ba3a1a59d7f6e18cdf = MAKE_CODE_OBJECT(module_filename_obj, 511, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[151], mod_consts[151], mod_consts[166], NULL, 2, 0, 0);
    codeobj_2bcccd175b33e84896aab69305e0f519 = MAKE_CODE_OBJECT(module_filename_obj, 224, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[77], mod_consts[77], mod_consts[167], NULL, 1, 0, 0);
    codeobj_3b809aecb3893f12034f793d2ffb60ba = MAKE_CODE_OBJECT(module_filename_obj, 376, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[142], mod_consts[142], mod_consts[168], NULL, 1, 0, 0);
    codeobj_073df8f645ec9de32511768721c995fd = MAKE_CODE_OBJECT(module_filename_obj, 68, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[27], mod_consts[27], mod_consts[169], NULL, 1, 0, 0);
    codeobj_f4a2e484e194124eb3af8693f1591f7a = MAKE_CODE_OBJECT(module_filename_obj, 476, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[64], mod_consts[64], mod_consts[170], mod_consts[171], 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_torchvision$io$_video_opt$$$function__10__read_video_timestamps_from_memory(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$io$_video_opt$$$function__11__probe_video_from_memory(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$io$_video_opt$$$function__12__convert_to_sec(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$io$_video_opt$$$function__13__read_video(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$io$_video_opt$$$function__13__read_video$$$function__1_get_pts(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torchvision$io$_video_opt$$$function__14__read_video_timestamps(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$io$_video_opt$$$function__1___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$io$_video_opt$$$function__2___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$io$_video_opt$$$function__3__validate_pts(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$io$_video_opt$$$function__4__fill_info(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$io$_video_opt$$$function__5__align_audio_frames(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$io$_video_opt$$$function__6__read_video_from_file(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$io$_video_opt$$$function__7__read_video_timestamps_from_file(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$io$_video_opt$$$function__8__probe_video_from_file(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$io$_video_opt$$$function__9__read_video_from_memory(PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_torchvision$io$_video_opt$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_numerator = python_pars[1];
    PyObject *par_denominator = python_pars[2];
    struct Nuitka_FrameObject *frame_11e27d199250456607c380341af1c67a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_11e27d199250456607c380341af1c67a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_11e27d199250456607c380341af1c67a)) {
        Py_XDECREF(cache_frame_11e27d199250456607c380341af1c67a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_11e27d199250456607c380341af1c67a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_11e27d199250456607c380341af1c67a = MAKE_FUNCTION_FRAME(codeobj_11e27d199250456607c380341af1c67a, module_torchvision$io$_video_opt, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_11e27d199250456607c380341af1c67a->m_type_description == NULL);
    frame_11e27d199250456607c380341af1c67a = cache_frame_11e27d199250456607c380341af1c67a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_11e27d199250456607c380341af1c67a);
    assert(Py_REFCNT(frame_11e27d199250456607c380341af1c67a) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_numerator);
        tmp_assattr_value_1 = par_numerator;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_denominator);
        tmp_assattr_value_2 = par_denominator;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[1], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_11e27d199250456607c380341af1c67a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_11e27d199250456607c380341af1c67a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_11e27d199250456607c380341af1c67a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_11e27d199250456607c380341af1c67a,
        type_description_1,
        par_self,
        par_numerator,
        par_denominator
    );


    // Release cached frame if used for exception.
    if (frame_11e27d199250456607c380341af1c67a == cache_frame_11e27d199250456607c380341af1c67a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_11e27d199250456607c380341af1c67a);
        cache_frame_11e27d199250456607c380341af1c67a = NULL;
    }

    assertFrameObject(frame_11e27d199250456607c380341af1c67a);

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
    CHECK_OBJECT(par_numerator);
    Py_DECREF(par_numerator);
    CHECK_OBJECT(par_denominator);
    Py_DECREF(par_denominator);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_numerator);
    Py_DECREF(par_numerator);
    CHECK_OBJECT(par_denominator);
    Py_DECREF(par_denominator);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$io$_video_opt$$$function__2___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_689b1683f4539c878431d0d8310f2d26;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_689b1683f4539c878431d0d8310f2d26 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_689b1683f4539c878431d0d8310f2d26)) {
        Py_XDECREF(cache_frame_689b1683f4539c878431d0d8310f2d26);

#if _DEBUG_REFCOUNTS
        if (cache_frame_689b1683f4539c878431d0d8310f2d26 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_689b1683f4539c878431d0d8310f2d26 = MAKE_FUNCTION_FRAME(codeobj_689b1683f4539c878431d0d8310f2d26, module_torchvision$io$_video_opt, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_689b1683f4539c878431d0d8310f2d26->m_type_description == NULL);
    frame_689b1683f4539c878431d0d8310f2d26 = cache_frame_689b1683f4539c878431d0d8310f2d26;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_689b1683f4539c878431d0d8310f2d26);
    assert(Py_REFCNT(frame_689b1683f4539c878431d0d8310f2d26) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[2], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_assattr_target_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_689b1683f4539c878431d0d8310f2d26->m_frame.f_lineno = 59;
        tmp_assattr_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[4]);

        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[5], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = mod_consts[6];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[7], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = mod_consts[6];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[8], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_value_5 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[9], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_called_value_2;
        PyObject *tmp_assattr_target_6;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_689b1683f4539c878431d0d8310f2d26->m_frame.f_lineno = 63;
        tmp_assattr_value_6 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[4]);

        if (tmp_assattr_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[10], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        tmp_assattr_value_7 = mod_consts[6];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[11], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        tmp_assattr_value_8 = mod_consts[6];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[12], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_689b1683f4539c878431d0d8310f2d26, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_689b1683f4539c878431d0d8310f2d26->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_689b1683f4539c878431d0d8310f2d26, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_689b1683f4539c878431d0d8310f2d26,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_689b1683f4539c878431d0d8310f2d26 == cache_frame_689b1683f4539c878431d0d8310f2d26) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_689b1683f4539c878431d0d8310f2d26);
        cache_frame_689b1683f4539c878431d0d8310f2d26 = NULL;
    }

    assertFrameObject(frame_689b1683f4539c878431d0d8310f2d26);

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


static PyObject *impl_torchvision$io$_video_opt$$$function__3__validate_pts(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_pts_range = python_pars[0];
    struct Nuitka_FrameObject *frame_073df8f645ec9de32511768721c995fd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_073df8f645ec9de32511768721c995fd = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_073df8f645ec9de32511768721c995fd)) {
        Py_XDECREF(cache_frame_073df8f645ec9de32511768721c995fd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_073df8f645ec9de32511768721c995fd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_073df8f645ec9de32511768721c995fd = MAKE_FUNCTION_FRAME(codeobj_073df8f645ec9de32511768721c995fd, module_torchvision$io$_video_opt, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_073df8f645ec9de32511768721c995fd->m_type_description == NULL);
    frame_073df8f645ec9de32511768721c995fd = cache_frame_073df8f645ec9de32511768721c995fd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_073df8f645ec9de32511768721c995fd);
    assert(Py_REFCNT(frame_073df8f645ec9de32511768721c995fd) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_pts_range);
        tmp_expression_value_1 = par_pts_range;
        tmp_subscript_value_1 = mod_consts[13];
        tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[14];
        tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "o";
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
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(par_pts_range);
        tmp_expression_value_2 = par_pts_range;
        tmp_subscript_value_2 = mod_consts[14];
        tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_2, 0);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_pts_range);
        tmp_expression_value_3 = par_pts_range;
        tmp_subscript_value_3 = mod_consts[13];
        tmp_cmp_expr_right_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_3, 1);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 72;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "o";
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
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_5;
        tmp_raise_type_1 = PyExc_AssertionError;
        tmp_kw_call_arg_value_0_1 = mod_consts[15];
        CHECK_OBJECT(par_pts_range);
        tmp_expression_value_4 = par_pts_range;
        tmp_subscript_value_4 = mod_consts[14];
        tmp_kw_call_arg_value_1_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_4, 0);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_pts_range);
        tmp_expression_value_5 = par_pts_range;
        tmp_subscript_value_5 = mod_consts[13];
        tmp_kw_call_arg_value_2_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_5, 1);
        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 76;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_073df8f645ec9de32511768721c995fd->m_frame.f_lineno = 74;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS3(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        Py_DECREF(tmp_kw_call_arg_value_2_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_raise_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_raise_value_1, 0, tmp_tuple_element_1);
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 71;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_073df8f645ec9de32511768721c995fd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_073df8f645ec9de32511768721c995fd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_073df8f645ec9de32511768721c995fd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_073df8f645ec9de32511768721c995fd,
        type_description_1,
        par_pts_range
    );


    // Release cached frame if used for exception.
    if (frame_073df8f645ec9de32511768721c995fd == cache_frame_073df8f645ec9de32511768721c995fd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_073df8f645ec9de32511768721c995fd);
        cache_frame_073df8f645ec9de32511768721c995fd = NULL;
    }

    assertFrameObject(frame_073df8f645ec9de32511768721c995fd);

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
    CHECK_OBJECT(par_pts_range);
    Py_DECREF(par_pts_range);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_pts_range);
    Py_DECREF(par_pts_range);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$io$_video_opt$$$function__4__fill_info(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_vtimebase = python_pars[0];
    PyObject *par_vfps = python_pars[1];
    PyObject *par_vduration = python_pars[2];
    PyObject *par_atimebase = python_pars[3];
    PyObject *par_asample_rate = python_pars[4];
    PyObject *par_aduration = python_pars[5];
    PyObject *var_meta = NULL;
    PyObject *var_timebase = NULL;
    struct Nuitka_FrameObject *frame_ecd1eb222f2ea94e609bc68c9bd51b0f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ecd1eb222f2ea94e609bc68c9bd51b0f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ecd1eb222f2ea94e609bc68c9bd51b0f)) {
        Py_XDECREF(cache_frame_ecd1eb222f2ea94e609bc68c9bd51b0f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ecd1eb222f2ea94e609bc68c9bd51b0f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ecd1eb222f2ea94e609bc68c9bd51b0f = MAKE_FUNCTION_FRAME(codeobj_ecd1eb222f2ea94e609bc68c9bd51b0f, module_torchvision$io$_video_opt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ecd1eb222f2ea94e609bc68c9bd51b0f->m_type_description == NULL);
    frame_ecd1eb222f2ea94e609bc68c9bd51b0f = cache_frame_ecd1eb222f2ea94e609bc68c9bd51b0f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ecd1eb222f2ea94e609bc68c9bd51b0f);
    assert(Py_REFCNT(frame_ecd1eb222f2ea94e609bc68c9bd51b0f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ecd1eb222f2ea94e609bc68c9bd51b0f->m_frame.f_lineno = 91;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_meta == NULL);
        var_meta = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_vtimebase);
        tmp_called_instance_1 = par_vtimebase;
        frame_ecd1eb222f2ea94e609bc68c9bd51b0f->m_frame.f_lineno = 92;
        tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[17]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[14];
        tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooooo";
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
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_vtimebase);
        tmp_expression_value_1 = par_vtimebase;
        tmp_subscript_value_1 = mod_consts[14];
        tmp_called_instance_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ecd1eb222f2ea94e609bc68c9bd51b0f->m_frame.f_lineno = 93;
        tmp_int_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[18]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_vtimebase);
        tmp_expression_value_2 = par_vtimebase;
        tmp_subscript_value_2 = mod_consts[13];
        tmp_called_instance_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_2, 1);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 93;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ecd1eb222f2ea94e609bc68c9bd51b0f->m_frame.f_lineno = 93;
        tmp_int_arg_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[18]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_int_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 93;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = PyNumber_Int(tmp_int_arg_2);
        Py_DECREF(tmp_int_arg_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 93;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ecd1eb222f2ea94e609bc68c9bd51b0f->m_frame.f_lineno = 93;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_meta);
        tmp_assattr_target_1 = var_meta;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[5], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_float_arg_1;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(par_vtimebase);
        tmp_expression_value_3 = par_vtimebase;
        tmp_subscript_value_3 = mod_consts[14];
        tmp_called_instance_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_3, 0);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ecd1eb222f2ea94e609bc68c9bd51b0f->m_frame.f_lineno = 94;
        tmp_truediv_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[18]);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_vtimebase);
        tmp_expression_value_4 = par_vtimebase;
        tmp_subscript_value_4 = mod_consts[13];
        tmp_called_instance_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_4, 1);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_1);

            exception_lineno = 94;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ecd1eb222f2ea94e609bc68c9bd51b0f->m_frame.f_lineno = 94;
        tmp_float_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[18]);
        Py_DECREF(tmp_called_instance_5);
        if (tmp_float_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_1);

            exception_lineno = 94;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_1 = TO_FLOAT(tmp_float_arg_1);
        Py_DECREF(tmp_float_arg_1);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_1);

            exception_lineno = 94;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_timebase == NULL);
        var_timebase = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_instance_6;
        CHECK_OBJECT(par_vduration);
        tmp_called_instance_6 = par_vduration;
        frame_ecd1eb222f2ea94e609bc68c9bd51b0f->m_frame.f_lineno = 95;
        tmp_cmp_expr_left_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[17]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[14];
        tmp_condition_result_2 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooooo";
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
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        CHECK_OBJECT(var_meta);
        tmp_assattr_target_2 = var_meta;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[2], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_float_arg_2;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_vduration);
        tmp_called_instance_7 = par_vduration;
        frame_ecd1eb222f2ea94e609bc68c9bd51b0f->m_frame.f_lineno = 97;
        tmp_float_arg_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[18]);
        if (tmp_float_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_1 = TO_FLOAT(tmp_float_arg_2);
        Py_DECREF(tmp_float_arg_2);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_timebase);
        tmp_mult_expr_right_1 = var_timebase;
        tmp_assattr_value_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_meta);
        tmp_assattr_target_3 = var_meta;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[7], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_2:;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_called_instance_8;
        CHECK_OBJECT(par_vfps);
        tmp_called_instance_8 = par_vfps;
        frame_ecd1eb222f2ea94e609bc68c9bd51b0f->m_frame.f_lineno = 98;
        tmp_cmp_expr_left_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[17]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = mod_consts[14];
        tmp_condition_result_3 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
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
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_float_arg_3;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_vfps);
        tmp_called_instance_9 = par_vfps;
        frame_ecd1eb222f2ea94e609bc68c9bd51b0f->m_frame.f_lineno = 99;
        tmp_float_arg_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, mod_consts[18]);
        if (tmp_float_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_4 = TO_FLOAT(tmp_float_arg_3);
        Py_DECREF(tmp_float_arg_3);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (var_meta == NULL) {
            Py_DECREF(tmp_assattr_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 99;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_4 = var_meta;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[8], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_called_instance_10;
        CHECK_OBJECT(par_atimebase);
        tmp_called_instance_10 = par_atimebase;
        frame_ecd1eb222f2ea94e609bc68c9bd51b0f->m_frame.f_lineno = 100;
        tmp_cmp_expr_left_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_10, mod_consts[17]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = mod_consts[14];
        tmp_condition_result_4 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
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
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_int_arg_3;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_int_arg_4;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_assattr_target_5;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_atimebase);
        tmp_expression_value_5 = par_atimebase;
        tmp_subscript_value_5 = mod_consts[14];
        tmp_called_instance_11 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_5, 0);
        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ecd1eb222f2ea94e609bc68c9bd51b0f->m_frame.f_lineno = 101;
        tmp_int_arg_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_11, mod_consts[18]);
        Py_DECREF(tmp_called_instance_11);
        if (tmp_int_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = PyNumber_Int(tmp_int_arg_3);
        Py_DECREF(tmp_int_arg_3);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_atimebase);
        tmp_expression_value_6 = par_atimebase;
        tmp_subscript_value_6 = mod_consts[13];
        tmp_called_instance_12 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_6, 1);
        if (tmp_called_instance_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 101;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ecd1eb222f2ea94e609bc68c9bd51b0f->m_frame.f_lineno = 101;
        tmp_int_arg_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_12, mod_consts[18]);
        Py_DECREF(tmp_called_instance_12);
        if (tmp_int_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 101;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = PyNumber_Int(tmp_int_arg_4);
        Py_DECREF(tmp_int_arg_4);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 101;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ecd1eb222f2ea94e609bc68c9bd51b0f->m_frame.f_lineno = 101;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assattr_value_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assattr_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (var_meta == NULL) {
            Py_DECREF(tmp_assattr_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 101;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_5 = var_meta;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[10], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_float_arg_4;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_8;
        CHECK_OBJECT(par_atimebase);
        tmp_expression_value_7 = par_atimebase;
        tmp_subscript_value_7 = mod_consts[14];
        tmp_called_instance_13 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_7, 0);
        if (tmp_called_instance_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ecd1eb222f2ea94e609bc68c9bd51b0f->m_frame.f_lineno = 102;
        tmp_truediv_expr_left_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_13, mod_consts[18]);
        Py_DECREF(tmp_called_instance_13);
        if (tmp_truediv_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_atimebase);
        tmp_expression_value_8 = par_atimebase;
        tmp_subscript_value_8 = mod_consts[13];
        tmp_called_instance_14 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_8, tmp_subscript_value_8, 1);
        if (tmp_called_instance_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_2);

            exception_lineno = 102;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ecd1eb222f2ea94e609bc68c9bd51b0f->m_frame.f_lineno = 102;
        tmp_float_arg_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_14, mod_consts[18]);
        Py_DECREF(tmp_called_instance_14);
        if (tmp_float_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_2);

            exception_lineno = 102;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_2 = TO_FLOAT(tmp_float_arg_4);
        Py_DECREF(tmp_float_arg_4);
        if (tmp_truediv_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_2);

            exception_lineno = 102;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        Py_DECREF(tmp_truediv_expr_left_2);
        Py_DECREF(tmp_truediv_expr_right_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_timebase;
            var_timebase = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_called_instance_15;
        CHECK_OBJECT(par_aduration);
        tmp_called_instance_15 = par_aduration;
        frame_ecd1eb222f2ea94e609bc68c9bd51b0f->m_frame.f_lineno = 103;
        tmp_cmp_expr_left_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_15, mod_consts[17]);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_5 = mod_consts[14];
        tmp_condition_result_5 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooo";
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
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_value_6 = Py_True;
        if (var_meta == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 104;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_6 = var_meta;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[9], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_float_arg_5;
        PyObject *tmp_called_instance_16;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_aduration);
        tmp_called_instance_16 = par_aduration;
        frame_ecd1eb222f2ea94e609bc68c9bd51b0f->m_frame.f_lineno = 105;
        tmp_float_arg_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_16, mod_consts[18]);
        if (tmp_float_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_2 = TO_FLOAT(tmp_float_arg_5);
        Py_DECREF(tmp_float_arg_5);
        if (tmp_mult_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_timebase);
        tmp_mult_expr_right_2 = var_timebase;
        tmp_assattr_value_7 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        if (tmp_assattr_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (var_meta == NULL) {
            Py_DECREF(tmp_assattr_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 105;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_7 = var_meta;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[11], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_5:;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_called_instance_17;
        CHECK_OBJECT(par_asample_rate);
        tmp_called_instance_17 = par_asample_rate;
        frame_ecd1eb222f2ea94e609bc68c9bd51b0f->m_frame.f_lineno = 106;
        tmp_cmp_expr_left_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_17, mod_consts[17]);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_6 = mod_consts[14];
        tmp_condition_result_6 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_left_6);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooooo";
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
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_float_arg_6;
        PyObject *tmp_called_instance_18;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_asample_rate);
        tmp_called_instance_18 = par_asample_rate;
        frame_ecd1eb222f2ea94e609bc68c9bd51b0f->m_frame.f_lineno = 107;
        tmp_float_arg_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_18, mod_consts[18]);
        if (tmp_float_arg_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_8 = TO_FLOAT(tmp_float_arg_6);
        Py_DECREF(tmp_float_arg_6);
        if (tmp_assattr_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (var_meta == NULL) {
            Py_DECREF(tmp_assattr_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 107;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_8 = var_meta;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[12], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_6:;
    if (var_meta == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 109;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_meta;
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
        exception_tb = MAKE_TRACEBACK(frame_ecd1eb222f2ea94e609bc68c9bd51b0f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ecd1eb222f2ea94e609bc68c9bd51b0f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ecd1eb222f2ea94e609bc68c9bd51b0f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ecd1eb222f2ea94e609bc68c9bd51b0f,
        type_description_1,
        par_vtimebase,
        par_vfps,
        par_vduration,
        par_atimebase,
        par_asample_rate,
        par_aduration,
        var_meta,
        var_timebase
    );


    // Release cached frame if used for exception.
    if (frame_ecd1eb222f2ea94e609bc68c9bd51b0f == cache_frame_ecd1eb222f2ea94e609bc68c9bd51b0f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ecd1eb222f2ea94e609bc68c9bd51b0f);
        cache_frame_ecd1eb222f2ea94e609bc68c9bd51b0f = NULL;
    }

    assertFrameObject(frame_ecd1eb222f2ea94e609bc68c9bd51b0f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_meta);
    var_meta = NULL;
    Py_XDECREF(var_timebase);
    var_timebase = NULL;
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

    Py_XDECREF(var_meta);
    var_meta = NULL;
    Py_XDECREF(var_timebase);
    var_timebase = NULL;
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
    CHECK_OBJECT(par_vtimebase);
    Py_DECREF(par_vtimebase);
    CHECK_OBJECT(par_vfps);
    Py_DECREF(par_vfps);
    CHECK_OBJECT(par_vduration);
    Py_DECREF(par_vduration);
    CHECK_OBJECT(par_atimebase);
    Py_DECREF(par_atimebase);
    CHECK_OBJECT(par_asample_rate);
    Py_DECREF(par_asample_rate);
    CHECK_OBJECT(par_aduration);
    Py_DECREF(par_aduration);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_vtimebase);
    Py_DECREF(par_vtimebase);
    CHECK_OBJECT(par_vfps);
    Py_DECREF(par_vfps);
    CHECK_OBJECT(par_vduration);
    Py_DECREF(par_vduration);
    CHECK_OBJECT(par_atimebase);
    Py_DECREF(par_atimebase);
    CHECK_OBJECT(par_asample_rate);
    Py_DECREF(par_asample_rate);
    CHECK_OBJECT(par_aduration);
    Py_DECREF(par_aduration);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$io$_video_opt$$$function__5__align_audio_frames(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_aframes = python_pars[0];
    PyObject *par_aframe_pts = python_pars[1];
    PyObject *par_audio_pts_range = python_pars[2];
    PyObject *var_start = NULL;
    PyObject *var_end = NULL;
    PyObject *var_num_samples = NULL;
    PyObject *var_step_per_aframe = NULL;
    PyObject *var_s_idx = NULL;
    PyObject *var_e_idx = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_80e7e06f46a566878668d7aed6219885;
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
    static struct Nuitka_FrameObject *cache_frame_80e7e06f46a566878668d7aed6219885 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_80e7e06f46a566878668d7aed6219885)) {
        Py_XDECREF(cache_frame_80e7e06f46a566878668d7aed6219885);

#if _DEBUG_REFCOUNTS
        if (cache_frame_80e7e06f46a566878668d7aed6219885 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_80e7e06f46a566878668d7aed6219885 = MAKE_FUNCTION_FRAME(codeobj_80e7e06f46a566878668d7aed6219885, module_torchvision$io$_video_opt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_80e7e06f46a566878668d7aed6219885->m_type_description == NULL);
    frame_80e7e06f46a566878668d7aed6219885 = cache_frame_80e7e06f46a566878668d7aed6219885;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_80e7e06f46a566878668d7aed6219885);
    assert(Py_REFCNT(frame_80e7e06f46a566878668d7aed6219885) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_aframe_pts);
        tmp_expression_value_1 = par_aframe_pts;
        tmp_subscript_value_1 = mod_consts[14];
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_iter_arg_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_2;
            PyTuple_SET_ITEM(tmp_iter_arg_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_aframe_pts);
            tmp_expression_value_2 = par_aframe_pts;
            tmp_subscript_value_2 = mod_consts[21];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_2, -1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_1 = "ooooooooo";
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


            type_description_1 = "ooooooooo";
            exception_lineno = 115;
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


            type_description_1 = "ooooooooo";
            exception_lineno = 115;
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

                    type_description_1 = "ooooooooo";
                    exception_lineno = 115;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[22];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooo";
            exception_lineno = 115;
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
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_aframes);
        tmp_called_instance_1 = par_aframes;
        frame_80e7e06f46a566878668d7aed6219885->m_frame.f_lineno = 116;
        tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[23],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_num_samples == NULL);
        var_num_samples = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_float_arg_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_float_arg_2;
        CHECK_OBJECT(var_end);
        tmp_sub_expr_left_1 = var_end;
        CHECK_OBJECT(var_start);
        tmp_sub_expr_right_1 = var_start;
        tmp_add_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[13];
        tmp_float_arg_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_float_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_left_1 = TO_FLOAT(tmp_float_arg_1);
        Py_DECREF(tmp_float_arg_1);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_num_samples);
        tmp_float_arg_2 = var_num_samples;
        tmp_truediv_expr_right_1 = TO_FLOAT(tmp_float_arg_2);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_1);

            exception_lineno = 117;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_step_per_aframe == NULL);
        var_step_per_aframe = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[14];
        assert(var_s_idx == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_s_idx = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(var_num_samples);
        tmp_assign_source_9 = var_num_samples;
        assert(var_e_idx == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_e_idx = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_start);
        tmp_cmp_expr_left_1 = var_start;
        CHECK_OBJECT(par_audio_pts_range);
        tmp_expression_value_3 = par_audio_pts_range;
        tmp_subscript_value_3 = mod_consts[14];
        tmp_cmp_expr_right_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_3, 0);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
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
        PyObject *tmp_assign_source_10;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(par_audio_pts_range);
        tmp_expression_value_4 = par_audio_pts_range;
        tmp_subscript_value_4 = mod_consts[14];
        tmp_sub_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_4, 0);
        if (tmp_sub_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_start);
        tmp_sub_expr_right_2 = var_start;
        tmp_truediv_expr_left_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_left_2);
        if (tmp_truediv_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_step_per_aframe);
        tmp_truediv_expr_right_2 = var_step_per_aframe;
        tmp_int_arg_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        Py_DECREF(tmp_truediv_expr_left_2);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooooooo";
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
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_6;
        CHECK_OBJECT(par_audio_pts_range);
        tmp_expression_value_5 = par_audio_pts_range;
        tmp_subscript_value_5 = mod_consts[13];
        tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_5, 1);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[21];
        tmp_and_left_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_end);
        tmp_cmp_expr_left_3 = var_end;
        CHECK_OBJECT(par_audio_pts_range);
        tmp_expression_value_6 = par_audio_pts_range;
        tmp_subscript_value_6 = mod_consts[13];
        tmp_cmp_expr_right_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_6, 1);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
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
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_7;
        CHECK_OBJECT(par_audio_pts_range);
        tmp_expression_value_7 = par_audio_pts_range;
        tmp_subscript_value_7 = mod_consts[13];
        tmp_sub_expr_left_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_7, 1);
        if (tmp_sub_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_end);
        tmp_sub_expr_right_3 = var_end;
        tmp_truediv_expr_left_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        Py_DECREF(tmp_sub_expr_left_3);
        if (tmp_truediv_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_step_per_aframe == NULL) {
            Py_DECREF(tmp_truediv_expr_left_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 123;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truediv_expr_right_3 = var_step_per_aframe;
        tmp_int_arg_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
        Py_DECREF(tmp_truediv_expr_left_3);
        if (tmp_int_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = PyNumber_Int(tmp_int_arg_2);
        Py_DECREF(tmp_int_arg_2);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooooo";
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
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_start_value_1;
        PyObject *tmp_stop_value_1;
        CHECK_OBJECT(par_aframes);
        tmp_expression_value_8 = par_aframes;
        CHECK_OBJECT(var_s_idx);
        tmp_start_value_1 = var_s_idx;
        CHECK_OBJECT(var_e_idx);
        tmp_stop_value_1 = var_e_idx;
        tmp_tuple_element_2 = MAKE_SLICE_OBJECT2(tmp_start_value_1, tmp_stop_value_1);
        assert(!(tmp_tuple_element_2 == NULL));
        tmp_subscript_value_8 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_subscript_value_8, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[26];
        PyTuple_SET_ITEM0(tmp_subscript_value_8, 1, tmp_tuple_element_2);
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_8);
        Py_DECREF(tmp_subscript_value_8);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_80e7e06f46a566878668d7aed6219885, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_80e7e06f46a566878668d7aed6219885->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_80e7e06f46a566878668d7aed6219885, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_80e7e06f46a566878668d7aed6219885,
        type_description_1,
        par_aframes,
        par_aframe_pts,
        par_audio_pts_range,
        var_start,
        var_end,
        var_num_samples,
        var_step_per_aframe,
        var_s_idx,
        var_e_idx
    );


    // Release cached frame if used for exception.
    if (frame_80e7e06f46a566878668d7aed6219885 == cache_frame_80e7e06f46a566878668d7aed6219885) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_80e7e06f46a566878668d7aed6219885);
        cache_frame_80e7e06f46a566878668d7aed6219885 = NULL;
    }

    assertFrameObject(frame_80e7e06f46a566878668d7aed6219885);

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
    CHECK_OBJECT(var_num_samples);
    Py_DECREF(var_num_samples);
    var_num_samples = NULL;
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
    Py_XDECREF(var_num_samples);
    var_num_samples = NULL;
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
    CHECK_OBJECT(par_aframe_pts);
    Py_DECREF(par_aframe_pts);
    CHECK_OBJECT(par_audio_pts_range);
    Py_DECREF(par_audio_pts_range);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_aframes);
    Py_DECREF(par_aframes);
    CHECK_OBJECT(par_aframe_pts);
    Py_DECREF(par_aframe_pts);
    CHECK_OBJECT(par_audio_pts_range);
    Py_DECREF(par_audio_pts_range);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$io$_video_opt$$$function__6__read_video_from_file(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_filename = python_pars[0];
    PyObject *par_seek_frame_margin = python_pars[1];
    PyObject *par_read_video_stream = python_pars[2];
    PyObject *par_video_width = python_pars[3];
    PyObject *par_video_height = python_pars[4];
    PyObject *par_video_min_dimension = python_pars[5];
    PyObject *par_video_max_dimension = python_pars[6];
    PyObject *par_video_pts_range = python_pars[7];
    PyObject *par_video_timebase = python_pars[8];
    PyObject *par_read_audio_stream = python_pars[9];
    PyObject *par_audio_samples = python_pars[10];
    PyObject *par_audio_channels = python_pars[11];
    PyObject *par_audio_pts_range = python_pars[12];
    PyObject *par_audio_timebase = python_pars[13];
    PyObject *var_result = NULL;
    PyObject *var_vframes = NULL;
    PyObject *var__vframe_pts = NULL;
    PyObject *var_vtimebase = NULL;
    PyObject *var_vfps = NULL;
    PyObject *var_vduration = NULL;
    PyObject *var_aframes = NULL;
    PyObject *var_aframe_pts = NULL;
    PyObject *var_atimebase = NULL;
    PyObject *var_asample_rate = NULL;
    PyObject *var_aduration = NULL;
    PyObject *var_info = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_10 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__element_6 = NULL;
    PyObject *tmp_tuple_unpack_1__element_7 = NULL;
    PyObject *tmp_tuple_unpack_1__element_8 = NULL;
    PyObject *tmp_tuple_unpack_1__element_9 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_52fa3905b9ad8d87a0290d8b56e9b0e0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    static struct Nuitka_FrameObject *cache_frame_52fa3905b9ad8d87a0290d8b56e9b0e0 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_52fa3905b9ad8d87a0290d8b56e9b0e0)) {
        Py_XDECREF(cache_frame_52fa3905b9ad8d87a0290d8b56e9b0e0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_52fa3905b9ad8d87a0290d8b56e9b0e0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_52fa3905b9ad8d87a0290d8b56e9b0e0 = MAKE_FUNCTION_FRAME(codeobj_52fa3905b9ad8d87a0290d8b56e9b0e0, module_torchvision$io$_video_opt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_52fa3905b9ad8d87a0290d8b56e9b0e0->m_type_description == NULL);
    frame_52fa3905b9ad8d87a0290d8b56e9b0e0 = cache_frame_52fa3905b9ad8d87a0290d8b56e9b0e0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_52fa3905b9ad8d87a0290d8b56e9b0e0);
    assert(Py_REFCNT(frame_52fa3905b9ad8d87a0290d8b56e9b0e0) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_video_pts_range);
        tmp_args_element_value_1 = par_video_pts_range;
        frame_52fa3905b9ad8d87a0290d8b56e9b0e0->m_frame.f_lineno = 192;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_audio_pts_range);
        tmp_args_element_value_2 = par_audio_pts_range;
        frame_52fa3905b9ad8d87a0290d8b56e9b0e0->m_frame.f_lineno = 193;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_expression_value_11;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[29]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[30]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[31]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_filename);
        tmp_args_element_value_3 = par_filename;
        CHECK_OBJECT(par_seek_frame_margin);
        tmp_args_element_value_4 = par_seek_frame_margin;
        tmp_args_element_value_5 = mod_consts[14];
        CHECK_OBJECT(par_read_video_stream);
        tmp_args_element_value_6 = par_read_video_stream;
        CHECK_OBJECT(par_video_width);
        tmp_args_element_value_7 = par_video_width;
        CHECK_OBJECT(par_video_height);
        tmp_args_element_value_8 = par_video_height;
        CHECK_OBJECT(par_video_min_dimension);
        tmp_args_element_value_9 = par_video_min_dimension;
        CHECK_OBJECT(par_video_max_dimension);
        tmp_args_element_value_10 = par_video_max_dimension;
        CHECK_OBJECT(par_video_pts_range);
        tmp_expression_value_4 = par_video_pts_range;
        tmp_subscript_value_1 = mod_consts[14];
        tmp_args_element_value_11 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_1, 0);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 204;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_video_pts_range);
        tmp_expression_value_5 = par_video_pts_range;
        tmp_subscript_value_2 = mod_consts[13];
        tmp_args_element_value_12 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_2, 1);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 205;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_video_timebase);
        tmp_expression_value_6 = par_video_timebase;
        tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[0]);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);

            exception_lineno = 206;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_video_timebase);
        tmp_expression_value_7 = par_video_timebase;
        tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[1]);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 207;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_read_audio_stream);
        tmp_args_element_value_15 = par_read_audio_stream;
        CHECK_OBJECT(par_audio_samples);
        tmp_args_element_value_16 = par_audio_samples;
        CHECK_OBJECT(par_audio_channels);
        tmp_args_element_value_17 = par_audio_channels;
        CHECK_OBJECT(par_audio_pts_range);
        tmp_expression_value_8 = par_audio_pts_range;
        tmp_subscript_value_3 = mod_consts[14];
        tmp_args_element_value_18 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_8, tmp_subscript_value_3, 0);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_14);

            exception_lineno = 211;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_audio_pts_range);
        tmp_expression_value_9 = par_audio_pts_range;
        tmp_subscript_value_4 = mod_consts[13];
        tmp_args_element_value_19 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_9, tmp_subscript_value_4, 1);
        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_18);

            exception_lineno = 212;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_audio_timebase);
        tmp_expression_value_10 = par_audio_timebase;
        tmp_args_element_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[0]);
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_19);

            exception_lineno = 213;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_audio_timebase);
        tmp_expression_value_11 = par_audio_timebase;
        tmp_args_element_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[1]);
        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_19);
            Py_DECREF(tmp_args_element_value_20);

            exception_lineno = 214;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_52fa3905b9ad8d87a0290d8b56e9b0e0->m_frame.f_lineno = 195;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS19(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_14);
        Py_DECREF(tmp_args_element_value_18);
        Py_DECREF(tmp_args_element_value_19);
        Py_DECREF(tmp_args_element_value_20);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_result);
        tmp_iter_arg_1 = var_result;
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooooooooooooooooooooo";
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
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 10);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooo";
            exception_lineno = 216;
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
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 10);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooo";
            exception_lineno = 216;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_3, 2, 10);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooo";
            exception_lineno = 216;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_4, 3, 10);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooo";
            exception_lineno = 216;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_5, 4, 10);
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
            exception_lineno = 216;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_5 == NULL);
        tmp_tuple_unpack_1__element_5 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_6, 5, 10);
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
            exception_lineno = 216;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_6 == NULL);
        tmp_tuple_unpack_1__element_6 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_7, 6, 10);
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
            exception_lineno = 216;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_7 == NULL);
        tmp_tuple_unpack_1__element_7 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_8, 7, 10);
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
            exception_lineno = 216;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_8 == NULL);
        tmp_tuple_unpack_1__element_8 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_9 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_9, 8, 10);
        if (tmp_assign_source_11 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooo";
            exception_lineno = 216;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_9 == NULL);
        tmp_tuple_unpack_1__element_9 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_10 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_10, 9, 10);
        if (tmp_assign_source_12 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooo";
            exception_lineno = 216;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_10 == NULL);
        tmp_tuple_unpack_1__element_10 = tmp_assign_source_12;
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
                    exception_lineno = 216;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[32];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooo";
            exception_lineno = 216;
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
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_7);
    tmp_tuple_unpack_1__element_7 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_8);
    tmp_tuple_unpack_1__element_8 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_9);
    tmp_tuple_unpack_1__element_9 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_10);
    tmp_tuple_unpack_1__element_10 = NULL;
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
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_1;
        assert(var_vframes == NULL);
        Py_INCREF(tmp_assign_source_13);
        var_vframes = tmp_assign_source_13;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_2;
        assert(var__vframe_pts == NULL);
        Py_INCREF(tmp_assign_source_14);
        var__vframe_pts = tmp_assign_source_14;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_15 = tmp_tuple_unpack_1__element_3;
        assert(var_vtimebase == NULL);
        Py_INCREF(tmp_assign_source_15);
        var_vtimebase = tmp_assign_source_15;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_16 = tmp_tuple_unpack_1__element_4;
        assert(var_vfps == NULL);
        Py_INCREF(tmp_assign_source_16);
        var_vfps = tmp_assign_source_16;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_5);
        tmp_assign_source_17 = tmp_tuple_unpack_1__element_5;
        assert(var_vduration == NULL);
        Py_INCREF(tmp_assign_source_17);
        var_vduration = tmp_assign_source_17;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_6);
        tmp_assign_source_18 = tmp_tuple_unpack_1__element_6;
        assert(var_aframes == NULL);
        Py_INCREF(tmp_assign_source_18);
        var_aframes = tmp_assign_source_18;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;

    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_7);
        tmp_assign_source_19 = tmp_tuple_unpack_1__element_7;
        assert(var_aframe_pts == NULL);
        Py_INCREF(tmp_assign_source_19);
        var_aframe_pts = tmp_assign_source_19;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_7);
    tmp_tuple_unpack_1__element_7 = NULL;

    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_8);
        tmp_assign_source_20 = tmp_tuple_unpack_1__element_8;
        assert(var_atimebase == NULL);
        Py_INCREF(tmp_assign_source_20);
        var_atimebase = tmp_assign_source_20;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_8);
    tmp_tuple_unpack_1__element_8 = NULL;

    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_9);
        tmp_assign_source_21 = tmp_tuple_unpack_1__element_9;
        assert(var_asample_rate == NULL);
        Py_INCREF(tmp_assign_source_21);
        var_asample_rate = tmp_assign_source_21;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_9);
    tmp_tuple_unpack_1__element_9 = NULL;

    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_10);
        tmp_assign_source_22 = tmp_tuple_unpack_1__element_10;
        assert(var_aduration == NULL);
        Py_INCREF(tmp_assign_source_22);
        var_aduration = tmp_assign_source_22;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_10);
    tmp_tuple_unpack_1__element_10 = NULL;

    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_vtimebase);
        tmp_args_element_value_22 = var_vtimebase;
        CHECK_OBJECT(var_vfps);
        tmp_args_element_value_23 = var_vfps;
        CHECK_OBJECT(var_vduration);
        tmp_args_element_value_24 = var_vduration;
        CHECK_OBJECT(var_atimebase);
        tmp_args_element_value_25 = var_atimebase;
        CHECK_OBJECT(var_asample_rate);
        tmp_args_element_value_26 = var_asample_rate;
        CHECK_OBJECT(var_aduration);
        tmp_args_element_value_27 = var_aduration;
        frame_52fa3905b9ad8d87a0290d8b56e9b0e0->m_frame.f_lineno = 217;
        {
            PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27};
            tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_4, call_args);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_info == NULL);
        var_info = tmp_assign_source_23;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_aframes);
        tmp_called_instance_1 = var_aframes;
        frame_52fa3905b9ad8d87a0290d8b56e9b0e0->m_frame.f_lineno = 218;
        tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[17]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[14];
        tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_aframes);
        tmp_args_element_value_28 = var_aframes;
        CHECK_OBJECT(var_aframe_pts);
        tmp_args_element_value_29 = var_aframe_pts;
        CHECK_OBJECT(par_audio_pts_range);
        tmp_args_element_value_30 = par_audio_pts_range;
        frame_52fa3905b9ad8d87a0290d8b56e9b0e0->m_frame.f_lineno = 220;
        {
            PyObject *call_args[] = {tmp_args_element_value_28, tmp_args_element_value_29, tmp_args_element_value_30};
            tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_aframes;
            assert(old != NULL);
            var_aframes = tmp_assign_source_24;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_vframes);
        tmp_tuple_element_1 = var_vframes;
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        if (var_aframes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 221;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = var_aframes;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_info);
        tmp_tuple_element_1 = var_info;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_52fa3905b9ad8d87a0290d8b56e9b0e0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_52fa3905b9ad8d87a0290d8b56e9b0e0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_52fa3905b9ad8d87a0290d8b56e9b0e0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_52fa3905b9ad8d87a0290d8b56e9b0e0,
        type_description_1,
        par_filename,
        par_seek_frame_margin,
        par_read_video_stream,
        par_video_width,
        par_video_height,
        par_video_min_dimension,
        par_video_max_dimension,
        par_video_pts_range,
        par_video_timebase,
        par_read_audio_stream,
        par_audio_samples,
        par_audio_channels,
        par_audio_pts_range,
        par_audio_timebase,
        var_result,
        var_vframes,
        var__vframe_pts,
        var_vtimebase,
        var_vfps,
        var_vduration,
        var_aframes,
        var_aframe_pts,
        var_atimebase,
        var_asample_rate,
        var_aduration,
        var_info
    );


    // Release cached frame if used for exception.
    if (frame_52fa3905b9ad8d87a0290d8b56e9b0e0 == cache_frame_52fa3905b9ad8d87a0290d8b56e9b0e0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_52fa3905b9ad8d87a0290d8b56e9b0e0);
        cache_frame_52fa3905b9ad8d87a0290d8b56e9b0e0 = NULL;
    }

    assertFrameObject(frame_52fa3905b9ad8d87a0290d8b56e9b0e0);

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
    CHECK_OBJECT(var_vframes);
    Py_DECREF(var_vframes);
    var_vframes = NULL;
    CHECK_OBJECT(var__vframe_pts);
    Py_DECREF(var__vframe_pts);
    var__vframe_pts = NULL;
    CHECK_OBJECT(var_vtimebase);
    Py_DECREF(var_vtimebase);
    var_vtimebase = NULL;
    CHECK_OBJECT(var_vfps);
    Py_DECREF(var_vfps);
    var_vfps = NULL;
    CHECK_OBJECT(var_vduration);
    Py_DECREF(var_vduration);
    var_vduration = NULL;
    Py_XDECREF(var_aframes);
    var_aframes = NULL;
    Py_XDECREF(var_aframe_pts);
    var_aframe_pts = NULL;
    CHECK_OBJECT(var_atimebase);
    Py_DECREF(var_atimebase);
    var_atimebase = NULL;
    CHECK_OBJECT(var_asample_rate);
    Py_DECREF(var_asample_rate);
    var_asample_rate = NULL;
    CHECK_OBJECT(var_aduration);
    Py_DECREF(var_aduration);
    var_aduration = NULL;
    CHECK_OBJECT(var_info);
    Py_DECREF(var_info);
    var_info = NULL;
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

    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_vframes);
    var_vframes = NULL;
    Py_XDECREF(var__vframe_pts);
    var__vframe_pts = NULL;
    Py_XDECREF(var_vtimebase);
    var_vtimebase = NULL;
    Py_XDECREF(var_vfps);
    var_vfps = NULL;
    Py_XDECREF(var_vduration);
    var_vduration = NULL;
    Py_XDECREF(var_aframes);
    var_aframes = NULL;
    Py_XDECREF(var_aframe_pts);
    var_aframe_pts = NULL;
    Py_XDECREF(var_atimebase);
    var_atimebase = NULL;
    Py_XDECREF(var_asample_rate);
    var_asample_rate = NULL;
    Py_XDECREF(var_aduration);
    var_aduration = NULL;
    Py_XDECREF(var_info);
    var_info = NULL;
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
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);
    CHECK_OBJECT(par_seek_frame_margin);
    Py_DECREF(par_seek_frame_margin);
    CHECK_OBJECT(par_read_video_stream);
    Py_DECREF(par_read_video_stream);
    CHECK_OBJECT(par_video_width);
    Py_DECREF(par_video_width);
    CHECK_OBJECT(par_video_height);
    Py_DECREF(par_video_height);
    CHECK_OBJECT(par_video_min_dimension);
    Py_DECREF(par_video_min_dimension);
    CHECK_OBJECT(par_video_max_dimension);
    Py_DECREF(par_video_max_dimension);
    CHECK_OBJECT(par_video_pts_range);
    Py_DECREF(par_video_pts_range);
    CHECK_OBJECT(par_video_timebase);
    Py_DECREF(par_video_timebase);
    CHECK_OBJECT(par_read_audio_stream);
    Py_DECREF(par_read_audio_stream);
    CHECK_OBJECT(par_audio_samples);
    Py_DECREF(par_audio_samples);
    CHECK_OBJECT(par_audio_channels);
    Py_DECREF(par_audio_channels);
    CHECK_OBJECT(par_audio_pts_range);
    Py_DECREF(par_audio_pts_range);
    CHECK_OBJECT(par_audio_timebase);
    Py_DECREF(par_audio_timebase);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);
    CHECK_OBJECT(par_seek_frame_margin);
    Py_DECREF(par_seek_frame_margin);
    CHECK_OBJECT(par_read_video_stream);
    Py_DECREF(par_read_video_stream);
    CHECK_OBJECT(par_video_width);
    Py_DECREF(par_video_width);
    CHECK_OBJECT(par_video_height);
    Py_DECREF(par_video_height);
    CHECK_OBJECT(par_video_min_dimension);
    Py_DECREF(par_video_min_dimension);
    CHECK_OBJECT(par_video_max_dimension);
    Py_DECREF(par_video_max_dimension);
    CHECK_OBJECT(par_video_pts_range);
    Py_DECREF(par_video_pts_range);
    CHECK_OBJECT(par_video_timebase);
    Py_DECREF(par_video_timebase);
    CHECK_OBJECT(par_read_audio_stream);
    Py_DECREF(par_read_audio_stream);
    CHECK_OBJECT(par_audio_samples);
    Py_DECREF(par_audio_samples);
    CHECK_OBJECT(par_audio_channels);
    Py_DECREF(par_audio_channels);
    CHECK_OBJECT(par_audio_pts_range);
    Py_DECREF(par_audio_pts_range);
    CHECK_OBJECT(par_audio_timebase);
    Py_DECREF(par_audio_timebase);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$io$_video_opt$$$function__7__read_video_timestamps_from_file(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_filename = python_pars[0];
    PyObject *var_result = NULL;
    PyObject *var__vframes = NULL;
    PyObject *var_vframe_pts = NULL;
    PyObject *var_vtimebase = NULL;
    PyObject *var_vfps = NULL;
    PyObject *var_vduration = NULL;
    PyObject *var__aframes = NULL;
    PyObject *var_aframe_pts = NULL;
    PyObject *var_atimebase = NULL;
    PyObject *var_asample_rate = NULL;
    PyObject *var_aduration = NULL;
    PyObject *var_info = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_10 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__element_6 = NULL;
    PyObject *tmp_tuple_unpack_1__element_7 = NULL;
    PyObject *tmp_tuple_unpack_1__element_8 = NULL;
    PyObject *tmp_tuple_unpack_1__element_9 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_2bcccd175b33e84896aab69305e0f519;
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
    static struct Nuitka_FrameObject *cache_frame_2bcccd175b33e84896aab69305e0f519 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2bcccd175b33e84896aab69305e0f519)) {
        Py_XDECREF(cache_frame_2bcccd175b33e84896aab69305e0f519);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2bcccd175b33e84896aab69305e0f519 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2bcccd175b33e84896aab69305e0f519 = MAKE_FUNCTION_FRAME(codeobj_2bcccd175b33e84896aab69305e0f519, module_torchvision$io$_video_opt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2bcccd175b33e84896aab69305e0f519->m_type_description == NULL);
    frame_2bcccd175b33e84896aab69305e0f519 = cache_frame_2bcccd175b33e84896aab69305e0f519;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2bcccd175b33e84896aab69305e0f519);
    assert(Py_REFCNT(frame_2bcccd175b33e84896aab69305e0f519) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[29]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_filename);
        tmp_args_element_value_1 = par_filename;
        tmp_args_element_value_2 = mod_consts[14];
        tmp_args_element_value_3 = mod_consts[13];
        tmp_args_element_value_4 = mod_consts[13];
        tmp_args_element_value_5 = mod_consts[14];
        tmp_args_element_value_6 = mod_consts[14];
        tmp_args_element_value_7 = mod_consts[14];
        tmp_args_element_value_8 = mod_consts[14];
        tmp_args_element_value_9 = mod_consts[14];
        tmp_args_element_value_10 = mod_consts[21];
        tmp_args_element_value_11 = mod_consts[14];
        tmp_args_element_value_12 = mod_consts[13];
        tmp_args_element_value_13 = mod_consts[13];
        tmp_args_element_value_14 = mod_consts[14];
        tmp_args_element_value_15 = mod_consts[14];
        tmp_args_element_value_16 = mod_consts[14];
        tmp_args_element_value_17 = mod_consts[21];
        tmp_args_element_value_18 = mod_consts[14];
        tmp_args_element_value_19 = mod_consts[13];
        frame_2bcccd175b33e84896aab69305e0f519->m_frame.f_lineno = 230;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS19(
                tmp_called_instance_1,
                mod_consts[31],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_result);
        tmp_iter_arg_1 = var_result;
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooooooooooo";
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
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 10);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 251;
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
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 10);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 251;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_3, 2, 10);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 251;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_4, 3, 10);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 251;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_5, 4, 10);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 251;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_5 == NULL);
        tmp_tuple_unpack_1__element_5 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_6, 5, 10);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 251;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_6 == NULL);
        tmp_tuple_unpack_1__element_6 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_7, 6, 10);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 251;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_7 == NULL);
        tmp_tuple_unpack_1__element_7 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_8, 7, 10);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 251;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_8 == NULL);
        tmp_tuple_unpack_1__element_8 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_9 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_9, 8, 10);
        if (tmp_assign_source_11 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 251;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_9 == NULL);
        tmp_tuple_unpack_1__element_9 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_10 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_10, 9, 10);
        if (tmp_assign_source_12 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 251;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_10 == NULL);
        tmp_tuple_unpack_1__element_10 = tmp_assign_source_12;
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

                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 251;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[32];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooo";
            exception_lineno = 251;
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
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_7);
    tmp_tuple_unpack_1__element_7 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_8);
    tmp_tuple_unpack_1__element_8 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_9);
    tmp_tuple_unpack_1__element_9 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_10);
    tmp_tuple_unpack_1__element_10 = NULL;
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
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_1;
        assert(var__vframes == NULL);
        Py_INCREF(tmp_assign_source_13);
        var__vframes = tmp_assign_source_13;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_2;
        assert(var_vframe_pts == NULL);
        Py_INCREF(tmp_assign_source_14);
        var_vframe_pts = tmp_assign_source_14;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_15 = tmp_tuple_unpack_1__element_3;
        assert(var_vtimebase == NULL);
        Py_INCREF(tmp_assign_source_15);
        var_vtimebase = tmp_assign_source_15;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_16 = tmp_tuple_unpack_1__element_4;
        assert(var_vfps == NULL);
        Py_INCREF(tmp_assign_source_16);
        var_vfps = tmp_assign_source_16;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_5);
        tmp_assign_source_17 = tmp_tuple_unpack_1__element_5;
        assert(var_vduration == NULL);
        Py_INCREF(tmp_assign_source_17);
        var_vduration = tmp_assign_source_17;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_6);
        tmp_assign_source_18 = tmp_tuple_unpack_1__element_6;
        assert(var__aframes == NULL);
        Py_INCREF(tmp_assign_source_18);
        var__aframes = tmp_assign_source_18;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;

    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_7);
        tmp_assign_source_19 = tmp_tuple_unpack_1__element_7;
        assert(var_aframe_pts == NULL);
        Py_INCREF(tmp_assign_source_19);
        var_aframe_pts = tmp_assign_source_19;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_7);
    tmp_tuple_unpack_1__element_7 = NULL;

    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_8);
        tmp_assign_source_20 = tmp_tuple_unpack_1__element_8;
        assert(var_atimebase == NULL);
        Py_INCREF(tmp_assign_source_20);
        var_atimebase = tmp_assign_source_20;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_8);
    tmp_tuple_unpack_1__element_8 = NULL;

    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_9);
        tmp_assign_source_21 = tmp_tuple_unpack_1__element_9;
        assert(var_asample_rate == NULL);
        Py_INCREF(tmp_assign_source_21);
        var_asample_rate = tmp_assign_source_21;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_9);
    tmp_tuple_unpack_1__element_9 = NULL;

    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_10);
        tmp_assign_source_22 = tmp_tuple_unpack_1__element_10;
        assert(var_aduration == NULL);
        Py_INCREF(tmp_assign_source_22);
        var_aduration = tmp_assign_source_22;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_10);
    tmp_tuple_unpack_1__element_10 = NULL;

    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_vtimebase);
        tmp_args_element_value_20 = var_vtimebase;
        CHECK_OBJECT(var_vfps);
        tmp_args_element_value_21 = var_vfps;
        CHECK_OBJECT(var_vduration);
        tmp_args_element_value_22 = var_vduration;
        CHECK_OBJECT(var_atimebase);
        tmp_args_element_value_23 = var_atimebase;
        CHECK_OBJECT(var_asample_rate);
        tmp_args_element_value_24 = var_asample_rate;
        CHECK_OBJECT(var_aduration);
        tmp_args_element_value_25 = var_aduration;
        frame_2bcccd175b33e84896aab69305e0f519->m_frame.f_lineno = 252;
        {
            PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25};
            tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_info == NULL);
        var_info = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(var_vframe_pts);
        tmp_called_instance_3 = var_vframe_pts;
        frame_2bcccd175b33e84896aab69305e0f519->m_frame.f_lineno = 254;
        tmp_called_instance_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[37]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2bcccd175b33e84896aab69305e0f519->m_frame.f_lineno = 254;
        tmp_assign_source_24 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[38]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_vframe_pts;
            assert(old != NULL);
            var_vframe_pts = tmp_assign_source_24;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_called_instance_5;
        CHECK_OBJECT(var_aframe_pts);
        tmp_called_instance_5 = var_aframe_pts;
        frame_2bcccd175b33e84896aab69305e0f519->m_frame.f_lineno = 255;
        tmp_called_instance_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[37]);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2bcccd175b33e84896aab69305e0f519->m_frame.f_lineno = 255;
        tmp_assign_source_25 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[38]);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_aframe_pts;
            assert(old != NULL);
            var_aframe_pts = tmp_assign_source_25;
            Py_DECREF(old);
        }

    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2bcccd175b33e84896aab69305e0f519, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2bcccd175b33e84896aab69305e0f519->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2bcccd175b33e84896aab69305e0f519, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2bcccd175b33e84896aab69305e0f519,
        type_description_1,
        par_filename,
        var_result,
        var__vframes,
        var_vframe_pts,
        var_vtimebase,
        var_vfps,
        var_vduration,
        var__aframes,
        var_aframe_pts,
        var_atimebase,
        var_asample_rate,
        var_aduration,
        var_info
    );


    // Release cached frame if used for exception.
    if (frame_2bcccd175b33e84896aab69305e0f519 == cache_frame_2bcccd175b33e84896aab69305e0f519) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2bcccd175b33e84896aab69305e0f519);
        cache_frame_2bcccd175b33e84896aab69305e0f519 = NULL;
    }

    assertFrameObject(frame_2bcccd175b33e84896aab69305e0f519);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_vframe_pts);
        tmp_tuple_element_1 = var_vframe_pts;
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_aframe_pts);
        tmp_tuple_element_1 = var_aframe_pts;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_info);
        tmp_tuple_element_1 = var_info;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
    CHECK_OBJECT(var__vframes);
    Py_DECREF(var__vframes);
    var__vframes = NULL;
    CHECK_OBJECT(var_vframe_pts);
    Py_DECREF(var_vframe_pts);
    var_vframe_pts = NULL;
    CHECK_OBJECT(var_vtimebase);
    Py_DECREF(var_vtimebase);
    var_vtimebase = NULL;
    CHECK_OBJECT(var_vfps);
    Py_DECREF(var_vfps);
    var_vfps = NULL;
    CHECK_OBJECT(var_vduration);
    Py_DECREF(var_vduration);
    var_vduration = NULL;
    CHECK_OBJECT(var__aframes);
    Py_DECREF(var__aframes);
    var__aframes = NULL;
    CHECK_OBJECT(var_aframe_pts);
    Py_DECREF(var_aframe_pts);
    var_aframe_pts = NULL;
    CHECK_OBJECT(var_atimebase);
    Py_DECREF(var_atimebase);
    var_atimebase = NULL;
    CHECK_OBJECT(var_asample_rate);
    Py_DECREF(var_asample_rate);
    var_asample_rate = NULL;
    CHECK_OBJECT(var_aduration);
    Py_DECREF(var_aduration);
    var_aduration = NULL;
    CHECK_OBJECT(var_info);
    Py_DECREF(var_info);
    var_info = NULL;
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

    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var__vframes);
    var__vframes = NULL;
    Py_XDECREF(var_vframe_pts);
    var_vframe_pts = NULL;
    Py_XDECREF(var_vtimebase);
    var_vtimebase = NULL;
    Py_XDECREF(var_vfps);
    var_vfps = NULL;
    Py_XDECREF(var_vduration);
    var_vduration = NULL;
    Py_XDECREF(var__aframes);
    var__aframes = NULL;
    Py_XDECREF(var_aframe_pts);
    var_aframe_pts = NULL;
    Py_XDECREF(var_atimebase);
    var_atimebase = NULL;
    Py_XDECREF(var_asample_rate);
    var_asample_rate = NULL;
    Py_XDECREF(var_aduration);
    var_aduration = NULL;
    Py_XDECREF(var_info);
    var_info = NULL;
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


static PyObject *impl_torchvision$io$_video_opt$$$function__8__probe_video_from_file(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_filename = python_pars[0];
    PyObject *var_result = NULL;
    PyObject *var_vtimebase = NULL;
    PyObject *var_vfps = NULL;
    PyObject *var_vduration = NULL;
    PyObject *var_atimebase = NULL;
    PyObject *var_asample_rate = NULL;
    PyObject *var_aduration = NULL;
    PyObject *var_info = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__element_6 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_5d6592cc3fd0bbd50f68576bd28df6fb;
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
    static struct Nuitka_FrameObject *cache_frame_5d6592cc3fd0bbd50f68576bd28df6fb = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5d6592cc3fd0bbd50f68576bd28df6fb)) {
        Py_XDECREF(cache_frame_5d6592cc3fd0bbd50f68576bd28df6fb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5d6592cc3fd0bbd50f68576bd28df6fb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5d6592cc3fd0bbd50f68576bd28df6fb = MAKE_FUNCTION_FRAME(codeobj_5d6592cc3fd0bbd50f68576bd28df6fb, module_torchvision$io$_video_opt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5d6592cc3fd0bbd50f68576bd28df6fb->m_type_description == NULL);
    frame_5d6592cc3fd0bbd50f68576bd28df6fb = cache_frame_5d6592cc3fd0bbd50f68576bd28df6fb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5d6592cc3fd0bbd50f68576bd28df6fb);
    assert(Py_REFCNT(frame_5d6592cc3fd0bbd50f68576bd28df6fb) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[29]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_filename);
        tmp_args_element_value_1 = par_filename;
        frame_5d6592cc3fd0bbd50f68576bd28df6fb->m_frame.f_lineno = 263;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[40], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_result);
        tmp_iter_arg_1 = var_result;
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooooooo";
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
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 6);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 264;
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
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 6);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 264;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_3, 2, 6);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 264;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_4, 3, 6);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 264;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_5, 4, 6);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 264;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_5 == NULL);
        tmp_tuple_unpack_1__element_5 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_6, 5, 6);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 264;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_6 == NULL);
        tmp_tuple_unpack_1__element_6 = tmp_assign_source_8;
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

                    type_description_1 = "ooooooooo";
                    exception_lineno = 264;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[41];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooo";
            exception_lineno = 264;
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
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;
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
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
        assert(var_vtimebase == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_vtimebase = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
        assert(var_vfps == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_vfps = tmp_assign_source_10;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_3;
        assert(var_vduration == NULL);
        Py_INCREF(tmp_assign_source_11);
        var_vduration = tmp_assign_source_11;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_4;
        assert(var_atimebase == NULL);
        Py_INCREF(tmp_assign_source_12);
        var_atimebase = tmp_assign_source_12;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_5);
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_5;
        assert(var_asample_rate == NULL);
        Py_INCREF(tmp_assign_source_13);
        var_asample_rate = tmp_assign_source_13;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_6);
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_6;
        assert(var_aduration == NULL);
        Py_INCREF(tmp_assign_source_14);
        var_aduration = tmp_assign_source_14;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;

    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_vtimebase);
        tmp_args_element_value_2 = var_vtimebase;
        CHECK_OBJECT(var_vfps);
        tmp_args_element_value_3 = var_vfps;
        CHECK_OBJECT(var_vduration);
        tmp_args_element_value_4 = var_vduration;
        CHECK_OBJECT(var_atimebase);
        tmp_args_element_value_5 = var_atimebase;
        CHECK_OBJECT(var_asample_rate);
        tmp_args_element_value_6 = var_asample_rate;
        CHECK_OBJECT(var_aduration);
        tmp_args_element_value_7 = var_aduration;
        frame_5d6592cc3fd0bbd50f68576bd28df6fb->m_frame.f_lineno = 265;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_info == NULL);
        var_info = tmp_assign_source_15;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5d6592cc3fd0bbd50f68576bd28df6fb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5d6592cc3fd0bbd50f68576bd28df6fb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5d6592cc3fd0bbd50f68576bd28df6fb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5d6592cc3fd0bbd50f68576bd28df6fb,
        type_description_1,
        par_filename,
        var_result,
        var_vtimebase,
        var_vfps,
        var_vduration,
        var_atimebase,
        var_asample_rate,
        var_aduration,
        var_info
    );


    // Release cached frame if used for exception.
    if (frame_5d6592cc3fd0bbd50f68576bd28df6fb == cache_frame_5d6592cc3fd0bbd50f68576bd28df6fb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5d6592cc3fd0bbd50f68576bd28df6fb);
        cache_frame_5d6592cc3fd0bbd50f68576bd28df6fb = NULL;
    }

    assertFrameObject(frame_5d6592cc3fd0bbd50f68576bd28df6fb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_info);
    tmp_return_value = var_info;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
    CHECK_OBJECT(var_vtimebase);
    Py_DECREF(var_vtimebase);
    var_vtimebase = NULL;
    CHECK_OBJECT(var_vfps);
    Py_DECREF(var_vfps);
    var_vfps = NULL;
    CHECK_OBJECT(var_vduration);
    Py_DECREF(var_vduration);
    var_vduration = NULL;
    CHECK_OBJECT(var_atimebase);
    Py_DECREF(var_atimebase);
    var_atimebase = NULL;
    CHECK_OBJECT(var_asample_rate);
    Py_DECREF(var_asample_rate);
    var_asample_rate = NULL;
    CHECK_OBJECT(var_aduration);
    Py_DECREF(var_aduration);
    var_aduration = NULL;
    CHECK_OBJECT(var_info);
    Py_DECREF(var_info);
    var_info = NULL;
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

    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_vtimebase);
    var_vtimebase = NULL;
    Py_XDECREF(var_vfps);
    var_vfps = NULL;
    Py_XDECREF(var_vduration);
    var_vduration = NULL;
    Py_XDECREF(var_atimebase);
    var_atimebase = NULL;
    Py_XDECREF(var_asample_rate);
    var_asample_rate = NULL;
    Py_XDECREF(var_aduration);
    var_aduration = NULL;
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


static PyObject *impl_torchvision$io$_video_opt$$$function__9__read_video_from_memory(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_video_data = python_pars[0];
    PyObject *par_seek_frame_margin = python_pars[1];
    PyObject *par_read_video_stream = python_pars[2];
    PyObject *par_video_width = python_pars[3];
    PyObject *par_video_height = python_pars[4];
    PyObject *par_video_min_dimension = python_pars[5];
    PyObject *par_video_max_dimension = python_pars[6];
    PyObject *par_video_pts_range = python_pars[7];
    PyObject *par_video_timebase_numerator = python_pars[8];
    PyObject *par_video_timebase_denominator = python_pars[9];
    PyObject *par_read_audio_stream = python_pars[10];
    PyObject *par_audio_samples = python_pars[11];
    PyObject *par_audio_channels = python_pars[12];
    PyObject *par_audio_pts_range = python_pars[13];
    PyObject *par_audio_timebase_numerator = python_pars[14];
    PyObject *par_audio_timebase_denominator = python_pars[15];
    PyObject *var_result = NULL;
    PyObject *var_vframes = NULL;
    PyObject *var__vframe_pts = NULL;
    PyObject *var_vtimebase = NULL;
    PyObject *var_vfps = NULL;
    PyObject *var_vduration = NULL;
    PyObject *var_aframes = NULL;
    PyObject *var_aframe_pts = NULL;
    PyObject *var_atimebase = NULL;
    PyObject *var_asample_rate = NULL;
    PyObject *var_aduration = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_10 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__element_6 = NULL;
    PyObject *tmp_tuple_unpack_1__element_7 = NULL;
    PyObject *tmp_tuple_unpack_1__element_8 = NULL;
    PyObject *tmp_tuple_unpack_1__element_9 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_bc92708dbd2eef26c8a914a080deb1e7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
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
    static struct Nuitka_FrameObject *cache_frame_bc92708dbd2eef26c8a914a080deb1e7 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bc92708dbd2eef26c8a914a080deb1e7)) {
        Py_XDECREF(cache_frame_bc92708dbd2eef26c8a914a080deb1e7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bc92708dbd2eef26c8a914a080deb1e7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bc92708dbd2eef26c8a914a080deb1e7 = MAKE_FUNCTION_FRAME(codeobj_bc92708dbd2eef26c8a914a080deb1e7, module_torchvision$io$_video_opt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bc92708dbd2eef26c8a914a080deb1e7->m_type_description == NULL);
    frame_bc92708dbd2eef26c8a914a080deb1e7 = cache_frame_bc92708dbd2eef26c8a914a080deb1e7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bc92708dbd2eef26c8a914a080deb1e7);
    assert(Py_REFCNT(frame_bc92708dbd2eef26c8a914a080deb1e7) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_video_pts_range);
        tmp_args_element_value_1 = par_video_pts_range;
        frame_bc92708dbd2eef26c8a914a080deb1e7->m_frame.f_lineno = 339;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_audio_pts_range);
        tmp_args_element_value_2 = par_audio_pts_range;
        frame_bc92708dbd2eef26c8a914a080deb1e7->m_frame.f_lineno = 340;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_video_data);
        tmp_isinstance_inst_1 = par_video_data;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[43]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "ooooooooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[44]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_video_data);
        tmp_kw_call_arg_value_0_1 = par_video_data;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 343;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[45]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 343;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bc92708dbd2eef26c8a914a080deb1e7->m_frame.f_lineno = 343;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[46]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_video_data;
            assert(old != NULL);
            par_video_data = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[29]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[30]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[47]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_video_data);
        tmp_args_element_value_3 = par_video_data;
        CHECK_OBJECT(par_seek_frame_margin);
        tmp_args_element_value_4 = par_seek_frame_margin;
        tmp_args_element_value_5 = mod_consts[14];
        CHECK_OBJECT(par_read_video_stream);
        tmp_args_element_value_6 = par_read_video_stream;
        CHECK_OBJECT(par_video_width);
        tmp_args_element_value_7 = par_video_width;
        CHECK_OBJECT(par_video_height);
        tmp_args_element_value_8 = par_video_height;
        CHECK_OBJECT(par_video_min_dimension);
        tmp_args_element_value_9 = par_video_min_dimension;
        CHECK_OBJECT(par_video_max_dimension);
        tmp_args_element_value_10 = par_video_max_dimension;
        CHECK_OBJECT(par_video_pts_range);
        tmp_expression_value_7 = par_video_pts_range;
        tmp_subscript_value_1 = mod_consts[14];
        tmp_args_element_value_11 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_1, 0);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 354;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_video_pts_range);
        tmp_expression_value_8 = par_video_pts_range;
        tmp_subscript_value_2 = mod_consts[13];
        tmp_args_element_value_12 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_8, tmp_subscript_value_2, 1);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 355;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_video_timebase_numerator);
        tmp_args_element_value_13 = par_video_timebase_numerator;
        CHECK_OBJECT(par_video_timebase_denominator);
        tmp_args_element_value_14 = par_video_timebase_denominator;
        CHECK_OBJECT(par_read_audio_stream);
        tmp_args_element_value_15 = par_read_audio_stream;
        CHECK_OBJECT(par_audio_samples);
        tmp_args_element_value_16 = par_audio_samples;
        CHECK_OBJECT(par_audio_channels);
        tmp_args_element_value_17 = par_audio_channels;
        CHECK_OBJECT(par_audio_pts_range);
        tmp_expression_value_9 = par_audio_pts_range;
        tmp_subscript_value_3 = mod_consts[14];
        tmp_args_element_value_18 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_9, tmp_subscript_value_3, 0);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);

            exception_lineno = 361;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_audio_pts_range);
        tmp_expression_value_10 = par_audio_pts_range;
        tmp_subscript_value_4 = mod_consts[13];
        tmp_args_element_value_19 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_10, tmp_subscript_value_4, 1);
        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_18);

            exception_lineno = 362;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_audio_timebase_numerator);
        tmp_args_element_value_20 = par_audio_timebase_numerator;
        CHECK_OBJECT(par_audio_timebase_denominator);
        tmp_args_element_value_21 = par_audio_timebase_denominator;
        frame_bc92708dbd2eef26c8a914a080deb1e7->m_frame.f_lineno = 345;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS19(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_18);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_result);
        tmp_iter_arg_1 = var_result;
        tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_1, 0, 10);
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
            exception_lineno = 367;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_2, 1, 10);
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
            exception_lineno = 367;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_3, 2, 10);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooo";
            exception_lineno = 367;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_4, 3, 10);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooo";
            exception_lineno = 367;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_5, 4, 10);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooo";
            exception_lineno = 367;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_5 == NULL);
        tmp_tuple_unpack_1__element_5 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_6, 5, 10);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooo";
            exception_lineno = 367;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_6 == NULL);
        tmp_tuple_unpack_1__element_6 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_7, 6, 10);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooo";
            exception_lineno = 367;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_7 == NULL);
        tmp_tuple_unpack_1__element_7 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_8, 7, 10);
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
            exception_lineno = 367;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_8 == NULL);
        tmp_tuple_unpack_1__element_8 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_9 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_9, 8, 10);
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
            exception_lineno = 367;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_9 == NULL);
        tmp_tuple_unpack_1__element_9 = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_10 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_10, 9, 10);
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
            exception_lineno = 367;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_10 == NULL);
        tmp_tuple_unpack_1__element_10 = tmp_assign_source_13;
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
                    exception_lineno = 367;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[32];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooooooooooo";
            exception_lineno = 367;
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
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_7);
    tmp_tuple_unpack_1__element_7 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_8);
    tmp_tuple_unpack_1__element_8 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_9);
    tmp_tuple_unpack_1__element_9 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_10);
    tmp_tuple_unpack_1__element_10 = NULL;
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
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_1;
        assert(var_vframes == NULL);
        Py_INCREF(tmp_assign_source_14);
        var_vframes = tmp_assign_source_14;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_15 = tmp_tuple_unpack_1__element_2;
        assert(var__vframe_pts == NULL);
        Py_INCREF(tmp_assign_source_15);
        var__vframe_pts = tmp_assign_source_15;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_16 = tmp_tuple_unpack_1__element_3;
        assert(var_vtimebase == NULL);
        Py_INCREF(tmp_assign_source_16);
        var_vtimebase = tmp_assign_source_16;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_17 = tmp_tuple_unpack_1__element_4;
        assert(var_vfps == NULL);
        Py_INCREF(tmp_assign_source_17);
        var_vfps = tmp_assign_source_17;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_5);
        tmp_assign_source_18 = tmp_tuple_unpack_1__element_5;
        assert(var_vduration == NULL);
        Py_INCREF(tmp_assign_source_18);
        var_vduration = tmp_assign_source_18;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_6);
        tmp_assign_source_19 = tmp_tuple_unpack_1__element_6;
        assert(var_aframes == NULL);
        Py_INCREF(tmp_assign_source_19);
        var_aframes = tmp_assign_source_19;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;

    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_7);
        tmp_assign_source_20 = tmp_tuple_unpack_1__element_7;
        assert(var_aframe_pts == NULL);
        Py_INCREF(tmp_assign_source_20);
        var_aframe_pts = tmp_assign_source_20;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_7);
    tmp_tuple_unpack_1__element_7 = NULL;

    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_8);
        tmp_assign_source_21 = tmp_tuple_unpack_1__element_8;
        assert(var_atimebase == NULL);
        Py_INCREF(tmp_assign_source_21);
        var_atimebase = tmp_assign_source_21;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_8);
    tmp_tuple_unpack_1__element_8 = NULL;

    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_9);
        tmp_assign_source_22 = tmp_tuple_unpack_1__element_9;
        assert(var_asample_rate == NULL);
        Py_INCREF(tmp_assign_source_22);
        var_asample_rate = tmp_assign_source_22;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_9);
    tmp_tuple_unpack_1__element_9 = NULL;

    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_10);
        tmp_assign_source_23 = tmp_tuple_unpack_1__element_10;
        assert(var_aduration == NULL);
        Py_INCREF(tmp_assign_source_23);
        var_aduration = tmp_assign_source_23;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_10);
    tmp_tuple_unpack_1__element_10 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_aframes);
        tmp_called_instance_1 = var_aframes;
        frame_bc92708dbd2eef26c8a914a080deb1e7->m_frame.f_lineno = 369;
        tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[17]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[14];
        tmp_condition_result_2 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ooooooooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_aframes);
        tmp_args_element_value_22 = var_aframes;
        CHECK_OBJECT(var_aframe_pts);
        tmp_args_element_value_23 = var_aframe_pts;
        CHECK_OBJECT(par_audio_pts_range);
        tmp_args_element_value_24 = par_audio_pts_range;
        frame_bc92708dbd2eef26c8a914a080deb1e7->m_frame.f_lineno = 371;
        {
            PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24};
            tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_aframes;
            assert(old != NULL);
            var_aframes = tmp_assign_source_24;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_vframes);
        tmp_tuple_element_1 = var_vframes;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        if (var_aframes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 373;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = var_aframes;
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
        exception_tb = MAKE_TRACEBACK(frame_bc92708dbd2eef26c8a914a080deb1e7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bc92708dbd2eef26c8a914a080deb1e7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bc92708dbd2eef26c8a914a080deb1e7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bc92708dbd2eef26c8a914a080deb1e7,
        type_description_1,
        par_video_data,
        par_seek_frame_margin,
        par_read_video_stream,
        par_video_width,
        par_video_height,
        par_video_min_dimension,
        par_video_max_dimension,
        par_video_pts_range,
        par_video_timebase_numerator,
        par_video_timebase_denominator,
        par_read_audio_stream,
        par_audio_samples,
        par_audio_channels,
        par_audio_pts_range,
        par_audio_timebase_numerator,
        par_audio_timebase_denominator,
        var_result,
        var_vframes,
        var__vframe_pts,
        var_vtimebase,
        var_vfps,
        var_vduration,
        var_aframes,
        var_aframe_pts,
        var_atimebase,
        var_asample_rate,
        var_aduration
    );


    // Release cached frame if used for exception.
    if (frame_bc92708dbd2eef26c8a914a080deb1e7 == cache_frame_bc92708dbd2eef26c8a914a080deb1e7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bc92708dbd2eef26c8a914a080deb1e7);
        cache_frame_bc92708dbd2eef26c8a914a080deb1e7 = NULL;
    }

    assertFrameObject(frame_bc92708dbd2eef26c8a914a080deb1e7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_video_data);
    Py_DECREF(par_video_data);
    par_video_data = NULL;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
    CHECK_OBJECT(var_vframes);
    Py_DECREF(var_vframes);
    var_vframes = NULL;
    CHECK_OBJECT(var__vframe_pts);
    Py_DECREF(var__vframe_pts);
    var__vframe_pts = NULL;
    CHECK_OBJECT(var_vtimebase);
    Py_DECREF(var_vtimebase);
    var_vtimebase = NULL;
    CHECK_OBJECT(var_vfps);
    Py_DECREF(var_vfps);
    var_vfps = NULL;
    CHECK_OBJECT(var_vduration);
    Py_DECREF(var_vduration);
    var_vduration = NULL;
    Py_XDECREF(var_aframes);
    var_aframes = NULL;
    Py_XDECREF(var_aframe_pts);
    var_aframe_pts = NULL;
    CHECK_OBJECT(var_atimebase);
    Py_DECREF(var_atimebase);
    var_atimebase = NULL;
    CHECK_OBJECT(var_asample_rate);
    Py_DECREF(var_asample_rate);
    var_asample_rate = NULL;
    CHECK_OBJECT(var_aduration);
    Py_DECREF(var_aduration);
    var_aduration = NULL;
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

    Py_XDECREF(par_video_data);
    par_video_data = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_vframes);
    var_vframes = NULL;
    Py_XDECREF(var__vframe_pts);
    var__vframe_pts = NULL;
    Py_XDECREF(var_vtimebase);
    var_vtimebase = NULL;
    Py_XDECREF(var_vfps);
    var_vfps = NULL;
    Py_XDECREF(var_vduration);
    var_vduration = NULL;
    Py_XDECREF(var_aframes);
    var_aframes = NULL;
    Py_XDECREF(var_aframe_pts);
    var_aframe_pts = NULL;
    Py_XDECREF(var_atimebase);
    var_atimebase = NULL;
    Py_XDECREF(var_asample_rate);
    var_asample_rate = NULL;
    Py_XDECREF(var_aduration);
    var_aduration = NULL;
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
    CHECK_OBJECT(par_seek_frame_margin);
    Py_DECREF(par_seek_frame_margin);
    CHECK_OBJECT(par_read_video_stream);
    Py_DECREF(par_read_video_stream);
    CHECK_OBJECT(par_video_width);
    Py_DECREF(par_video_width);
    CHECK_OBJECT(par_video_height);
    Py_DECREF(par_video_height);
    CHECK_OBJECT(par_video_min_dimension);
    Py_DECREF(par_video_min_dimension);
    CHECK_OBJECT(par_video_max_dimension);
    Py_DECREF(par_video_max_dimension);
    CHECK_OBJECT(par_video_pts_range);
    Py_DECREF(par_video_pts_range);
    CHECK_OBJECT(par_video_timebase_numerator);
    Py_DECREF(par_video_timebase_numerator);
    CHECK_OBJECT(par_video_timebase_denominator);
    Py_DECREF(par_video_timebase_denominator);
    CHECK_OBJECT(par_read_audio_stream);
    Py_DECREF(par_read_audio_stream);
    CHECK_OBJECT(par_audio_samples);
    Py_DECREF(par_audio_samples);
    CHECK_OBJECT(par_audio_channels);
    Py_DECREF(par_audio_channels);
    CHECK_OBJECT(par_audio_pts_range);
    Py_DECREF(par_audio_pts_range);
    CHECK_OBJECT(par_audio_timebase_numerator);
    Py_DECREF(par_audio_timebase_numerator);
    CHECK_OBJECT(par_audio_timebase_denominator);
    Py_DECREF(par_audio_timebase_denominator);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_seek_frame_margin);
    Py_DECREF(par_seek_frame_margin);
    CHECK_OBJECT(par_read_video_stream);
    Py_DECREF(par_read_video_stream);
    CHECK_OBJECT(par_video_width);
    Py_DECREF(par_video_width);
    CHECK_OBJECT(par_video_height);
    Py_DECREF(par_video_height);
    CHECK_OBJECT(par_video_min_dimension);
    Py_DECREF(par_video_min_dimension);
    CHECK_OBJECT(par_video_max_dimension);
    Py_DECREF(par_video_max_dimension);
    CHECK_OBJECT(par_video_pts_range);
    Py_DECREF(par_video_pts_range);
    CHECK_OBJECT(par_video_timebase_numerator);
    Py_DECREF(par_video_timebase_numerator);
    CHECK_OBJECT(par_video_timebase_denominator);
    Py_DECREF(par_video_timebase_denominator);
    CHECK_OBJECT(par_read_audio_stream);
    Py_DECREF(par_read_audio_stream);
    CHECK_OBJECT(par_audio_samples);
    Py_DECREF(par_audio_samples);
    CHECK_OBJECT(par_audio_channels);
    Py_DECREF(par_audio_channels);
    CHECK_OBJECT(par_audio_pts_range);
    Py_DECREF(par_audio_pts_range);
    CHECK_OBJECT(par_audio_timebase_numerator);
    Py_DECREF(par_audio_timebase_numerator);
    CHECK_OBJECT(par_audio_timebase_denominator);
    Py_DECREF(par_audio_timebase_denominator);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$io$_video_opt$$$function__10__read_video_timestamps_from_memory(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_video_data = python_pars[0];
    PyObject *var_result = NULL;
    PyObject *var__vframes = NULL;
    PyObject *var_vframe_pts = NULL;
    PyObject *var_vtimebase = NULL;
    PyObject *var_vfps = NULL;
    PyObject *var_vduration = NULL;
    PyObject *var__aframes = NULL;
    PyObject *var_aframe_pts = NULL;
    PyObject *var_atimebase = NULL;
    PyObject *var_asample_rate = NULL;
    PyObject *var_aduration = NULL;
    PyObject *var_info = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_10 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__element_6 = NULL;
    PyObject *tmp_tuple_unpack_1__element_7 = NULL;
    PyObject *tmp_tuple_unpack_1__element_8 = NULL;
    PyObject *tmp_tuple_unpack_1__element_9 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_3b809aecb3893f12034f793d2ffb60ba;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_3b809aecb3893f12034f793d2ffb60ba = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3b809aecb3893f12034f793d2ffb60ba)) {
        Py_XDECREF(cache_frame_3b809aecb3893f12034f793d2ffb60ba);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3b809aecb3893f12034f793d2ffb60ba == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3b809aecb3893f12034f793d2ffb60ba = MAKE_FUNCTION_FRAME(codeobj_3b809aecb3893f12034f793d2ffb60ba, module_torchvision$io$_video_opt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3b809aecb3893f12034f793d2ffb60ba->m_type_description == NULL);
    frame_3b809aecb3893f12034f793d2ffb60ba = cache_frame_3b809aecb3893f12034f793d2ffb60ba;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3b809aecb3893f12034f793d2ffb60ba);
    assert(Py_REFCNT(frame_3b809aecb3893f12034f793d2ffb60ba) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_video_data);
        tmp_isinstance_inst_1 = par_video_data;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[43]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "ooooooooooooo";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[44]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_video_data);
        tmp_kw_call_arg_value_0_1 = par_video_data;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 385;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[45]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 385;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_3b809aecb3893f12034f793d2ffb60ba->m_frame.f_lineno = 385;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[46]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_video_data;
            assert(old != NULL);
            par_video_data = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[29]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[30]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_video_data);
        tmp_args_element_value_1 = par_video_data;
        tmp_args_element_value_2 = mod_consts[14];
        tmp_args_element_value_3 = mod_consts[13];
        tmp_args_element_value_4 = mod_consts[13];
        tmp_args_element_value_5 = mod_consts[14];
        tmp_args_element_value_6 = mod_consts[14];
        tmp_args_element_value_7 = mod_consts[14];
        tmp_args_element_value_8 = mod_consts[14];
        tmp_args_element_value_9 = mod_consts[14];
        tmp_args_element_value_10 = mod_consts[21];
        tmp_args_element_value_11 = mod_consts[14];
        tmp_args_element_value_12 = mod_consts[13];
        tmp_args_element_value_13 = mod_consts[13];
        tmp_args_element_value_14 = mod_consts[14];
        tmp_args_element_value_15 = mod_consts[14];
        tmp_args_element_value_16 = mod_consts[14];
        tmp_args_element_value_17 = mod_consts[21];
        tmp_args_element_value_18 = mod_consts[14];
        tmp_args_element_value_19 = mod_consts[13];
        frame_3b809aecb3893f12034f793d2ffb60ba->m_frame.f_lineno = 386;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS19(
                tmp_called_instance_1,
                mod_consts[47],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_result);
        tmp_iter_arg_1 = var_result;
        tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_1, 0, 10);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 407;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_2, 1, 10);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 407;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_3, 2, 10);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 407;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_4, 3, 10);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 407;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_5, 4, 10);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 407;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_5 == NULL);
        tmp_tuple_unpack_1__element_5 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_6, 5, 10);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 407;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_6 == NULL);
        tmp_tuple_unpack_1__element_6 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_7, 6, 10);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 407;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_7 == NULL);
        tmp_tuple_unpack_1__element_7 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_8, 7, 10);
        if (tmp_assign_source_11 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 407;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_8 == NULL);
        tmp_tuple_unpack_1__element_8 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_9 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_9, 8, 10);
        if (tmp_assign_source_12 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 407;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_9 == NULL);
        tmp_tuple_unpack_1__element_9 = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_10 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_10, 9, 10);
        if (tmp_assign_source_13 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 407;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_10 == NULL);
        tmp_tuple_unpack_1__element_10 = tmp_assign_source_13;
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

                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 407;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[32];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooo";
            exception_lineno = 407;
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
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_7);
    tmp_tuple_unpack_1__element_7 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_8);
    tmp_tuple_unpack_1__element_8 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_9);
    tmp_tuple_unpack_1__element_9 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_10);
    tmp_tuple_unpack_1__element_10 = NULL;
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
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_1;
        assert(var__vframes == NULL);
        Py_INCREF(tmp_assign_source_14);
        var__vframes = tmp_assign_source_14;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_15 = tmp_tuple_unpack_1__element_2;
        assert(var_vframe_pts == NULL);
        Py_INCREF(tmp_assign_source_15);
        var_vframe_pts = tmp_assign_source_15;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_16 = tmp_tuple_unpack_1__element_3;
        assert(var_vtimebase == NULL);
        Py_INCREF(tmp_assign_source_16);
        var_vtimebase = tmp_assign_source_16;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_17 = tmp_tuple_unpack_1__element_4;
        assert(var_vfps == NULL);
        Py_INCREF(tmp_assign_source_17);
        var_vfps = tmp_assign_source_17;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_5);
        tmp_assign_source_18 = tmp_tuple_unpack_1__element_5;
        assert(var_vduration == NULL);
        Py_INCREF(tmp_assign_source_18);
        var_vduration = tmp_assign_source_18;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_6);
        tmp_assign_source_19 = tmp_tuple_unpack_1__element_6;
        assert(var__aframes == NULL);
        Py_INCREF(tmp_assign_source_19);
        var__aframes = tmp_assign_source_19;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;

    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_7);
        tmp_assign_source_20 = tmp_tuple_unpack_1__element_7;
        assert(var_aframe_pts == NULL);
        Py_INCREF(tmp_assign_source_20);
        var_aframe_pts = tmp_assign_source_20;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_7);
    tmp_tuple_unpack_1__element_7 = NULL;

    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_8);
        tmp_assign_source_21 = tmp_tuple_unpack_1__element_8;
        assert(var_atimebase == NULL);
        Py_INCREF(tmp_assign_source_21);
        var_atimebase = tmp_assign_source_21;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_8);
    tmp_tuple_unpack_1__element_8 = NULL;

    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_9);
        tmp_assign_source_22 = tmp_tuple_unpack_1__element_9;
        assert(var_asample_rate == NULL);
        Py_INCREF(tmp_assign_source_22);
        var_asample_rate = tmp_assign_source_22;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_9);
    tmp_tuple_unpack_1__element_9 = NULL;

    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_10);
        tmp_assign_source_23 = tmp_tuple_unpack_1__element_10;
        assert(var_aduration == NULL);
        Py_INCREF(tmp_assign_source_23);
        var_aduration = tmp_assign_source_23;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_10);
    tmp_tuple_unpack_1__element_10 = NULL;

    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_vtimebase);
        tmp_args_element_value_20 = var_vtimebase;
        CHECK_OBJECT(var_vfps);
        tmp_args_element_value_21 = var_vfps;
        CHECK_OBJECT(var_vduration);
        tmp_args_element_value_22 = var_vduration;
        CHECK_OBJECT(var_atimebase);
        tmp_args_element_value_23 = var_atimebase;
        CHECK_OBJECT(var_asample_rate);
        tmp_args_element_value_24 = var_asample_rate;
        CHECK_OBJECT(var_aduration);
        tmp_args_element_value_25 = var_aduration;
        frame_3b809aecb3893f12034f793d2ffb60ba->m_frame.f_lineno = 408;
        {
            PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25};
            tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_2, call_args);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_info == NULL);
        var_info = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(var_vframe_pts);
        tmp_called_instance_3 = var_vframe_pts;
        frame_3b809aecb3893f12034f793d2ffb60ba->m_frame.f_lineno = 410;
        tmp_called_instance_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[37]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_3b809aecb3893f12034f793d2ffb60ba->m_frame.f_lineno = 410;
        tmp_assign_source_25 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[38]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_vframe_pts;
            assert(old != NULL);
            var_vframe_pts = tmp_assign_source_25;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_called_instance_5;
        CHECK_OBJECT(var_aframe_pts);
        tmp_called_instance_5 = var_aframe_pts;
        frame_3b809aecb3893f12034f793d2ffb60ba->m_frame.f_lineno = 411;
        tmp_called_instance_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[37]);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_3b809aecb3893f12034f793d2ffb60ba->m_frame.f_lineno = 411;
        tmp_assign_source_26 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[38]);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_aframe_pts;
            assert(old != NULL);
            var_aframe_pts = tmp_assign_source_26;
            Py_DECREF(old);
        }

    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3b809aecb3893f12034f793d2ffb60ba, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3b809aecb3893f12034f793d2ffb60ba->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3b809aecb3893f12034f793d2ffb60ba, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3b809aecb3893f12034f793d2ffb60ba,
        type_description_1,
        par_video_data,
        var_result,
        var__vframes,
        var_vframe_pts,
        var_vtimebase,
        var_vfps,
        var_vduration,
        var__aframes,
        var_aframe_pts,
        var_atimebase,
        var_asample_rate,
        var_aduration,
        var_info
    );


    // Release cached frame if used for exception.
    if (frame_3b809aecb3893f12034f793d2ffb60ba == cache_frame_3b809aecb3893f12034f793d2ffb60ba) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3b809aecb3893f12034f793d2ffb60ba);
        cache_frame_3b809aecb3893f12034f793d2ffb60ba = NULL;
    }

    assertFrameObject(frame_3b809aecb3893f12034f793d2ffb60ba);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_vframe_pts);
        tmp_tuple_element_1 = var_vframe_pts;
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_aframe_pts);
        tmp_tuple_element_1 = var_aframe_pts;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_info);
        tmp_tuple_element_1 = var_info;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_video_data);
    Py_DECREF(par_video_data);
    par_video_data = NULL;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
    CHECK_OBJECT(var__vframes);
    Py_DECREF(var__vframes);
    var__vframes = NULL;
    CHECK_OBJECT(var_vframe_pts);
    Py_DECREF(var_vframe_pts);
    var_vframe_pts = NULL;
    CHECK_OBJECT(var_vtimebase);
    Py_DECREF(var_vtimebase);
    var_vtimebase = NULL;
    CHECK_OBJECT(var_vfps);
    Py_DECREF(var_vfps);
    var_vfps = NULL;
    CHECK_OBJECT(var_vduration);
    Py_DECREF(var_vduration);
    var_vduration = NULL;
    CHECK_OBJECT(var__aframes);
    Py_DECREF(var__aframes);
    var__aframes = NULL;
    CHECK_OBJECT(var_aframe_pts);
    Py_DECREF(var_aframe_pts);
    var_aframe_pts = NULL;
    CHECK_OBJECT(var_atimebase);
    Py_DECREF(var_atimebase);
    var_atimebase = NULL;
    CHECK_OBJECT(var_asample_rate);
    Py_DECREF(var_asample_rate);
    var_asample_rate = NULL;
    CHECK_OBJECT(var_aduration);
    Py_DECREF(var_aduration);
    var_aduration = NULL;
    CHECK_OBJECT(var_info);
    Py_DECREF(var_info);
    var_info = NULL;
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

    Py_XDECREF(par_video_data);
    par_video_data = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var__vframes);
    var__vframes = NULL;
    Py_XDECREF(var_vframe_pts);
    var_vframe_pts = NULL;
    Py_XDECREF(var_vtimebase);
    var_vtimebase = NULL;
    Py_XDECREF(var_vfps);
    var_vfps = NULL;
    Py_XDECREF(var_vduration);
    var_vduration = NULL;
    Py_XDECREF(var__aframes);
    var__aframes = NULL;
    Py_XDECREF(var_aframe_pts);
    var_aframe_pts = NULL;
    Py_XDECREF(var_atimebase);
    var_atimebase = NULL;
    Py_XDECREF(var_asample_rate);
    var_asample_rate = NULL;
    Py_XDECREF(var_aduration);
    var_aduration = NULL;
    Py_XDECREF(var_info);
    var_info = NULL;
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


static PyObject *impl_torchvision$io$_video_opt$$$function__11__probe_video_from_memory(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_video_data = python_pars[0];
    PyObject *var_result = NULL;
    PyObject *var_vtimebase = NULL;
    PyObject *var_vfps = NULL;
    PyObject *var_vduration = NULL;
    PyObject *var_atimebase = NULL;
    PyObject *var_asample_rate = NULL;
    PyObject *var_aduration = NULL;
    PyObject *var_info = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__element_6 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_3632336931008e36da9f39ad3a5a8f1b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_3632336931008e36da9f39ad3a5a8f1b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3632336931008e36da9f39ad3a5a8f1b)) {
        Py_XDECREF(cache_frame_3632336931008e36da9f39ad3a5a8f1b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3632336931008e36da9f39ad3a5a8f1b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3632336931008e36da9f39ad3a5a8f1b = MAKE_FUNCTION_FRAME(codeobj_3632336931008e36da9f39ad3a5a8f1b, module_torchvision$io$_video_opt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3632336931008e36da9f39ad3a5a8f1b->m_type_description == NULL);
    frame_3632336931008e36da9f39ad3a5a8f1b = cache_frame_3632336931008e36da9f39ad3a5a8f1b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3632336931008e36da9f39ad3a5a8f1b);
    assert(Py_REFCNT(frame_3632336931008e36da9f39ad3a5a8f1b) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_video_data);
        tmp_isinstance_inst_1 = par_video_data;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[43]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "ooooooooo";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[44]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_video_data);
        tmp_kw_call_arg_value_0_1 = par_video_data;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 423;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[45]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 423;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_3632336931008e36da9f39ad3a5a8f1b->m_frame.f_lineno = 423;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[46]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_video_data;
            assert(old != NULL);
            par_video_data = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[29]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[30]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_video_data);
        tmp_args_element_value_1 = par_video_data;
        frame_3632336931008e36da9f39ad3a5a8f1b->m_frame.f_lineno = 424;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[50], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_result);
        tmp_iter_arg_1 = var_result;
        tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_1, 0, 6);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 425;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_2, 1, 6);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 425;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_3, 2, 6);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 425;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_4, 3, 6);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 425;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_5, 4, 6);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 425;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_5 == NULL);
        tmp_tuple_unpack_1__element_5 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_6, 5, 6);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 425;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_6 == NULL);
        tmp_tuple_unpack_1__element_6 = tmp_assign_source_9;
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

                    type_description_1 = "ooooooooo";
                    exception_lineno = 425;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[41];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooo";
            exception_lineno = 425;
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
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;
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
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;
        assert(var_vtimebase == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_vtimebase = tmp_assign_source_10;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;
        assert(var_vfps == NULL);
        Py_INCREF(tmp_assign_source_11);
        var_vfps = tmp_assign_source_11;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_3;
        assert(var_vduration == NULL);
        Py_INCREF(tmp_assign_source_12);
        var_vduration = tmp_assign_source_12;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_4;
        assert(var_atimebase == NULL);
        Py_INCREF(tmp_assign_source_13);
        var_atimebase = tmp_assign_source_13;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_5);
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_5;
        assert(var_asample_rate == NULL);
        Py_INCREF(tmp_assign_source_14);
        var_asample_rate = tmp_assign_source_14;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_6);
        tmp_assign_source_15 = tmp_tuple_unpack_1__element_6;
        assert(var_aduration == NULL);
        Py_INCREF(tmp_assign_source_15);
        var_aduration = tmp_assign_source_15;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;

    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_vtimebase);
        tmp_args_element_value_2 = var_vtimebase;
        CHECK_OBJECT(var_vfps);
        tmp_args_element_value_3 = var_vfps;
        CHECK_OBJECT(var_vduration);
        tmp_args_element_value_4 = var_vduration;
        CHECK_OBJECT(var_atimebase);
        tmp_args_element_value_5 = var_atimebase;
        CHECK_OBJECT(var_asample_rate);
        tmp_args_element_value_6 = var_asample_rate;
        CHECK_OBJECT(var_aduration);
        tmp_args_element_value_7 = var_aduration;
        frame_3632336931008e36da9f39ad3a5a8f1b->m_frame.f_lineno = 426;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_2, call_args);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_info == NULL);
        var_info = tmp_assign_source_16;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3632336931008e36da9f39ad3a5a8f1b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3632336931008e36da9f39ad3a5a8f1b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3632336931008e36da9f39ad3a5a8f1b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3632336931008e36da9f39ad3a5a8f1b,
        type_description_1,
        par_video_data,
        var_result,
        var_vtimebase,
        var_vfps,
        var_vduration,
        var_atimebase,
        var_asample_rate,
        var_aduration,
        var_info
    );


    // Release cached frame if used for exception.
    if (frame_3632336931008e36da9f39ad3a5a8f1b == cache_frame_3632336931008e36da9f39ad3a5a8f1b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3632336931008e36da9f39ad3a5a8f1b);
        cache_frame_3632336931008e36da9f39ad3a5a8f1b = NULL;
    }

    assertFrameObject(frame_3632336931008e36da9f39ad3a5a8f1b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_info);
    tmp_return_value = var_info;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_video_data);
    Py_DECREF(par_video_data);
    par_video_data = NULL;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
    CHECK_OBJECT(var_vtimebase);
    Py_DECREF(var_vtimebase);
    var_vtimebase = NULL;
    CHECK_OBJECT(var_vfps);
    Py_DECREF(var_vfps);
    var_vfps = NULL;
    CHECK_OBJECT(var_vduration);
    Py_DECREF(var_vduration);
    var_vduration = NULL;
    CHECK_OBJECT(var_atimebase);
    Py_DECREF(var_atimebase);
    var_atimebase = NULL;
    CHECK_OBJECT(var_asample_rate);
    Py_DECREF(var_asample_rate);
    var_asample_rate = NULL;
    CHECK_OBJECT(var_aduration);
    Py_DECREF(var_aduration);
    var_aduration = NULL;
    CHECK_OBJECT(var_info);
    Py_DECREF(var_info);
    var_info = NULL;
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

    Py_XDECREF(par_video_data);
    par_video_data = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_vtimebase);
    var_vtimebase = NULL;
    Py_XDECREF(var_vfps);
    var_vfps = NULL;
    Py_XDECREF(var_vduration);
    var_vduration = NULL;
    Py_XDECREF(var_atimebase);
    var_atimebase = NULL;
    Py_XDECREF(var_asample_rate);
    var_asample_rate = NULL;
    Py_XDECREF(var_aduration);
    var_aduration = NULL;
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


static PyObject *impl_torchvision$io$_video_opt$$$function__12__convert_to_sec(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_start_pts = python_pars[0];
    PyObject *par_end_pts = python_pars[1];
    PyObject *par_pts_unit = python_pars[2];
    PyObject *par_time_base = python_pars[3];
    struct Nuitka_FrameObject *frame_b5b89697f6cdabfbc72446e66e77414d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b5b89697f6cdabfbc72446e66e77414d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b5b89697f6cdabfbc72446e66e77414d)) {
        Py_XDECREF(cache_frame_b5b89697f6cdabfbc72446e66e77414d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b5b89697f6cdabfbc72446e66e77414d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b5b89697f6cdabfbc72446e66e77414d = MAKE_FUNCTION_FRAME(codeobj_b5b89697f6cdabfbc72446e66e77414d, module_torchvision$io$_video_opt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b5b89697f6cdabfbc72446e66e77414d->m_type_description == NULL);
    frame_b5b89697f6cdabfbc72446e66e77414d = cache_frame_b5b89697f6cdabfbc72446e66e77414d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b5b89697f6cdabfbc72446e66e77414d);
    assert(Py_REFCNT(frame_b5b89697f6cdabfbc72446e66e77414d) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_pts_unit);
        tmp_cmp_expr_left_1 = par_pts_unit;
        tmp_cmp_expr_right_1 = mod_consts[52];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "oooo";
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
        PyObject *tmp_float_arg_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        CHECK_OBJECT(par_start_pts);
        tmp_mult_expr_left_1 = par_start_pts;
        CHECK_OBJECT(par_time_base);
        tmp_mult_expr_right_1 = par_time_base;
        tmp_float_arg_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_float_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = TO_FLOAT(tmp_float_arg_1);
        Py_DECREF(tmp_float_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_start_pts;
            assert(old != NULL);
            par_start_pts = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_float_arg_2;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        CHECK_OBJECT(par_end_pts);
        tmp_mult_expr_left_2 = par_end_pts;
        CHECK_OBJECT(par_time_base);
        tmp_mult_expr_right_2 = par_time_base;
        tmp_float_arg_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_float_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = TO_FLOAT(tmp_float_arg_2);
        Py_DECREF(tmp_float_arg_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_end_pts;
            assert(old != NULL);
            par_end_pts = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = mod_consts[53];
        {
            PyObject *old = par_pts_unit;
            assert(old != NULL);
            par_pts_unit = tmp_assign_source_3;
            Py_INCREF(par_pts_unit);
            Py_DECREF(old);
        }

    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b5b89697f6cdabfbc72446e66e77414d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b5b89697f6cdabfbc72446e66e77414d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b5b89697f6cdabfbc72446e66e77414d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b5b89697f6cdabfbc72446e66e77414d,
        type_description_1,
        par_start_pts,
        par_end_pts,
        par_pts_unit,
        par_time_base
    );


    // Release cached frame if used for exception.
    if (frame_b5b89697f6cdabfbc72446e66e77414d == cache_frame_b5b89697f6cdabfbc72446e66e77414d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b5b89697f6cdabfbc72446e66e77414d);
        cache_frame_b5b89697f6cdabfbc72446e66e77414d = NULL;
    }

    assertFrameObject(frame_b5b89697f6cdabfbc72446e66e77414d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_start_pts);
        tmp_tuple_element_1 = par_start_pts;
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_end_pts);
        tmp_tuple_element_1 = par_end_pts;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_pts_unit);
        tmp_tuple_element_1 = par_pts_unit;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_start_pts);
    Py_DECREF(par_start_pts);
    par_start_pts = NULL;
    CHECK_OBJECT(par_end_pts);
    Py_DECREF(par_end_pts);
    par_end_pts = NULL;
    CHECK_OBJECT(par_pts_unit);
    Py_DECREF(par_pts_unit);
    par_pts_unit = NULL;
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

    Py_XDECREF(par_start_pts);
    par_start_pts = NULL;
    CHECK_OBJECT(par_end_pts);
    Py_DECREF(par_end_pts);
    par_end_pts = NULL;
    CHECK_OBJECT(par_pts_unit);
    Py_DECREF(par_pts_unit);
    par_pts_unit = NULL;
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
    CHECK_OBJECT(par_time_base);
    Py_DECREF(par_time_base);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_time_base);
    Py_DECREF(par_time_base);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$io$_video_opt$$$function__13__read_video(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_filename = python_pars[0];
    PyObject *par_start_pts = python_pars[1];
    PyObject *par_end_pts = python_pars[2];
    struct Nuitka_CellObject *par_pts_unit = Nuitka_Cell_New1(python_pars[3]);
    PyObject *var_info = NULL;
    PyObject *var_has_video = NULL;
    PyObject *var_has_audio = NULL;
    PyObject *var_video_pts_range = NULL;
    PyObject *var_video_timebase = NULL;
    PyObject *var_audio_pts_range = NULL;
    PyObject *var_audio_timebase = NULL;
    PyObject *var_time_base = NULL;
    struct Nuitka_CellObject *var_start_pts_sec = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_end_pts_sec = Nuitka_Cell_Empty();
    PyObject *var_get_pts = NULL;
    PyObject *var_vframes = NULL;
    PyObject *var_aframes = NULL;
    PyObject *var__info = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_8e833dfdbfddfd4b59fc7e9690482504;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8e833dfdbfddfd4b59fc7e9690482504 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_end_pts);
        tmp_cmp_expr_left_1 = par_end_pts;
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
        tmp_assign_source_1 = mod_consts[54];
        {
            PyObject *old = par_end_pts;
            assert(old != NULL);
            par_end_pts = tmp_assign_source_1;
            Py_INCREF(par_end_pts);
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    // Tried code:
    if (isFrameUnusable(cache_frame_8e833dfdbfddfd4b59fc7e9690482504)) {
        Py_XDECREF(cache_frame_8e833dfdbfddfd4b59fc7e9690482504);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8e833dfdbfddfd4b59fc7e9690482504 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8e833dfdbfddfd4b59fc7e9690482504 = MAKE_FUNCTION_FRAME(codeobj_8e833dfdbfddfd4b59fc7e9690482504, module_torchvision$io$_video_opt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8e833dfdbfddfd4b59fc7e9690482504->m_type_description == NULL);
    frame_8e833dfdbfddfd4b59fc7e9690482504 = cache_frame_8e833dfdbfddfd4b59fc7e9690482504;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8e833dfdbfddfd4b59fc7e9690482504);
    assert(Py_REFCNT(frame_8e833dfdbfddfd4b59fc7e9690482504) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(Nuitka_Cell_GET(par_pts_unit));
        tmp_cmp_expr_left_2 = Nuitka_Cell_GET(par_pts_unit);
        tmp_cmp_expr_right_2 = mod_consts[52];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "ooocooooooooccoooo";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "ooocooooooooccoooo";
            goto frame_exception_exit_1;
        }
        frame_8e833dfdbfddfd4b59fc7e9690482504->m_frame.f_lineno = 450;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[56],
            PyTuple_GET_ITEM(mod_consts[57], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "ooocooooooooccoooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "ooocooooooooccoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_filename);
        tmp_args_element_value_1 = par_filename;
        frame_8e833dfdbfddfd4b59fc7e9690482504->m_frame.f_lineno = 455;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "ooocooooooooccoooo";
            goto frame_exception_exit_1;
        }
        assert(var_info == NULL);
        var_info = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_info);
        tmp_expression_value_1 = var_info;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "ooocooooooooccoooo";
            goto frame_exception_exit_1;
        }
        assert(var_has_video == NULL);
        var_has_video = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_info);
        tmp_expression_value_2 = var_info;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[9]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_1 = "ooocooooooooccoooo";
            goto frame_exception_exit_1;
        }
        assert(var_has_audio == NULL);
        var_has_audio = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[59];
        assert(var_video_pts_range == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_video_pts_range = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_assign_source_6 == NULL)) {
            tmp_assign_source_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "ooocooooooooccoooo";
            goto frame_exception_exit_1;
        }
        assert(var_video_timebase == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_video_timebase = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[59];
        assert(var_audio_pts_range == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_audio_pts_range = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_assign_source_8 == NULL)) {
            tmp_assign_source_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "ooocooooooooccoooo";
            goto frame_exception_exit_1;
        }
        assert(var_audio_timebase == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_audio_timebase = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_assign_source_9 == NULL)) {
            tmp_assign_source_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "ooocooooooooccoooo";
            goto frame_exception_exit_1;
        }
        assert(var_time_base == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_time_base = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_has_video);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_has_video);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "ooocooooooooccoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "ooocooooooooccoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_info);
        tmp_expression_value_4 = var_info;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[5]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "ooocooooooooccoooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[0]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "ooocooooooooccoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_info);
        tmp_expression_value_6 = var_info;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[5]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 466;
            type_description_1 = "ooocooooooooccoooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[1]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 466;
            type_description_1 = "ooocooooooooccoooo";
            goto frame_exception_exit_1;
        }
        frame_8e833dfdbfddfd4b59fc7e9690482504->m_frame.f_lineno = 466;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "ooocooooooooccoooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_video_timebase;
            assert(old != NULL);
            var_video_timebase = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(var_video_timebase);
        tmp_assign_source_11 = var_video_timebase;
        {
            PyObject *old = var_time_base;
            assert(old != NULL);
            var_time_base = tmp_assign_source_11;
            Py_INCREF(var_time_base);
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_has_audio);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_has_audio);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "ooocooooooooccoooo";
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
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "ooocooooooooccoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_info);
        tmp_expression_value_8 = var_info;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[10]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "ooocooooooooccoooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[0]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "ooocooooooooccoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_info);
        tmp_expression_value_10 = var_info;
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[10]);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 470;
            type_description_1 = "ooocooooooooccoooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[1]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 470;
            type_description_1 = "ooocooooooooccoooo";
            goto frame_exception_exit_1;
        }
        frame_8e833dfdbfddfd4b59fc7e9690482504->m_frame.f_lineno = 470;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "ooocooooooooccoooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_audio_timebase;
            assert(old != NULL);
            var_audio_timebase = tmp_assign_source_12;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_time_base);
        tmp_truth_name_3 = CHECK_IF_TRUE(var_time_base);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "ooocooooooooccoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(var_time_base);
        tmp_assign_source_13 = var_time_base;
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(var_audio_timebase);
        tmp_assign_source_13 = var_audio_timebase;
        condexpr_end_1:;
        {
            PyObject *old = var_time_base;
            assert(old != NULL);
            var_time_base = tmp_assign_source_13;
            Py_INCREF(var_time_base);
            Py_DECREF(old);
        }

    }
    branch_no_4:;
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "ooocooooooooccoooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_start_pts);
        tmp_args_element_value_6 = par_start_pts;
        CHECK_OBJECT(par_end_pts);
        tmp_args_element_value_7 = par_end_pts;
        CHECK_OBJECT(Nuitka_Cell_GET(par_pts_unit));
        tmp_args_element_value_8 = Nuitka_Cell_GET(par_pts_unit);
        CHECK_OBJECT(var_time_base);
        tmp_args_element_value_9 = var_time_base;
        frame_8e833dfdbfddfd4b59fc7e9690482504->m_frame.f_lineno = 474;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_4, call_args);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "ooocooooooooccoooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_14 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "ooocooooooooccoooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
        if (tmp_assign_source_15 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooocooooooooccoooo";
            exception_lineno = 474;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
        if (tmp_assign_source_16 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooocooooooooccoooo";
            exception_lineno = 474;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_17 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_17 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooocooooooooccoooo";
            exception_lineno = 474;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_17;
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

                    type_description_1 = "ooocooooooooccoooo";
                    exception_lineno = 474;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[63];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooocooooooooccoooo";
            exception_lineno = 474;
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
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_18 = tmp_tuple_unpack_1__element_1;
        assert(Nuitka_Cell_GET(var_start_pts_sec) == NULL);
        Py_INCREF(tmp_assign_source_18);
        PyCell_SET(var_start_pts_sec, tmp_assign_source_18);

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_19 = tmp_tuple_unpack_1__element_2;
        assert(Nuitka_Cell_GET(var_end_pts_sec) == NULL);
        Py_INCREF(tmp_assign_source_19);
        PyCell_SET(var_end_pts_sec, tmp_assign_source_19);

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_20 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = Nuitka_Cell_GET(par_pts_unit);
            PyCell_SET(par_pts_unit, tmp_assign_source_20);
            Py_INCREF(tmp_assign_source_20);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_21;
        struct Nuitka_CellObject *tmp_closure_1[3];

        tmp_closure_1[0] = var_end_pts_sec;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_pts_unit;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = var_start_pts_sec;
        Py_INCREF(tmp_closure_1[2]);

        tmp_assign_source_21 = MAKE_FUNCTION_torchvision$io$_video_opt$$$function__13__read_video$$$function__1_get_pts(tmp_closure_1);

        assert(var_get_pts == NULL);
        var_get_pts = tmp_assign_source_21;
    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_4;
        CHECK_OBJECT(var_has_video);
        tmp_truth_name_4 = CHECK_IF_TRUE(var_has_video);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
            type_description_1 = "ooocooooooooccoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(var_get_pts);
        tmp_called_value_5 = var_get_pts;
        if (var_video_timebase == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 488;
            type_description_1 = "ooocooooooooccoooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_10 = var_video_timebase;
        frame_8e833dfdbfddfd4b59fc7e9690482504->m_frame.f_lineno = 488;
        tmp_assign_source_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_10);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_1 = "ooocooooooooccoooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_video_pts_range;
            assert(old != NULL);
            var_video_pts_range = tmp_assign_source_22;
            Py_DECREF(old);
        }

    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_truth_name_5;
        CHECK_OBJECT(var_has_audio);
        tmp_truth_name_5 = CHECK_IF_TRUE(var_has_audio);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;
            type_description_1 = "ooocooooooooccoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_11;
        if (var_get_pts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 491;
            type_description_1 = "ooocooooooooccoooo";
            goto frame_exception_exit_1;
        }

        tmp_called_value_6 = var_get_pts;
        CHECK_OBJECT(var_audio_timebase);
        tmp_args_element_value_11 = var_audio_timebase;
        frame_8e833dfdbfddfd4b59fc7e9690482504->m_frame.f_lineno = 491;
        tmp_assign_source_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_11);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "ooocooooooooccoooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_audio_pts_range;
            assert(old != NULL);
            var_audio_pts_range = tmp_assign_source_23;
            Py_DECREF(old);
        }

    }
    branch_no_6:;
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_7;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_kw_call_dict_value_4_1;
        PyObject *tmp_kw_call_dict_value_5_1;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "ooocooooooooccoooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_filename);
        tmp_kw_call_arg_value_0_1 = par_filename;
        tmp_kw_call_dict_value_0_1 = Py_True;
        CHECK_OBJECT(var_video_pts_range);
        tmp_kw_call_dict_value_1_1 = var_video_pts_range;
        if (var_video_timebase == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 497;
            type_description_1 = "ooocooooooooccoooo";
            goto try_except_handler_4;
        }

        tmp_kw_call_dict_value_2_1 = var_video_timebase;
        tmp_kw_call_dict_value_3_1 = Py_True;
        CHECK_OBJECT(var_audio_pts_range);
        tmp_kw_call_dict_value_4_1 = var_audio_pts_range;
        if (var_audio_timebase == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 500;
            type_description_1 = "ooocooooooooccoooo";
            goto try_except_handler_4;
        }

        tmp_kw_call_dict_value_5_1 = var_audio_timebase;
        frame_8e833dfdbfddfd4b59fc7e9690482504->m_frame.f_lineno = 493;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[6] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1};
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_7, args, kw_values, mod_consts[67]);
        }

        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "ooocooooooooccoooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_24 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "ooocooooooooccoooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_24;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_25 = UNPACK_NEXT(tmp_unpack_4, 0, 3);
        if (tmp_assign_source_25 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooocooooooooccoooo";
            exception_lineno = 493;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_26 = UNPACK_NEXT(tmp_unpack_5, 1, 3);
        if (tmp_assign_source_26 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooocooooooooccoooo";
            exception_lineno = 493;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_27 = UNPACK_NEXT(tmp_unpack_6, 2, 3);
        if (tmp_assign_source_27 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooocooooooooccoooo";
            exception_lineno = 493;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_3 == NULL);
        tmp_tuple_unpack_2__element_3 = tmp_assign_source_27;
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

                    type_description_1 = "ooocooooooooccoooo";
                    exception_lineno = 493;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[63];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooocooooooooccoooo";
            exception_lineno = 493;
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
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_28 = tmp_tuple_unpack_2__element_1;
        assert(var_vframes == NULL);
        Py_INCREF(tmp_assign_source_28);
        var_vframes = tmp_assign_source_28;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_29 = tmp_tuple_unpack_2__element_2;
        assert(var_aframes == NULL);
        Py_INCREF(tmp_assign_source_29);
        var_aframes = tmp_assign_source_29;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_30;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
        tmp_assign_source_30 = tmp_tuple_unpack_2__element_3;
        {
            PyObject *old = var_info;
            assert(old != NULL);
            var_info = tmp_assign_source_30;
            Py_INCREF(var_info);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_DICT_EMPTY();
        assert(var__info == NULL);
        var__info = tmp_assign_source_31;
    }
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_6;
        CHECK_OBJECT(var_has_video);
        tmp_truth_name_6 = CHECK_IF_TRUE(var_has_video);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;
            type_description_1 = "ooocooooooooccoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(var_info);
        tmp_expression_value_11 = var_info;
        tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[8]);
        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "ooocooooooooccoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__info);
        tmp_dictset_dict = var__info;
        tmp_dictset_key = mod_consts[8];
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
    }
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_7;
        CHECK_OBJECT(var_has_audio);
        tmp_truth_name_7 = CHECK_IF_TRUE(var_has_audio);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;
            type_description_1 = "ooocooooooooccoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_expression_value_12;
        if (var_info == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 506;
            type_description_1 = "ooocooooooooccoooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_12 = var_info;
        tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[12]);
        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;
            type_description_1 = "ooocooooooooccoooo";
            goto frame_exception_exit_1;
        }
        if (var__info == NULL) {
            Py_DECREF(tmp_dictset_value);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[69]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 506;
            type_description_1 = "ooocooooooooccoooo";
            goto frame_exception_exit_1;
        }

        tmp_dictset_dict = var__info;
        tmp_dictset_key = mod_consts[70];
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
    }
    branch_no_8:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_vframes);
        tmp_tuple_element_1 = var_vframes;
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_aframes);
        tmp_tuple_element_1 = var_aframes;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        if (var__info == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[69]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 508;
            type_description_1 = "ooocooooooooccoooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = var__info;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_8e833dfdbfddfd4b59fc7e9690482504, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8e833dfdbfddfd4b59fc7e9690482504->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8e833dfdbfddfd4b59fc7e9690482504, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8e833dfdbfddfd4b59fc7e9690482504,
        type_description_1,
        par_filename,
        par_start_pts,
        par_end_pts,
        par_pts_unit,
        var_info,
        var_has_video,
        var_has_audio,
        var_video_pts_range,
        var_video_timebase,
        var_audio_pts_range,
        var_audio_timebase,
        var_time_base,
        var_start_pts_sec,
        var_end_pts_sec,
        var_get_pts,
        var_vframes,
        var_aframes,
        var__info
    );


    // Release cached frame if used for exception.
    if (frame_8e833dfdbfddfd4b59fc7e9690482504 == cache_frame_8e833dfdbfddfd4b59fc7e9690482504) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8e833dfdbfddfd4b59fc7e9690482504);
        cache_frame_8e833dfdbfddfd4b59fc7e9690482504 = NULL;
    }

    assertFrameObject(frame_8e833dfdbfddfd4b59fc7e9690482504);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_end_pts);
    Py_DECREF(par_end_pts);
    par_end_pts = NULL;
    CHECK_OBJECT(par_pts_unit);
    Py_DECREF(par_pts_unit);
    par_pts_unit = NULL;
    Py_XDECREF(var_info);
    var_info = NULL;
    CHECK_OBJECT(var_has_video);
    Py_DECREF(var_has_video);
    var_has_video = NULL;
    CHECK_OBJECT(var_has_audio);
    Py_DECREF(var_has_audio);
    var_has_audio = NULL;
    CHECK_OBJECT(var_video_pts_range);
    Py_DECREF(var_video_pts_range);
    var_video_pts_range = NULL;
    Py_XDECREF(var_video_timebase);
    var_video_timebase = NULL;
    CHECK_OBJECT(var_audio_pts_range);
    Py_DECREF(var_audio_pts_range);
    var_audio_pts_range = NULL;
    Py_XDECREF(var_audio_timebase);
    var_audio_timebase = NULL;
    CHECK_OBJECT(var_time_base);
    Py_DECREF(var_time_base);
    var_time_base = NULL;
    CHECK_OBJECT(var_start_pts_sec);
    Py_DECREF(var_start_pts_sec);
    var_start_pts_sec = NULL;
    CHECK_OBJECT(var_end_pts_sec);
    Py_DECREF(var_end_pts_sec);
    var_end_pts_sec = NULL;
    Py_XDECREF(var_get_pts);
    var_get_pts = NULL;
    CHECK_OBJECT(var_vframes);
    Py_DECREF(var_vframes);
    var_vframes = NULL;
    CHECK_OBJECT(var_aframes);
    Py_DECREF(var_aframes);
    var_aframes = NULL;
    Py_XDECREF(var__info);
    var__info = NULL;
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

    CHECK_OBJECT(par_end_pts);
    Py_DECREF(par_end_pts);
    par_end_pts = NULL;
    CHECK_OBJECT(par_pts_unit);
    Py_DECREF(par_pts_unit);
    par_pts_unit = NULL;
    Py_XDECREF(var_info);
    var_info = NULL;
    Py_XDECREF(var_has_video);
    var_has_video = NULL;
    Py_XDECREF(var_has_audio);
    var_has_audio = NULL;
    Py_XDECREF(var_video_pts_range);
    var_video_pts_range = NULL;
    Py_XDECREF(var_video_timebase);
    var_video_timebase = NULL;
    Py_XDECREF(var_audio_pts_range);
    var_audio_pts_range = NULL;
    Py_XDECREF(var_audio_timebase);
    var_audio_timebase = NULL;
    Py_XDECREF(var_time_base);
    var_time_base = NULL;
    CHECK_OBJECT(var_start_pts_sec);
    Py_DECREF(var_start_pts_sec);
    var_start_pts_sec = NULL;
    CHECK_OBJECT(var_end_pts_sec);
    Py_DECREF(var_end_pts_sec);
    var_end_pts_sec = NULL;
    Py_XDECREF(var_get_pts);
    var_get_pts = NULL;
    Py_XDECREF(var_vframes);
    var_vframes = NULL;
    Py_XDECREF(var_aframes);
    var_aframes = NULL;
    Py_XDECREF(var__info);
    var__info = NULL;
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
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);
    CHECK_OBJECT(par_start_pts);
    Py_DECREF(par_start_pts);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);
    CHECK_OBJECT(par_start_pts);
    Py_DECREF(par_start_pts);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$io$_video_opt$$$function__13__read_video$$$function__1_get_pts(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_time_base = python_pars[0];
    PyObject *var_start_offset = NULL;
    PyObject *var_end_offset = NULL;
    struct Nuitka_FrameObject *frame_f4a2e484e194124eb3af8693f1591f7a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f4a2e484e194124eb3af8693f1591f7a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f4a2e484e194124eb3af8693f1591f7a)) {
        Py_XDECREF(cache_frame_f4a2e484e194124eb3af8693f1591f7a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f4a2e484e194124eb3af8693f1591f7a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f4a2e484e194124eb3af8693f1591f7a = MAKE_FUNCTION_FRAME(codeobj_f4a2e484e194124eb3af8693f1591f7a, module_torchvision$io$_video_opt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f4a2e484e194124eb3af8693f1591f7a->m_type_description == NULL);
    frame_f4a2e484e194124eb3af8693f1591f7a = cache_frame_f4a2e484e194124eb3af8693f1591f7a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f4a2e484e194124eb3af8693f1591f7a);
    assert(Py_REFCNT(frame_f4a2e484e194124eb3af8693f1591f7a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 477;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_1 = Nuitka_Cell_GET(self->m_closure[2]);
        assert(var_start_offset == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_start_offset = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 478;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_2 = Nuitka_Cell_GET(self->m_closure[0]);
        assert(var_end_offset == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_end_offset = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[73]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 479;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_cmp_expr_right_1 = mod_consts[53];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;
            type_description_1 = "oooccc";
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
        PyObject *tmp_assign_source_3;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[75]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 480;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_left_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_truediv_expr_left_1 = mod_consts[13];
        CHECK_OBJECT(par_time_base);
        tmp_truediv_expr_right_1 = par_time_base;
        tmp_mult_expr_right_1 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 480;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 480;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        frame_f4a2e484e194124eb3af8693f1591f7a->m_frame.f_lineno = 480;
        tmp_int_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_start_offset;
            assert(old != NULL);
            var_start_offset = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_end_offset);
        tmp_cmp_expr_left_2 = var_end_offset;
        tmp_cmp_expr_right_2 = mod_consts[54];
        tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_FLOAT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "oooccc";
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
        PyObject *tmp_assign_source_4;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[76]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 482;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_left_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_truediv_expr_left_2 = mod_consts[13];
        CHECK_OBJECT(par_time_base);
        tmp_truediv_expr_right_2 = par_time_base;
        tmp_mult_expr_right_2 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        if (tmp_mult_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 482;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_right_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 482;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        frame_f4a2e484e194124eb3af8693f1591f7a->m_frame.f_lineno = 482;
        tmp_int_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_int_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = PyNumber_Int(tmp_int_arg_2);
        Py_DECREF(tmp_int_arg_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_end_offset;
            assert(old != NULL);
            var_end_offset = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_end_offset);
        tmp_cmp_expr_left_3 = var_end_offset;
        tmp_cmp_expr_right_3 = mod_consts[54];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_FLOAT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;
            type_description_1 = "oooccc";
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
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[21];
        {
            PyObject *old = var_end_offset;
            assert(old != NULL);
            var_end_offset = tmp_assign_source_5;
            Py_INCREF(var_end_offset);
            Py_DECREF(old);
        }

    }
    branch_no_3:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f4a2e484e194124eb3af8693f1591f7a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f4a2e484e194124eb3af8693f1591f7a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f4a2e484e194124eb3af8693f1591f7a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f4a2e484e194124eb3af8693f1591f7a,
        type_description_1,
        par_time_base,
        var_start_offset,
        var_end_offset,
        self->m_closure[2],
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_f4a2e484e194124eb3af8693f1591f7a == cache_frame_f4a2e484e194124eb3af8693f1591f7a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f4a2e484e194124eb3af8693f1591f7a);
        cache_frame_f4a2e484e194124eb3af8693f1591f7a = NULL;
    }

    assertFrameObject(frame_f4a2e484e194124eb3af8693f1591f7a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_start_offset);
        tmp_tuple_element_1 = var_start_offset;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_end_offset);
        tmp_tuple_element_1 = var_end_offset;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_start_offset);
    Py_DECREF(var_start_offset);
    var_start_offset = NULL;
    CHECK_OBJECT(var_end_offset);
    Py_DECREF(var_end_offset);
    var_end_offset = NULL;
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

    Py_XDECREF(var_start_offset);
    var_start_offset = NULL;
    Py_XDECREF(var_end_offset);
    var_end_offset = NULL;
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
    CHECK_OBJECT(par_time_base);
    Py_DECREF(par_time_base);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_time_base);
    Py_DECREF(par_time_base);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$io$_video_opt$$$function__14__read_video_timestamps(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_filename = python_pars[0];
    PyObject *par_pts_unit = python_pars[1];
    PyObject *var_pts = NULL;
    PyObject *var__ = NULL;
    PyObject *var_info = NULL;
    PyObject *var_video_time_base = NULL;
    PyObject *var_video_fps = NULL;
    PyObject *outline_0_var_x = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_3afd195c274904ba3a1a59d7f6e18cdf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_FrameObject *frame_77b8ce21a72a93ab1ee0772875a59f7f_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_77b8ce21a72a93ab1ee0772875a59f7f_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_3afd195c274904ba3a1a59d7f6e18cdf = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3afd195c274904ba3a1a59d7f6e18cdf)) {
        Py_XDECREF(cache_frame_3afd195c274904ba3a1a59d7f6e18cdf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3afd195c274904ba3a1a59d7f6e18cdf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3afd195c274904ba3a1a59d7f6e18cdf = MAKE_FUNCTION_FRAME(codeobj_3afd195c274904ba3a1a59d7f6e18cdf, module_torchvision$io$_video_opt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3afd195c274904ba3a1a59d7f6e18cdf->m_type_description == NULL);
    frame_3afd195c274904ba3a1a59d7f6e18cdf = cache_frame_3afd195c274904ba3a1a59d7f6e18cdf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3afd195c274904ba3a1a59d7f6e18cdf);
    assert(Py_REFCNT(frame_3afd195c274904ba3a1a59d7f6e18cdf) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_pts_unit);
        tmp_cmp_expr_left_1 = par_pts_unit;
        tmp_cmp_expr_right_1 = mod_consts[52];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_3afd195c274904ba3a1a59d7f6e18cdf->m_frame.f_lineno = 515;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[56],
            PyTuple_GET_ITEM(mod_consts[57], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_filename);
        tmp_args_element_value_1 = par_filename;
        frame_3afd195c274904ba3a1a59d7f6e18cdf->m_frame.f_lineno = 521;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;
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
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
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
            exception_lineno = 521;
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
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
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
            exception_lineno = 521;
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
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 521;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
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
                    exception_lineno = 521;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[63];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooo";
            exception_lineno = 521;
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
        assert(var_pts == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_pts = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var__ == NULL);
        Py_INCREF(tmp_assign_source_6);
        var__ = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
        assert(var_info == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_info = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_pts_unit);
        tmp_cmp_expr_left_2 = par_pts_unit;
        tmp_cmp_expr_right_2 = mod_consts[53];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;
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
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_info);
        tmp_expression_value_2 = var_info;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_info);
        tmp_expression_value_4 = var_info;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[5]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 524;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[1]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 524;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_3afd195c274904ba3a1a59d7f6e18cdf->m_frame.f_lineno = 524;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_video_time_base == NULL);
        var_video_time_base = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        // Tried code:
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(var_pts);
            tmp_iter_arg_2 = var_pts;
            tmp_assign_source_10 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 525;
                type_description_1 = "ooooooo";
                goto try_except_handler_4;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_10;
        }
        {
            PyObject *tmp_assign_source_11;
            tmp_assign_source_11 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_11;
        }
        if (isFrameUnusable(cache_frame_77b8ce21a72a93ab1ee0772875a59f7f_2)) {
            Py_XDECREF(cache_frame_77b8ce21a72a93ab1ee0772875a59f7f_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_77b8ce21a72a93ab1ee0772875a59f7f_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_77b8ce21a72a93ab1ee0772875a59f7f_2 = MAKE_FUNCTION_FRAME(codeobj_77b8ce21a72a93ab1ee0772875a59f7f, module_torchvision$io$_video_opt, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_77b8ce21a72a93ab1ee0772875a59f7f_2->m_type_description == NULL);
        frame_77b8ce21a72a93ab1ee0772875a59f7f_2 = cache_frame_77b8ce21a72a93ab1ee0772875a59f7f_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_77b8ce21a72a93ab1ee0772875a59f7f_2);
        assert(Py_REFCNT(frame_77b8ce21a72a93ab1ee0772875a59f7f_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_12 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_12 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 525;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_12;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_13 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_x;
                outline_0_var_x = tmp_assign_source_13;
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

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[78]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 525;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }

            tmp_mult_expr_right_1 = var_video_time_base;
            tmp_append_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 525;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 525;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;
            type_description_2 = "oo";
            goto try_except_handler_5;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_9 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_9);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
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
        try_except_handler_5:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
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
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_2;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_return_exit_1:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_4;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_77b8ce21a72a93ab1ee0772875a59f7f_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_77b8ce21a72a93ab1ee0772875a59f7f_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_77b8ce21a72a93ab1ee0772875a59f7f_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_77b8ce21a72a93ab1ee0772875a59f7f_2,
            type_description_2,
            outline_0_var_x,
            var_video_time_base
        );


        // Release cached frame if used for exception.
        if (frame_77b8ce21a72a93ab1ee0772875a59f7f_2 == cache_frame_77b8ce21a72a93ab1ee0772875a59f7f_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_77b8ce21a72a93ab1ee0772875a59f7f_2);
            cache_frame_77b8ce21a72a93ab1ee0772875a59f7f_2 = NULL;
        }

        assertFrameObject(frame_77b8ce21a72a93ab1ee0772875a59f7f_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF(outline_0_var_x);
        outline_0_var_x = NULL;
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

        Py_XDECREF(outline_0_var_x);
        outline_0_var_x = NULL;
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
        exception_lineno = 525;
        goto frame_exception_exit_1;
        outline_result_1:;
        {
            PyObject *old = var_pts;
            assert(old != NULL);
            var_pts = tmp_assign_source_9;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_14;
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_expression_value_6;
        if (var_info == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 527;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = var_info;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[2]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 527;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        if (var_info == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 527;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = var_info;
        tmp_assign_source_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[8]);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_14 = Py_None;
        Py_INCREF(tmp_assign_source_14);
        condexpr_end_1:;
        assert(var_video_fps == NULL);
        var_video_fps = tmp_assign_source_14;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3afd195c274904ba3a1a59d7f6e18cdf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3afd195c274904ba3a1a59d7f6e18cdf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3afd195c274904ba3a1a59d7f6e18cdf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3afd195c274904ba3a1a59d7f6e18cdf,
        type_description_1,
        par_filename,
        par_pts_unit,
        var_pts,
        var__,
        var_info,
        var_video_time_base,
        var_video_fps
    );


    // Release cached frame if used for exception.
    if (frame_3afd195c274904ba3a1a59d7f6e18cdf == cache_frame_3afd195c274904ba3a1a59d7f6e18cdf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3afd195c274904ba3a1a59d7f6e18cdf);
        cache_frame_3afd195c274904ba3a1a59d7f6e18cdf = NULL;
    }

    assertFrameObject(frame_3afd195c274904ba3a1a59d7f6e18cdf);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_pts);
        tmp_tuple_element_1 = var_pts;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_video_fps);
        tmp_tuple_element_1 = var_video_fps;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_pts);
    Py_DECREF(var_pts);
    var_pts = NULL;
    CHECK_OBJECT(var__);
    Py_DECREF(var__);
    var__ = NULL;
    Py_XDECREF(var_info);
    var_info = NULL;
    Py_XDECREF(var_video_time_base);
    var_video_time_base = NULL;
    CHECK_OBJECT(var_video_fps);
    Py_DECREF(var_video_fps);
    var_video_fps = NULL;
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

    Py_XDECREF(var_pts);
    var_pts = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    Py_XDECREF(var_info);
    var_info = NULL;
    Py_XDECREF(var_video_time_base);
    var_video_time_base = NULL;
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



static PyObject *MAKE_FUNCTION_torchvision$io$_video_opt$$$function__10__read_video_timestamps_from_memory(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$io$_video_opt$$$function__10__read_video_timestamps_from_memory,
        mod_consts[142],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3b809aecb3893f12034f793d2ffb60ba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$io$_video_opt,
        mod_consts[49],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$io$_video_opt$$$function__11__probe_video_from_memory(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$io$_video_opt$$$function__11__probe_video_from_memory,
        mod_consts[143],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3632336931008e36da9f39ad3a5a8f1b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$io$_video_opt,
        mod_consts[51],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$io$_video_opt$$$function__12__convert_to_sec(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$io$_video_opt$$$function__12__convert_to_sec,
        mod_consts[62],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b5b89697f6cdabfbc72446e66e77414d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$io$_video_opt,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$io$_video_opt$$$function__13__read_video(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$io$_video_opt$$$function__13__read_video,
        mod_consts[149],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8e833dfdbfddfd4b59fc7e9690482504,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$io$_video_opt,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$io$_video_opt$$$function__13__read_video$$$function__1_get_pts(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$io$_video_opt$$$function__13__read_video$$$function__1_get_pts,
        mod_consts[64],
#if PYTHON_VERSION >= 0x300
        mod_consts[65],
#endif
        codeobj_f4a2e484e194124eb3af8693f1591f7a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torchvision$io$_video_opt,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$io$_video_opt$$$function__14__read_video_timestamps(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$io$_video_opt$$$function__14__read_video_timestamps,
        mod_consts[151],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3afd195c274904ba3a1a59d7f6e18cdf,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$io$_video_opt,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$io$_video_opt$$$function__1___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$io$_video_opt$$$function__1___init__,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        mod_consts[107],
#endif
        codeobj_11e27d199250456607c380341af1c67a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$io$_video_opt,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$io$_video_opt$$$function__2___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$io$_video_opt$$$function__2___init__,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        mod_consts[111],
#endif
        codeobj_689b1683f4539c878431d0d8310f2d26,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$io$_video_opt,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$io$_video_opt$$$function__3__validate_pts(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$io$_video_opt$$$function__3__validate_pts,
        mod_consts[27],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_073df8f645ec9de32511768721c995fd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$io$_video_opt,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$io$_video_opt$$$function__4__fill_info(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$io$_video_opt$$$function__4__fill_info,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ecd1eb222f2ea94e609bc68c9bd51b0f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$io$_video_opt,
        mod_consts[20],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$io$_video_opt$$$function__5__align_audio_frames(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$io$_video_opt$$$function__5__align_audio_frames,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_80e7e06f46a566878668d7aed6219885,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$io$_video_opt,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$io$_video_opt$$$function__6__read_video_from_file(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$io$_video_opt$$$function__6__read_video_from_file,
        mod_consts[66],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_52fa3905b9ad8d87a0290d8b56e9b0e0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$io$_video_opt,
        mod_consts[36],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$io$_video_opt$$$function__7__read_video_timestamps_from_file(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$io$_video_opt$$$function__7__read_video_timestamps_from_file,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2bcccd175b33e84896aab69305e0f519,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$io$_video_opt,
        mod_consts[39],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$io$_video_opt$$$function__8__probe_video_from_file(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$io$_video_opt$$$function__8__probe_video_from_file,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5d6592cc3fd0bbd50f68576bd28df6fb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$io$_video_opt,
        mod_consts[42],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$io$_video_opt$$$function__9__read_video_from_memory(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$io$_video_opt$$$function__9__read_video_from_memory,
        mod_consts[141],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bc92708dbd2eef26c8a914a080deb1e7,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$io$_video_opt,
        mod_consts[48],
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

function_impl_code functable_torchvision$io$_video_opt[] = {
    impl_torchvision$io$_video_opt$$$function__13__read_video$$$function__1_get_pts,
    impl_torchvision$io$_video_opt$$$function__1___init__,
    impl_torchvision$io$_video_opt$$$function__2___init__,
    impl_torchvision$io$_video_opt$$$function__3__validate_pts,
    impl_torchvision$io$_video_opt$$$function__4__fill_info,
    impl_torchvision$io$_video_opt$$$function__5__align_audio_frames,
    impl_torchvision$io$_video_opt$$$function__6__read_video_from_file,
    impl_torchvision$io$_video_opt$$$function__7__read_video_timestamps_from_file,
    impl_torchvision$io$_video_opt$$$function__8__probe_video_from_file,
    impl_torchvision$io$_video_opt$$$function__9__read_video_from_memory,
    impl_torchvision$io$_video_opt$$$function__10__read_video_timestamps_from_memory,
    impl_torchvision$io$_video_opt$$$function__11__probe_video_from_memory,
    impl_torchvision$io$_video_opt$$$function__12__convert_to_sec,
    impl_torchvision$io$_video_opt$$$function__13__read_video,
    impl_torchvision$io$_video_opt$$$function__14__read_video_timestamps,
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

    function_impl_code *current = functable_torchvision$io$_video_opt;
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

    if (offset > sizeof(functable_torchvision$io$_video_opt) || offset < 0) {
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
        functable_torchvision$io$_video_opt[offset],
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
        module_torchvision$io$_video_opt,
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
PyObject *modulecode_torchvision$io$_video_opt(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torchvision.io._video_opt");

    // Store the module for future use.
    module_torchvision$io$_video_opt = module;

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
        PRINT_STRING("torchvision.io._video_opt: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torchvision.io._video_opt: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torchvision.io._video_opt: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorchvision$io$_video_opt\n");

    moduledict_torchvision$io$_video_opt = MODULE_DICT(module_torchvision$io$_video_opt);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torchvision$io$_video_opt,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torchvision$io$_video_opt,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[172]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torchvision$io$_video_opt,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torchvision$io$_video_opt,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torchvision$io$_video_opt,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torchvision$io$_video_opt);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torchvision$io$_video_opt);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_f1d192cfb5bf29d1618ea4e8e04e29c7;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *locals_torchvision$io$_video_opt$$$class__1_Timebase_22 = NULL;
    PyObject *tmp_dictset_value;
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
    PyObject *locals_torchvision$io$_video_opt$$$class__2_VideoMetaData_35 = NULL;
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
        UPDATE_STRING_DICT0(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_2);
    }
    frame_f1d192cfb5bf29d1618ea4e8e04e29c7 = MAKE_MODULE_FRAME(codeobj_f1d192cfb5bf29d1618ea4e8e04e29c7, module_torchvision$io$_video_opt);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f1d192cfb5bf29d1618ea4e8e04e29c7);
    assert(Py_REFCNT(frame_f1d192cfb5bf29d1618ea4e8e04e29c7) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[82], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[83], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[74];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torchvision$io$_video_opt;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[14];
        frame_f1d192cfb5bf29d1618ea4e8e04e29c7->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[55];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torchvision$io$_video_opt;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[14];
        frame_f1d192cfb5bf29d1618ea4e8e04e29c7->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[85];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_torchvision$io$_video_opt;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[86];
        tmp_level_value_3 = mod_consts[14];
        frame_f1d192cfb5bf29d1618ea4e8e04e29c7->m_frame.f_lineno = 3;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torchvision$io$_video_opt,
                mod_consts[61],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[61]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_6);
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
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_torchvision$io$_video_opt,
                mod_consts[87],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[87]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_torchvision$io$_video_opt,
                mod_consts[88],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[88]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_torchvision$io$_video_opt,
                mod_consts[89],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[89]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_torchvision$io$_video_opt,
                mod_consts[90],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[90]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_torchvision$io$_video_opt,
                mod_consts[91],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[91]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_12);
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
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[28];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_torchvision$io$_video_opt;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[14];
        frame_f1d192cfb5bf29d1618ea4e8e04e29c7->m_frame.f_lineno = 6;
        tmp_assign_source_13 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[92];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_torchvision$io$_video_opt;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[93];
        tmp_level_value_5 = mod_consts[94];
        frame_f1d192cfb5bf29d1618ea4e8e04e29c7->m_frame.f_lineno = 8;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_torchvision$io$_video_opt,
                mod_consts[95],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[95]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_14);
    }
    // Tried code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        assert(!(tmp_called_value_1 == NULL));
        frame_f1d192cfb5bf29d1618ea4e8e04e29c7->m_frame.f_lineno = 12;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[96]);

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = Py_True;
        UPDATE_STRING_DICT0(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_15);
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_2 == NULL) {
        exception_keeper_tb_2 = MAKE_TRACEBACK(frame_f1d192cfb5bf29d1618ea4e8e04e29c7, exception_keeper_lineno_2);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_keeper_tb_2 = ADD_TRACEBACK(exception_keeper_tb_2, frame_f1d192cfb5bf29d1618ea4e8e04e29c7, exception_keeper_lineno_2);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = mod_consts[98];
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = Py_False;
        UPDATE_STRING_DICT0(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_16);
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 11;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_f1d192cfb5bf29d1618ea4e8e04e29c7->m_frame) frame_f1d192cfb5bf29d1618ea4e8e04e29c7->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_3;
    branch_end_1:;
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
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        frame_f1d192cfb5bf29d1618ea4e8e04e29c7->m_frame.f_lineno = 17;
        tmp_assign_source_17 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[4]);

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_19;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_torchvision$io$_video_opt$$$class__1_Timebase_22 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[99];
        tmp_res = PyDict_SetItem(locals_torchvision$io$_video_opt$$$class__1_Timebase_22, mod_consts[100], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[3];
        tmp_res = PyDict_SetItem(locals_torchvision$io$_video_opt$$$class__1_Timebase_22, mod_consts[101], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = DICT_COPY(mod_consts[102]);
        tmp_res = PyDict_SetItem(locals_torchvision$io$_video_opt$$$class__1_Timebase_22, mod_consts[103], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_LIST2(mod_consts[0],mod_consts[1]);
        tmp_res = PyDict_SetItem(locals_torchvision$io$_video_opt$$$class__1_Timebase_22, mod_consts[104], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_annotations_1;
            tmp_annotations_1 = DICT_COPY(mod_consts[105]);


            tmp_dictset_value = MAKE_FUNCTION_torchvision$io$_video_opt$$$function__1___init__(tmp_annotations_1);

            tmp_res = PyDict_SetItem(locals_torchvision$io$_video_opt$$$class__1_Timebase_22, mod_consts[106], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_3 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[3];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[108];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_torchvision$io$_video_opt$$$class__1_Timebase_22;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_f1d192cfb5bf29d1618ea4e8e04e29c7->m_frame.f_lineno = 22;
            tmp_assign_source_21 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto try_except_handler_6;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_21;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_20 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_20);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_torchvision$io$_video_opt$$$class__1_Timebase_22);
        locals_torchvision$io$_video_opt$$$class__1_Timebase_22 = NULL;
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

        Py_DECREF(locals_torchvision$io$_video_opt$$$class__1_Timebase_22);
        locals_torchvision$io$_video_opt$$$class__1_Timebase_22 = NULL;
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
        exception_lineno = 22;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_20);
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

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_23;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_torchvision$io$_video_opt$$$class__2_VideoMetaData_35 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        tmp_dictset_value = mod_consts[99];
        tmp_res = PyDict_SetItem(locals_torchvision$io$_video_opt$$$class__2_VideoMetaData_35, mod_consts[100], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[16];
        tmp_res = PyDict_SetItem(locals_torchvision$io$_video_opt$$$class__2_VideoMetaData_35, mod_consts[101], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_dict_key_1 = mod_consts[2];
            tmp_dict_value_1 = (PyObject *)&PyBool_Type;
            tmp_dictset_value = _PyDict_NewPresized( 8 );
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[5];
            tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_dict_value_1 == NULL)) {
                tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            assert(!(tmp_dict_value_1 == NULL));
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[7];
            tmp_dict_value_1 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[8];
            tmp_dict_value_1 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[9];
            tmp_dict_value_1 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[10];
            tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_dict_value_1 == NULL)) {
                tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            assert(!(tmp_dict_value_1 == NULL));
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[11];
            tmp_dict_value_1 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[12];
            tmp_dict_value_1 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_res = PyDict_SetItem(locals_torchvision$io$_video_opt$$$class__2_VideoMetaData_35, mod_consts[103], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        tmp_dictset_value = MAKE_LIST8(mod_consts[109]);
        tmp_res = PyDict_SetItem(locals_torchvision$io$_video_opt$$$class__2_VideoMetaData_35, mod_consts[104], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_annotations_2;
            tmp_annotations_2 = DICT_COPY(mod_consts[110]);


            tmp_dictset_value = MAKE_FUNCTION_torchvision$io$_video_opt$$$function__2___init__(tmp_annotations_2);

            tmp_res = PyDict_SetItem(locals_torchvision$io$_video_opt$$$class__2_VideoMetaData_35, mod_consts[106], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kwargs_value_2;
            tmp_called_value_4 = (PyObject *)&PyType_Type;
            tmp_tuple_element_2 = mod_consts[16];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[108];
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = locals_torchvision$io$_video_opt$$$class__2_VideoMetaData_35;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_2__class_decl_dict;
            frame_f1d192cfb5bf29d1618ea4e8e04e29c7->m_frame.f_lineno = 35;
            tmp_assign_source_25 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto try_except_handler_9;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_25;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_24 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_24);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_torchvision$io$_video_opt$$$class__2_VideoMetaData_35);
        locals_torchvision$io$_video_opt$$$class__2_VideoMetaData_35 = NULL;
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

        Py_DECREF(locals_torchvision$io$_video_opt$$$class__2_VideoMetaData_35);
        locals_torchvision$io$_video_opt$$$class__2_VideoMetaData_35 = NULL;
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
        exception_lineno = 35;
        goto try_except_handler_7;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_24);
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

    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_dict_key_2 = mod_consts[112];
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[113];
        tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[114];
        tmp_dict_value_2 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));


        tmp_assign_source_26 = MAKE_FUNCTION_torchvision$io$_video_opt$$$function__3__validate_pts(tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_expression_value_2;
        tmp_dict_key_3 = mod_consts[115];
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[43]);
        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = _PyDict_NewPresized( 7 );
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_expression_value_7;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[116];
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto dict_build_exception_1;
            }
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[43]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[117];
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto dict_build_exception_1;
            }
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[43]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[118];
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto dict_build_exception_1;
            }
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[43]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[119];
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;

                goto dict_build_exception_1;
            }
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[43]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[120];
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;

                goto dict_build_exception_1;
            }
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[43]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[114];
            tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_dict_value_3 == NULL)) {
                tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_4);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;


        tmp_assign_source_27 = MAKE_FUNCTION_torchvision$io$_video_opt$$$function__4__fill_info(tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_annotations_5;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_expression_value_8;
        tmp_dict_key_4 = mod_consts[35];
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[43]);
        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_annotations_5 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_9;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_expression_value_11;
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[121];
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
            }

            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto dict_build_exception_2;
            }
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[43]);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[122];
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[88]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_2 = mod_consts[113];
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_2);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[114];
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto dict_build_exception_2;
            }
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[43]);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

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


        tmp_assign_source_28 = MAKE_FUNCTION_torchvision$io$_video_opt$$$function__5__align_audio_frames(tmp_annotations_5);

        UPDATE_STRING_DICT1(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_annotations_6;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        tmp_tuple_element_3 = mod_consts[123];
        tmp_defaults_1 = MAKE_TUPLE_EMPTY(13);
        PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_3);
        tmp_tuple_element_3 = Py_True;
        PyTuple_SET_ITEM0(tmp_defaults_1, 1, tmp_tuple_element_3);
        tmp_tuple_element_3 = mod_consts[14];
        PyTuple_SET_ITEM0(tmp_defaults_1, 2, tmp_tuple_element_3);
        tmp_tuple_element_3 = mod_consts[14];
        PyTuple_SET_ITEM0(tmp_defaults_1, 3, tmp_tuple_element_3);
        tmp_tuple_element_3 = mod_consts[14];
        PyTuple_SET_ITEM0(tmp_defaults_1, 4, tmp_tuple_element_3);
        tmp_tuple_element_3 = mod_consts[14];
        PyTuple_SET_ITEM0(tmp_defaults_1, 5, tmp_tuple_element_3);
        tmp_tuple_element_3 = mod_consts[59];
        PyTuple_SET_ITEM0(tmp_defaults_1, 6, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_defaults_1, 7, tmp_tuple_element_3);
        tmp_tuple_element_3 = Py_True;
        PyTuple_SET_ITEM0(tmp_defaults_1, 8, tmp_tuple_element_3);
        tmp_tuple_element_3 = mod_consts[14];
        PyTuple_SET_ITEM0(tmp_defaults_1, 9, tmp_tuple_element_3);
        tmp_tuple_element_3 = mod_consts[14];
        PyTuple_SET_ITEM0(tmp_defaults_1, 10, tmp_tuple_element_3);
        tmp_tuple_element_3 = mod_consts[59];
        PyTuple_SET_ITEM0(tmp_defaults_1, 11, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_defaults_1, 12, tmp_tuple_element_3);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_defaults_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_dict_key_5 = mod_consts[124];
        tmp_dict_value_5 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_6 = _PyDict_NewPresized( 15 );
        {
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_expression_value_15;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[125];
            tmp_dict_value_5 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[126];
            tmp_dict_value_5 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[127];
            tmp_dict_value_5 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[128];
            tmp_dict_value_5 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[129];
            tmp_dict_value_5 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[130];
            tmp_dict_value_5 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[131];
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[88]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_3 = mod_consts[113];
            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_3);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[5];
            tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_dict_value_5 == NULL)) {
                tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
            }

            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[132];
            tmp_dict_value_5 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[133];
            tmp_dict_value_5 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[134];
            tmp_dict_value_5 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[122];
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[88]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_4 = mod_consts[113];
            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_4);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[10];
            tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_dict_value_5 == NULL)) {
                tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
            }

            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[114];
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[88]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto dict_build_exception_3;
            }
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto dict_build_exception_3;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[43]);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_5 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_16;
                PyTuple_SET_ITEM(tmp_subscript_value_5, 0, tmp_tuple_element_4);
                tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[28]);

                if (unlikely(tmp_expression_value_16 == NULL)) {
                    tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
                }

                if (tmp_expression_value_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 142;

                    goto tuple_build_exception_2;
                }
                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[43]);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 142;

                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_5, 1, tmp_tuple_element_4);
                tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[16]);

                if (unlikely(tmp_tuple_element_4 == NULL)) {
                    tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                }

                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 142;

                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM0(tmp_subscript_value_5, 2, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_subscript_value_5);
            goto dict_build_exception_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_5);
            Py_DECREF(tmp_subscript_value_5);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_defaults_1);
        Py_DECREF(tmp_annotations_6);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;


        tmp_assign_source_29 = MAKE_FUNCTION_torchvision$io$_video_opt$$$function__6__read_video_from_file(tmp_defaults_1, tmp_annotations_6);

        UPDATE_STRING_DICT1(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_annotations_7;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        tmp_dict_key_6 = mod_consts[124];
        tmp_dict_value_6 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_7 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_17;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_subscript_value_7;
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[114];
            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[88]);

            if (unlikely(tmp_expression_value_17 == NULL)) {
                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
            }

            if (tmp_expression_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto dict_build_exception_4;
            }
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_7 = (PyObject *)&PyLong_Type;
            tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_7);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_6 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_19;
                PyObject *tmp_subscript_value_8;
                PyTuple_SET_ITEM(tmp_subscript_value_6, 0, tmp_tuple_element_5);
                tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[87]);

                if (unlikely(tmp_expression_value_19 == NULL)) {
                    tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
                }

                if (tmp_expression_value_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 224;

                    goto tuple_build_exception_3;
                }
                tmp_subscript_value_8 = (PyObject *)&PyLong_Type;
                tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_8);
                if (tmp_tuple_element_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 224;

                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_6, 1, tmp_tuple_element_5);
                tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[16]);

                if (unlikely(tmp_tuple_element_5 == NULL)) {
                    tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                }

                if (tmp_tuple_element_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 224;

                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM0(tmp_subscript_value_6, 2, tmp_tuple_element_5);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_subscript_value_6);
            goto dict_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_6);
            Py_DECREF(tmp_subscript_value_6);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_4;
        // Exception handling pass through code for dict_build:
        dict_build_exception_4:;
        Py_DECREF(tmp_annotations_7);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_4:;


        tmp_assign_source_30 = MAKE_FUNCTION_torchvision$io$_video_opt$$$function__7__read_video_timestamps_from_file(tmp_annotations_7);

        UPDATE_STRING_DICT1(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_annotations_8;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        tmp_dict_key_7 = mod_consts[124];
        tmp_dict_value_7 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_8 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[114];
        tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_dict_value_7 == NULL)) {
            tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto dict_build_exception_5;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_5;
        // Exception handling pass through code for dict_build:
        dict_build_exception_5:;
        Py_DECREF(tmp_annotations_8);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_5:;


        tmp_assign_source_31 = MAKE_FUNCTION_torchvision$io$_video_opt$$$function__8__probe_video_from_file(tmp_annotations_8);

        UPDATE_STRING_DICT1(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_defaults_2;
        PyObject *tmp_annotations_9;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_expression_value_20;
        tmp_defaults_2 = mod_consts[135];
        tmp_dict_key_8 = mod_consts[136];
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[43]);
        if (tmp_dict_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        tmp_annotations_9 = _PyDict_NewPresized( 17 );
        {
            PyObject *tmp_expression_value_21;
            PyObject *tmp_subscript_value_9;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_subscript_value_10;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_subscript_value_11;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_expression_value_24;
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[125];
            tmp_dict_value_8 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[126];
            tmp_dict_value_8 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[127];
            tmp_dict_value_8 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[128];
            tmp_dict_value_8 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[129];
            tmp_dict_value_8 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[130];
            tmp_dict_value_8 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[131];
            tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[88]);

            if (unlikely(tmp_expression_value_21 == NULL)) {
                tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
            }

            if (tmp_expression_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;

                goto dict_build_exception_6;
            }
            tmp_subscript_value_9 = mod_consts[113];
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_9);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[137];
            tmp_dict_value_8 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[138];
            tmp_dict_value_8 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[132];
            tmp_dict_value_8 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[133];
            tmp_dict_value_8 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[134];
            tmp_dict_value_8 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[122];
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[88]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
            }

            if (tmp_expression_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;

                goto dict_build_exception_6;
            }
            tmp_subscript_value_10 = mod_consts[113];
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_10);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[139];
            tmp_dict_value_8 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[140];
            tmp_dict_value_8 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[114];
            tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[88]);

            if (unlikely(tmp_expression_value_23 == NULL)) {
                tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
            }

            if (tmp_expression_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;

                goto dict_build_exception_6;
            }
            tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_expression_value_24 == NULL)) {
                tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
            }

            if (tmp_expression_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;

                goto dict_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[43]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;

                goto dict_build_exception_6;
            }
            tmp_subscript_value_11 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_25;
                PyTuple_SET_ITEM(tmp_subscript_value_11, 0, tmp_tuple_element_6);
                tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[28]);

                if (unlikely(tmp_expression_value_25 == NULL)) {
                    tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
                }

                if (tmp_expression_value_25 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 286;

                    goto tuple_build_exception_4;
                }
                tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[43]);
                if (tmp_tuple_element_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 286;

                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_11, 1, tmp_tuple_element_6);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_subscript_value_11);
            goto dict_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_11);
            Py_DECREF(tmp_subscript_value_11);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_6;
        // Exception handling pass through code for dict_build:
        dict_build_exception_6:;
        Py_DECREF(tmp_annotations_9);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_6:;
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_32 = MAKE_FUNCTION_torchvision$io$_video_opt$$$function__9__read_video_from_memory(tmp_defaults_2, tmp_annotations_9);

        UPDATE_STRING_DICT1(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_annotations_10;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_expression_value_26;
        tmp_dict_key_9 = mod_consts[136];
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[43]);
        if (tmp_dict_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;

            goto frame_exception_exit_1;
        }
        tmp_annotations_10 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_27;
            PyObject *tmp_subscript_value_12;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_subscript_value_13;
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[114];
            tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[88]);

            if (unlikely(tmp_expression_value_27 == NULL)) {
                tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
            }

            if (tmp_expression_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 378;

                goto dict_build_exception_7;
            }
            tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_expression_value_28 == NULL)) {
                tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            if (tmp_expression_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 378;

                goto dict_build_exception_7;
            }
            tmp_subscript_value_13 = (PyObject *)&PyLong_Type;
            tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_13);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 378;

                goto dict_build_exception_7;
            }
            tmp_subscript_value_12 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_29;
                PyObject *tmp_subscript_value_14;
                PyTuple_SET_ITEM(tmp_subscript_value_12, 0, tmp_tuple_element_7);
                tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[87]);

                if (unlikely(tmp_expression_value_29 == NULL)) {
                    tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
                }

                if (tmp_expression_value_29 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 378;

                    goto tuple_build_exception_5;
                }
                tmp_subscript_value_14 = (PyObject *)&PyLong_Type;
                tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_14);
                if (tmp_tuple_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 378;

                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_12, 1, tmp_tuple_element_7);
                tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[16]);

                if (unlikely(tmp_tuple_element_7 == NULL)) {
                    tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                }

                if (tmp_tuple_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 378;

                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM0(tmp_subscript_value_12, 2, tmp_tuple_element_7);
            }
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_subscript_value_12);
            goto dict_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_12);
            Py_DECREF(tmp_subscript_value_12);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 378;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_7;
        // Exception handling pass through code for dict_build:
        dict_build_exception_7:;
        Py_DECREF(tmp_annotations_10);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_7:;


        tmp_assign_source_33 = MAKE_FUNCTION_torchvision$io$_video_opt$$$function__10__read_video_timestamps_from_memory(tmp_annotations_10);

        UPDATE_STRING_DICT1(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_annotations_11;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_expression_value_30;
        tmp_dict_key_10 = mod_consts[136];
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[43]);
        if (tmp_dict_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto frame_exception_exit_1;
        }
        tmp_annotations_11 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_10, tmp_dict_value_10);
        Py_DECREF(tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = mod_consts[114];
        tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_dict_value_10 == NULL)) {
            tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_dict_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;

            goto dict_build_exception_8;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_8;
        // Exception handling pass through code for dict_build:
        dict_build_exception_8:;
        Py_DECREF(tmp_annotations_11);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_8:;


        tmp_assign_source_34 = MAKE_FUNCTION_torchvision$io$_video_opt$$$function__11__probe_video_from_memory(tmp_annotations_11);

        UPDATE_STRING_DICT1(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_annotations_12;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_tuple_element_8;
        tmp_dict_key_11 = mod_consts[144];
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_8 = (PyObject *)&PyFloat_Type;
        tmp_subscript_value_15 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_15, 0, tmp_tuple_element_8);
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_15, 1, tmp_tuple_element_8);
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_subscript_value_15);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_15);
        Py_DECREF(tmp_subscript_value_15);
        if (tmp_dict_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;

            goto frame_exception_exit_1;
        }
        tmp_annotations_12 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_expression_value_32;
            PyObject *tmp_subscript_value_16;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_subscript_value_17;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_subscript_value_18;
            PyObject *tmp_tuple_element_11;
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[145];
            tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_value_32 == NULL)) {
                tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 431;

                goto dict_build_exception_9;
            }
            tmp_tuple_element_9 = (PyObject *)&PyFloat_Type;
            tmp_subscript_value_16 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_16, 0, tmp_tuple_element_9);
            tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_tuple_element_9 == NULL)) {
                tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
            }

            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 431;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_16, 1, tmp_tuple_element_9);
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_subscript_value_16);
            goto dict_build_exception_9;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_32, tmp_subscript_value_16);
            Py_DECREF(tmp_subscript_value_16);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 431;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[73];
            tmp_dict_value_11 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[146];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 431;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[114];
            tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[88]);

            if (unlikely(tmp_expression_value_33 == NULL)) {
                tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
            }

            if (tmp_expression_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;

                goto dict_build_exception_9;
            }
            tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_value_34 == NULL)) {
                tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;

                goto dict_build_exception_9;
            }
            tmp_tuple_element_11 = (PyObject *)&PyFloat_Type;
            tmp_subscript_value_18 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_18, 0, tmp_tuple_element_11);
            tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_tuple_element_11 == NULL)) {
                tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
            }

            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_18, 1, tmp_tuple_element_11);
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_subscript_value_18);
            goto dict_build_exception_9;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_34, tmp_subscript_value_18);
            Py_DECREF(tmp_subscript_value_18);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;

                goto dict_build_exception_9;
            }
            tmp_subscript_value_17 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_35;
                PyObject *tmp_subscript_value_19;
                PyObject *tmp_tuple_element_12;
                PyTuple_SET_ITEM(tmp_subscript_value_17, 0, tmp_tuple_element_10);
                tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[91]);

                if (unlikely(tmp_expression_value_35 == NULL)) {
                    tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
                }

                if (tmp_expression_value_35 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 432;

                    goto tuple_build_exception_9;
                }
                tmp_tuple_element_12 = (PyObject *)&PyFloat_Type;
                tmp_subscript_value_19 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_subscript_value_19, 0, tmp_tuple_element_12);
                tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[61]);

                if (unlikely(tmp_tuple_element_12 == NULL)) {
                    tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
                }

                if (tmp_tuple_element_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 432;

                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM0(tmp_subscript_value_19, 1, tmp_tuple_element_12);
                goto tuple_build_noexception_9;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_10:;
                Py_DECREF(tmp_subscript_value_19);
                goto tuple_build_exception_9;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_9:;
                tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_35, tmp_subscript_value_19);
                Py_DECREF(tmp_subscript_value_19);
                if (tmp_tuple_element_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 432;

                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_17, 1, tmp_tuple_element_10);
                tmp_tuple_element_10 = (PyObject *)&PyUnicode_Type;
                PyTuple_SET_ITEM0(tmp_subscript_value_17, 2, tmp_tuple_element_10);
            }
            goto tuple_build_noexception_10;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_9:;
            Py_DECREF(tmp_subscript_value_17);
            goto dict_build_exception_9;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_10:;
            tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_33, tmp_subscript_value_17);
            Py_DECREF(tmp_subscript_value_17);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_9;
        // Exception handling pass through code for dict_build:
        dict_build_exception_9:;
        Py_DECREF(tmp_annotations_12);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_9:;


        tmp_assign_source_35 = MAKE_FUNCTION_torchvision$io$_video_opt$$$function__12__convert_to_sec(tmp_annotations_12);

        UPDATE_STRING_DICT1(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_defaults_3;
        PyObject *tmp_annotations_13;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        tmp_defaults_3 = mod_consts[147];
        tmp_dict_key_12 = mod_consts[124];
        tmp_dict_value_12 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_13 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_expression_value_36;
            PyObject *tmp_subscript_value_20;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_expression_value_37;
            PyObject *tmp_subscript_value_21;
            PyObject *tmp_expression_value_38;
            PyObject *tmp_subscript_value_22;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_expression_value_39;
            PyObject *tmp_subscript_value_23;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_expression_value_40;
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[144];
            tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_value_36 == NULL)) {
                tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 442;

                goto dict_build_exception_10;
            }
            tmp_tuple_element_13 = (PyObject *)&PyFloat_Type;
            tmp_subscript_value_20 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_20, 0, tmp_tuple_element_13);
            tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_tuple_element_13 == NULL)) {
                tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
            }

            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 442;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_20, 1, tmp_tuple_element_13);
            goto tuple_build_noexception_11;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_11:;
            Py_DECREF(tmp_subscript_value_20);
            goto dict_build_exception_10;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_11:;
            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_36, tmp_subscript_value_20);
            Py_DECREF(tmp_subscript_value_20);
            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 442;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[145];
            tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_37 == NULL)) {
                tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 443;

                goto dict_build_exception_10;
            }
            tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_value_38 == NULL)) {
                tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 443;

                goto dict_build_exception_10;
            }
            tmp_tuple_element_14 = (PyObject *)&PyFloat_Type;
            tmp_subscript_value_22 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_22, 0, tmp_tuple_element_14);
            tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_tuple_element_14 == NULL)) {
                tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
            }

            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 443;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_22, 1, tmp_tuple_element_14);
            goto tuple_build_noexception_12;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_12:;
            Py_DECREF(tmp_subscript_value_22);
            goto dict_build_exception_10;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_12:;
            tmp_subscript_value_21 = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_22);
            Py_DECREF(tmp_subscript_value_22);
            if (tmp_subscript_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 443;

                goto dict_build_exception_10;
            }
            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_21);
            Py_DECREF(tmp_subscript_value_21);
            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 443;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[73];
            tmp_dict_value_12 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[114];
            tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[88]);

            if (unlikely(tmp_expression_value_39 == NULL)) {
                tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
            }

            if (tmp_expression_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 445;

                goto dict_build_exception_10;
            }
            tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_expression_value_40 == NULL)) {
                tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
            }

            if (tmp_expression_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 445;

                goto dict_build_exception_10;
            }
            tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[43]);
            if (tmp_tuple_element_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 445;

                goto dict_build_exception_10;
            }
            tmp_subscript_value_23 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_41;
                PyObject *tmp_expression_value_42;
                PyObject *tmp_subscript_value_24;
                PyTuple_SET_ITEM(tmp_subscript_value_23, 0, tmp_tuple_element_15);
                tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[28]);

                if (unlikely(tmp_expression_value_41 == NULL)) {
                    tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
                }

                if (tmp_expression_value_41 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 445;

                    goto tuple_build_exception_13;
                }
                tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[43]);
                if (tmp_tuple_element_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 445;

                    goto tuple_build_exception_13;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_23, 1, tmp_tuple_element_15);
                tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[89]);

                if (unlikely(tmp_expression_value_42 == NULL)) {
                    tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
                }

                if (tmp_expression_value_42 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 445;

                    goto tuple_build_exception_13;
                }
                tmp_subscript_value_24 = mod_consts[148];
                tmp_tuple_element_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_42, tmp_subscript_value_24);
                if (tmp_tuple_element_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 445;

                    goto tuple_build_exception_13;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_23, 2, tmp_tuple_element_15);
            }
            goto tuple_build_noexception_13;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_13:;
            Py_DECREF(tmp_subscript_value_23);
            goto dict_build_exception_10;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_13:;
            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_39, tmp_subscript_value_23);
            Py_DECREF(tmp_subscript_value_23);
            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 445;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_10;
        // Exception handling pass through code for dict_build:
        dict_build_exception_10:;
        Py_DECREF(tmp_annotations_13);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_10:;
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_36 = MAKE_FUNCTION_torchvision$io$_video_opt$$$function__13__read_video(tmp_defaults_3, tmp_annotations_13);

        UPDATE_STRING_DICT1(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_defaults_4;
        PyObject *tmp_annotations_14;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        tmp_defaults_4 = mod_consts[150];
        tmp_dict_key_13 = mod_consts[124];
        tmp_dict_value_13 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_14 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_43;
            PyObject *tmp_subscript_value_25;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_expression_value_44;
            PyObject *tmp_subscript_value_26;
            PyObject *tmp_tuple_element_17;
            PyObject *tmp_expression_value_45;
            PyObject *tmp_subscript_value_27;
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_13, tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[73];
            tmp_dict_value_13 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_13, tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[114];
            tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[88]);

            if (unlikely(tmp_expression_value_43 == NULL)) {
                tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
            }

            if (tmp_expression_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 513;

                goto dict_build_exception_11;
            }
            tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_value_44 == NULL)) {
                tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 513;

                goto dict_build_exception_11;
            }
            tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_expression_value_45 == NULL)) {
                tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            if (tmp_expression_value_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 513;

                goto dict_build_exception_11;
            }
            tmp_subscript_value_27 = (PyObject *)&PyLong_Type;
            tmp_tuple_element_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_45, tmp_subscript_value_27);
            if (tmp_tuple_element_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 513;

                goto dict_build_exception_11;
            }
            tmp_subscript_value_26 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_46;
                PyObject *tmp_subscript_value_28;
                PyTuple_SET_ITEM(tmp_subscript_value_26, 0, tmp_tuple_element_17);
                tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[87]);

                if (unlikely(tmp_expression_value_46 == NULL)) {
                    tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
                }

                if (tmp_expression_value_46 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 513;

                    goto tuple_build_exception_14;
                }
                tmp_subscript_value_28 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[61]);

                if (unlikely(tmp_subscript_value_28 == NULL)) {
                    tmp_subscript_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
                }

                if (tmp_subscript_value_28 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 513;

                    goto tuple_build_exception_14;
                }
                tmp_tuple_element_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_46, tmp_subscript_value_28);
                if (tmp_tuple_element_17 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 513;

                    goto tuple_build_exception_14;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_26, 1, tmp_tuple_element_17);
            }
            goto tuple_build_noexception_14;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_14:;
            Py_DECREF(tmp_subscript_value_26);
            goto dict_build_exception_11;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_14:;
            tmp_tuple_element_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_44, tmp_subscript_value_26);
            Py_DECREF(tmp_subscript_value_26);
            if (tmp_tuple_element_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 513;

                goto dict_build_exception_11;
            }
            tmp_subscript_value_25 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_47;
                PyObject *tmp_subscript_value_29;
                PyTuple_SET_ITEM(tmp_subscript_value_25, 0, tmp_tuple_element_16);
                tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[90]);

                if (unlikely(tmp_expression_value_47 == NULL)) {
                    tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
                }

                if (tmp_expression_value_47 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 513;

                    goto tuple_build_exception_15;
                }
                tmp_subscript_value_29 = (PyObject *)&PyFloat_Type;
                tmp_tuple_element_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_47, tmp_subscript_value_29);
                if (tmp_tuple_element_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 513;

                    goto tuple_build_exception_15;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_25, 1, tmp_tuple_element_16);
            }
            goto tuple_build_noexception_15;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_15:;
            Py_DECREF(tmp_subscript_value_25);
            goto dict_build_exception_11;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_15:;
            tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_43, tmp_subscript_value_25);
            Py_DECREF(tmp_subscript_value_25);
            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 513;

                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_11;
        // Exception handling pass through code for dict_build:
        dict_build_exception_11:;
        Py_DECREF(tmp_annotations_14);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_11:;
        Py_INCREF(tmp_defaults_4);


        tmp_assign_source_37 = MAKE_FUNCTION_torchvision$io$_video_opt$$$function__14__read_video_timestamps(tmp_defaults_4, tmp_annotations_14);

        UPDATE_STRING_DICT1(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_37);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f1d192cfb5bf29d1618ea4e8e04e29c7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f1d192cfb5bf29d1618ea4e8e04e29c7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f1d192cfb5bf29d1618ea4e8e04e29c7, exception_lineno);
    }



    assertFrameObject(frame_f1d192cfb5bf29d1618ea4e8e04e29c7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torchvision.io._video_opt", false);

    Py_INCREF(module_torchvision$io$_video_opt);
    return module_torchvision$io$_video_opt;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$io$_video_opt, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torchvision$io$_video_opt", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
