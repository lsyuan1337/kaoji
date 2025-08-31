/* Generated code for Python module 'torch.distributed.rpc.backend_registry'
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

/* The "module_torch$distributed$rpc$backend_registry" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torch$distributed$rpc$backend_registry;
PyDictObject *moduledict_torch$distributed$rpc$backend_registry;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[148];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[148];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torch.distributed.rpc.backend_registry"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 148; i++) {
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
void checkModuleConstants_torch$distributed$rpc$backend_registry(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 148; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_670a8ed27ecd465c9e697dff6097fc59;
static PyCodeObject *codeobj_05f744c4821b912ec07a7224bd256003;
static PyCodeObject *codeobj_a8a6612ab600589b2050d891be0757e4;
static PyCodeObject *codeobj_050fb5d89cba6e41e297cea0cadd95aa;
static PyCodeObject *codeobj_f80d7b173332ddc4a656424e0cad04dc;
static PyCodeObject *codeobj_fbc2279d6d7e9e78c6c5d6c25a9e1b9c;
static PyCodeObject *codeobj_622c6dbb81fe770e8837b59ee25e3fa1;
static PyCodeObject *codeobj_1f61ba0e3e5c322b0d290a6e1841b669;
static PyCodeObject *codeobj_68c63c9ab97bd6960b08539ae3d87750;
static PyCodeObject *codeobj_07a6273c96c38c29d0dd96018436d950;
static PyCodeObject *codeobj_3a7015c0ff2146b0274f016aecfab298;
static PyCodeObject *codeobj_3e734cb8fe12609784740bc3304ff416;
static PyCodeObject *codeobj_b8211b359fda5d1413fd7fc8bbced996;
static PyCodeObject *codeobj_8aff1550ff0e7221b614b357070ca52d;
static PyCodeObject *codeobj_8c88ff1268da07fc81bc9bef230cf9b8;
static PyCodeObject *codeobj_955ecfe50d37d559d8bca595b42bf399;
static PyCodeObject *codeobj_fd865e054f1aa4e4e6075eabd5b1a794;
static PyCodeObject *codeobj_79f49b496ce8c25a49560da53ea10be4;
static PyCodeObject *codeobj_f4fcafb74a2bbfb7587ff16196938a09;
static PyCodeObject *codeobj_0362af1c32d9d69f27f9897d1edcb2d2;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[125]); CHECK_OBJECT(module_filename_obj);
    codeobj_670a8ed27ecd465c9e697dff6097fc59 = MAKE_CODE_OBJECT(module_filename_obj, 230, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[126], mod_consts[126], mod_consts[127], NULL, 1, 0, 0);
    codeobj_05f744c4821b912ec07a7224bd256003 = MAKE_CODE_OBJECT(module_filename_obj, 68, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[126], mod_consts[126], mod_consts[128], NULL, 1, 0, 0);
    codeobj_a8a6612ab600589b2050d891be0757e4 = MAKE_CODE_OBJECT(module_filename_obj, 161, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[126], mod_consts[126], mod_consts[129], NULL, 1, 0, 0);
    codeobj_050fb5d89cba6e41e297cea0cadd95aa = MAKE_CODE_OBJECT(module_filename_obj, 160, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[126], mod_consts[126], mod_consts[130], NULL, 1, 0, 0);
    codeobj_f80d7b173332ddc4a656424e0cad04dc = MAKE_CODE_OBJECT(module_filename_obj, 159, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[126], mod_consts[126], mod_consts[131], NULL, 1, 0, 0);
    codeobj_fbc2279d6d7e9e78c6c5d6c25a9e1b9c = MAKE_CODE_OBJECT(module_filename_obj, 142, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[43], mod_consts[43], mod_consts[132], NULL, 1, 0, 0);
    codeobj_622c6dbb81fe770e8837b59ee25e3fa1 = MAKE_CODE_OBJECT(module_filename_obj, 242, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[76], mod_consts[133], NULL, 1, 0, 0);
    codeobj_1f61ba0e3e5c322b0d290a6e1841b669 = MAKE_CODE_OBJECT(module_filename_obj, 154, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[134], mod_consts[134], mod_consts[135], NULL, 1, 0, 0);
    codeobj_68c63c9ab97bd6960b08539ae3d87750 = MAKE_CODE_OBJECT(module_filename_obj, 158, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[134], mod_consts[134], mod_consts[136], NULL, 1, 0, 0);
    codeobj_07a6273c96c38c29d0dd96018436d950 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[137], mod_consts[137], NULL, NULL, 0, 0, 0);
    codeobj_3a7015c0ff2146b0274f016aecfab298 = MAKE_CODE_OBJECT(module_filename_obj, 18, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[138], NULL, 1, 0, 0);
    codeobj_3e734cb8fe12609784740bc3304ff416 = MAKE_CODE_OBJECT(module_filename_obj, 99, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[84], mod_consts[84], mod_consts[139], NULL, 3, 0, 0);
    codeobj_b8211b359fda5d1413fd7fc8bbced996 = MAKE_CODE_OBJECT(module_filename_obj, 121, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[122], mod_consts[122], mod_consts[140], NULL, 5, 0, 0);
    codeobj_8aff1550ff0e7221b614b357070ca52d = MAKE_CODE_OBJECT(module_filename_obj, 149, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[87], mod_consts[87], mod_consts[141], NULL, 5, 0, 0);
    codeobj_8c88ff1268da07fc81bc9bef230cf9b8 = MAKE_CODE_OBJECT(module_filename_obj, 247, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[123], mod_consts[123], mod_consts[142], NULL, 5, 0, 0);
    codeobj_955ecfe50d37d559d8bca595b42bf399 = MAKE_CODE_OBJECT(module_filename_obj, 140, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[50], mod_consts[50], mod_consts[143], NULL, 2, 0, 0);
    codeobj_fd865e054f1aa4e4e6075eabd5b1a794 = MAKE_CODE_OBJECT(module_filename_obj, 37, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[144], NULL, 1, 0, 0);
    codeobj_79f49b496ce8c25a49560da53ea10be4 = MAKE_CODE_OBJECT(module_filename_obj, 85, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[119], mod_consts[119], mod_consts[145], NULL, 3, 0, 0);
    codeobj_f4fcafb74a2bbfb7587ff16196938a09 = MAKE_CODE_OBJECT(module_filename_obj, 96, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[120], mod_consts[120], mod_consts[146], NULL, 1, 0, 0);
    codeobj_0362af1c32d9d69f27f9897d1edcb2d2 = MAKE_CODE_OBJECT(module_filename_obj, 50, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[116], mod_consts[116], mod_consts[147], NULL, 3, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_torch$distributed$rpc$backend_registry$$$function__8__tensorpipe_validate_devices$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__7_complex_call_helper_pos_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__5_complex_call_helper_star_list_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_torch$distributed$rpc$backend_registry$$$function__10__tensorpipe_init_backend_handler();


static PyObject *MAKE_FUNCTION_torch$distributed$rpc$backend_registry$$$function__1__backend_type_repr();


static PyObject *MAKE_FUNCTION_torch$distributed$rpc$backend_registry$$$function__2_backend_registered();


static PyObject *MAKE_FUNCTION_torch$distributed$rpc$backend_registry$$$function__3_register_backend();


static PyObject *MAKE_FUNCTION_torch$distributed$rpc$backend_registry$$$function__4_construct_rpc_backend_options(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$distributed$rpc$backend_registry$$$function__5_init_backend();


static PyObject *MAKE_FUNCTION_torch$distributed$rpc$backend_registry$$$function__6__init_process_group();


static PyObject *MAKE_FUNCTION_torch$distributed$rpc$backend_registry$$$function__7__tensorpipe_construct_rpc_backend_options_handler(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$distributed$rpc$backend_registry$$$function__8__tensorpipe_validate_devices();


static PyObject *MAKE_FUNCTION_torch$distributed$rpc$backend_registry$$$function__9__tensorpipe_exchange_and_check_all_device_maps();


static PyObject *MAKE_FUNCTION_torch$distributed$rpc$backend_registry$$$function__9__tensorpipe_exchange_and_check_all_device_maps$$$function__1_lambda();


// The module function definitions.
static PyObject *impl_torch$distributed$rpc$backend_registry$$$function__1__backend_type_repr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_3a7015c0ff2146b0274f016aecfab298;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3a7015c0ff2146b0274f016aecfab298 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3a7015c0ff2146b0274f016aecfab298)) {
        Py_XDECREF(cache_frame_3a7015c0ff2146b0274f016aecfab298);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3a7015c0ff2146b0274f016aecfab298 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3a7015c0ff2146b0274f016aecfab298 = MAKE_FUNCTION_FRAME(codeobj_3a7015c0ff2146b0274f016aecfab298, module_torch$distributed$rpc$backend_registry, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3a7015c0ff2146b0274f016aecfab298->m_type_description == NULL);
    frame_3a7015c0ff2146b0274f016aecfab298 = cache_frame_3a7015c0ff2146b0274f016aecfab298;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3a7015c0ff2146b0274f016aecfab298);
    assert(Py_REFCNT(frame_3a7015c0ff2146b0274f016aecfab298) == 2);

    // Framed code:
    {
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_1;
        tmp_add_expr_left_1 = mod_consts[0];
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
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
        exception_tb = MAKE_TRACEBACK(frame_3a7015c0ff2146b0274f016aecfab298, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3a7015c0ff2146b0274f016aecfab298->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3a7015c0ff2146b0274f016aecfab298, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3a7015c0ff2146b0274f016aecfab298,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_3a7015c0ff2146b0274f016aecfab298 == cache_frame_3a7015c0ff2146b0274f016aecfab298) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3a7015c0ff2146b0274f016aecfab298);
        cache_frame_3a7015c0ff2146b0274f016aecfab298 = NULL;
    }

    assertFrameObject(frame_3a7015c0ff2146b0274f016aecfab298);

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


static PyObject *impl_torch$distributed$rpc$backend_registry$$$function__2_backend_registered(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_backend_name = python_pars[0];
    struct Nuitka_FrameObject *frame_fd865e054f1aa4e4e6075eabd5b1a794;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_fd865e054f1aa4e4e6075eabd5b1a794 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fd865e054f1aa4e4e6075eabd5b1a794)) {
        Py_XDECREF(cache_frame_fd865e054f1aa4e4e6075eabd5b1a794);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fd865e054f1aa4e4e6075eabd5b1a794 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fd865e054f1aa4e4e6075eabd5b1a794 = MAKE_FUNCTION_FRAME(codeobj_fd865e054f1aa4e4e6075eabd5b1a794, module_torch$distributed$rpc$backend_registry, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fd865e054f1aa4e4e6075eabd5b1a794->m_type_description == NULL);
    frame_fd865e054f1aa4e4e6075eabd5b1a794 = cache_frame_fd865e054f1aa4e4e6075eabd5b1a794;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fd865e054f1aa4e4e6075eabd5b1a794);
    assert(Py_REFCNT(frame_fd865e054f1aa4e4e6075eabd5b1a794) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_backend_name);
        tmp_cmp_expr_left_1 = par_backend_name;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_fd865e054f1aa4e4e6075eabd5b1a794->m_frame.f_lineno = 47;
        tmp_cmp_expr_right_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 1) ? Py_True : Py_False;
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
        exception_tb = MAKE_TRACEBACK(frame_fd865e054f1aa4e4e6075eabd5b1a794, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fd865e054f1aa4e4e6075eabd5b1a794->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fd865e054f1aa4e4e6075eabd5b1a794, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fd865e054f1aa4e4e6075eabd5b1a794,
        type_description_1,
        par_backend_name
    );


    // Release cached frame if used for exception.
    if (frame_fd865e054f1aa4e4e6075eabd5b1a794 == cache_frame_fd865e054f1aa4e4e6075eabd5b1a794) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fd865e054f1aa4e4e6075eabd5b1a794);
        cache_frame_fd865e054f1aa4e4e6075eabd5b1a794 = NULL;
    }

    assertFrameObject(frame_fd865e054f1aa4e4e6075eabd5b1a794);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_backend_name);
    Py_DECREF(par_backend_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_backend_name);
    Py_DECREF(par_backend_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$rpc$backend_registry$$$function__3_register_backend(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_backend_name = python_pars[0];
    PyObject *par_construct_rpc_backend_options_handler = python_pars[1];
    PyObject *par_init_backend_handler = python_pars[2];
    PyObject *var_existing_enum_dict = NULL;
    PyObject *var_extended_enum_dict = NULL;
    PyObject *outline_0_var_member = NULL;
    PyObject *tmp_dictcontraction_1__$0 = NULL;
    PyObject *tmp_dictcontraction_1__contraction = NULL;
    PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_0362af1c32d9d69f27f9897d1edcb2d2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_05f744c4821b912ec07a7224bd256003_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_05f744c4821b912ec07a7224bd256003_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0362af1c32d9d69f27f9897d1edcb2d2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0362af1c32d9d69f27f9897d1edcb2d2)) {
        Py_XDECREF(cache_frame_0362af1c32d9d69f27f9897d1edcb2d2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0362af1c32d9d69f27f9897d1edcb2d2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0362af1c32d9d69f27f9897d1edcb2d2 = MAKE_FUNCTION_FRAME(codeobj_0362af1c32d9d69f27f9897d1edcb2d2, module_torch$distributed$rpc$backend_registry, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0362af1c32d9d69f27f9897d1edcb2d2->m_type_description == NULL);
    frame_0362af1c32d9d69f27f9897d1edcb2d2 = cache_frame_0362af1c32d9d69f27f9897d1edcb2d2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0362af1c32d9d69f27f9897d1edcb2d2);
    assert(Py_REFCNT(frame_0362af1c32d9d69f27f9897d1edcb2d2) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_backend_name);
        tmp_args_element_value_1 = par_backend_name;
        frame_0362af1c32d9d69f27f9897d1edcb2d2->m_frame.f_lineno = 65;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 65;
            type_description_1 = "ooooo";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[7];
        CHECK_OBJECT(par_backend_name);
        tmp_kw_call_arg_value_1_1 = par_backend_name;
        frame_0362af1c32d9d69f27f9897d1edcb2d2->m_frame.f_lineno = 66;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_0362af1c32d9d69f27f9897d1edcb2d2->m_frame.f_lineno = 66;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 66;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            tmp_iter_arg_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_iter_arg_1 == NULL)) {
                tmp_iter_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            assert(tmp_dictcontraction_1__$0 == NULL);
            tmp_dictcontraction_1__$0 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = MAKE_DICT_EMPTY();
            assert(tmp_dictcontraction_1__contraction == NULL);
            tmp_dictcontraction_1__contraction = tmp_assign_source_3;
        }
        if (isFrameUnusable(cache_frame_05f744c4821b912ec07a7224bd256003_2)) {
            Py_XDECREF(cache_frame_05f744c4821b912ec07a7224bd256003_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_05f744c4821b912ec07a7224bd256003_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_05f744c4821b912ec07a7224bd256003_2 = MAKE_FUNCTION_FRAME(codeobj_05f744c4821b912ec07a7224bd256003, module_torch$distributed$rpc$backend_registry, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_05f744c4821b912ec07a7224bd256003_2->m_type_description == NULL);
        frame_05f744c4821b912ec07a7224bd256003_2 = cache_frame_05f744c4821b912ec07a7224bd256003_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_05f744c4821b912ec07a7224bd256003_2);
        assert(Py_REFCNT(frame_05f744c4821b912ec07a7224bd256003_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(tmp_dictcontraction_1__$0);
            tmp_next_source_1 = tmp_dictcontraction_1__$0;
            tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_4 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 68;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_dictcontraction_1__iter_value_0;
                tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
            tmp_assign_source_5 = tmp_dictcontraction_1__iter_value_0;
            {
                PyObject *old = outline_0_var_member;
                outline_0_var_member = tmp_assign_source_5;
                Py_INCREF(outline_0_var_member);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_expression_value_1;
            PyObject *tmp_expression_value_2;
            CHECK_OBJECT(outline_0_var_member);
            tmp_expression_value_1 = outline_0_var_member;
            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[8]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            CHECK_OBJECT(tmp_dictcontraction_1__contraction);
            tmp_dictset_dict = tmp_dictcontraction_1__contraction;
            CHECK_OBJECT(outline_0_var_member);
            tmp_expression_value_2 = outline_0_var_member;
            tmp_dictset_key = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
            if (tmp_dictset_key == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dictset_value);

                exception_lineno = 68;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            assert(PyDict_CheckExact(tmp_dictset_dict));
            tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

            Py_DECREF(tmp_dictset_value);
            Py_DECREF(tmp_dictset_key);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        tmp_assign_source_1 = tmp_dictcontraction_1__contraction;
        Py_INCREF(tmp_assign_source_1);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
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
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
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
            exception_tb = MAKE_TRACEBACK(frame_05f744c4821b912ec07a7224bd256003_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_05f744c4821b912ec07a7224bd256003_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_05f744c4821b912ec07a7224bd256003_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_05f744c4821b912ec07a7224bd256003_2,
            type_description_2,
            outline_0_var_member
        );


        // Release cached frame if used for exception.
        if (frame_05f744c4821b912ec07a7224bd256003_2 == cache_frame_05f744c4821b912ec07a7224bd256003_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_05f744c4821b912ec07a7224bd256003_2);
            cache_frame_05f744c4821b912ec07a7224bd256003_2 = NULL;
        }

        assertFrameObject(frame_05f744c4821b912ec07a7224bd256003_2);

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
        Py_XDECREF(outline_0_var_member);
        outline_0_var_member = NULL;
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

        Py_XDECREF(outline_0_var_member);
        outline_0_var_member = NULL;
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
        exception_lineno = 68;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_existing_enum_dict == NULL);
        var_existing_enum_dict = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = (PyObject *)&PyDict_Type;
        CHECK_OBJECT(par_backend_name);
        tmp_dict_key_1 = par_backend_name;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_construct_rpc_backend_options_handler);
        tmp_kw_call_value_0_1 = par_construct_rpc_backend_options_handler;
        CHECK_OBJECT(par_init_backend_handler);
        tmp_kw_call_value_1_1 = par_init_backend_handler;
        frame_0362af1c32d9d69f27f9897d1edcb2d2->m_frame.f_lineno = 71;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_dict_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[10]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_tuple_element_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_tuple_element_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_existing_enum_dict);
        tmp_dircall_arg3_1 = var_existing_enum_dict;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_6 = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_extended_enum_dict == NULL);
        var_extended_enum_dict = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[12]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = mod_consts[2];
        CHECK_OBJECT(var_extended_enum_dict);
        tmp_kw_call_value_1_2 = var_extended_enum_dict;
        frame_0362af1c32d9d69f27f9897d1edcb2d2->m_frame.f_lineno = 79;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2};

            tmp_assign_source_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_3, kw_values, mod_consts[13]);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_assattr_value_1 == NULL)) {
            tmp_assattr_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[15], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_assattr_value_2 == NULL)) {
            tmp_assattr_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_assattr_target_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[17], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_backend_name);
        tmp_subscript_value_1 = par_backend_name;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
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
        exception_tb = MAKE_TRACEBACK(frame_0362af1c32d9d69f27f9897d1edcb2d2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0362af1c32d9d69f27f9897d1edcb2d2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0362af1c32d9d69f27f9897d1edcb2d2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0362af1c32d9d69f27f9897d1edcb2d2,
        type_description_1,
        par_backend_name,
        par_construct_rpc_backend_options_handler,
        par_init_backend_handler,
        var_existing_enum_dict,
        var_extended_enum_dict
    );


    // Release cached frame if used for exception.
    if (frame_0362af1c32d9d69f27f9897d1edcb2d2 == cache_frame_0362af1c32d9d69f27f9897d1edcb2d2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0362af1c32d9d69f27f9897d1edcb2d2);
        cache_frame_0362af1c32d9d69f27f9897d1edcb2d2 = NULL;
    }

    assertFrameObject(frame_0362af1c32d9d69f27f9897d1edcb2d2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_existing_enum_dict);
    Py_DECREF(var_existing_enum_dict);
    var_existing_enum_dict = NULL;
    CHECK_OBJECT(var_extended_enum_dict);
    Py_DECREF(var_extended_enum_dict);
    var_extended_enum_dict = NULL;
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

    Py_XDECREF(var_existing_enum_dict);
    var_existing_enum_dict = NULL;
    Py_XDECREF(var_extended_enum_dict);
    var_extended_enum_dict = NULL;
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
    CHECK_OBJECT(par_backend_name);
    Py_DECREF(par_backend_name);
    CHECK_OBJECT(par_construct_rpc_backend_options_handler);
    Py_DECREF(par_construct_rpc_backend_options_handler);
    CHECK_OBJECT(par_init_backend_handler);
    Py_DECREF(par_init_backend_handler);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_backend_name);
    Py_DECREF(par_backend_name);
    CHECK_OBJECT(par_construct_rpc_backend_options_handler);
    Py_DECREF(par_construct_rpc_backend_options_handler);
    CHECK_OBJECT(par_init_backend_handler);
    Py_DECREF(par_init_backend_handler);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$rpc$backend_registry$$$function__4_construct_rpc_backend_options(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_backend = python_pars[0];
    PyObject *par_rpc_timeout = python_pars[1];
    PyObject *par_init_method = python_pars[2];
    PyObject *par_kwargs = python_pars[3];
    struct Nuitka_FrameObject *frame_79f49b496ce8c25a49560da53ea10be4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_79f49b496ce8c25a49560da53ea10be4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_79f49b496ce8c25a49560da53ea10be4)) {
        Py_XDECREF(cache_frame_79f49b496ce8c25a49560da53ea10be4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_79f49b496ce8c25a49560da53ea10be4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_79f49b496ce8c25a49560da53ea10be4 = MAKE_FUNCTION_FRAME(codeobj_79f49b496ce8c25a49560da53ea10be4, module_torch$distributed$rpc$backend_registry, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_79f49b496ce8c25a49560da53ea10be4->m_type_description == NULL);
    frame_79f49b496ce8c25a49560da53ea10be4 = cache_frame_79f49b496ce8c25a49560da53ea10be4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_79f49b496ce8c25a49560da53ea10be4);
    assert(Py_REFCNT(frame_79f49b496ce8c25a49560da53ea10be4) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT(par_backend);
        tmp_expression_value_2 = par_backend;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[8]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_rpc_timeout);
        tmp_tuple_element_1 = par_rpc_timeout;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_init_method);
        tmp_tuple_element_1 = par_init_method;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
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
        exception_tb = MAKE_TRACEBACK(frame_79f49b496ce8c25a49560da53ea10be4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_79f49b496ce8c25a49560da53ea10be4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_79f49b496ce8c25a49560da53ea10be4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_79f49b496ce8c25a49560da53ea10be4,
        type_description_1,
        par_backend,
        par_rpc_timeout,
        par_init_method,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_79f49b496ce8c25a49560da53ea10be4 == cache_frame_79f49b496ce8c25a49560da53ea10be4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_79f49b496ce8c25a49560da53ea10be4);
        cache_frame_79f49b496ce8c25a49560da53ea10be4 = NULL;
    }

    assertFrameObject(frame_79f49b496ce8c25a49560da53ea10be4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_backend);
    Py_DECREF(par_backend);
    CHECK_OBJECT(par_rpc_timeout);
    Py_DECREF(par_rpc_timeout);
    CHECK_OBJECT(par_init_method);
    Py_DECREF(par_init_method);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_backend);
    Py_DECREF(par_backend);
    CHECK_OBJECT(par_rpc_timeout);
    Py_DECREF(par_rpc_timeout);
    CHECK_OBJECT(par_init_method);
    Py_DECREF(par_init_method);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$rpc$backend_registry$$$function__5_init_backend(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_backend = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    struct Nuitka_FrameObject *frame_f4fcafb74a2bbfb7587ff16196938a09;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f4fcafb74a2bbfb7587ff16196938a09 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f4fcafb74a2bbfb7587ff16196938a09)) {
        Py_XDECREF(cache_frame_f4fcafb74a2bbfb7587ff16196938a09);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f4fcafb74a2bbfb7587ff16196938a09 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f4fcafb74a2bbfb7587ff16196938a09 = MAKE_FUNCTION_FRAME(codeobj_f4fcafb74a2bbfb7587ff16196938a09, module_torch$distributed$rpc$backend_registry, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f4fcafb74a2bbfb7587ff16196938a09->m_type_description == NULL);
    frame_f4fcafb74a2bbfb7587ff16196938a09 = cache_frame_f4fcafb74a2bbfb7587ff16196938a09;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f4fcafb74a2bbfb7587ff16196938a09);
    assert(Py_REFCNT(frame_f4fcafb74a2bbfb7587ff16196938a09) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT(par_backend);
        tmp_expression_value_2 = par_backend;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[8]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[20]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_args);
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__5_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
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
        exception_tb = MAKE_TRACEBACK(frame_f4fcafb74a2bbfb7587ff16196938a09, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f4fcafb74a2bbfb7587ff16196938a09->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f4fcafb74a2bbfb7587ff16196938a09, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f4fcafb74a2bbfb7587ff16196938a09,
        type_description_1,
        par_backend,
        par_args,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_f4fcafb74a2bbfb7587ff16196938a09 == cache_frame_f4fcafb74a2bbfb7587ff16196938a09) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f4fcafb74a2bbfb7587ff16196938a09);
        cache_frame_f4fcafb74a2bbfb7587ff16196938a09 = NULL;
    }

    assertFrameObject(frame_f4fcafb74a2bbfb7587ff16196938a09);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_backend);
    Py_DECREF(par_backend);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_backend);
    Py_DECREF(par_backend);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$rpc$backend_registry$$$function__6__init_process_group(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_store = python_pars[0];
    PyObject *par_rank = python_pars[1];
    PyObject *par_world_size = python_pars[2];
    PyObject *var_process_group_timeout = NULL;
    PyObject *var_group = NULL;
    struct Nuitka_FrameObject *frame_3e734cb8fe12609784740bc3304ff416;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3e734cb8fe12609784740bc3304ff416 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3e734cb8fe12609784740bc3304ff416)) {
        Py_XDECREF(cache_frame_3e734cb8fe12609784740bc3304ff416);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3e734cb8fe12609784740bc3304ff416 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3e734cb8fe12609784740bc3304ff416 = MAKE_FUNCTION_FRAME(codeobj_3e734cb8fe12609784740bc3304ff416, module_torch$distributed$rpc$backend_registry, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3e734cb8fe12609784740bc3304ff416->m_type_description == NULL);
    frame_3e734cb8fe12609784740bc3304ff416 = cache_frame_3e734cb8fe12609784740bc3304ff416;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3e734cb8fe12609784740bc3304ff416);
    assert(Py_REFCNT(frame_3e734cb8fe12609784740bc3304ff416) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[22]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_process_group_timeout == NULL);
        var_process_group_timeout = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_store);
        tmp_args_element_value_1 = par_store;
        CHECK_OBJECT(par_rank);
        tmp_args_element_value_2 = par_rank;
        CHECK_OBJECT(par_world_size);
        tmp_args_element_value_3 = par_world_size;
        CHECK_OBJECT(var_process_group_timeout);
        tmp_args_element_value_4 = var_process_group_timeout;
        frame_3e734cb8fe12609784740bc3304ff416->m_frame.f_lineno = 105;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS4(
                tmp_called_instance_1,
                mod_consts[24],
                call_args
            );
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_group == NULL);
        var_group = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_group);
        tmp_cmp_expr_left_1 = var_group;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        tmp_raise_value_1 = mod_consts[25];
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        Py_INCREF(tmp_raise_value_1);
        exception_lineno = 107;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_rank);
        tmp_cmp_expr_left_2 = par_rank;
        tmp_cmp_expr_right_2 = mod_consts[26];
        tmp_and_left_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_rank);
        tmp_cmp_expr_left_3 = par_rank;
        CHECK_OBJECT(var_group);
        tmp_called_instance_2 = var_group;
        frame_3e734cb8fe12609784740bc3304ff416->m_frame.f_lineno = 109;
        tmp_cmp_expr_right_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[27]);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooo";
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
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_called_instance_3;
        tmp_kw_call_arg_value_0_1 = mod_consts[28];
        CHECK_OBJECT(par_rank);
        tmp_kw_call_arg_value_1_1 = par_rank;
        if (var_group == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 111;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = var_group;
        frame_3e734cb8fe12609784740bc3304ff416->m_frame.f_lineno = 111;
        tmp_kw_call_arg_value_2_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[27]);
        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_3e734cb8fe12609784740bc3304ff416->m_frame.f_lineno = 111;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS3(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_2_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_3e734cb8fe12609784740bc3304ff416->m_frame.f_lineno = 110;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 110;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(par_world_size);
        tmp_cmp_expr_left_4 = par_world_size;
        tmp_cmp_expr_right_4 = mod_consts[26];
        tmp_and_left_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(par_world_size);
        tmp_cmp_expr_left_5 = par_world_size;
        if (var_group == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 113;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = var_group;
        frame_3e734cb8fe12609784740bc3304ff416->m_frame.f_lineno = 113;
        tmp_cmp_expr_right_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[30]);
        if (tmp_cmp_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_right_5);
        if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_3 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_arg_value_2_2;
        PyObject *tmp_called_instance_5;
        tmp_kw_call_arg_value_0_2 = mod_consts[31];
        CHECK_OBJECT(par_world_size);
        tmp_kw_call_arg_value_1_2 = par_world_size;
        if (var_group == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 116;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = var_group;
        frame_3e734cb8fe12609784740bc3304ff416->m_frame.f_lineno = 116;
        tmp_kw_call_arg_value_2_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[30]);
        if (tmp_kw_call_arg_value_2_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_3e734cb8fe12609784740bc3304ff416->m_frame.f_lineno = 115;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_2};
            tmp_make_exception_arg_2 = CALL_FUNCTION_WITH_ARGS3(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_2_2);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_3e734cb8fe12609784740bc3304ff416->m_frame.f_lineno = 114;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 114;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    if (var_group == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 119;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_group;
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
        exception_tb = MAKE_TRACEBACK(frame_3e734cb8fe12609784740bc3304ff416, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3e734cb8fe12609784740bc3304ff416->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3e734cb8fe12609784740bc3304ff416, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3e734cb8fe12609784740bc3304ff416,
        type_description_1,
        par_store,
        par_rank,
        par_world_size,
        var_process_group_timeout,
        var_group
    );


    // Release cached frame if used for exception.
    if (frame_3e734cb8fe12609784740bc3304ff416 == cache_frame_3e734cb8fe12609784740bc3304ff416) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3e734cb8fe12609784740bc3304ff416);
        cache_frame_3e734cb8fe12609784740bc3304ff416 = NULL;
    }

    assertFrameObject(frame_3e734cb8fe12609784740bc3304ff416);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_process_group_timeout);
    Py_DECREF(var_process_group_timeout);
    var_process_group_timeout = NULL;
    Py_XDECREF(var_group);
    var_group = NULL;
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

    Py_XDECREF(var_process_group_timeout);
    var_process_group_timeout = NULL;
    Py_XDECREF(var_group);
    var_group = NULL;
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
    CHECK_OBJECT(par_store);
    Py_DECREF(par_store);
    CHECK_OBJECT(par_rank);
    Py_DECREF(par_rank);
    CHECK_OBJECT(par_world_size);
    Py_DECREF(par_world_size);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_store);
    Py_DECREF(par_store);
    CHECK_OBJECT(par_rank);
    Py_DECREF(par_rank);
    CHECK_OBJECT(par_world_size);
    Py_DECREF(par_world_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$rpc$backend_registry$$$function__7__tensorpipe_construct_rpc_backend_options_handler(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_rpc_timeout = python_pars[0];
    PyObject *par_init_method = python_pars[1];
    PyObject *par_num_worker_threads = python_pars[2];
    PyObject *par__transports = python_pars[3];
    PyObject *par__channels = python_pars[4];
    PyObject *par_kwargs = python_pars[5];
    PyObject *var_TensorPipeRpcBackendOptions = NULL;
    struct Nuitka_FrameObject *frame_b8211b359fda5d1413fd7fc8bbced996;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b8211b359fda5d1413fd7fc8bbced996 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b8211b359fda5d1413fd7fc8bbced996)) {
        Py_XDECREF(cache_frame_b8211b359fda5d1413fd7fc8bbced996);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b8211b359fda5d1413fd7fc8bbced996 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b8211b359fda5d1413fd7fc8bbced996 = MAKE_FUNCTION_FRAME(codeobj_b8211b359fda5d1413fd7fc8bbced996, module_torch$distributed$rpc$backend_registry, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b8211b359fda5d1413fd7fc8bbced996->m_type_description == NULL);
    frame_b8211b359fda5d1413fd7fc8bbced996 = cache_frame_b8211b359fda5d1413fd7fc8bbced996;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b8211b359fda5d1413fd7fc8bbced996);
    assert(Py_REFCNT(frame_b8211b359fda5d1413fd7fc8bbced996) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[32];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$distributed$rpc$backend_registry;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[33];
        tmp_level_value_1 = mod_consts[34];
        frame_b8211b359fda5d1413fd7fc8bbced996->m_frame.f_lineno = 129;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$distributed$rpc$backend_registry,
                mod_consts[35],
                mod_consts[36]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[35]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_TensorPipeRpcBackendOptions == NULL);
        var_TensorPipeRpcBackendOptions = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        CHECK_OBJECT(var_TensorPipeRpcBackendOptions);
        tmp_called_value_1 = var_TensorPipeRpcBackendOptions;
        CHECK_OBJECT(par_rpc_timeout);
        tmp_kw_call_value_0_1 = par_rpc_timeout;
        CHECK_OBJECT(par_init_method);
        tmp_kw_call_value_1_1 = par_init_method;
        CHECK_OBJECT(par_num_worker_threads);
        tmp_kw_call_value_2_1 = par_num_worker_threads;
        CHECK_OBJECT(par__transports);
        tmp_kw_call_value_3_1 = par__transports;
        CHECK_OBJECT(par__channels);
        tmp_kw_call_value_4_1 = par__channels;
        frame_b8211b359fda5d1413fd7fc8bbced996->m_frame.f_lineno = 131;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[37]);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_b8211b359fda5d1413fd7fc8bbced996, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b8211b359fda5d1413fd7fc8bbced996->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b8211b359fda5d1413fd7fc8bbced996, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b8211b359fda5d1413fd7fc8bbced996,
        type_description_1,
        par_rpc_timeout,
        par_init_method,
        par_num_worker_threads,
        par__transports,
        par__channels,
        par_kwargs,
        var_TensorPipeRpcBackendOptions
    );


    // Release cached frame if used for exception.
    if (frame_b8211b359fda5d1413fd7fc8bbced996 == cache_frame_b8211b359fda5d1413fd7fc8bbced996) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b8211b359fda5d1413fd7fc8bbced996);
        cache_frame_b8211b359fda5d1413fd7fc8bbced996 = NULL;
    }

    assertFrameObject(frame_b8211b359fda5d1413fd7fc8bbced996);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_TensorPipeRpcBackendOptions);
    Py_DECREF(var_TensorPipeRpcBackendOptions);
    var_TensorPipeRpcBackendOptions = NULL;
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

    Py_XDECREF(var_TensorPipeRpcBackendOptions);
    var_TensorPipeRpcBackendOptions = NULL;
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
    CHECK_OBJECT(par_rpc_timeout);
    Py_DECREF(par_rpc_timeout);
    CHECK_OBJECT(par_init_method);
    Py_DECREF(par_init_method);
    CHECK_OBJECT(par_num_worker_threads);
    Py_DECREF(par_num_worker_threads);
    CHECK_OBJECT(par__transports);
    Py_DECREF(par__transports);
    CHECK_OBJECT(par__channels);
    Py_DECREF(par__channels);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_rpc_timeout);
    Py_DECREF(par_rpc_timeout);
    CHECK_OBJECT(par_init_method);
    Py_DECREF(par_init_method);
    CHECK_OBJECT(par_num_worker_threads);
    Py_DECREF(par_num_worker_threads);
    CHECK_OBJECT(par__transports);
    Py_DECREF(par__transports);
    CHECK_OBJECT(par__channels);
    Py_DECREF(par__channels);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$rpc$backend_registry$$$function__8__tensorpipe_validate_devices(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_devices = python_pars[0];
    struct Nuitka_CellObject *par_device_count = Nuitka_Cell_New1(python_pars[1]);
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_955ecfe50d37d559d8bca595b42bf399;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_955ecfe50d37d559d8bca595b42bf399 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_955ecfe50d37d559d8bca595b42bf399)) {
        Py_XDECREF(cache_frame_955ecfe50d37d559d8bca595b42bf399);

#if _DEBUG_REFCOUNTS
        if (cache_frame_955ecfe50d37d559d8bca595b42bf399 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_955ecfe50d37d559d8bca595b42bf399 = MAKE_FUNCTION_FRAME(codeobj_955ecfe50d37d559d8bca595b42bf399, module_torch$distributed$rpc$backend_registry, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_955ecfe50d37d559d8bca595b42bf399->m_type_description == NULL);
    frame_955ecfe50d37d559d8bca595b42bf399 = cache_frame_955ecfe50d37d559d8bca595b42bf399;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_955ecfe50d37d559d8bca595b42bf399);
    assert(Py_REFCNT(frame_955ecfe50d37d559d8bca595b42bf399) == 2);

    // Framed code:
    {
        PyObject *tmp_all_arg_1;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_devices);
            tmp_iter_arg_1 = par_devices;
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_1 = "oc";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_1;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[2];

            tmp_closure_1[0] = par_device_count;
            Py_INCREF(tmp_closure_1[0]);
            tmp_closure_1[1] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_all_arg_1 = MAKE_GENERATOR_torch$distributed$rpc$backend_registry$$$function__8__tensorpipe_validate_devices$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_1;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_return_value = BUILTIN_ALL(tmp_all_arg_1);
        Py_DECREF(tmp_all_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oc";
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
        exception_tb = MAKE_TRACEBACK(frame_955ecfe50d37d559d8bca595b42bf399, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_955ecfe50d37d559d8bca595b42bf399->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_955ecfe50d37d559d8bca595b42bf399, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_955ecfe50d37d559d8bca595b42bf399,
        type_description_1,
        par_devices,
        par_device_count
    );


    // Release cached frame if used for exception.
    if (frame_955ecfe50d37d559d8bca595b42bf399 == cache_frame_955ecfe50d37d559d8bca595b42bf399) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_955ecfe50d37d559d8bca595b42bf399);
        cache_frame_955ecfe50d37d559d8bca595b42bf399 = NULL;
    }

    assertFrameObject(frame_955ecfe50d37d559d8bca595b42bf399);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_devices);
    Py_DECREF(par_devices);
    CHECK_OBJECT(par_device_count);
    Py_DECREF(par_device_count);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_devices);
    Py_DECREF(par_devices);
    CHECK_OBJECT(par_device_count);
    Py_DECREF(par_device_count);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct torch$distributed$rpc$backend_registry$$$function__8__tensorpipe_validate_devices$$$genexpr__1_genexpr_locals {
    PyObject *var_d;
    PyObject *tmp_comparison_chain_1__comparison_result;
    PyObject *tmp_comparison_chain_1__operand_2;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
};

static PyObject *torch$distributed$rpc$backend_registry$$$function__8__tensorpipe_validate_devices$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct torch$distributed$rpc$backend_registry$$$function__8__tensorpipe_validate_devices$$$genexpr__1_genexpr_locals *generator_heap = (struct torch$distributed$rpc$backend_registry$$$function__8__tensorpipe_validate_devices$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_d = NULL;
    generator_heap->tmp_comparison_chain_1__comparison_result = NULL;
    generator_heap->tmp_comparison_chain_1__operand_2 = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_fbc2279d6d7e9e78c6c5d6c25a9e1b9c, module_torch$distributed$rpc$backend_registry, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[1]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "Noc";
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
            PyObject *old = generator_heap->var_d;
            generator_heap->var_d = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_d);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_d);
        tmp_expression_value_2 = generator_heap->var_d;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[38]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 142;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_1 = mod_consts[39];
        tmp_or_left_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 142;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            generator_heap->exception_lineno = 142;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        CHECK_OBJECT(generator_heap->var_d);
        tmp_expression_value_3 = generator_heap->var_d;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[38]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 142;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_2 = mod_consts[40];
        tmp_and_left_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_and_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 142;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_and_left_value_1);

            generator_heap->exception_lineno = 142;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        Py_DECREF(tmp_and_left_value_1);
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_expression_value_4;
            CHECK_OBJECT(generator_heap->var_d);
            tmp_expression_value_4 = generator_heap->var_d;
            tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[41]);
            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 142;
                generator_heap->type_description_1 = "Noc";
                goto try_except_handler_3;
            }
            {
                PyObject *old = generator_heap->tmp_comparison_chain_1__operand_2;
                generator_heap->tmp_comparison_chain_1__operand_2 = tmp_assign_source_3;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            tmp_cmp_expr_left_3 = mod_consts[36];
            CHECK_OBJECT(generator_heap->tmp_comparison_chain_1__operand_2);
            tmp_cmp_expr_right_3 = generator_heap->tmp_comparison_chain_1__operand_2;
            tmp_assign_source_4 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_assign_source_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 142;
                generator_heap->type_description_1 = "Noc";
                goto try_except_handler_3;
            }
            {
                PyObject *old = generator_heap->tmp_comparison_chain_1__comparison_result;
                generator_heap->tmp_comparison_chain_1__comparison_result = tmp_assign_source_4;
                Py_XDECREF(old);
            }

        }
        {
            bool tmp_condition_result_1;
            PyObject *tmp_operand_value_1;
            CHECK_OBJECT(generator_heap->tmp_comparison_chain_1__comparison_result);
            tmp_operand_value_1 = generator_heap->tmp_comparison_chain_1__comparison_result;
            generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
            if (generator_heap->tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 142;
                generator_heap->type_description_1 = "Noc";
                goto try_except_handler_3;
            }
            tmp_condition_result_1 = (generator_heap->tmp_res == 0) ? true : false;
            if (tmp_condition_result_1 != false) {
                goto branch_yes_1;
            } else {
                goto branch_no_1;
            }
        }
        branch_yes_1:;
        CHECK_OBJECT(generator_heap->tmp_comparison_chain_1__comparison_result);
        tmp_and_right_value_1 = generator_heap->tmp_comparison_chain_1__comparison_result;
        Py_INCREF(tmp_and_right_value_1);
        goto try_return_handler_3;
        branch_no_1:;
        {
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(generator_heap->tmp_comparison_chain_1__operand_2);
            tmp_cmp_expr_left_4 = generator_heap->tmp_comparison_chain_1__operand_2;
            if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[42]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(generator_heap->exception_value);

                generator_heap->exception_lineno = 142;
                generator_heap->type_description_1 = "Noc";
                goto try_except_handler_3;
            }

            tmp_cmp_expr_right_4 = Nuitka_Cell_GET(generator->m_closure[0]);
            tmp_and_right_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_and_right_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 142;
                generator_heap->type_description_1 = "Noc";
                goto try_except_handler_3;
            }
            goto try_return_handler_3;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(generator_heap->tmp_comparison_chain_1__operand_2);
        Py_DECREF(generator_heap->tmp_comparison_chain_1__operand_2);
        generator_heap->tmp_comparison_chain_1__operand_2 = NULL;
        CHECK_OBJECT(generator_heap->tmp_comparison_chain_1__comparison_result);
        Py_DECREF(generator_heap->tmp_comparison_chain_1__comparison_result);
        generator_heap->tmp_comparison_chain_1__comparison_result = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_XDECREF(generator_heap->tmp_comparison_chain_1__operand_2);
        generator_heap->tmp_comparison_chain_1__operand_2 = NULL;
        Py_XDECREF(generator_heap->tmp_comparison_chain_1__comparison_result);
        generator_heap->tmp_comparison_chain_1__comparison_result = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_1;
        generator_heap->exception_value = generator_heap->exception_keeper_value_1;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_or_right_value_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_or_right_value_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_expression_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_expression_value_1 = tmp_or_left_value_1;
        or_end_1:;
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_or_left_truth_1, sizeof(int), &tmp_or_left_value_1, sizeof(PyObject *), &tmp_or_right_value_1, sizeof(PyObject *), &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_and_left_truth_1, sizeof(int), &tmp_and_left_value_1, sizeof(PyObject *), &tmp_and_right_value_1, sizeof(PyObject *), &tmp_cmp_expr_left_2, sizeof(PyObject *), &tmp_cmp_expr_right_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_or_left_truth_1, sizeof(int), &tmp_or_left_value_1, sizeof(PyObject *), &tmp_or_right_value_1, sizeof(PyObject *), &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_and_left_truth_1, sizeof(int), &tmp_and_left_value_1, sizeof(PyObject *), &tmp_and_right_value_1, sizeof(PyObject *), &tmp_cmp_expr_left_2, sizeof(PyObject *), &tmp_cmp_expr_right_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 142;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 142;
        generator_heap->type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
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

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

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
            generator_heap->var_d,
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
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_d);
    generator_heap->var_d = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_d);
    generator_heap->var_d = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_torch$distributed$rpc$backend_registry$$$function__8__tensorpipe_validate_devices$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        torch$distributed$rpc$backend_registry$$$function__8__tensorpipe_validate_devices$$$genexpr__1_genexpr_context,
        module_torch$distributed$rpc$backend_registry,
        mod_consts[43],
#if PYTHON_VERSION >= 0x350
        mod_consts[44],
#endif
        codeobj_fbc2279d6d7e9e78c6c5d6c25a9e1b9c,
        closure,
        2,
        sizeof(struct torch$distributed$rpc$backend_registry$$$function__8__tensorpipe_validate_devices$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_torch$distributed$rpc$backend_registry$$$function__9__tensorpipe_exchange_and_check_all_device_maps(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_my_name = python_pars[0];
    PyObject *par_my_device_count = python_pars[1];
    PyObject *par_my_device_maps = python_pars[2];
    PyObject *par_my_devices = python_pars[3];
    PyObject *par_group = python_pars[4];
    PyObject *var_gathered = NULL;
    PyObject *var_reverse_device_maps = NULL;
    PyObject *var_devices_set = NULL;
    PyObject *var_all_names = NULL;
    PyObject *var_all_device_counts = NULL;
    PyObject *var_all_device_maps = NULL;
    PyObject *var_all_devices = NULL;
    PyObject *var_node = NULL;
    PyObject *var_devices = NULL;
    PyObject *var_source_node = NULL;
    PyObject *var_target_node = NULL;
    PyObject *var_map_ = NULL;
    PyObject *var__ = NULL;
    PyObject *outline_0_var__ = NULL;
    PyObject *outline_1_var_name = NULL;
    PyObject *outline_1_var__ = NULL;
    PyObject *outline_2_var_name = NULL;
    PyObject *outline_2_var_count = NULL;
    PyObject *outline_2_var__ = NULL;
    PyObject *outline_3_var_name = NULL;
    PyObject *outline_3_var__ = NULL;
    PyObject *outline_3_var_map_ = NULL;
    PyObject *outline_4_var_name = NULL;
    PyObject *outline_4_var__ = NULL;
    PyObject *outline_4_var_devices = NULL;
    PyObject *outline_5_var_k = NULL;
    PyObject *outline_5_var_v = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_2__element_4 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_3__element_3 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_3__element_4 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_dictcontraction_1__$0 = NULL;
    PyObject *tmp_dictcontraction_1__contraction = NULL;
    PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
    PyObject *tmp_dictcontraction_2__$0 = NULL;
    PyObject *tmp_dictcontraction_2__contraction = NULL;
    PyObject *tmp_dictcontraction_2__iter_value_0 = NULL;
    PyObject *tmp_dictcontraction_3__$0 = NULL;
    PyObject *tmp_dictcontraction_3__contraction = NULL;
    PyObject *tmp_dictcontraction_3__iter_value_0 = NULL;
    PyObject *tmp_dictcontraction_4__$0 = NULL;
    PyObject *tmp_dictcontraction_4__contraction = NULL;
    PyObject *tmp_dictcontraction_4__iter_value_0 = NULL;
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
    PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_8aff1550ff0e7221b614b357070ca52d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_1f61ba0e3e5c322b0d290a6e1841b669_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_1f61ba0e3e5c322b0d290a6e1841b669_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_FrameObject *frame_68c63c9ab97bd6960b08539ae3d87750_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_68c63c9ab97bd6960b08539ae3d87750_3 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    struct Nuitka_FrameObject *frame_f80d7b173332ddc4a656424e0cad04dc_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    static struct Nuitka_FrameObject *cache_frame_f80d7b173332ddc4a656424e0cad04dc_4 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    struct Nuitka_FrameObject *frame_050fb5d89cba6e41e297cea0cadd95aa_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_050fb5d89cba6e41e297cea0cadd95aa_5 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    struct Nuitka_FrameObject *frame_a8a6612ab600589b2050d891be0757e4_6;
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
    static struct Nuitka_FrameObject *cache_frame_a8a6612ab600589b2050d891be0757e4_6 = NULL;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
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
    struct Nuitka_FrameObject *frame_670a8ed27ecd465c9e697dff6097fc59_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    static struct Nuitka_FrameObject *cache_frame_670a8ed27ecd465c9e697dff6097fc59_7 = NULL;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8aff1550ff0e7221b614b357070ca52d = NULL;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8aff1550ff0e7221b614b357070ca52d)) {
        Py_XDECREF(cache_frame_8aff1550ff0e7221b614b357070ca52d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8aff1550ff0e7221b614b357070ca52d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8aff1550ff0e7221b614b357070ca52d = MAKE_FUNCTION_FRAME(codeobj_8aff1550ff0e7221b614b357070ca52d, module_torch$distributed$rpc$backend_registry, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8aff1550ff0e7221b614b357070ca52d->m_type_description == NULL);
    frame_8aff1550ff0e7221b614b357070ca52d = cache_frame_8aff1550ff0e7221b614b357070ca52d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8aff1550ff0e7221b614b357070ca52d);
    assert(Py_REFCNT(frame_8aff1550ff0e7221b614b357070ca52d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_xrange_low_1;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT(par_group);
            tmp_called_instance_1 = par_group;
            frame_8aff1550ff0e7221b614b357070ca52d->m_frame.f_lineno = 154;
            tmp_xrange_low_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[30]);
            if (tmp_xrange_low_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_iter_arg_1 = BUILTIN_XRANGE1(tmp_xrange_low_1);
            Py_DECREF(tmp_xrange_low_1);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_1 = "oooooooooooooooooo";
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
        if (isFrameUnusable(cache_frame_1f61ba0e3e5c322b0d290a6e1841b669_2)) {
            Py_XDECREF(cache_frame_1f61ba0e3e5c322b0d290a6e1841b669_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_1f61ba0e3e5c322b0d290a6e1841b669_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_1f61ba0e3e5c322b0d290a6e1841b669_2 = MAKE_FUNCTION_FRAME(codeobj_1f61ba0e3e5c322b0d290a6e1841b669, module_torch$distributed$rpc$backend_registry, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_1f61ba0e3e5c322b0d290a6e1841b669_2->m_type_description == NULL);
        frame_1f61ba0e3e5c322b0d290a6e1841b669_2 = cache_frame_1f61ba0e3e5c322b0d290a6e1841b669_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_1f61ba0e3e5c322b0d290a6e1841b669_2);
        assert(Py_REFCNT(frame_1f61ba0e3e5c322b0d290a6e1841b669_2) == 2);

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
                    exception_lineno = 154;
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
                PyObject *old = outline_0_var__;
                outline_0_var__ = tmp_assign_source_5;
                Py_INCREF(outline_0_var__);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_append_value_1 = DEEP_COPY_TUPLE_GUIDED(mod_consts[45], "iidl");
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
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
            exception_tb = MAKE_TRACEBACK(frame_1f61ba0e3e5c322b0d290a6e1841b669_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_1f61ba0e3e5c322b0d290a6e1841b669_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_1f61ba0e3e5c322b0d290a6e1841b669_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_1f61ba0e3e5c322b0d290a6e1841b669_2,
            type_description_2,
            outline_0_var__
        );


        // Release cached frame if used for exception.
        if (frame_1f61ba0e3e5c322b0d290a6e1841b669_2 == cache_frame_1f61ba0e3e5c322b0d290a6e1841b669_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_1f61ba0e3e5c322b0d290a6e1841b669_2);
            cache_frame_1f61ba0e3e5c322b0d290a6e1841b669_2 = NULL;
        }

        assertFrameObject(frame_1f61ba0e3e5c322b0d290a6e1841b669_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var__);
        outline_0_var__ = NULL;
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

        Py_XDECREF(outline_0_var__);
        outline_0_var__ = NULL;
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
        exception_lineno = 154;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_gathered == NULL);
        var_gathered = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_gathered);
        tmp_args_element_value_1 = var_gathered;
        CHECK_OBJECT(par_my_name);
        tmp_tuple_element_1 = par_my_name;
        tmp_args_element_value_2 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_my_device_count);
        tmp_tuple_element_1 = par_my_device_count;
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_my_device_maps);
        tmp_tuple_element_1 = par_my_device_maps;
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_my_devices);
        tmp_tuple_element_1 = par_my_devices;
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 3, tmp_tuple_element_1);
        CHECK_OBJECT(par_group);
        tmp_args_element_value_3 = par_group;
        frame_8aff1550ff0e7221b614b357070ca52d->m_frame.f_lineno = 155;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_2,
                mod_consts[46],
                call_args
            );
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_6;
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(var_gathered);
            tmp_iter_arg_2 = var_gathered;
            tmp_assign_source_7 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_4;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_8;
        }
        if (isFrameUnusable(cache_frame_68c63c9ab97bd6960b08539ae3d87750_3)) {
            Py_XDECREF(cache_frame_68c63c9ab97bd6960b08539ae3d87750_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_68c63c9ab97bd6960b08539ae3d87750_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_68c63c9ab97bd6960b08539ae3d87750_3 = MAKE_FUNCTION_FRAME(codeobj_68c63c9ab97bd6960b08539ae3d87750, module_torch$distributed$rpc$backend_registry, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_68c63c9ab97bd6960b08539ae3d87750_3->m_type_description == NULL);
        frame_68c63c9ab97bd6960b08539ae3d87750_3 = cache_frame_68c63c9ab97bd6960b08539ae3d87750_3;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_68c63c9ab97bd6960b08539ae3d87750_3);
        assert(Py_REFCNT(frame_68c63c9ab97bd6960b08539ae3d87750_3) == 2);

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_2 = tmp_listcomp_2__$0;
            tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_9 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 158;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_9;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_iter_arg_3 = tmp_listcomp_2__iter_value_0;
            tmp_assign_source_10 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "oo";
                goto try_except_handler_6;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
                tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_10;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_1, 0, 4);
            if (tmp_assign_source_11 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 158;
                goto try_except_handler_7;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
                tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_11;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_2, 1, 4);
            if (tmp_assign_source_12 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 158;
                goto try_except_handler_7;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
                tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_12;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_3 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_3, 2, 4);
            if (tmp_assign_source_13 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 158;
                goto try_except_handler_7;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_3;
                tmp_listcomp$tuple_unpack_1__element_3 = tmp_assign_source_13;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_4 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_14 = UNPACK_NEXT(tmp_unpack_4, 3, 4);
            if (tmp_assign_source_14 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 158;
                goto try_except_handler_7;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_4;
                tmp_listcomp$tuple_unpack_1__element_4 = tmp_assign_source_14;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_iterator_name_1 = tmp_listcomp$tuple_unpack_1__source_iter;
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
                        exception_lineno = 158;
                        goto try_except_handler_7;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[47];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "oo";
                exception_lineno = 158;
                goto try_except_handler_7;
            }
        }
        goto try_end_1;
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

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_6;
        // End of try:
        try_end_1:;
        goto try_end_2;
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

        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_3);
        tmp_listcomp$tuple_unpack_1__element_3 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_4);
        tmp_listcomp$tuple_unpack_1__element_4 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        try_end_2:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
            tmp_assign_source_15 = tmp_listcomp$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_1_var_name;
                outline_1_var_name = tmp_assign_source_15;
                Py_INCREF(outline_1_var_name);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_16;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
            tmp_assign_source_16 = tmp_listcomp$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_1_var__;
                outline_1_var__ = tmp_assign_source_16;
                Py_INCREF(outline_1_var__);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_3);
            tmp_assign_source_17 = tmp_listcomp$tuple_unpack_1__element_3;
            {
                PyObject *old = outline_1_var__;
                assert(old != NULL);
                outline_1_var__ = tmp_assign_source_17;
                Py_INCREF(outline_1_var__);
                Py_DECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_3);
        tmp_listcomp$tuple_unpack_1__element_3 = NULL;

        {
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_4);
            tmp_assign_source_18 = tmp_listcomp$tuple_unpack_1__element_4;
            {
                PyObject *old = outline_1_var__;
                assert(old != NULL);
                outline_1_var__ = tmp_assign_source_18;
                Py_INCREF(outline_1_var__);
                Py_DECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_4);
        tmp_listcomp$tuple_unpack_1__element_4 = NULL;

        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            CHECK_OBJECT(outline_1_var_name);
            tmp_append_value_2 = outline_1_var_name;
            tmp_result = LIST_APPEND0(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_2 = "oo";
            goto try_except_handler_5;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_assign_source_6 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_assign_source_6);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
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
        try_except_handler_5:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
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
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto frame_exception_exit_3;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_return_exit_3:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_4;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_68c63c9ab97bd6960b08539ae3d87750_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_68c63c9ab97bd6960b08539ae3d87750_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_68c63c9ab97bd6960b08539ae3d87750_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_68c63c9ab97bd6960b08539ae3d87750_3,
            type_description_2,
            outline_1_var_name,
            outline_1_var__
        );


        // Release cached frame if used for exception.
        if (frame_68c63c9ab97bd6960b08539ae3d87750_3 == cache_frame_68c63c9ab97bd6960b08539ae3d87750_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_68c63c9ab97bd6960b08539ae3d87750_3);
            cache_frame_68c63c9ab97bd6960b08539ae3d87750_3 = NULL;
        }

        assertFrameObject(frame_68c63c9ab97bd6960b08539ae3d87750_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_4;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF(outline_1_var_name);
        outline_1_var_name = NULL;
        Py_XDECREF(outline_1_var__);
        outline_1_var__ = NULL;
        goto outline_result_2;
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

        Py_XDECREF(outline_1_var_name);
        outline_1_var_name = NULL;
        Py_XDECREF(outline_1_var__);
        outline_1_var__ = NULL;
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
        exception_lineno = 158;
        goto frame_exception_exit_1;
        outline_result_2:;
        assert(var_all_names == NULL);
        var_all_names = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_19;
        // Tried code:
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_iter_arg_4;
            CHECK_OBJECT(var_gathered);
            tmp_iter_arg_4 = var_gathered;
            tmp_assign_source_20 = MAKE_ITERATOR(tmp_iter_arg_4);
            if (tmp_assign_source_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_8;
            }
            assert(tmp_dictcontraction_1__$0 == NULL);
            tmp_dictcontraction_1__$0 = tmp_assign_source_20;
        }
        {
            PyObject *tmp_assign_source_21;
            tmp_assign_source_21 = MAKE_DICT_EMPTY();
            assert(tmp_dictcontraction_1__contraction == NULL);
            tmp_dictcontraction_1__contraction = tmp_assign_source_21;
        }
        if (isFrameUnusable(cache_frame_f80d7b173332ddc4a656424e0cad04dc_4)) {
            Py_XDECREF(cache_frame_f80d7b173332ddc4a656424e0cad04dc_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_f80d7b173332ddc4a656424e0cad04dc_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_f80d7b173332ddc4a656424e0cad04dc_4 = MAKE_FUNCTION_FRAME(codeobj_f80d7b173332ddc4a656424e0cad04dc, module_torch$distributed$rpc$backend_registry, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_f80d7b173332ddc4a656424e0cad04dc_4->m_type_description == NULL);
        frame_f80d7b173332ddc4a656424e0cad04dc_4 = cache_frame_f80d7b173332ddc4a656424e0cad04dc_4;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_f80d7b173332ddc4a656424e0cad04dc_4);
        assert(Py_REFCNT(frame_f80d7b173332ddc4a656424e0cad04dc_4) == 2);

        // Framed code:
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_22;
            CHECK_OBJECT(tmp_dictcontraction_1__$0);
            tmp_next_source_3 = tmp_dictcontraction_1__$0;
            tmp_assign_source_22 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_22 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "ooo";
                    exception_lineno = 159;
                    goto try_except_handler_9;
                }
            }

            {
                PyObject *old = tmp_dictcontraction_1__iter_value_0;
                tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_22;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_iter_arg_5;
            CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
            tmp_iter_arg_5 = tmp_dictcontraction_1__iter_value_0;
            tmp_assign_source_23 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
            if (tmp_assign_source_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "ooo";
                goto try_except_handler_10;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
                tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_23;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_unpack_5 = tmp_dictcontraction$tuple_unpack_1__source_iter;
            tmp_assign_source_24 = UNPACK_NEXT(tmp_unpack_5, 0, 4);
            if (tmp_assign_source_24 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "ooo";
                exception_lineno = 159;
                goto try_except_handler_11;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
                tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_24;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_unpack_6;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_unpack_6 = tmp_dictcontraction$tuple_unpack_1__source_iter;
            tmp_assign_source_25 = UNPACK_NEXT(tmp_unpack_6, 1, 4);
            if (tmp_assign_source_25 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "ooo";
                exception_lineno = 159;
                goto try_except_handler_11;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
                tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_25;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_unpack_7;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_unpack_7 = tmp_dictcontraction$tuple_unpack_1__source_iter;
            tmp_assign_source_26 = UNPACK_NEXT(tmp_unpack_7, 2, 4);
            if (tmp_assign_source_26 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "ooo";
                exception_lineno = 159;
                goto try_except_handler_11;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_3;
                tmp_dictcontraction$tuple_unpack_1__element_3 = tmp_assign_source_26;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_unpack_8;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_unpack_8 = tmp_dictcontraction$tuple_unpack_1__source_iter;
            tmp_assign_source_27 = UNPACK_NEXT(tmp_unpack_8, 3, 4);
            if (tmp_assign_source_27 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "ooo";
                exception_lineno = 159;
                goto try_except_handler_11;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_4;
                tmp_dictcontraction$tuple_unpack_1__element_4 = tmp_assign_source_27;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_2;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_iterator_name_2 = tmp_dictcontraction$tuple_unpack_1__source_iter;
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

                        type_description_2 = "ooo";
                        exception_lineno = 159;
                        goto try_except_handler_11;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[47];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "ooo";
                exception_lineno = 159;
                goto try_except_handler_11;
            }
        }
        goto try_end_3;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
        tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_10;
        // End of try:
        try_end_3:;
        goto try_end_4;
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

        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
        tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
        tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_3);
        tmp_dictcontraction$tuple_unpack_1__element_3 = NULL;
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_4);
        tmp_dictcontraction$tuple_unpack_1__element_4 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        try_end_4:;
        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
        tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_28;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_1);
            tmp_assign_source_28 = tmp_dictcontraction$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_2_var_name;
                outline_2_var_name = tmp_assign_source_28;
                Py_INCREF(outline_2_var_name);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
        tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_29;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_2);
            tmp_assign_source_29 = tmp_dictcontraction$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_2_var_count;
                outline_2_var_count = tmp_assign_source_29;
                Py_INCREF(outline_2_var_count);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
        tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_assign_source_30;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_3);
            tmp_assign_source_30 = tmp_dictcontraction$tuple_unpack_1__element_3;
            {
                PyObject *old = outline_2_var__;
                outline_2_var__ = tmp_assign_source_30;
                Py_INCREF(outline_2_var__);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_3);
        tmp_dictcontraction$tuple_unpack_1__element_3 = NULL;

        {
            PyObject *tmp_assign_source_31;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_4);
            tmp_assign_source_31 = tmp_dictcontraction$tuple_unpack_1__element_4;
            {
                PyObject *old = outline_2_var__;
                assert(old != NULL);
                outline_2_var__ = tmp_assign_source_31;
                Py_INCREF(outline_2_var__);
                Py_DECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_4);
        tmp_dictcontraction$tuple_unpack_1__element_4 = NULL;

        CHECK_OBJECT(outline_2_var_count);
        tmp_dictset_value = outline_2_var_count;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        tmp_dictset_dict = tmp_dictcontraction_1__contraction;
        CHECK_OBJECT(outline_2_var_name);
        tmp_dictset_key = outline_2_var_name;
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_2 = "ooo";
            goto try_except_handler_9;
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_2 = "ooo";
            goto try_except_handler_9;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        tmp_assign_source_19 = tmp_dictcontraction_1__contraction;
        Py_INCREF(tmp_assign_source_19);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
        goto frame_return_exit_4;
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

        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto frame_exception_exit_4;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_return_exit_4:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_8;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f80d7b173332ddc4a656424e0cad04dc_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f80d7b173332ddc4a656424e0cad04dc_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f80d7b173332ddc4a656424e0cad04dc_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f80d7b173332ddc4a656424e0cad04dc_4,
            type_description_2,
            outline_2_var_name,
            outline_2_var_count,
            outline_2_var__
        );


        // Release cached frame if used for exception.
        if (frame_f80d7b173332ddc4a656424e0cad04dc_4 == cache_frame_f80d7b173332ddc4a656424e0cad04dc_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_f80d7b173332ddc4a656424e0cad04dc_4);
            cache_frame_f80d7b173332ddc4a656424e0cad04dc_4 = NULL;
        }

        assertFrameObject(frame_f80d7b173332ddc4a656424e0cad04dc_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;
        type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_8;
        skip_nested_handling_3:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_XDECREF(outline_2_var_name);
        outline_2_var_name = NULL;
        Py_XDECREF(outline_2_var_count);
        outline_2_var_count = NULL;
        Py_XDECREF(outline_2_var__);
        outline_2_var__ = NULL;
        goto outline_result_3;
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

        Py_XDECREF(outline_2_var_name);
        outline_2_var_name = NULL;
        Py_XDECREF(outline_2_var_count);
        outline_2_var_count = NULL;
        Py_XDECREF(outline_2_var__);
        outline_2_var__ = NULL;
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
        exception_lineno = 159;
        goto frame_exception_exit_1;
        outline_result_3:;
        assert(var_all_device_counts == NULL);
        var_all_device_counts = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_32;
        // Tried code:
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_iter_arg_6;
            CHECK_OBJECT(var_gathered);
            tmp_iter_arg_6 = var_gathered;
            tmp_assign_source_33 = MAKE_ITERATOR(tmp_iter_arg_6);
            if (tmp_assign_source_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;
                type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_12;
            }
            assert(tmp_dictcontraction_2__$0 == NULL);
            tmp_dictcontraction_2__$0 = tmp_assign_source_33;
        }
        {
            PyObject *tmp_assign_source_34;
            tmp_assign_source_34 = MAKE_DICT_EMPTY();
            assert(tmp_dictcontraction_2__contraction == NULL);
            tmp_dictcontraction_2__contraction = tmp_assign_source_34;
        }
        if (isFrameUnusable(cache_frame_050fb5d89cba6e41e297cea0cadd95aa_5)) {
            Py_XDECREF(cache_frame_050fb5d89cba6e41e297cea0cadd95aa_5);

#if _DEBUG_REFCOUNTS
            if (cache_frame_050fb5d89cba6e41e297cea0cadd95aa_5 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_050fb5d89cba6e41e297cea0cadd95aa_5 = MAKE_FUNCTION_FRAME(codeobj_050fb5d89cba6e41e297cea0cadd95aa, module_torch$distributed$rpc$backend_registry, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_050fb5d89cba6e41e297cea0cadd95aa_5->m_type_description == NULL);
        frame_050fb5d89cba6e41e297cea0cadd95aa_5 = cache_frame_050fb5d89cba6e41e297cea0cadd95aa_5;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_050fb5d89cba6e41e297cea0cadd95aa_5);
        assert(Py_REFCNT(frame_050fb5d89cba6e41e297cea0cadd95aa_5) == 2);

        // Framed code:
        // Tried code:
        loop_start_4:;
        {
            PyObject *tmp_next_source_4;
            PyObject *tmp_assign_source_35;
            CHECK_OBJECT(tmp_dictcontraction_2__$0);
            tmp_next_source_4 = tmp_dictcontraction_2__$0;
            tmp_assign_source_35 = ITERATOR_NEXT(tmp_next_source_4);
            if (tmp_assign_source_35 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_4;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "ooo";
                    exception_lineno = 160;
                    goto try_except_handler_13;
                }
            }

            {
                PyObject *old = tmp_dictcontraction_2__iter_value_0;
                tmp_dictcontraction_2__iter_value_0 = tmp_assign_source_35;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_iter_arg_7;
            CHECK_OBJECT(tmp_dictcontraction_2__iter_value_0);
            tmp_iter_arg_7 = tmp_dictcontraction_2__iter_value_0;
            tmp_assign_source_36 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_7);
            if (tmp_assign_source_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;
                type_description_2 = "ooo";
                goto try_except_handler_14;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_2__source_iter;
                tmp_dictcontraction$tuple_unpack_2__source_iter = tmp_assign_source_36;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_unpack_9;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__source_iter);
            tmp_unpack_9 = tmp_dictcontraction$tuple_unpack_2__source_iter;
            tmp_assign_source_37 = UNPACK_NEXT(tmp_unpack_9, 0, 4);
            if (tmp_assign_source_37 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "ooo";
                exception_lineno = 160;
                goto try_except_handler_15;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_2__element_1;
                tmp_dictcontraction$tuple_unpack_2__element_1 = tmp_assign_source_37;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_unpack_10;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__source_iter);
            tmp_unpack_10 = tmp_dictcontraction$tuple_unpack_2__source_iter;
            tmp_assign_source_38 = UNPACK_NEXT(tmp_unpack_10, 1, 4);
            if (tmp_assign_source_38 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "ooo";
                exception_lineno = 160;
                goto try_except_handler_15;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_2__element_2;
                tmp_dictcontraction$tuple_unpack_2__element_2 = tmp_assign_source_38;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_unpack_11;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__source_iter);
            tmp_unpack_11 = tmp_dictcontraction$tuple_unpack_2__source_iter;
            tmp_assign_source_39 = UNPACK_NEXT(tmp_unpack_11, 2, 4);
            if (tmp_assign_source_39 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "ooo";
                exception_lineno = 160;
                goto try_except_handler_15;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_2__element_3;
                tmp_dictcontraction$tuple_unpack_2__element_3 = tmp_assign_source_39;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_unpack_12;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__source_iter);
            tmp_unpack_12 = tmp_dictcontraction$tuple_unpack_2__source_iter;
            tmp_assign_source_40 = UNPACK_NEXT(tmp_unpack_12, 3, 4);
            if (tmp_assign_source_40 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "ooo";
                exception_lineno = 160;
                goto try_except_handler_15;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_2__element_4;
                tmp_dictcontraction$tuple_unpack_2__element_4 = tmp_assign_source_40;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_3;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__source_iter);
            tmp_iterator_name_3 = tmp_dictcontraction$tuple_unpack_2__source_iter;
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

                        type_description_2 = "ooo";
                        exception_lineno = 160;
                        goto try_except_handler_15;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[47];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "ooo";
                exception_lineno = 160;
                goto try_except_handler_15;
            }
        }
        goto try_end_5;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_2__source_iter);
        tmp_dictcontraction$tuple_unpack_2__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_14;
        // End of try:
        try_end_5:;
        goto try_end_6;
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

        Py_XDECREF(tmp_dictcontraction$tuple_unpack_2__element_1);
        tmp_dictcontraction$tuple_unpack_2__element_1 = NULL;
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_2__element_2);
        tmp_dictcontraction$tuple_unpack_2__element_2 = NULL;
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_2__element_3);
        tmp_dictcontraction$tuple_unpack_2__element_3 = NULL;
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_2__element_4);
        tmp_dictcontraction$tuple_unpack_2__element_4 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto try_except_handler_13;
        // End of try:
        try_end_6:;
        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_2__source_iter);
        tmp_dictcontraction$tuple_unpack_2__source_iter = NULL;
        {
            PyObject *tmp_assign_source_41;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__element_1);
            tmp_assign_source_41 = tmp_dictcontraction$tuple_unpack_2__element_1;
            {
                PyObject *old = outline_3_var_name;
                outline_3_var_name = tmp_assign_source_41;
                Py_INCREF(outline_3_var_name);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_2__element_1);
        tmp_dictcontraction$tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_42;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__element_2);
            tmp_assign_source_42 = tmp_dictcontraction$tuple_unpack_2__element_2;
            {
                PyObject *old = outline_3_var__;
                outline_3_var__ = tmp_assign_source_42;
                Py_INCREF(outline_3_var__);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_2__element_2);
        tmp_dictcontraction$tuple_unpack_2__element_2 = NULL;

        {
            PyObject *tmp_assign_source_43;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__element_3);
            tmp_assign_source_43 = tmp_dictcontraction$tuple_unpack_2__element_3;
            {
                PyObject *old = outline_3_var_map_;
                outline_3_var_map_ = tmp_assign_source_43;
                Py_INCREF(outline_3_var_map_);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_2__element_3);
        tmp_dictcontraction$tuple_unpack_2__element_3 = NULL;

        {
            PyObject *tmp_assign_source_44;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__element_4);
            tmp_assign_source_44 = tmp_dictcontraction$tuple_unpack_2__element_4;
            {
                PyObject *old = outline_3_var__;
                assert(old != NULL);
                outline_3_var__ = tmp_assign_source_44;
                Py_INCREF(outline_3_var__);
                Py_DECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_2__element_4);
        tmp_dictcontraction$tuple_unpack_2__element_4 = NULL;

        CHECK_OBJECT(outline_3_var_map_);
        tmp_dictset_value = outline_3_var_map_;
        CHECK_OBJECT(tmp_dictcontraction_2__contraction);
        tmp_dictset_dict = tmp_dictcontraction_2__contraction;
        CHECK_OBJECT(outline_3_var_name);
        tmp_dictset_key = outline_3_var_name;
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_2 = "ooo";
            goto try_except_handler_13;
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_2 = "ooo";
            goto try_except_handler_13;
        }
        goto loop_start_4;
        loop_end_4:;
        CHECK_OBJECT(tmp_dictcontraction_2__contraction);
        tmp_assign_source_32 = tmp_dictcontraction_2__contraction;
        Py_INCREF(tmp_assign_source_32);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        CHECK_OBJECT(tmp_dictcontraction_2__$0);
        Py_DECREF(tmp_dictcontraction_2__$0);
        tmp_dictcontraction_2__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_2__contraction);
        Py_DECREF(tmp_dictcontraction_2__contraction);
        tmp_dictcontraction_2__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_2__iter_value_0);
        tmp_dictcontraction_2__iter_value_0 = NULL;
        goto frame_return_exit_5;
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

        CHECK_OBJECT(tmp_dictcontraction_2__$0);
        Py_DECREF(tmp_dictcontraction_2__$0);
        tmp_dictcontraction_2__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_2__contraction);
        Py_DECREF(tmp_dictcontraction_2__contraction);
        tmp_dictcontraction_2__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_2__iter_value_0);
        tmp_dictcontraction_2__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto frame_exception_exit_5;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_return_exit_5:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_12;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_050fb5d89cba6e41e297cea0cadd95aa_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_050fb5d89cba6e41e297cea0cadd95aa_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_050fb5d89cba6e41e297cea0cadd95aa_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_050fb5d89cba6e41e297cea0cadd95aa_5,
            type_description_2,
            outline_3_var_name,
            outline_3_var__,
            outline_3_var_map_
        );


        // Release cached frame if used for exception.
        if (frame_050fb5d89cba6e41e297cea0cadd95aa_5 == cache_frame_050fb5d89cba6e41e297cea0cadd95aa_5) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_050fb5d89cba6e41e297cea0cadd95aa_5);
            cache_frame_050fb5d89cba6e41e297cea0cadd95aa_5 = NULL;
        }

        assertFrameObject(frame_050fb5d89cba6e41e297cea0cadd95aa_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;
        type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_12;
        skip_nested_handling_4:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_XDECREF(outline_3_var_name);
        outline_3_var_name = NULL;
        Py_XDECREF(outline_3_var__);
        outline_3_var__ = NULL;
        Py_XDECREF(outline_3_var_map_);
        outline_3_var_map_ = NULL;
        goto outline_result_4;
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

        Py_XDECREF(outline_3_var_name);
        outline_3_var_name = NULL;
        Py_XDECREF(outline_3_var__);
        outline_3_var__ = NULL;
        Py_XDECREF(outline_3_var_map_);
        outline_3_var_map_ = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 160;
        goto frame_exception_exit_1;
        outline_result_4:;
        assert(var_all_device_maps == NULL);
        var_all_device_maps = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_45;
        // Tried code:
        {
            PyObject *tmp_assign_source_46;
            PyObject *tmp_iter_arg_8;
            CHECK_OBJECT(var_gathered);
            tmp_iter_arg_8 = var_gathered;
            tmp_assign_source_46 = MAKE_ITERATOR(tmp_iter_arg_8);
            if (tmp_assign_source_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;
                type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_16;
            }
            assert(tmp_dictcontraction_3__$0 == NULL);
            tmp_dictcontraction_3__$0 = tmp_assign_source_46;
        }
        {
            PyObject *tmp_assign_source_47;
            tmp_assign_source_47 = MAKE_DICT_EMPTY();
            assert(tmp_dictcontraction_3__contraction == NULL);
            tmp_dictcontraction_3__contraction = tmp_assign_source_47;
        }
        if (isFrameUnusable(cache_frame_a8a6612ab600589b2050d891be0757e4_6)) {
            Py_XDECREF(cache_frame_a8a6612ab600589b2050d891be0757e4_6);

#if _DEBUG_REFCOUNTS
            if (cache_frame_a8a6612ab600589b2050d891be0757e4_6 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_a8a6612ab600589b2050d891be0757e4_6 = MAKE_FUNCTION_FRAME(codeobj_a8a6612ab600589b2050d891be0757e4, module_torch$distributed$rpc$backend_registry, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_a8a6612ab600589b2050d891be0757e4_6->m_type_description == NULL);
        frame_a8a6612ab600589b2050d891be0757e4_6 = cache_frame_a8a6612ab600589b2050d891be0757e4_6;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_a8a6612ab600589b2050d891be0757e4_6);
        assert(Py_REFCNT(frame_a8a6612ab600589b2050d891be0757e4_6) == 2);

        // Framed code:
        // Tried code:
        loop_start_5:;
        {
            PyObject *tmp_next_source_5;
            PyObject *tmp_assign_source_48;
            CHECK_OBJECT(tmp_dictcontraction_3__$0);
            tmp_next_source_5 = tmp_dictcontraction_3__$0;
            tmp_assign_source_48 = ITERATOR_NEXT(tmp_next_source_5);
            if (tmp_assign_source_48 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_5;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "ooo";
                    exception_lineno = 161;
                    goto try_except_handler_17;
                }
            }

            {
                PyObject *old = tmp_dictcontraction_3__iter_value_0;
                tmp_dictcontraction_3__iter_value_0 = tmp_assign_source_48;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_49;
            PyObject *tmp_iter_arg_9;
            CHECK_OBJECT(tmp_dictcontraction_3__iter_value_0);
            tmp_iter_arg_9 = tmp_dictcontraction_3__iter_value_0;
            tmp_assign_source_49 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_9);
            if (tmp_assign_source_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;
                type_description_2 = "ooo";
                goto try_except_handler_18;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_3__source_iter;
                tmp_dictcontraction$tuple_unpack_3__source_iter = tmp_assign_source_49;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_50;
            PyObject *tmp_unpack_13;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_3__source_iter);
            tmp_unpack_13 = tmp_dictcontraction$tuple_unpack_3__source_iter;
            tmp_assign_source_50 = UNPACK_NEXT(tmp_unpack_13, 0, 4);
            if (tmp_assign_source_50 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "ooo";
                exception_lineno = 161;
                goto try_except_handler_19;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_3__element_1;
                tmp_dictcontraction$tuple_unpack_3__element_1 = tmp_assign_source_50;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_51;
            PyObject *tmp_unpack_14;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_3__source_iter);
            tmp_unpack_14 = tmp_dictcontraction$tuple_unpack_3__source_iter;
            tmp_assign_source_51 = UNPACK_NEXT(tmp_unpack_14, 1, 4);
            if (tmp_assign_source_51 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "ooo";
                exception_lineno = 161;
                goto try_except_handler_19;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_3__element_2;
                tmp_dictcontraction$tuple_unpack_3__element_2 = tmp_assign_source_51;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_52;
            PyObject *tmp_unpack_15;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_3__source_iter);
            tmp_unpack_15 = tmp_dictcontraction$tuple_unpack_3__source_iter;
            tmp_assign_source_52 = UNPACK_NEXT(tmp_unpack_15, 2, 4);
            if (tmp_assign_source_52 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "ooo";
                exception_lineno = 161;
                goto try_except_handler_19;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_3__element_3;
                tmp_dictcontraction$tuple_unpack_3__element_3 = tmp_assign_source_52;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_53;
            PyObject *tmp_unpack_16;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_3__source_iter);
            tmp_unpack_16 = tmp_dictcontraction$tuple_unpack_3__source_iter;
            tmp_assign_source_53 = UNPACK_NEXT(tmp_unpack_16, 3, 4);
            if (tmp_assign_source_53 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "ooo";
                exception_lineno = 161;
                goto try_except_handler_19;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_3__element_4;
                tmp_dictcontraction$tuple_unpack_3__element_4 = tmp_assign_source_53;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_4;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_3__source_iter);
            tmp_iterator_name_4 = tmp_dictcontraction$tuple_unpack_3__source_iter;
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

                        type_description_2 = "ooo";
                        exception_lineno = 161;
                        goto try_except_handler_19;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[47];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "ooo";
                exception_lineno = 161;
                goto try_except_handler_19;
            }
        }
        goto try_end_7;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_3__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_3__source_iter);
        tmp_dictcontraction$tuple_unpack_3__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto try_except_handler_18;
        // End of try:
        try_end_7:;
        goto try_end_8;
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

        Py_XDECREF(tmp_dictcontraction$tuple_unpack_3__element_1);
        tmp_dictcontraction$tuple_unpack_3__element_1 = NULL;
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_3__element_2);
        tmp_dictcontraction$tuple_unpack_3__element_2 = NULL;
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_3__element_3);
        tmp_dictcontraction$tuple_unpack_3__element_3 = NULL;
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_3__element_4);
        tmp_dictcontraction$tuple_unpack_3__element_4 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto try_except_handler_17;
        // End of try:
        try_end_8:;
        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_3__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_3__source_iter);
        tmp_dictcontraction$tuple_unpack_3__source_iter = NULL;
        {
            PyObject *tmp_assign_source_54;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_3__element_1);
            tmp_assign_source_54 = tmp_dictcontraction$tuple_unpack_3__element_1;
            {
                PyObject *old = outline_4_var_name;
                outline_4_var_name = tmp_assign_source_54;
                Py_INCREF(outline_4_var_name);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_3__element_1);
        tmp_dictcontraction$tuple_unpack_3__element_1 = NULL;

        {
            PyObject *tmp_assign_source_55;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_3__element_2);
            tmp_assign_source_55 = tmp_dictcontraction$tuple_unpack_3__element_2;
            {
                PyObject *old = outline_4_var__;
                outline_4_var__ = tmp_assign_source_55;
                Py_INCREF(outline_4_var__);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_3__element_2);
        tmp_dictcontraction$tuple_unpack_3__element_2 = NULL;

        {
            PyObject *tmp_assign_source_56;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_3__element_3);
            tmp_assign_source_56 = tmp_dictcontraction$tuple_unpack_3__element_3;
            {
                PyObject *old = outline_4_var__;
                assert(old != NULL);
                outline_4_var__ = tmp_assign_source_56;
                Py_INCREF(outline_4_var__);
                Py_DECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_3__element_3);
        tmp_dictcontraction$tuple_unpack_3__element_3 = NULL;

        {
            PyObject *tmp_assign_source_57;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_3__element_4);
            tmp_assign_source_57 = tmp_dictcontraction$tuple_unpack_3__element_4;
            {
                PyObject *old = outline_4_var_devices;
                outline_4_var_devices = tmp_assign_source_57;
                Py_INCREF(outline_4_var_devices);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_3__element_4);
        tmp_dictcontraction$tuple_unpack_3__element_4 = NULL;

        CHECK_OBJECT(outline_4_var_devices);
        tmp_dictset_value = outline_4_var_devices;
        CHECK_OBJECT(tmp_dictcontraction_3__contraction);
        tmp_dictset_dict = tmp_dictcontraction_3__contraction;
        CHECK_OBJECT(outline_4_var_name);
        tmp_dictset_key = outline_4_var_name;
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_2 = "ooo";
            goto try_except_handler_17;
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_2 = "ooo";
            goto try_except_handler_17;
        }
        goto loop_start_5;
        loop_end_5:;
        CHECK_OBJECT(tmp_dictcontraction_3__contraction);
        tmp_assign_source_45 = tmp_dictcontraction_3__contraction;
        Py_INCREF(tmp_assign_source_45);
        goto try_return_handler_17;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        CHECK_OBJECT(tmp_dictcontraction_3__$0);
        Py_DECREF(tmp_dictcontraction_3__$0);
        tmp_dictcontraction_3__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_3__contraction);
        Py_DECREF(tmp_dictcontraction_3__contraction);
        tmp_dictcontraction_3__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_3__iter_value_0);
        tmp_dictcontraction_3__iter_value_0 = NULL;
        goto frame_return_exit_6;
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

        CHECK_OBJECT(tmp_dictcontraction_3__$0);
        Py_DECREF(tmp_dictcontraction_3__$0);
        tmp_dictcontraction_3__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_3__contraction);
        Py_DECREF(tmp_dictcontraction_3__contraction);
        tmp_dictcontraction_3__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_3__iter_value_0);
        tmp_dictcontraction_3__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto frame_exception_exit_6;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;
        frame_return_exit_6:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_16;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a8a6612ab600589b2050d891be0757e4_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a8a6612ab600589b2050d891be0757e4_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a8a6612ab600589b2050d891be0757e4_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a8a6612ab600589b2050d891be0757e4_6,
            type_description_2,
            outline_4_var_name,
            outline_4_var__,
            outline_4_var_devices
        );


        // Release cached frame if used for exception.
        if (frame_a8a6612ab600589b2050d891be0757e4_6 == cache_frame_a8a6612ab600589b2050d891be0757e4_6) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_a8a6612ab600589b2050d891be0757e4_6);
            cache_frame_a8a6612ab600589b2050d891be0757e4_6 = NULL;
        }

        assertFrameObject(frame_a8a6612ab600589b2050d891be0757e4_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;
        type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_16;
        skip_nested_handling_5:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        Py_XDECREF(outline_4_var_name);
        outline_4_var_name = NULL;
        Py_XDECREF(outline_4_var__);
        outline_4_var__ = NULL;
        Py_XDECREF(outline_4_var_devices);
        outline_4_var_devices = NULL;
        goto outline_result_5;
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

        Py_XDECREF(outline_4_var_name);
        outline_4_var_name = NULL;
        Py_XDECREF(outline_4_var__);
        outline_4_var__ = NULL;
        Py_XDECREF(outline_4_var_devices);
        outline_4_var_devices = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 161;
        goto frame_exception_exit_1;
        outline_result_5:;
        assert(var_all_devices == NULL);
        var_all_devices = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_iter_arg_10;
        CHECK_OBJECT(var_all_names);
        tmp_iter_arg_10 = var_all_names;
        tmp_assign_source_58 = MAKE_ITERATOR(tmp_iter_arg_10);
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_58;
    }
    // Tried code:
    loop_start_6:;
    {
        PyObject *tmp_next_source_6;
        PyObject *tmp_assign_source_59;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_6 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_59 = ITERATOR_NEXT(tmp_next_source_6);
        if (tmp_assign_source_59 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_6;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooo";
                exception_lineno = 163;
                goto try_except_handler_20;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_59;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_60;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_60 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_node;
            var_node = tmp_assign_source_60;
            Py_INCREF(var_node);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_all_devices);
        tmp_expression_value_1 = var_all_devices;
        CHECK_OBJECT(var_node);
        tmp_subscript_value_1 = var_node;
        tmp_assign_source_61 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_20;
        }
        {
            PyObject *old = var_devices;
            var_devices = tmp_assign_source_61;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_set_arg_1;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT(var_devices);
        tmp_set_arg_1 = var_devices;
        tmp_len_arg_1 = PySet_New(tmp_set_arg_1);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_20;
        }
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_20;
        }
        CHECK_OBJECT(var_devices);
        tmp_len_arg_2 = var_devices;
        tmp_cmp_expr_right_1 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 165;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_20;
        }
        tmp_condition_result_1 = RICH_COMPARE_EQ_CBOOL_LONG_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        tmp_condition_result_1 = !tmp_condition_result_1;
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
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[48];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_node);
            tmp_format_value_1 = var_node;
            tmp_format_spec_1 = mod_consts[32];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[49];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_2);
            CHECK_OBJECT(var_devices);
            tmp_format_value_2 = var_devices;
            tmp_format_spec_2 = mod_consts[32];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto try_except_handler_20;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[32], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_20;
        }
        frame_8aff1550ff0e7221b614b357070ca52d->m_frame.f_lineno = 166;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 166;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_20;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_20;
        }
        CHECK_OBJECT(var_devices);
        tmp_args_element_value_4 = var_devices;
        CHECK_OBJECT(var_all_device_counts);
        tmp_expression_value_2 = var_all_device_counts;
        CHECK_OBJECT(var_node);
        tmp_subscript_value_2 = var_node;
        tmp_args_element_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_20;
        }
        frame_8aff1550ff0e7221b614b357070ca52d->m_frame.f_lineno = 170;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_5);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_20;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_20;
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
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = mod_consts[48];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(6);
        {
            PyObject *tmp_format_value_3;
            PyObject *tmp_format_spec_3;
            PyObject *tmp_format_value_4;
            PyObject *tmp_format_spec_4;
            PyObject *tmp_format_value_5;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_format_spec_5;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(var_node);
            tmp_format_value_3 = var_node;
            tmp_format_spec_3 = mod_consts[32];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[51];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(var_devices);
            tmp_format_value_4 = var_devices;
            tmp_format_spec_4 = mod_consts[32];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_4, tmp_format_spec_4);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 3, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[52];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 4, tmp_tuple_element_3);
            CHECK_OBJECT(var_all_device_counts);
            tmp_expression_value_3 = var_all_device_counts;
            CHECK_OBJECT(var_node);
            tmp_subscript_value_3 = var_node;
            tmp_format_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
            if (tmp_format_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_format_spec_5 = mod_consts[32];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_5, tmp_format_spec_5);
            Py_DECREF(tmp_format_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 5, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_string_concat_values_2);
        goto try_except_handler_20;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_make_exception_arg_2 = PyUnicode_Join(mod_consts[32], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_20;
        }
        frame_8aff1550ff0e7221b614b357070ca52d->m_frame.f_lineno = 171;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 171;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_20;
    }
    branch_no_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 163;
        type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_20;
    }
    goto loop_start_6;
    loop_end_6:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
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
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_iter_arg_11;
        CHECK_OBJECT(var_all_names);
        tmp_iter_arg_11 = var_all_names;
        tmp_assign_source_62 = MAKE_ITERATOR(tmp_iter_arg_11);
        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_62;
    }
    // Tried code:
    loop_start_7:;
    {
        PyObject *tmp_next_source_7;
        PyObject *tmp_assign_source_63;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_7 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_63 = ITERATOR_NEXT(tmp_next_source_7);
        if (tmp_assign_source_63 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_7;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooo";
                exception_lineno = 177;
                goto try_except_handler_21;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_63;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_64;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_64 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_source_node;
            var_source_node = tmp_assign_source_64;
            Py_INCREF(var_source_node);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_set_arg_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(var_all_device_maps);
        tmp_expression_value_6 = var_all_device_maps;
        CHECK_OBJECT(var_source_node);
        tmp_subscript_value_4 = var_source_node;
        tmp_expression_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_4);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_21;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[4]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_21;
        }
        frame_8aff1550ff0e7221b614b357070ca52d->m_frame.f_lineno = 178;
        tmp_set_arg_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_set_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_21;
        }
        tmp_expression_value_4 = PySet_New(tmp_set_arg_2);
        Py_DECREF(tmp_set_arg_2);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_21;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[53]);
        Py_DECREF(tmp_expression_value_4);
        assert(!(tmp_called_value_2 == NULL));
        if (var_all_names == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 178;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_21;
        }

        tmp_args_element_value_6 = var_all_names;
        frame_8aff1550ff0e7221b614b357070ca52d->m_frame.f_lineno = 178;
        tmp_operand_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_2);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_21;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_21;
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
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_4;
        tmp_tuple_element_4 = mod_consts[48];
        tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(6);
        {
            PyObject *tmp_format_value_6;
            PyObject *tmp_format_spec_6;
            PyObject *tmp_format_value_7;
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_format_spec_7;
            PyObject *tmp_format_value_8;
            PyObject *tmp_format_spec_8;
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_4);
            CHECK_OBJECT(var_source_node);
            tmp_format_value_6 = var_source_node;
            tmp_format_spec_6 = mod_consts[32];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tmp_format_value_6, tmp_format_spec_6);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[55];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_4);
            CHECK_OBJECT(var_all_device_maps);
            tmp_expression_value_8 = var_all_device_maps;
            CHECK_OBJECT(var_source_node);
            tmp_subscript_value_5 = var_source_node;
            tmp_expression_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_5);
            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[4]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            frame_8aff1550ff0e7221b614b357070ca52d->m_frame.f_lineno = 180;
            tmp_format_value_7 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
            Py_DECREF(tmp_called_value_4);
            if (tmp_format_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_format_spec_7 = mod_consts[32];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tmp_format_value_7, tmp_format_spec_7);
            Py_DECREF(tmp_format_value_7);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 3, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[56];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 4, tmp_tuple_element_4);
            if (var_all_names == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 180;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_3;
            }

            tmp_format_value_8 = var_all_names;
            tmp_format_spec_8 = mod_consts[32];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tmp_format_value_8, tmp_format_spec_8);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 5, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_string_concat_values_3);
        goto try_except_handler_21;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_make_exception_arg_3 = PyUnicode_Join(mod_consts[32], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_make_exception_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_21;
        }
        frame_8aff1550ff0e7221b614b357070ca52d->m_frame.f_lineno = 179;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_3);
        Py_DECREF(tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 179;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_21;
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_iter_arg_12;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_6;
        CHECK_OBJECT(var_all_device_maps);
        tmp_expression_value_10 = var_all_device_maps;
        CHECK_OBJECT(var_source_node);
        tmp_subscript_value_6 = var_source_node;
        tmp_expression_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_6);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_21;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[57]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_21;
        }
        frame_8aff1550ff0e7221b614b357070ca52d->m_frame.f_lineno = 184;
        tmp_iter_arg_12 = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
        Py_DECREF(tmp_called_value_5);
        if (tmp_iter_arg_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_21;
        }
        tmp_assign_source_65 = MAKE_ITERATOR(tmp_iter_arg_12);
        Py_DECREF(tmp_iter_arg_12);
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_21;
        }
        {
            PyObject *old = tmp_for_loop_3__for_iterator;
            tmp_for_loop_3__for_iterator = tmp_assign_source_65;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_8:;
    {
        PyObject *tmp_next_source_8;
        PyObject *tmp_assign_source_66;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_8 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_66 = ITERATOR_NEXT(tmp_next_source_8);
        if (tmp_assign_source_66 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_8;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooo";
                exception_lineno = 184;
                goto try_except_handler_22;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_66;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_iter_arg_13;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_iter_arg_13 = tmp_for_loop_3__iter_value;
        tmp_assign_source_67 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_13);
        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_67;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_unpack_17;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_17 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_68 = UNPACK_NEXT(tmp_unpack_17, 0, 2);
        if (tmp_assign_source_68 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooo";
            exception_lineno = 184;
            goto try_except_handler_24;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_68;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_unpack_18;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_18 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_69 = UNPACK_NEXT(tmp_unpack_18, 1, 2);
        if (tmp_assign_source_69 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooo";
            exception_lineno = 184;
            goto try_except_handler_24;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_69;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_5 = tmp_tuple_unpack_1__source_iter;
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

                    type_description_1 = "oooooooooooooooooo";
                    exception_lineno = 184;
                    goto try_except_handler_24;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[58];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooo";
            exception_lineno = 184;
            goto try_except_handler_24;
        }
    }
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto try_except_handler_23;
    // End of try:
    try_end_10:;
    goto try_end_11;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto try_except_handler_22;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_70;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_70 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_target_node;
            var_target_node = tmp_assign_source_70;
            Py_INCREF(var_target_node);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_71;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_71 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_map_;
            var_map_ = tmp_assign_source_71;
            Py_INCREF(var_map_);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_len_arg_3;
        PyObject *tmp_set_arg_3;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_len_arg_4;
        CHECK_OBJECT(var_map_);
        tmp_expression_value_11 = var_map_;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[59]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_22;
        }
        frame_8aff1550ff0e7221b614b357070ca52d->m_frame.f_lineno = 185;
        tmp_set_arg_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_6);
        Py_DECREF(tmp_called_value_6);
        if (tmp_set_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_len_arg_3 = PySet_New(tmp_set_arg_3);
        Py_DECREF(tmp_set_arg_3);
        if (tmp_len_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_cmp_expr_left_2 = BUILTIN_LEN(tmp_len_arg_3);
        Py_DECREF(tmp_len_arg_3);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_22;
        }
        CHECK_OBJECT(var_map_);
        tmp_len_arg_4 = var_map_;
        tmp_cmp_expr_right_2 = BUILTIN_LEN(tmp_len_arg_4);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 185;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_condition_result_4 = RICH_COMPARE_EQ_CBOOL_LONG_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        tmp_condition_result_4 = !tmp_condition_result_4;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_make_exception_arg_4;
        PyObject *tmp_string_concat_values_4;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = mod_consts[48];
        tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(6);
        {
            PyObject *tmp_format_value_9;
            PyObject *tmp_format_spec_9;
            PyObject *tmp_format_value_10;
            PyObject *tmp_format_spec_10;
            PyObject *tmp_format_value_11;
            PyObject *tmp_format_spec_11;
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_5);
            CHECK_OBJECT(var_source_node);
            tmp_format_value_9 = var_source_node;
            tmp_format_spec_9 = mod_consts[32];
            tmp_tuple_element_5 = BUILTIN_FORMAT(tmp_format_value_9, tmp_format_spec_9);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[60];
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 2, tmp_tuple_element_5);
            CHECK_OBJECT(var_target_node);
            tmp_format_value_10 = var_target_node;
            tmp_format_spec_10 = mod_consts[32];
            tmp_tuple_element_5 = BUILTIN_FORMAT(tmp_format_value_10, tmp_format_spec_10);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 3, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[61];
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 4, tmp_tuple_element_5);
            CHECK_OBJECT(var_map_);
            tmp_format_value_11 = var_map_;
            tmp_format_spec_11 = mod_consts[32];
            tmp_tuple_element_5 = BUILTIN_FORMAT(tmp_format_value_11, tmp_format_spec_11);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 5, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_string_concat_values_4);
        goto try_except_handler_22;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_make_exception_arg_4 = PyUnicode_Join(mod_consts[32], tmp_string_concat_values_4);
        Py_DECREF(tmp_string_concat_values_4);
        if (tmp_make_exception_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_22;
        }
        frame_8aff1550ff0e7221b614b357070ca52d->m_frame.f_lineno = 186;
        tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_4);
        Py_DECREF(tmp_make_exception_arg_4);
        assert(!(tmp_raise_type_4 == NULL));
        exception_type = tmp_raise_type_4;
        exception_lineno = 186;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_22;
    }
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_subscript_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_all_devices);
        tmp_expression_value_12 = var_all_devices;
        CHECK_OBJECT(var_source_node);
        tmp_subscript_value_7 = var_source_node;
        tmp_subscript_result_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_7);
        if (tmp_subscript_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_subscript_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscript_result_1);

            exception_lineno = 191;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_condition_result_5 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_subscript_result_1);
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_set_arg_4;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_8;
        CHECK_OBJECT(var_map_);
        tmp_expression_value_14 = var_map_;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[4]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_22;
        }
        frame_8aff1550ff0e7221b614b357070ca52d->m_frame.f_lineno = 192;
        tmp_set_arg_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_8);
        Py_DECREF(tmp_called_value_8);
        if (tmp_set_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_expression_value_13 = PySet_New(tmp_set_arg_4);
        Py_DECREF(tmp_set_arg_4);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[53]);
        Py_DECREF(tmp_expression_value_13);
        assert(!(tmp_called_value_7 == NULL));
        CHECK_OBJECT(var_all_devices);
        tmp_expression_value_15 = var_all_devices;
        CHECK_OBJECT(var_source_node);
        tmp_subscript_value_8 = var_source_node;
        tmp_args_element_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_8);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 192;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_22;
        }
        frame_8aff1550ff0e7221b614b357070ca52d->m_frame.f_lineno = 192;
        tmp_operand_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_operand_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_22;
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
        PyObject *tmp_raise_type_5;
        PyObject *tmp_make_exception_arg_5;
        PyObject *tmp_string_concat_values_5;
        PyObject *tmp_tuple_element_6;
        tmp_tuple_element_6 = mod_consts[48];
        tmp_string_concat_values_5 = MAKE_TUPLE_EMPTY(8);
        {
            PyObject *tmp_format_value_12;
            PyObject *tmp_format_spec_12;
            PyObject *tmp_format_value_13;
            PyObject *tmp_format_spec_13;
            PyObject *tmp_format_value_14;
            PyObject *tmp_format_spec_14;
            PyObject *tmp_format_value_15;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_subscript_value_9;
            PyObject *tmp_format_spec_15;
            PyTuple_SET_ITEM0(tmp_string_concat_values_5, 0, tmp_tuple_element_6);
            CHECK_OBJECT(var_source_node);
            tmp_format_value_12 = var_source_node;
            tmp_format_spec_12 = mod_consts[32];
            tmp_tuple_element_6 = BUILTIN_FORMAT(tmp_format_value_12, tmp_format_spec_12);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_5, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[62];
            PyTuple_SET_ITEM0(tmp_string_concat_values_5, 2, tmp_tuple_element_6);
            CHECK_OBJECT(var_target_node);
            tmp_format_value_13 = var_target_node;
            tmp_format_spec_13 = mod_consts[32];
            tmp_tuple_element_6 = BUILTIN_FORMAT(tmp_format_value_13, tmp_format_spec_13);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_5, 3, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[61];
            PyTuple_SET_ITEM0(tmp_string_concat_values_5, 4, tmp_tuple_element_6);
            CHECK_OBJECT(var_map_);
            tmp_format_value_14 = var_map_;
            tmp_format_spec_14 = mod_consts[32];
            tmp_tuple_element_6 = BUILTIN_FORMAT(tmp_format_value_14, tmp_format_spec_14);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_5, 5, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[63];
            PyTuple_SET_ITEM0(tmp_string_concat_values_5, 6, tmp_tuple_element_6);
            CHECK_OBJECT(var_all_devices);
            tmp_expression_value_16 = var_all_devices;
            CHECK_OBJECT(var_source_node);
            tmp_subscript_value_9 = var_source_node;
            tmp_format_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_9);
            if (tmp_format_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_format_spec_15 = mod_consts[32];
            tmp_tuple_element_6 = BUILTIN_FORMAT(tmp_format_value_15, tmp_format_spec_15);
            Py_DECREF(tmp_format_value_15);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_5, 7, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_string_concat_values_5);
        goto try_except_handler_22;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_make_exception_arg_5 = PyUnicode_Join(mod_consts[32], tmp_string_concat_values_5);
        Py_DECREF(tmp_string_concat_values_5);
        if (tmp_make_exception_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_22;
        }
        frame_8aff1550ff0e7221b614b357070ca52d->m_frame.f_lineno = 193;
        tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_5);
        Py_DECREF(tmp_make_exception_arg_5);
        assert(!(tmp_raise_type_5 == NULL));
        exception_type = tmp_raise_type_5;
        exception_lineno = 193;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_22;
    }
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_10;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_22;
        }
        CHECK_OBJECT(var_map_);
        tmp_expression_value_17 = var_map_;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[4]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_22;
        }
        frame_8aff1550ff0e7221b614b357070ca52d->m_frame.f_lineno = 200;
        tmp_args_element_value_8 = CALL_FUNCTION_NO_ARGS(tmp_called_value_10);
        Py_DECREF(tmp_called_value_10);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_22;
        }
        CHECK_OBJECT(var_all_device_counts);
        tmp_expression_value_18 = var_all_device_counts;
        CHECK_OBJECT(var_source_node);
        tmp_subscript_value_10 = var_source_node;
        tmp_args_element_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_10);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_8);

            exception_lineno = 200;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_22;
        }
        frame_8aff1550ff0e7221b614b357070ca52d->m_frame.f_lineno = 199;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_operand_value_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_operand_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        Py_DECREF(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_22;
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
        PyObject *tmp_string_concat_values_6;
        PyObject *tmp_tuple_element_7;
        tmp_tuple_element_7 = mod_consts[48];
        tmp_string_concat_values_6 = MAKE_TUPLE_EMPTY(8);
        {
            PyObject *tmp_format_value_16;
            PyObject *tmp_format_spec_16;
            PyObject *tmp_format_value_17;
            PyObject *tmp_format_spec_17;
            PyObject *tmp_format_value_18;
            PyObject *tmp_format_spec_18;
            PyObject *tmp_format_value_19;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_subscript_value_11;
            PyObject *tmp_format_spec_19;
            PyTuple_SET_ITEM0(tmp_string_concat_values_6, 0, tmp_tuple_element_7);
            CHECK_OBJECT(var_source_node);
            tmp_format_value_16 = var_source_node;
            tmp_format_spec_16 = mod_consts[32];
            tmp_tuple_element_7 = BUILTIN_FORMAT(tmp_format_value_16, tmp_format_spec_16);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_6, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[64];
            PyTuple_SET_ITEM0(tmp_string_concat_values_6, 2, tmp_tuple_element_7);
            CHECK_OBJECT(var_target_node);
            tmp_format_value_17 = var_target_node;
            tmp_format_spec_17 = mod_consts[32];
            tmp_tuple_element_7 = BUILTIN_FORMAT(tmp_format_value_17, tmp_format_spec_17);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_6, 3, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[61];
            PyTuple_SET_ITEM0(tmp_string_concat_values_6, 4, tmp_tuple_element_7);
            CHECK_OBJECT(var_map_);
            tmp_format_value_18 = var_map_;
            tmp_format_spec_18 = mod_consts[32];
            tmp_tuple_element_7 = BUILTIN_FORMAT(tmp_format_value_18, tmp_format_spec_18);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_6, 5, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[52];
            PyTuple_SET_ITEM0(tmp_string_concat_values_6, 6, tmp_tuple_element_7);
            CHECK_OBJECT(var_all_device_counts);
            tmp_expression_value_19 = var_all_device_counts;
            CHECK_OBJECT(var_source_node);
            tmp_subscript_value_11 = var_source_node;
            tmp_format_value_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_11);
            if (tmp_format_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            tmp_format_spec_19 = mod_consts[32];
            tmp_tuple_element_7 = BUILTIN_FORMAT(tmp_format_value_19, tmp_format_spec_19);
            Py_DECREF(tmp_format_value_19);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_6, 7, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_string_concat_values_6);
        goto try_except_handler_22;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_make_exception_arg_6 = PyUnicode_Join(mod_consts[32], tmp_string_concat_values_6);
        Py_DECREF(tmp_string_concat_values_6);
        if (tmp_make_exception_arg_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_22;
        }
        frame_8aff1550ff0e7221b614b357070ca52d->m_frame.f_lineno = 202;
        tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_6);
        Py_DECREF(tmp_make_exception_arg_6);
        assert(!(tmp_raise_type_6 == NULL));
        exception_type = tmp_raise_type_6;
        exception_lineno = 202;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_22;
    }
    branch_no_7:;
    branch_end_5:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_subscript_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_all_devices);
        tmp_expression_value_20 = var_all_devices;
        CHECK_OBJECT(var_target_node);
        tmp_subscript_value_12 = var_target_node;
        tmp_subscript_result_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_12);
        if (tmp_subscript_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_subscript_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscript_result_2);

            exception_lineno = 208;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_condition_result_8 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_subscript_result_2);
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        bool tmp_condition_result_9;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_set_arg_5;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_13;
        CHECK_OBJECT(var_map_);
        tmp_expression_value_22 = var_map_;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[59]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_22;
        }
        frame_8aff1550ff0e7221b614b357070ca52d->m_frame.f_lineno = 209;
        tmp_set_arg_5 = CALL_FUNCTION_NO_ARGS(tmp_called_value_12);
        Py_DECREF(tmp_called_value_12);
        if (tmp_set_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_expression_value_21 = PySet_New(tmp_set_arg_5);
        Py_DECREF(tmp_set_arg_5);
        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[53]);
        Py_DECREF(tmp_expression_value_21);
        assert(!(tmp_called_value_11 == NULL));
        CHECK_OBJECT(var_all_devices);
        tmp_expression_value_23 = var_all_devices;
        CHECK_OBJECT(var_target_node);
        tmp_subscript_value_13 = var_target_node;
        tmp_args_element_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_13);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 209;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_22;
        }
        frame_8aff1550ff0e7221b614b357070ca52d->m_frame.f_lineno = 209;
        tmp_operand_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_operand_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        Py_DECREF(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_22;
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
        PyObject *tmp_raise_type_7;
        PyObject *tmp_make_exception_arg_7;
        PyObject *tmp_string_concat_values_7;
        PyObject *tmp_tuple_element_8;
        tmp_tuple_element_8 = mod_consts[48];
        tmp_string_concat_values_7 = MAKE_TUPLE_EMPTY(8);
        {
            PyObject *tmp_format_value_20;
            PyObject *tmp_format_spec_20;
            PyObject *tmp_format_value_21;
            PyObject *tmp_format_spec_21;
            PyObject *tmp_format_value_22;
            PyObject *tmp_format_spec_22;
            PyObject *tmp_format_value_23;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_subscript_value_14;
            PyObject *tmp_format_spec_23;
            PyTuple_SET_ITEM0(tmp_string_concat_values_7, 0, tmp_tuple_element_8);
            CHECK_OBJECT(var_source_node);
            tmp_format_value_20 = var_source_node;
            tmp_format_spec_20 = mod_consts[32];
            tmp_tuple_element_8 = BUILTIN_FORMAT(tmp_format_value_20, tmp_format_spec_20);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_7, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[65];
            PyTuple_SET_ITEM0(tmp_string_concat_values_7, 2, tmp_tuple_element_8);
            CHECK_OBJECT(var_target_node);
            tmp_format_value_21 = var_target_node;
            tmp_format_spec_21 = mod_consts[32];
            tmp_tuple_element_8 = BUILTIN_FORMAT(tmp_format_value_21, tmp_format_spec_21);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_7, 3, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[61];
            PyTuple_SET_ITEM0(tmp_string_concat_values_7, 4, tmp_tuple_element_8);
            CHECK_OBJECT(var_map_);
            tmp_format_value_22 = var_map_;
            tmp_format_spec_22 = mod_consts[32];
            tmp_tuple_element_8 = BUILTIN_FORMAT(tmp_format_value_22, tmp_format_spec_22);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_7, 5, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[63];
            PyTuple_SET_ITEM0(tmp_string_concat_values_7, 6, tmp_tuple_element_8);
            CHECK_OBJECT(var_all_devices);
            tmp_expression_value_24 = var_all_devices;
            CHECK_OBJECT(var_target_node);
            tmp_subscript_value_14 = var_target_node;
            tmp_format_value_23 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_14);
            if (tmp_format_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            tmp_format_spec_23 = mod_consts[32];
            tmp_tuple_element_8 = BUILTIN_FORMAT(tmp_format_value_23, tmp_format_spec_23);
            Py_DECREF(tmp_format_value_23);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_7, 7, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_string_concat_values_7);
        goto try_except_handler_22;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_make_exception_arg_7 = PyUnicode_Join(mod_consts[32], tmp_string_concat_values_7);
        Py_DECREF(tmp_string_concat_values_7);
        if (tmp_make_exception_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_22;
        }
        frame_8aff1550ff0e7221b614b357070ca52d->m_frame.f_lineno = 210;
        tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_7);
        Py_DECREF(tmp_make_exception_arg_7);
        assert(!(tmp_raise_type_7 == NULL));
        exception_type = tmp_raise_type_7;
        exception_lineno = 210;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_22;
    }
    branch_no_9:;
    goto branch_end_8;
    branch_no_8:;
    {
        bool tmp_condition_result_10;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_15;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_22;
        }
        CHECK_OBJECT(var_map_);
        tmp_expression_value_25 = var_map_;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[59]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_22;
        }
        frame_8aff1550ff0e7221b614b357070ca52d->m_frame.f_lineno = 217;
        tmp_args_element_value_11 = CALL_FUNCTION_NO_ARGS(tmp_called_value_14);
        Py_DECREF(tmp_called_value_14);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_22;
        }
        CHECK_OBJECT(var_all_device_counts);
        tmp_expression_value_26 = var_all_device_counts;
        CHECK_OBJECT(var_target_node);
        tmp_subscript_value_15 = var_target_node;
        tmp_args_element_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_15);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 217;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_22;
        }
        frame_8aff1550ff0e7221b614b357070ca52d->m_frame.f_lineno = 216;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_operand_value_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_13, call_args);
        }

        Py_DECREF(tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_operand_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        Py_DECREF(tmp_operand_value_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_22;
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
        PyObject *tmp_raise_type_8;
        PyObject *tmp_make_exception_arg_8;
        PyObject *tmp_string_concat_values_8;
        PyObject *tmp_tuple_element_9;
        tmp_tuple_element_9 = mod_consts[48];
        tmp_string_concat_values_8 = MAKE_TUPLE_EMPTY(8);
        {
            PyObject *tmp_format_value_24;
            PyObject *tmp_format_spec_24;
            PyObject *tmp_format_value_25;
            PyObject *tmp_format_spec_25;
            PyObject *tmp_format_value_26;
            PyObject *tmp_format_spec_26;
            PyObject *tmp_format_value_27;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_subscript_value_16;
            PyObject *tmp_format_spec_27;
            PyTuple_SET_ITEM0(tmp_string_concat_values_8, 0, tmp_tuple_element_9);
            CHECK_OBJECT(var_source_node);
            tmp_format_value_24 = var_source_node;
            tmp_format_spec_24 = mod_consts[32];
            tmp_tuple_element_9 = BUILTIN_FORMAT(tmp_format_value_24, tmp_format_spec_24);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_8, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[66];
            PyTuple_SET_ITEM0(tmp_string_concat_values_8, 2, tmp_tuple_element_9);
            CHECK_OBJECT(var_target_node);
            tmp_format_value_25 = var_target_node;
            tmp_format_spec_25 = mod_consts[32];
            tmp_tuple_element_9 = BUILTIN_FORMAT(tmp_format_value_25, tmp_format_spec_25);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_8, 3, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[61];
            PyTuple_SET_ITEM0(tmp_string_concat_values_8, 4, tmp_tuple_element_9);
            CHECK_OBJECT(var_map_);
            tmp_format_value_26 = var_map_;
            tmp_format_spec_26 = mod_consts[32];
            tmp_tuple_element_9 = BUILTIN_FORMAT(tmp_format_value_26, tmp_format_spec_26);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_8, 5, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[52];
            PyTuple_SET_ITEM0(tmp_string_concat_values_8, 6, tmp_tuple_element_9);
            CHECK_OBJECT(var_all_device_counts);
            tmp_expression_value_27 = var_all_device_counts;
            CHECK_OBJECT(var_target_node);
            tmp_subscript_value_16 = var_target_node;
            tmp_format_value_27 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_16);
            if (tmp_format_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_8;
            }
            tmp_format_spec_27 = mod_consts[32];
            tmp_tuple_element_9 = BUILTIN_FORMAT(tmp_format_value_27, tmp_format_spec_27);
            Py_DECREF(tmp_format_value_27);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_8, 7, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_string_concat_values_8);
        goto try_except_handler_22;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_make_exception_arg_8 = PyUnicode_Join(mod_consts[32], tmp_string_concat_values_8);
        Py_DECREF(tmp_string_concat_values_8);
        if (tmp_make_exception_arg_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_22;
        }
        frame_8aff1550ff0e7221b614b357070ca52d->m_frame.f_lineno = 219;
        tmp_raise_type_8 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_8);
        Py_DECREF(tmp_make_exception_arg_8);
        assert(!(tmp_raise_type_8 == NULL));
        exception_type = tmp_raise_type_8;
        exception_lineno = 219;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_22;
    }
    branch_no_10:;
    branch_end_8:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 184;
        type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_22;
    }
    goto loop_start_8;
    loop_end_8:;
    goto try_end_12;
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

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto try_except_handler_21;
    // End of try:
    try_end_12:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 177;
        type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_21;
    }
    goto loop_start_7;
    loop_end_7:;
    goto try_end_13;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
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
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = MAKE_DICT_EMPTY();
        assert(var_reverse_device_maps == NULL);
        var_reverse_device_maps = tmp_assign_source_72;
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_iter_arg_14;
        if (var_all_names == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 228;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_14 = var_all_names;
        tmp_assign_source_73 = MAKE_ITERATOR(tmp_iter_arg_14);
        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_4__for_iterator == NULL);
        tmp_for_loop_4__for_iterator = tmp_assign_source_73;
    }
    // Tried code:
    loop_start_9:;
    {
        PyObject *tmp_next_source_9;
        PyObject *tmp_assign_source_74;
        CHECK_OBJECT(tmp_for_loop_4__for_iterator);
        tmp_next_source_9 = tmp_for_loop_4__for_iterator;
        tmp_assign_source_74 = ITERATOR_NEXT(tmp_next_source_9);
        if (tmp_assign_source_74 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_9;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooo";
                exception_lineno = 228;
                goto try_except_handler_25;
            }
        }

        {
            PyObject *old = tmp_for_loop_4__iter_value;
            tmp_for_loop_4__iter_value = tmp_assign_source_74;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_75;
        CHECK_OBJECT(tmp_for_loop_4__iter_value);
        tmp_assign_source_75 = tmp_for_loop_4__iter_value;
        {
            PyObject *old = var_node;
            var_node = tmp_assign_source_75;
            Py_INCREF(var_node);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_subscript_value_17;
        CHECK_OBJECT(par_my_name);
        tmp_cmp_expr_left_3 = par_my_name;
        CHECK_OBJECT(var_all_device_maps);
        tmp_expression_value_28 = var_all_device_maps;
        CHECK_OBJECT(var_node);
        tmp_subscript_value_17 = var_node;
        tmp_cmp_expr_right_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_17);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_25;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_25;
        }
        tmp_condition_result_11 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_76;
            PyObject *tmp_iter_arg_15;
            PyObject *tmp_called_value_15;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_subscript_value_18;
            PyObject *tmp_subscript_value_19;
            CHECK_OBJECT(var_all_device_maps);
            tmp_expression_value_31 = var_all_device_maps;
            CHECK_OBJECT(var_node);
            tmp_subscript_value_18 = var_node;
            tmp_expression_value_30 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_18);
            if (tmp_expression_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_26;
            }
            CHECK_OBJECT(par_my_name);
            tmp_subscript_value_19 = par_my_name;
            tmp_expression_value_29 = LOOKUP_SUBSCRIPT(tmp_expression_value_30, tmp_subscript_value_19);
            Py_DECREF(tmp_expression_value_30);
            if (tmp_expression_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_26;
            }
            tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[57]);
            Py_DECREF(tmp_expression_value_29);
            if (tmp_called_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_26;
            }
            frame_8aff1550ff0e7221b614b357070ca52d->m_frame.f_lineno = 231;
            tmp_iter_arg_15 = CALL_FUNCTION_NO_ARGS(tmp_called_value_15);
            Py_DECREF(tmp_called_value_15);
            if (tmp_iter_arg_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_26;
            }
            tmp_assign_source_76 = MAKE_ITERATOR(tmp_iter_arg_15);
            Py_DECREF(tmp_iter_arg_15);
            if (tmp_assign_source_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;
                type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_26;
            }
            {
                PyObject *old = tmp_dictcontraction_4__$0;
                tmp_dictcontraction_4__$0 = tmp_assign_source_76;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_77;
            tmp_assign_source_77 = MAKE_DICT_EMPTY();
            {
                PyObject *old = tmp_dictcontraction_4__contraction;
                tmp_dictcontraction_4__contraction = tmp_assign_source_77;
                Py_XDECREF(old);
            }

        }
        if (isFrameUnusable(cache_frame_670a8ed27ecd465c9e697dff6097fc59_7)) {
            Py_XDECREF(cache_frame_670a8ed27ecd465c9e697dff6097fc59_7);

#if _DEBUG_REFCOUNTS
            if (cache_frame_670a8ed27ecd465c9e697dff6097fc59_7 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_670a8ed27ecd465c9e697dff6097fc59_7 = MAKE_FUNCTION_FRAME(codeobj_670a8ed27ecd465c9e697dff6097fc59, module_torch$distributed$rpc$backend_registry, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_670a8ed27ecd465c9e697dff6097fc59_7->m_type_description == NULL);
        frame_670a8ed27ecd465c9e697dff6097fc59_7 = cache_frame_670a8ed27ecd465c9e697dff6097fc59_7;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_670a8ed27ecd465c9e697dff6097fc59_7);
        assert(Py_REFCNT(frame_670a8ed27ecd465c9e697dff6097fc59_7) == 2);

        // Framed code:
        // Tried code:
        loop_start_10:;
        {
            PyObject *tmp_next_source_10;
            PyObject *tmp_assign_source_78;
            CHECK_OBJECT(tmp_dictcontraction_4__$0);
            tmp_next_source_10 = tmp_dictcontraction_4__$0;
            tmp_assign_source_78 = ITERATOR_NEXT(tmp_next_source_10);
            if (tmp_assign_source_78 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_10;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 230;
                    goto try_except_handler_27;
                }
            }

            {
                PyObject *old = tmp_dictcontraction_4__iter_value_0;
                tmp_dictcontraction_4__iter_value_0 = tmp_assign_source_78;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_79;
            PyObject *tmp_iter_arg_16;
            CHECK_OBJECT(tmp_dictcontraction_4__iter_value_0);
            tmp_iter_arg_16 = tmp_dictcontraction_4__iter_value_0;
            tmp_assign_source_79 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_16);
            if (tmp_assign_source_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;
                type_description_2 = "oo";
                goto try_except_handler_28;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_4__source_iter;
                tmp_dictcontraction$tuple_unpack_4__source_iter = tmp_assign_source_79;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_80;
            PyObject *tmp_unpack_19;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_4__source_iter);
            tmp_unpack_19 = tmp_dictcontraction$tuple_unpack_4__source_iter;
            tmp_assign_source_80 = UNPACK_NEXT(tmp_unpack_19, 0, 2);
            if (tmp_assign_source_80 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 230;
                goto try_except_handler_29;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_4__element_1;
                tmp_dictcontraction$tuple_unpack_4__element_1 = tmp_assign_source_80;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_81;
            PyObject *tmp_unpack_20;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_4__source_iter);
            tmp_unpack_20 = tmp_dictcontraction$tuple_unpack_4__source_iter;
            tmp_assign_source_81 = UNPACK_NEXT(tmp_unpack_20, 1, 2);
            if (tmp_assign_source_81 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 230;
                goto try_except_handler_29;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_4__element_2;
                tmp_dictcontraction$tuple_unpack_4__element_2 = tmp_assign_source_81;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_6;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_4__source_iter);
            tmp_iterator_name_6 = tmp_dictcontraction$tuple_unpack_4__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_6); assert(HAS_ITERNEXT(tmp_iterator_name_6));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_6)->tp_iternext)(tmp_iterator_name_6);

            if (likely(tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED();

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED();
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                        type_description_2 = "oo";
                        exception_lineno = 230;
                        goto try_except_handler_29;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[58];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "oo";
                exception_lineno = 230;
                goto try_except_handler_29;
            }
        }
        goto try_end_14;
        // Exception handler code:
        try_except_handler_29:;
        exception_keeper_type_24 = exception_type;
        exception_keeper_value_24 = exception_value;
        exception_keeper_tb_24 = exception_tb;
        exception_keeper_lineno_24 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_4__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_4__source_iter);
        tmp_dictcontraction$tuple_unpack_4__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_24;
        exception_value = exception_keeper_value_24;
        exception_tb = exception_keeper_tb_24;
        exception_lineno = exception_keeper_lineno_24;

        goto try_except_handler_28;
        // End of try:
        try_end_14:;
        goto try_end_15;
        // Exception handler code:
        try_except_handler_28:;
        exception_keeper_type_25 = exception_type;
        exception_keeper_value_25 = exception_value;
        exception_keeper_tb_25 = exception_tb;
        exception_keeper_lineno_25 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_dictcontraction$tuple_unpack_4__element_1);
        tmp_dictcontraction$tuple_unpack_4__element_1 = NULL;
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_4__element_2);
        tmp_dictcontraction$tuple_unpack_4__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_25;
        exception_value = exception_keeper_value_25;
        exception_tb = exception_keeper_tb_25;
        exception_lineno = exception_keeper_lineno_25;

        goto try_except_handler_27;
        // End of try:
        try_end_15:;
        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_4__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_4__source_iter);
        tmp_dictcontraction$tuple_unpack_4__source_iter = NULL;
        {
            PyObject *tmp_assign_source_82;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_4__element_1);
            tmp_assign_source_82 = tmp_dictcontraction$tuple_unpack_4__element_1;
            {
                PyObject *old = outline_5_var_k;
                outline_5_var_k = tmp_assign_source_82;
                Py_INCREF(outline_5_var_k);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_4__element_1);
        tmp_dictcontraction$tuple_unpack_4__element_1 = NULL;

        {
            PyObject *tmp_assign_source_83;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_4__element_2);
            tmp_assign_source_83 = tmp_dictcontraction$tuple_unpack_4__element_2;
            {
                PyObject *old = outline_5_var_v;
                outline_5_var_v = tmp_assign_source_83;
                Py_INCREF(outline_5_var_v);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_4__element_2);
        tmp_dictcontraction$tuple_unpack_4__element_2 = NULL;

        CHECK_OBJECT(outline_5_var_k);
        tmp_dictset_value = outline_5_var_k;
        CHECK_OBJECT(tmp_dictcontraction_4__contraction);
        tmp_dictset_dict = tmp_dictcontraction_4__contraction;
        CHECK_OBJECT(outline_5_var_v);
        tmp_dictset_key = outline_5_var_v;
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_2 = "oo";
            goto try_except_handler_27;
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_2 = "oo";
            goto try_except_handler_27;
        }
        goto loop_start_10;
        loop_end_10:;
        CHECK_OBJECT(tmp_dictcontraction_4__contraction);
        tmp_ass_subvalue_1 = tmp_dictcontraction_4__contraction;
        Py_INCREF(tmp_ass_subvalue_1);
        goto try_return_handler_27;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_27:;
        CHECK_OBJECT(tmp_dictcontraction_4__$0);
        Py_DECREF(tmp_dictcontraction_4__$0);
        tmp_dictcontraction_4__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_4__contraction);
        Py_DECREF(tmp_dictcontraction_4__contraction);
        tmp_dictcontraction_4__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_4__iter_value_0);
        tmp_dictcontraction_4__iter_value_0 = NULL;
        goto frame_return_exit_7;
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

        CHECK_OBJECT(tmp_dictcontraction_4__$0);
        Py_DECREF(tmp_dictcontraction_4__$0);
        tmp_dictcontraction_4__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_4__contraction);
        Py_DECREF(tmp_dictcontraction_4__contraction);
        tmp_dictcontraction_4__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_4__iter_value_0);
        tmp_dictcontraction_4__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_26;
        exception_value = exception_keeper_value_26;
        exception_tb = exception_keeper_tb_26;
        exception_lineno = exception_keeper_lineno_26;

        goto frame_exception_exit_7;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;
        frame_return_exit_7:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_26;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_670a8ed27ecd465c9e697dff6097fc59_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_670a8ed27ecd465c9e697dff6097fc59_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_670a8ed27ecd465c9e697dff6097fc59_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_670a8ed27ecd465c9e697dff6097fc59_7,
            type_description_2,
            outline_5_var_k,
            outline_5_var_v
        );


        // Release cached frame if used for exception.
        if (frame_670a8ed27ecd465c9e697dff6097fc59_7 == cache_frame_670a8ed27ecd465c9e697dff6097fc59_7) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_670a8ed27ecd465c9e697dff6097fc59_7);
            cache_frame_670a8ed27ecd465c9e697dff6097fc59_7 = NULL;
        }

        assertFrameObject(frame_670a8ed27ecd465c9e697dff6097fc59_7);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;
        type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_26;
        skip_nested_handling_6:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_26:;
        Py_XDECREF(outline_5_var_k);
        outline_5_var_k = NULL;
        Py_XDECREF(outline_5_var_v);
        outline_5_var_v = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_26:;
        exception_keeper_type_27 = exception_type;
        exception_keeper_value_27 = exception_value;
        exception_keeper_tb_27 = exception_tb;
        exception_keeper_lineno_27 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_5_var_k);
        outline_5_var_k = NULL;
        Py_XDECREF(outline_5_var_v);
        outline_5_var_v = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_27;
        exception_value = exception_keeper_value_27;
        exception_tb = exception_keeper_tb_27;
        exception_lineno = exception_keeper_lineno_27;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 230;
        goto try_except_handler_25;
        outline_result_6:;
        if (var_reverse_device_maps == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[67]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 230;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_25;
        }

        tmp_ass_subscribed_1 = var_reverse_device_maps;
        CHECK_OBJECT(var_node);
        tmp_ass_subscript_1 = var_node;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_25;
        }
    }
    branch_no_11:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 228;
        type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_25;
    }
    goto loop_start_9;
    loop_end_9:;
    goto try_end_16;
    // Exception handler code:
    try_except_handler_25:;
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
    try_end_16:;
    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    {
        bool tmp_condition_result_12;
        PyObject *tmp_operand_value_7;
        CHECK_OBJECT(par_my_devices);
        tmp_operand_value_7 = par_my_devices;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_12 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_84;
        tmp_assign_source_84 = PySet_New(NULL);
        assert(var_devices_set == NULL);
        var_devices_set = tmp_assign_source_84;
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_iter_arg_17;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_32;
        CHECK_OBJECT(par_my_device_maps);
        tmp_expression_value_32 = par_my_device_maps;
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[57]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8aff1550ff0e7221b614b357070ca52d->m_frame.f_lineno = 236;
        tmp_iter_arg_17 = CALL_FUNCTION_NO_ARGS(tmp_called_value_16);
        Py_DECREF(tmp_called_value_16);
        if (tmp_iter_arg_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_85 = MAKE_ITERATOR(tmp_iter_arg_17);
        Py_DECREF(tmp_iter_arg_17);
        if (tmp_assign_source_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_5__for_iterator == NULL);
        tmp_for_loop_5__for_iterator = tmp_assign_source_85;
    }
    // Tried code:
    loop_start_11:;
    {
        PyObject *tmp_next_source_11;
        PyObject *tmp_assign_source_86;
        CHECK_OBJECT(tmp_for_loop_5__for_iterator);
        tmp_next_source_11 = tmp_for_loop_5__for_iterator;
        tmp_assign_source_86 = ITERATOR_NEXT(tmp_next_source_11);
        if (tmp_assign_source_86 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_11;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooo";
                exception_lineno = 236;
                goto try_except_handler_30;
            }
        }

        {
            PyObject *old = tmp_for_loop_5__iter_value;
            tmp_for_loop_5__iter_value = tmp_assign_source_86;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_iter_arg_18;
        CHECK_OBJECT(tmp_for_loop_5__iter_value);
        tmp_iter_arg_18 = tmp_for_loop_5__iter_value;
        tmp_assign_source_87 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_18);
        if (tmp_assign_source_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_31;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_87;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_unpack_21;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_21 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_88 = UNPACK_NEXT(tmp_unpack_21, 0, 2);
        if (tmp_assign_source_88 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooo";
            exception_lineno = 236;
            goto try_except_handler_32;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_88;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_unpack_22;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_22 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_89 = UNPACK_NEXT(tmp_unpack_22, 1, 2);
        if (tmp_assign_source_89 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooo";
            exception_lineno = 236;
            goto try_except_handler_32;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_89;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_7;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_7 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_7); assert(HAS_ITERNEXT(tmp_iterator_name_7));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_7)->tp_iternext)(tmp_iterator_name_7);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooooooooooo";
                    exception_lineno = 236;
                    goto try_except_handler_32;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[58];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooo";
            exception_lineno = 236;
            goto try_except_handler_32;
        }
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_32:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto try_except_handler_31;
    // End of try:
    try_end_17:;
    goto try_end_18;
    // Exception handler code:
    try_except_handler_31:;
    exception_keeper_type_30 = exception_type;
    exception_keeper_value_30 = exception_value;
    exception_keeper_tb_30 = exception_tb;
    exception_keeper_lineno_30 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_30;
    exception_value = exception_keeper_value_30;
    exception_tb = exception_keeper_tb_30;
    exception_lineno = exception_keeper_lineno_30;

    goto try_except_handler_30;
    // End of try:
    try_end_18:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_90;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_90 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var__;
            var__ = tmp_assign_source_90;
            Py_INCREF(var__);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_91;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_91 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_map_;
            var_map_ = tmp_assign_source_91;
            Py_INCREF(var_map_);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_34;
        if (var_devices_set == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 237;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_30;
        }

        tmp_expression_value_33 = var_devices_set;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[69]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_30;
        }
        CHECK_OBJECT(var_map_);
        tmp_expression_value_34 = var_map_;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[4]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 237;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_30;
        }
        frame_8aff1550ff0e7221b614b357070ca52d->m_frame.f_lineno = 237;
        tmp_args_element_value_13 = CALL_FUNCTION_NO_ARGS(tmp_called_value_18);
        Py_DECREF(tmp_called_value_18);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 237;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_30;
        }
        frame_8aff1550ff0e7221b614b357070ca52d->m_frame.f_lineno = 237;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_30;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 236;
        type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_30;
    }
    goto loop_start_11;
    loop_end_11:;
    goto try_end_19;
    // Exception handler code:
    try_except_handler_30:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_keeper_lineno_31 = exception_lineno;
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
    exception_type = exception_keeper_type_31;
    exception_value = exception_keeper_value_31;
    exception_tb = exception_keeper_tb_31;
    exception_lineno = exception_keeper_lineno_31;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    Py_XDECREF(tmp_for_loop_5__iter_value);
    tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_5__for_iterator);
    Py_DECREF(tmp_for_loop_5__for_iterator);
    tmp_for_loop_5__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_iter_arg_19;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_35;
        if (var_reverse_device_maps == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[67]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 238;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_35 = var_reverse_device_maps;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[57]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8aff1550ff0e7221b614b357070ca52d->m_frame.f_lineno = 238;
        tmp_iter_arg_19 = CALL_FUNCTION_NO_ARGS(tmp_called_value_19);
        Py_DECREF(tmp_called_value_19);
        if (tmp_iter_arg_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_92 = MAKE_ITERATOR(tmp_iter_arg_19);
        Py_DECREF(tmp_iter_arg_19);
        if (tmp_assign_source_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_6__for_iterator == NULL);
        tmp_for_loop_6__for_iterator = tmp_assign_source_92;
    }
    // Tried code:
    loop_start_12:;
    {
        PyObject *tmp_next_source_12;
        PyObject *tmp_assign_source_93;
        CHECK_OBJECT(tmp_for_loop_6__for_iterator);
        tmp_next_source_12 = tmp_for_loop_6__for_iterator;
        tmp_assign_source_93 = ITERATOR_NEXT(tmp_next_source_12);
        if (tmp_assign_source_93 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_12;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooo";
                exception_lineno = 238;
                goto try_except_handler_33;
            }
        }

        {
            PyObject *old = tmp_for_loop_6__iter_value;
            tmp_for_loop_6__iter_value = tmp_assign_source_93;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_iter_arg_20;
        CHECK_OBJECT(tmp_for_loop_6__iter_value);
        tmp_iter_arg_20 = tmp_for_loop_6__iter_value;
        tmp_assign_source_94 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_20);
        if (tmp_assign_source_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_34;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_94;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_unpack_23;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_23 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_95 = UNPACK_NEXT(tmp_unpack_23, 0, 2);
        if (tmp_assign_source_95 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooo";
            exception_lineno = 238;
            goto try_except_handler_35;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_95;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_unpack_24;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_24 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_96 = UNPACK_NEXT(tmp_unpack_24, 1, 2);
        if (tmp_assign_source_96 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooo";
            exception_lineno = 238;
            goto try_except_handler_35;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_96;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_8;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_8 = tmp_tuple_unpack_3__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_8); assert(HAS_ITERNEXT(tmp_iterator_name_8));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_8)->tp_iternext)(tmp_iterator_name_8);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooooooooooo";
                    exception_lineno = 238;
                    goto try_except_handler_35;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[58];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooo";
            exception_lineno = 238;
            goto try_except_handler_35;
        }
    }
    goto try_end_20;
    // Exception handler code:
    try_except_handler_35:;
    exception_keeper_type_32 = exception_type;
    exception_keeper_value_32 = exception_value;
    exception_keeper_tb_32 = exception_tb;
    exception_keeper_lineno_32 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_32;
    exception_value = exception_keeper_value_32;
    exception_tb = exception_keeper_tb_32;
    exception_lineno = exception_keeper_lineno_32;

    goto try_except_handler_34;
    // End of try:
    try_end_20:;
    goto try_end_21;
    // Exception handler code:
    try_except_handler_34:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_keeper_lineno_33 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_33;
    exception_value = exception_keeper_value_33;
    exception_tb = exception_keeper_tb_33;
    exception_lineno = exception_keeper_lineno_33;

    goto try_except_handler_33;
    // End of try:
    try_end_21:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_97;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_97 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var__;
            var__ = tmp_assign_source_97;
            Py_INCREF(var__);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_98;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_98 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_map_;
            var_map_ = tmp_assign_source_98;
            Py_INCREF(var_map_);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_37;
        if (var_devices_set == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 239;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_33;
        }

        tmp_expression_value_36 = var_devices_set;
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[69]);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_33;
        }
        CHECK_OBJECT(var_map_);
        tmp_expression_value_37 = var_map_;
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[4]);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 239;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_33;
        }
        frame_8aff1550ff0e7221b614b357070ca52d->m_frame.f_lineno = 239;
        tmp_args_element_value_14 = CALL_FUNCTION_NO_ARGS(tmp_called_value_21);
        Py_DECREF(tmp_called_value_21);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 239;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_33;
        }
        frame_8aff1550ff0e7221b614b357070ca52d->m_frame.f_lineno = 239;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_33;
        }
        Py_DECREF(tmp_call_result_3);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 238;
        type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_33;
    }
    goto loop_start_12;
    loop_end_12:;
    goto try_end_22;
    // Exception handler code:
    try_except_handler_33:;
    exception_keeper_type_34 = exception_type;
    exception_keeper_value_34 = exception_value;
    exception_keeper_tb_34 = exception_tb;
    exception_keeper_lineno_34 = exception_lineno;
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
    exception_type = exception_keeper_type_34;
    exception_value = exception_keeper_value_34;
    exception_tb = exception_keeper_tb_34;
    exception_lineno = exception_keeper_lineno_34;

    goto frame_exception_exit_1;
    // End of try:
    try_end_22:;
    Py_XDECREF(tmp_for_loop_6__iter_value);
    tmp_for_loop_6__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_6__for_iterator);
    Py_DECREF(tmp_for_loop_6__for_iterator);
    tmp_for_loop_6__for_iterator = NULL;
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_called_instance_3;
        if (var_devices_set == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 240;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_38 = var_devices_set;
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[70]);
        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 240;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8aff1550ff0e7221b614b357070ca52d->m_frame.f_lineno = 240;
        tmp_args_element_value_15 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[72],
            PyTuple_GET_ITEM(mod_consts[73], 0)
        );

        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 240;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8aff1550ff0e7221b614b357070ca52d->m_frame.f_lineno = 240;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_list_arg_1;
        if (var_devices_set == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 241;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_list_arg_1 = var_devices_set;
        tmp_assign_source_99 = MAKE_LIST(tmp_list_arg_1);
        if (tmp_assign_source_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_my_devices;
            assert(old != NULL);
            par_my_devices = tmp_assign_source_99;
            Py_DECREF(old);
        }

    }
    branch_no_12:;
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_called_value_23;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_23 = LOOKUP_BUILTIN(mod_consts[74]);
        assert(tmp_called_value_23 != NULL);
        if (par_my_devices == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 242;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_1 = par_my_devices;


        tmp_kw_call_dict_value_0_1 = MAKE_FUNCTION_torch$distributed$rpc$backend_registry$$$function__9__tensorpipe_exchange_and_check_all_device_maps$$$function__1_lambda();

        frame_8aff1550ff0e7221b614b357070ca52d->m_frame.f_lineno = 242;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_100 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_23, args, kw_values, mod_consts[78]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_my_devices;
            par_my_devices = tmp_assign_source_100;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_tuple_element_10;
        if (var_reverse_device_maps == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[67]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 244;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_10 = var_reverse_device_maps;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_10);
        CHECK_OBJECT(par_my_devices);
        tmp_tuple_element_10 = par_my_devices;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_10);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_7;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8aff1550ff0e7221b614b357070ca52d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8aff1550ff0e7221b614b357070ca52d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8aff1550ff0e7221b614b357070ca52d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8aff1550ff0e7221b614b357070ca52d,
        type_description_1,
        par_my_name,
        par_my_device_count,
        par_my_device_maps,
        par_my_devices,
        par_group,
        var_gathered,
        var_reverse_device_maps,
        var_devices_set,
        var_all_names,
        var_all_device_counts,
        var_all_device_maps,
        var_all_devices,
        var_node,
        var_devices,
        var_source_node,
        var_target_node,
        var_map_,
        var__
    );


    // Release cached frame if used for exception.
    if (frame_8aff1550ff0e7221b614b357070ca52d == cache_frame_8aff1550ff0e7221b614b357070ca52d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8aff1550ff0e7221b614b357070ca52d);
        cache_frame_8aff1550ff0e7221b614b357070ca52d = NULL;
    }

    assertFrameObject(frame_8aff1550ff0e7221b614b357070ca52d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_7:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_my_devices);
    Py_DECREF(par_my_devices);
    par_my_devices = NULL;
    CHECK_OBJECT(var_gathered);
    Py_DECREF(var_gathered);
    var_gathered = NULL;
    Py_XDECREF(var_reverse_device_maps);
    var_reverse_device_maps = NULL;
    Py_XDECREF(var_devices_set);
    var_devices_set = NULL;
    Py_XDECREF(var_all_names);
    var_all_names = NULL;
    CHECK_OBJECT(var_all_device_counts);
    Py_DECREF(var_all_device_counts);
    var_all_device_counts = NULL;
    CHECK_OBJECT(var_all_device_maps);
    Py_DECREF(var_all_device_maps);
    var_all_device_maps = NULL;
    CHECK_OBJECT(var_all_devices);
    Py_DECREF(var_all_devices);
    var_all_devices = NULL;
    Py_XDECREF(var_node);
    var_node = NULL;
    Py_XDECREF(var_devices);
    var_devices = NULL;
    Py_XDECREF(var_source_node);
    var_source_node = NULL;
    Py_XDECREF(var_target_node);
    var_target_node = NULL;
    Py_XDECREF(var_map_);
    var_map_ = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_35 = exception_type;
    exception_keeper_value_35 = exception_value;
    exception_keeper_tb_35 = exception_tb;
    exception_keeper_lineno_35 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_my_devices);
    par_my_devices = NULL;
    Py_XDECREF(var_gathered);
    var_gathered = NULL;
    Py_XDECREF(var_reverse_device_maps);
    var_reverse_device_maps = NULL;
    Py_XDECREF(var_devices_set);
    var_devices_set = NULL;
    Py_XDECREF(var_all_names);
    var_all_names = NULL;
    Py_XDECREF(var_all_device_counts);
    var_all_device_counts = NULL;
    Py_XDECREF(var_all_device_maps);
    var_all_device_maps = NULL;
    Py_XDECREF(var_all_devices);
    var_all_devices = NULL;
    Py_XDECREF(var_node);
    var_node = NULL;
    Py_XDECREF(var_devices);
    var_devices = NULL;
    Py_XDECREF(var_source_node);
    var_source_node = NULL;
    Py_XDECREF(var_target_node);
    var_target_node = NULL;
    Py_XDECREF(var_map_);
    var_map_ = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_35;
    exception_value = exception_keeper_value_35;
    exception_tb = exception_keeper_tb_35;
    exception_lineno = exception_keeper_lineno_35;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_my_name);
    Py_DECREF(par_my_name);
    CHECK_OBJECT(par_my_device_count);
    Py_DECREF(par_my_device_count);
    CHECK_OBJECT(par_my_device_maps);
    Py_DECREF(par_my_device_maps);
    CHECK_OBJECT(par_group);
    Py_DECREF(par_group);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_my_name);
    Py_DECREF(par_my_name);
    CHECK_OBJECT(par_my_device_count);
    Py_DECREF(par_my_device_count);
    CHECK_OBJECT(par_my_device_maps);
    Py_DECREF(par_my_device_maps);
    CHECK_OBJECT(par_group);
    Py_DECREF(par_group);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$rpc$backend_registry$$$function__9__tensorpipe_exchange_and_check_all_device_maps$$$function__1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_d = python_pars[0];
    struct Nuitka_FrameObject *frame_622c6dbb81fe770e8837b59ee25e3fa1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_622c6dbb81fe770e8837b59ee25e3fa1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_622c6dbb81fe770e8837b59ee25e3fa1)) {
        Py_XDECREF(cache_frame_622c6dbb81fe770e8837b59ee25e3fa1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_622c6dbb81fe770e8837b59ee25e3fa1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_622c6dbb81fe770e8837b59ee25e3fa1 = MAKE_FUNCTION_FRAME(codeobj_622c6dbb81fe770e8837b59ee25e3fa1, module_torch$distributed$rpc$backend_registry, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_622c6dbb81fe770e8837b59ee25e3fa1->m_type_description == NULL);
    frame_622c6dbb81fe770e8837b59ee25e3fa1 = cache_frame_622c6dbb81fe770e8837b59ee25e3fa1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_622c6dbb81fe770e8837b59ee25e3fa1);
    assert(Py_REFCNT(frame_622c6dbb81fe770e8837b59ee25e3fa1) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_d);
        tmp_expression_value_1 = par_d;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[41]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
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
        exception_tb = MAKE_TRACEBACK(frame_622c6dbb81fe770e8837b59ee25e3fa1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_622c6dbb81fe770e8837b59ee25e3fa1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_622c6dbb81fe770e8837b59ee25e3fa1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_622c6dbb81fe770e8837b59ee25e3fa1,
        type_description_1,
        par_d
    );


    // Release cached frame if used for exception.
    if (frame_622c6dbb81fe770e8837b59ee25e3fa1 == cache_frame_622c6dbb81fe770e8837b59ee25e3fa1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_622c6dbb81fe770e8837b59ee25e3fa1);
        cache_frame_622c6dbb81fe770e8837b59ee25e3fa1 = NULL;
    }

    assertFrameObject(frame_622c6dbb81fe770e8837b59ee25e3fa1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_d);
    Py_DECREF(par_d);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_d);
    Py_DECREF(par_d);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$rpc$backend_registry$$$function__10__tensorpipe_init_backend_handler(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_store = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_rank = python_pars[2];
    PyObject *par_world_size = python_pars[3];
    PyObject *par_rpc_backend_options = python_pars[4];
    PyObject *var_TensorPipeRpcBackendOptions = NULL;
    PyObject *var_TensorPipeAgent = NULL;
    PyObject *var_group = NULL;
    PyObject *var_device_count = NULL;
    PyObject *var_reverse_device_maps = NULL;
    PyObject *var_devices = NULL;
    PyObject *var_agent = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_8c88ff1268da07fc81bc9bef230cf9b8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
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
    static struct Nuitka_FrameObject *cache_frame_8c88ff1268da07fc81bc9bef230cf9b8 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8c88ff1268da07fc81bc9bef230cf9b8)) {
        Py_XDECREF(cache_frame_8c88ff1268da07fc81bc9bef230cf9b8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8c88ff1268da07fc81bc9bef230cf9b8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8c88ff1268da07fc81bc9bef230cf9b8 = MAKE_FUNCTION_FRAME(codeobj_8c88ff1268da07fc81bc9bef230cf9b8, module_torch$distributed$rpc$backend_registry, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8c88ff1268da07fc81bc9bef230cf9b8->m_type_description == NULL);
    frame_8c88ff1268da07fc81bc9bef230cf9b8 = cache_frame_8c88ff1268da07fc81bc9bef230cf9b8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8c88ff1268da07fc81bc9bef230cf9b8);
    assert(Py_REFCNT(frame_8c88ff1268da07fc81bc9bef230cf9b8) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[32];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$distributed$rpc$backend_registry;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[33];
        tmp_level_value_1 = mod_consts[34];
        frame_8c88ff1268da07fc81bc9bef230cf9b8->m_frame.f_lineno = 248;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$distributed$rpc$backend_registry,
                mod_consts[35],
                mod_consts[36]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[35]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_TensorPipeRpcBackendOptions == NULL);
        var_TensorPipeRpcBackendOptions = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[32];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torch$distributed$rpc$backend_registry;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[79];
        tmp_level_value_2 = mod_consts[34];
        frame_8c88ff1268da07fc81bc9bef230cf9b8->m_frame.f_lineno = 249;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_torch$distributed$rpc$backend_registry,
                mod_consts[80],
                mod_consts[36]
            );
        } else {
            tmp_assign_source_2 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[80]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_TensorPipeAgent == NULL);
        var_TensorPipeAgent = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_store);
        tmp_isinstance_inst_1 = par_store;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[81]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooooooooooo";
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
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[82];
        CHECK_OBJECT(par_store);
        tmp_kw_call_arg_value_1_1 = par_store;
        frame_8c88ff1268da07fc81bc9bef230cf9b8->m_frame.f_lineno = 252;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8c88ff1268da07fc81bc9bef230cf9b8->m_frame.f_lineno = 252;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 252;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(par_rpc_backend_options);
        tmp_isinstance_inst_2 = par_rpc_backend_options;
        CHECK_OBJECT(var_TensorPipeRpcBackendOptions);
        tmp_isinstance_cls_2 = var_TensorPipeRpcBackendOptions;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooooooooooo";
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
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        tmp_kw_call_arg_value_0_2 = mod_consts[83];
        CHECK_OBJECT(par_rpc_backend_options);
        tmp_kw_call_arg_value_1_2 = par_rpc_backend_options;
        frame_8c88ff1268da07fc81bc9bef230cf9b8->m_frame.f_lineno = 258;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
            tmp_make_exception_arg_2 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8c88ff1268da07fc81bc9bef230cf9b8->m_frame.f_lineno = 257;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 257;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_store);
        tmp_args_element_value_1 = par_store;
        CHECK_OBJECT(par_rank);
        tmp_args_element_value_2 = par_rank;
        CHECK_OBJECT(par_world_size);
        tmp_args_element_value_3 = par_world_size;
        frame_8c88ff1268da07fc81bc9bef230cf9b8->m_frame.f_lineno = 267;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_group == NULL);
        var_group = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[40]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8c88ff1268da07fc81bc9bef230cf9b8->m_frame.f_lineno = 269;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[85]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 269;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[40]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8c88ff1268da07fc81bc9bef230cf9b8->m_frame.f_lineno = 275;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[86]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[40]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8c88ff1268da07fc81bc9bef230cf9b8->m_frame.f_lineno = 276;
        tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[42]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_device_count == NULL);
        var_device_count = tmp_assign_source_4;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[36];
        assert(var_device_count == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_device_count = tmp_assign_source_5;
    }
    branch_end_3:;
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_name);
        tmp_args_element_value_4 = par_name;
        CHECK_OBJECT(var_device_count);
        tmp_args_element_value_5 = var_device_count;
        CHECK_OBJECT(par_rpc_backend_options);
        tmp_expression_value_5 = par_rpc_backend_options;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[88]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_rpc_backend_options);
        tmp_expression_value_6 = par_rpc_backend_options;
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[89]);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_6);

            exception_lineno = 284;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_group);
        tmp_args_element_value_8 = var_group;
        frame_8c88ff1268da07fc81bc9bef230cf9b8->m_frame.f_lineno = 280;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oooooooooooo";
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
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooo";
            exception_lineno = 280;
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
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooo";
            exception_lineno = 280;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
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

                    type_description_1 = "oooooooooooo";
                    exception_lineno = 280;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[58];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooo";
            exception_lineno = 280;
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
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
        assert(var_reverse_device_maps == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_reverse_device_maps = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
        assert(var_devices == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_devices = tmp_assign_source_10;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        CHECK_OBJECT(var_TensorPipeAgent);
        tmp_called_value_3 = var_TensorPipeAgent;
        CHECK_OBJECT(par_store);
        tmp_args_element_value_9 = par_store;
        CHECK_OBJECT(par_name);
        tmp_args_element_value_10 = par_name;
        CHECK_OBJECT(par_rank);
        tmp_args_element_value_11 = par_rank;
        CHECK_OBJECT(par_world_size);
        tmp_args_element_value_12 = par_world_size;
        CHECK_OBJECT(par_rpc_backend_options);
        tmp_args_element_value_13 = par_rpc_backend_options;
        CHECK_OBJECT(var_reverse_device_maps);
        tmp_args_element_value_14 = var_reverse_device_maps;
        CHECK_OBJECT(var_devices);
        tmp_args_element_value_15 = var_devices;
        frame_8c88ff1268da07fc81bc9bef230cf9b8->m_frame.f_lineno = 289;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS7(tmp_called_value_3, call_args);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_agent == NULL);
        var_agent = tmp_assign_source_11;
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_16;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_agent);
        tmp_args_element_value_16 = var_agent;
        frame_8c88ff1268da07fc81bc9bef230cf9b8->m_frame.f_lineno = 299;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[91], tmp_args_element_value_16);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_4;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_8;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[92]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_rpc_backend_options);
        tmp_expression_value_8 = par_rpc_backend_options;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[93]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 305;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8c88ff1268da07fc81bc9bef230cf9b8->m_frame.f_lineno = 305;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_call_result_4 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_4, mod_consts[94], kw_values, mod_consts[95]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(var_group);
        tmp_called_instance_6 = var_group;
        frame_8c88ff1268da07fc81bc9bef230cf9b8->m_frame.f_lineno = 308;
        tmp_called_instance_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[96]);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8c88ff1268da07fc81bc9bef230cf9b8->m_frame.f_lineno = 308;
        tmp_call_result_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[97]);
        Py_DECREF(tmp_called_instance_5);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8c88ff1268da07fc81bc9bef230cf9b8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8c88ff1268da07fc81bc9bef230cf9b8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8c88ff1268da07fc81bc9bef230cf9b8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8c88ff1268da07fc81bc9bef230cf9b8,
        type_description_1,
        par_store,
        par_name,
        par_rank,
        par_world_size,
        par_rpc_backend_options,
        var_TensorPipeRpcBackendOptions,
        var_TensorPipeAgent,
        var_group,
        var_device_count,
        var_reverse_device_maps,
        var_devices,
        var_agent
    );


    // Release cached frame if used for exception.
    if (frame_8c88ff1268da07fc81bc9bef230cf9b8 == cache_frame_8c88ff1268da07fc81bc9bef230cf9b8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8c88ff1268da07fc81bc9bef230cf9b8);
        cache_frame_8c88ff1268da07fc81bc9bef230cf9b8 = NULL;
    }

    assertFrameObject(frame_8c88ff1268da07fc81bc9bef230cf9b8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_agent);
    tmp_return_value = var_agent;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_TensorPipeRpcBackendOptions);
    Py_DECREF(var_TensorPipeRpcBackendOptions);
    var_TensorPipeRpcBackendOptions = NULL;
    CHECK_OBJECT(var_TensorPipeAgent);
    Py_DECREF(var_TensorPipeAgent);
    var_TensorPipeAgent = NULL;
    CHECK_OBJECT(var_group);
    Py_DECREF(var_group);
    var_group = NULL;
    CHECK_OBJECT(var_device_count);
    Py_DECREF(var_device_count);
    var_device_count = NULL;
    CHECK_OBJECT(var_reverse_device_maps);
    Py_DECREF(var_reverse_device_maps);
    var_reverse_device_maps = NULL;
    CHECK_OBJECT(var_devices);
    Py_DECREF(var_devices);
    var_devices = NULL;
    CHECK_OBJECT(var_agent);
    Py_DECREF(var_agent);
    var_agent = NULL;
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

    Py_XDECREF(var_TensorPipeRpcBackendOptions);
    var_TensorPipeRpcBackendOptions = NULL;
    Py_XDECREF(var_TensorPipeAgent);
    var_TensorPipeAgent = NULL;
    Py_XDECREF(var_group);
    var_group = NULL;
    Py_XDECREF(var_device_count);
    var_device_count = NULL;
    Py_XDECREF(var_reverse_device_maps);
    var_reverse_device_maps = NULL;
    Py_XDECREF(var_devices);
    var_devices = NULL;
    Py_XDECREF(var_agent);
    var_agent = NULL;
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
    CHECK_OBJECT(par_store);
    Py_DECREF(par_store);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_rank);
    Py_DECREF(par_rank);
    CHECK_OBJECT(par_world_size);
    Py_DECREF(par_world_size);
    CHECK_OBJECT(par_rpc_backend_options);
    Py_DECREF(par_rpc_backend_options);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_store);
    Py_DECREF(par_store);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_rank);
    Py_DECREF(par_rank);
    CHECK_OBJECT(par_world_size);
    Py_DECREF(par_world_size);
    CHECK_OBJECT(par_rpc_backend_options);
    Py_DECREF(par_rpc_backend_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_torch$distributed$rpc$backend_registry$$$function__10__tensorpipe_init_backend_handler() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$rpc$backend_registry$$$function__10__tensorpipe_init_backend_handler,
        mod_consts[123],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8c88ff1268da07fc81bc9bef230cf9b8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$rpc$backend_registry,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$rpc$backend_registry$$$function__1__backend_type_repr() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$rpc$backend_registry$$$function__1__backend_type_repr,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3a7015c0ff2146b0274f016aecfab298,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$rpc$backend_registry,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$rpc$backend_registry$$$function__2_backend_registered() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$rpc$backend_registry$$$function__2_backend_registered,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fd865e054f1aa4e4e6075eabd5b1a794,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$rpc$backend_registry,
        mod_consts[5],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$rpc$backend_registry$$$function__3_register_backend() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$rpc$backend_registry$$$function__3_register_backend,
        mod_consts[116],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0362af1c32d9d69f27f9897d1edcb2d2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$rpc$backend_registry,
        mod_consts[18],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$rpc$backend_registry$$$function__4_construct_rpc_backend_options(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$rpc$backend_registry$$$function__4_construct_rpc_backend_options,
        mod_consts[119],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_79f49b496ce8c25a49560da53ea10be4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$rpc$backend_registry,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$rpc$backend_registry$$$function__5_init_backend() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$rpc$backend_registry$$$function__5_init_backend,
        mod_consts[120],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f4fcafb74a2bbfb7587ff16196938a09,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$rpc$backend_registry,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$rpc$backend_registry$$$function__6__init_process_group() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$rpc$backend_registry$$$function__6__init_process_group,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3e734cb8fe12609784740bc3304ff416,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$rpc$backend_registry,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$rpc$backend_registry$$$function__7__tensorpipe_construct_rpc_backend_options_handler(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$rpc$backend_registry$$$function__7__tensorpipe_construct_rpc_backend_options_handler,
        mod_consts[122],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b8211b359fda5d1413fd7fc8bbced996,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$rpc$backend_registry,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$rpc$backend_registry$$$function__8__tensorpipe_validate_devices() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$rpc$backend_registry$$$function__8__tensorpipe_validate_devices,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_955ecfe50d37d559d8bca595b42bf399,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$rpc$backend_registry,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$rpc$backend_registry$$$function__9__tensorpipe_exchange_and_check_all_device_maps() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$rpc$backend_registry$$$function__9__tensorpipe_exchange_and_check_all_device_maps,
        mod_consts[87],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8aff1550ff0e7221b614b357070ca52d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$rpc$backend_registry,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$rpc$backend_registry$$$function__9__tensorpipe_exchange_and_check_all_device_maps$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$rpc$backend_registry$$$function__9__tensorpipe_exchange_and_check_all_device_maps$$$function__1_lambda,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        mod_consts[77],
#endif
        codeobj_622c6dbb81fe770e8837b59ee25e3fa1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$rpc$backend_registry,
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

function_impl_code functable_torch$distributed$rpc$backend_registry[] = {
    impl_torch$distributed$rpc$backend_registry$$$function__9__tensorpipe_exchange_and_check_all_device_maps$$$function__1_lambda,
    impl_torch$distributed$rpc$backend_registry$$$function__1__backend_type_repr,
    impl_torch$distributed$rpc$backend_registry$$$function__2_backend_registered,
    impl_torch$distributed$rpc$backend_registry$$$function__3_register_backend,
    impl_torch$distributed$rpc$backend_registry$$$function__4_construct_rpc_backend_options,
    impl_torch$distributed$rpc$backend_registry$$$function__5_init_backend,
    impl_torch$distributed$rpc$backend_registry$$$function__6__init_process_group,
    impl_torch$distributed$rpc$backend_registry$$$function__7__tensorpipe_construct_rpc_backend_options_handler,
    impl_torch$distributed$rpc$backend_registry$$$function__8__tensorpipe_validate_devices,
    impl_torch$distributed$rpc$backend_registry$$$function__9__tensorpipe_exchange_and_check_all_device_maps,
    impl_torch$distributed$rpc$backend_registry$$$function__10__tensorpipe_init_backend_handler,
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

    function_impl_code *current = functable_torch$distributed$rpc$backend_registry;
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

    if (offset > sizeof(functable_torch$distributed$rpc$backend_registry) || offset < 0) {
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
        functable_torch$distributed$rpc$backend_registry[offset],
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
        module_torch$distributed$rpc$backend_registry,
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
PyObject *modulecode_torch$distributed$rpc$backend_registry(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torch.distributed.rpc.backend_registry");

    // Store the module for future use.
    module_torch$distributed$rpc$backend_registry = module;

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
        PRINT_STRING("torch.distributed.rpc.backend_registry: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.distributed.rpc.backend_registry: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.distributed.rpc.backend_registry: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorch$distributed$rpc$backend_registry\n");

    moduledict_torch$distributed$rpc$backend_registry = MODULE_DICT(module_torch$distributed$rpc$backend_registry);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torch$distributed$rpc$backend_registry,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torch$distributed$rpc$backend_registry,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[32]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torch$distributed$rpc$backend_registry,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torch$distributed$rpc$backend_registry,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torch$distributed$rpc$backend_registry,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torch$distributed$rpc$backend_registry);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torch$distributed$rpc$backend_registry);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_07a6273c96c38c29d0dd96018436d950;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_2);
    }
    frame_07a6273c96c38c29d0dd96018436d950 = MAKE_MODULE_FRAME(codeobj_07a6273c96c38c29d0dd96018436d950, module_torch$distributed$rpc$backend_registry);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_07a6273c96c38c29d0dd96018436d950);
    assert(Py_REFCNT(frame_07a6273c96c38c29d0dd96018436d950) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[100], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[101], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[103];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$distributed$rpc$backend_registry;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[36];
        frame_07a6273c96c38c29d0dd96018436d950->m_frame.f_lineno = 2;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[11];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torch$distributed$rpc$backend_registry;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[36];
        frame_07a6273c96c38c29d0dd96018436d950->m_frame.f_lineno = 3;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_5);
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
                (PyObject *)moduledict_torch$distributed$rpc$backend_registry,
                mod_consts[104],
                mod_consts[36]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[104]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_torch$distributed$rpc$backend_registry,
                mod_consts[105],
                mod_consts[36]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[105]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_torch$distributed$rpc$backend_registry,
                mod_consts[106],
                mod_consts[36]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[106]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_torch$distributed$rpc$backend_registry,
                mod_consts[107],
                mod_consts[36]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[107]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_10);
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
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[71];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_torch$distributed$rpc$backend_registry;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[36];
        frame_07a6273c96c38c29d0dd96018436d950->m_frame.f_lineno = 6;
        tmp_assign_source_11 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[108];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_torch$distributed$rpc$backend_registry;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[36];
        frame_07a6273c96c38c29d0dd96018436d950->m_frame.f_lineno = 7;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_torch$distributed$rpc$backend_registry,
                mod_consts[109],
                mod_consts[36]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[109]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[32];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_torch$distributed$rpc$backend_registry;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[110];
        tmp_level_value_5 = mod_consts[34];
        frame_07a6273c96c38c29d0dd96018436d950->m_frame.f_lineno = 9;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_torch$distributed$rpc$backend_registry,
                mod_consts[90],
                mod_consts[36]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[90]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[32];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_torch$distributed$rpc$backend_registry;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[111];
        tmp_level_value_6 = mod_consts[34];
        frame_07a6273c96c38c29d0dd96018436d950->m_frame.f_lineno = 10;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_torch$distributed$rpc$backend_registry,
                mod_consts[112],
                mod_consts[36]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[112]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = mod_consts[9];
        tmp_call_arg_element_2 = MAKE_LIST2(mod_consts[19],mod_consts[20]);
        frame_07a6273c96c38c29d0dd96018436d950->m_frame.f_lineno = 13;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
            tmp_assign_source_15 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[113],
                call_args
            );
        }

        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;


        tmp_assign_source_16 = MAKE_FUNCTION_torch$distributed$rpc$backend_registry$$$function__1__backend_type_repr();

        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[114];
        UPDATE_STRING_DICT0(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_args_kwsplit_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[12]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_call_args_kwsplit_1 = DEEP_COPY_TUPLE_GUIDED(mod_consts[115], "id");
        frame_07a6273c96c38c29d0dd96018436d950->m_frame.f_lineno = 32;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_1, 0), mod_consts[13]);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_call_args_kwsplit_1);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_assattr_value_3 == NULL)) {
            tmp_assattr_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        assert(!(tmp_assattr_target_3 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[15], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_assattr_value_4 == NULL)) {
            tmp_assattr_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_4 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assattr_target_4 == NULL)) {
            tmp_assattr_target_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_assattr_target_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[17], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_torch$distributed$rpc$backend_registry$$$function__2_backend_registered();

        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_torch$distributed$rpc$backend_registry$$$function__3_register_backend();

        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[117]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_defaults_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_3;
            PyTuple_SET_ITEM(tmp_defaults_1, 0, tmp_tuple_element_1);
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[118]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_defaults_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_defaults_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;


        tmp_assign_source_21 = MAKE_FUNCTION_torch$distributed$rpc$backend_registry$$$function__4_construct_rpc_backend_options(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;


        tmp_assign_source_22 = MAKE_FUNCTION_torch$distributed$rpc$backend_registry$$$function__5_init_backend();

        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;


        tmp_assign_source_23 = MAKE_FUNCTION_torch$distributed$rpc$backend_registry$$$function__6__init_process_group();

        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_defaults_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[121]);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_defaults_2 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM(tmp_defaults_2, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = Py_None;
        PyTuple_SET_ITEM0(tmp_defaults_2, 1, tmp_tuple_element_2);
        tmp_tuple_element_2 = Py_None;
        PyTuple_SET_ITEM0(tmp_defaults_2, 2, tmp_tuple_element_2);


        tmp_assign_source_24 = MAKE_FUNCTION_torch$distributed$rpc$backend_registry$$$function__7__tensorpipe_construct_rpc_backend_options_handler(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;


        tmp_assign_source_25 = MAKE_FUNCTION_torch$distributed$rpc$backend_registry$$$function__8__tensorpipe_validate_devices();

        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;


        tmp_assign_source_26 = MAKE_FUNCTION_torch$distributed$rpc$backend_registry$$$function__9__tensorpipe_exchange_and_check_all_device_maps();

        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;


        tmp_assign_source_27 = MAKE_FUNCTION_torch$distributed$rpc$backend_registry$$$function__10__tensorpipe_init_backend_handler();

        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_27);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[124];
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
        }

        assert(!(tmp_args_element_value_2 == NULL));
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        assert(!(tmp_args_element_value_3 == NULL));
        frame_07a6273c96c38c29d0dd96018436d950->m_frame.f_lineno = 313;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_07a6273c96c38c29d0dd96018436d950, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_07a6273c96c38c29d0dd96018436d950->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_07a6273c96c38c29d0dd96018436d950, exception_lineno);
    }



    assertFrameObject(frame_07a6273c96c38c29d0dd96018436d950);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torch.distributed.rpc.backend_registry", false);

    Py_INCREF(module_torch$distributed$rpc$backend_registry);
    return module_torch$distributed$rpc$backend_registry;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$backend_registry, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torch$distributed$rpc$backend_registry", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
