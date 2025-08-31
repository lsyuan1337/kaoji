/* Generated code for Python module 'torch.profiler.profiler'
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

/* The "module_torch$profiler$profiler" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torch$profiler$profiler;
PyDictObject *moduledict_torch$profiler$profiler;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[242];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[242];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torch.profiler.profiler"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 242; i++) {
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
void checkModuleConstants_torch$profiler$profiler(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 242; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_bb7fef1901f22baf493ae566a8b2f7d5;
static PyCodeObject *codeobj_176e60610f371fa38343dc01a78aa9c9;
static PyCodeObject *codeobj_b0835a7278bdf3770c9edbda4c462350;
static PyCodeObject *codeobj_014299843b9f181a748401abe8b12469;
static PyCodeObject *codeobj_d1310394d09c37a382b1c78ec34d20fb;
static PyCodeObject *codeobj_f080d921f70dd206cb3e2ae57f51ce17;
static PyCodeObject *codeobj_2390aa0d3a6e30936eea18b1a97e4a33;
static PyCodeObject *codeobj_1db034ba6be62c2857197ca50d8a6b5f;
static PyCodeObject *codeobj_72901a3466c65c15493ac12ee0a1c49c;
static PyCodeObject *codeobj_ab2d45c7e0688e65d373ac64972dceac;
static PyCodeObject *codeobj_ef708eaa8008bde4d347119d2e1f7d5e;
static PyCodeObject *codeobj_1060075374aefe82c28f028da1c5461f;
static PyCodeObject *codeobj_bdf360d1d234aceb4c470408493edece;
static PyCodeObject *codeobj_497bae2580f6d6cd7adbed681c6c8bfc;
static PyCodeObject *codeobj_75417a2cd5ec17786d4e24f43c589f68;
static PyCodeObject *codeobj_de4a8d1b3f8ef1262ba386f22238a8b6;
static PyCodeObject *codeobj_3014036b23fd38eb5677f8cf59f6708e;
static PyCodeObject *codeobj_71934814f164c23d53114bb516bdd497;
static PyCodeObject *codeobj_c298d930df327f439df8f3f74e29d66c;
static PyCodeObject *codeobj_db88af50f5a75d1adf3933a773d77008;
static PyCodeObject *codeobj_88b6bc77f38c9cf324204aa1a0f02008;
static PyCodeObject *codeobj_0db3b8ef86e53a16cffb518dc5527805;
static PyCodeObject *codeobj_8b2abe1c3666074e2cdb40a000146719;
static PyCodeObject *codeobj_5a50cb541b25e3503ce30719143d0d3d;
static PyCodeObject *codeobj_8fb583df0787a8492fcbe7b0f4d7b806;
static PyCodeObject *codeobj_999c966d6124dc2602bc4b8fc4ff5da7;
static PyCodeObject *codeobj_497645856fba6eeb13b52957bd2ccae0;
static PyCodeObject *codeobj_48fa3072225de6cb22d5b45d66f55007;
static PyCodeObject *codeobj_e10fe8782cae925c3933ba9f79a7d8ef;
static PyCodeObject *codeobj_43ff9e760a39dc65fb330f8974edd240;
static PyCodeObject *codeobj_96ac7b3c356e342160ec0337ccb3e2ff;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[218]); CHECK_OBJECT(module_filename_obj);
    codeobj_bb7fef1901f22baf493ae566a8b2f7d5 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[219], mod_consts[219], NULL, NULL, 0, 0, 0);
    codeobj_176e60610f371fa38343dc01a78aa9c9 = MAKE_CODE_OBJECT(module_filename_obj, 186, CO_NOFREE, mod_consts[73], mod_consts[73], mod_consts[220], NULL, 0, 0, 0);
    codeobj_b0835a7278bdf3770c9edbda4c462350 = MAKE_CODE_OBJECT(module_filename_obj, 29, CO_NOFREE, mod_consts[164], mod_consts[164], mod_consts[220], NULL, 0, 0, 0);
    codeobj_014299843b9f181a748401abe8b12469 = MAKE_CODE_OBJECT(module_filename_obj, 451, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[40], mod_consts[40], mod_consts[221], NULL, 1, 0, 0);
    codeobj_d1310394d09c37a382b1c78ec34d20fb = MAKE_CODE_OBJECT(module_filename_obj, 455, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[29], mod_consts[29], mod_consts[222], NULL, 4, 0, 0);
    codeobj_f080d921f70dd206cb3e2ae57f51ce17 = MAKE_CODE_OBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[118], mod_consts[118], mod_consts[223], NULL, 1, 6, 0);
    codeobj_2390aa0d3a6e30936eea18b1a97e4a33 = MAKE_CODE_OBJECT(module_filename_obj, 368, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[118], mod_consts[118], mod_consts[224], mod_consts[220], 1, 9, 0);
    codeobj_1db034ba6be62c2857197ca50d8a6b5f = MAKE_CODE_OBJECT(module_filename_obj, 228, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[122], mod_consts[122], mod_consts[225], NULL, 1, 0, 0);
    codeobj_72901a3466c65c15493ac12ee0a1c49c = MAKE_CODE_OBJECT(module_filename_obj, 174, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[24], mod_consts[24], mod_consts[226], NULL, 1, 0, 0);
    codeobj_ab2d45c7e0688e65d373ac64972dceac = MAKE_CODE_OBJECT(module_filename_obj, 485, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[132], mod_consts[132], mod_consts[221], NULL, 1, 0, 0);
    codeobj_ef708eaa8008bde4d347119d2e1f7d5e = MAKE_CODE_OBJECT(module_filename_obj, 489, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[136], mod_consts[136], mod_consts[227], NULL, 3, 0, 0);
    codeobj_1060075374aefe82c28f028da1c5461f = MAKE_CODE_OBJECT(module_filename_obj, 159, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[195], mod_consts[195], mod_consts[228], NULL, 3, 0, 0);
    codeobj_bdf360d1d234aceb4c470408493edece = MAKE_CODE_OBJECT(module_filename_obj, 167, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[25], mod_consts[25], mod_consts[229], NULL, 3, 0, 0);
    codeobj_497bae2580f6d6cd7adbed681c6c8bfc = MAKE_CODE_OBJECT(module_filename_obj, 151, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[191], mod_consts[191], mod_consts[221], NULL, 1, 0, 0);
    codeobj_75417a2cd5ec17786d4e24f43c589f68 = MAKE_CODE_OBJECT(module_filename_obj, 106, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[38], mod_consts[38], mod_consts[230], NULL, 2, 0, 0);
    codeobj_de4a8d1b3f8ef1262ba386f22238a8b6 = MAKE_CODE_OBJECT(module_filename_obj, 123, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[48], mod_consts[48], mod_consts[231], NULL, 3, 0, 0);
    codeobj_3014036b23fd38eb5677f8cf59f6708e = MAKE_CODE_OBJECT(module_filename_obj, 246, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[95], mod_consts[95], mod_consts[232], mod_consts[233], 1, 0, 0);
    codeobj_71934814f164c23d53114bb516bdd497 = MAKE_CODE_OBJECT(module_filename_obj, 140, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[50], mod_consts[50], mod_consts[234], NULL, 3, 0, 0);
    codeobj_c298d930df327f439df8f3f74e29d66c = MAKE_CODE_OBJECT(module_filename_obj, 80, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[221], NULL, 1, 0, 0);
    codeobj_db88af50f5a75d1adf3933a773d77008 = MAKE_CODE_OBJECT(module_filename_obj, 262, CO_NOFREE, mod_consts[16], mod_consts[16], mod_consts[220], NULL, 0, 0, 0);
    codeobj_88b6bc77f38c9cf324204aa1a0f02008 = MAKE_CODE_OBJECT(module_filename_obj, 196, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[120], mod_consts[120], mod_consts[235], NULL, 0, 5, 0);
    codeobj_0db3b8ef86e53a16cffb518dc5527805 = MAKE_CODE_OBJECT(module_filename_obj, 204, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[74], mod_consts[74], mod_consts[236], mod_consts[237], 1, 0, 0);
    codeobj_8b2abe1c3666074e2cdb40a000146719 = MAKE_CODE_OBJECT(module_filename_obj, 73, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[134], mod_consts[134], mod_consts[221], NULL, 1, 0, 0);
    codeobj_5a50cb541b25e3503ce30719143d0d3d = MAKE_CODE_OBJECT(module_filename_obj, 458, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[134], mod_consts[134], mod_consts[221], NULL, 1, 0, 0);
    codeobj_8fb583df0787a8492fcbe7b0f4d7b806 = MAKE_CODE_OBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[13], mod_consts[238], NULL, 1, 0, 0);
    codeobj_999c966d6124dc2602bc4b8fc4ff5da7 = MAKE_CODE_OBJECT(module_filename_obj, 469, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[71], mod_consts[71], mod_consts[239], NULL, 1, 0, 0);
    codeobj_497645856fba6eeb13b52957bd2ccae0 = MAKE_CODE_OBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[135], mod_consts[135], mod_consts[221], NULL, 1, 0, 0);
    codeobj_48fa3072225de6cb22d5b45d66f55007 = MAKE_CODE_OBJECT(module_filename_obj, 464, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[135], mod_consts[135], mod_consts[221], NULL, 1, 0, 0);
    codeobj_e10fe8782cae925c3933ba9f79a7d8ef = MAKE_CODE_OBJECT(module_filename_obj, 102, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[221], NULL, 1, 0, 0);
    codeobj_43ff9e760a39dc65fb330f8974edd240 = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], NULL, NULL, 0, 0, 0);
    codeobj_96ac7b3c356e342160ec0337ccb3e2ff = MAKE_CODE_OBJECT(module_filename_obj, 235, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[206], mod_consts[206], mod_consts[240], NULL, 3, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__10_key_averages(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__11_events();


static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__12_add_metadata(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__13_add_metadata_json(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__14__get_distributed_info();


static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__15_schedule(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__15_schedule$$$function__1_schedule_fn(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__16__default_schedule_fn(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__17_tensorboard_trace_handler(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__17_tensorboard_trace_handler$$$function__1_handler_fn(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__18___init__(PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__19___enter__();


static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__1_supported_activities();


static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__20___exit__();


static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__21_start();


static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__22_stop();


static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__23_step();


static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__24__trace_ready();


static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__25__transit_action();


static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__2___init__(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__3_start();


static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__4_stop();


static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__5_prepare_trace();


static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__6_start_trace();


static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__7_stop_trace();


static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__8_export_chrome_trace(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__9_export_stacks(PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_torch$profiler$profiler$$$function__1_supported_activities(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_43ff9e760a39dc65fb330f8974edd240;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_43ff9e760a39dc65fb330f8974edd240 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_43ff9e760a39dc65fb330f8974edd240)) {
        Py_XDECREF(cache_frame_43ff9e760a39dc65fb330f8974edd240);

#if _DEBUG_REFCOUNTS
        if (cache_frame_43ff9e760a39dc65fb330f8974edd240 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_43ff9e760a39dc65fb330f8974edd240 = MAKE_FUNCTION_FRAME(codeobj_43ff9e760a39dc65fb330f8974edd240, module_torch$profiler$profiler, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_43ff9e760a39dc65fb330f8974edd240->m_type_description == NULL);
    frame_43ff9e760a39dc65fb330f8974edd240 = cache_frame_43ff9e760a39dc65fb330f8974edd240;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_43ff9e760a39dc65fb330f8974edd240);
    assert(Py_REFCNT(frame_43ff9e760a39dc65fb330f8974edd240) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        frame_43ff9e760a39dc65fb330f8974edd240->m_frame.f_lineno = 26;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[2]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

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
        exception_tb = MAKE_TRACEBACK(frame_43ff9e760a39dc65fb330f8974edd240, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_43ff9e760a39dc65fb330f8974edd240->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_43ff9e760a39dc65fb330f8974edd240, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_43ff9e760a39dc65fb330f8974edd240,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_43ff9e760a39dc65fb330f8974edd240 == cache_frame_43ff9e760a39dc65fb330f8974edd240) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_43ff9e760a39dc65fb330f8974edd240);
        cache_frame_43ff9e760a39dc65fb330f8974edd240 = NULL;
    }

    assertFrameObject(frame_43ff9e760a39dc65fb330f8974edd240);

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


static PyObject *impl_torch$profiler$profiler$$$function__2___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_activities = python_pars[1];
    PyObject *par_record_shapes = python_pars[2];
    PyObject *par_profile_memory = python_pars[3];
    PyObject *par_with_stack = python_pars[4];
    PyObject *par_with_flops = python_pars[5];
    PyObject *par_with_modules = python_pars[6];
    struct Nuitka_FrameObject *frame_f080d921f70dd206cb3e2ae57f51ce17;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_f080d921f70dd206cb3e2ae57f51ce17 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f080d921f70dd206cb3e2ae57f51ce17)) {
        Py_XDECREF(cache_frame_f080d921f70dd206cb3e2ae57f51ce17);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f080d921f70dd206cb3e2ae57f51ce17 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f080d921f70dd206cb3e2ae57f51ce17 = MAKE_FUNCTION_FRAME(codeobj_f080d921f70dd206cb3e2ae57f51ce17, module_torch$profiler$profiler, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f080d921f70dd206cb3e2ae57f51ce17->m_type_description == NULL);
    frame_f080d921f70dd206cb3e2ae57f51ce17 = cache_frame_f080d921f70dd206cb3e2ae57f51ce17;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f080d921f70dd206cb3e2ae57f51ce17);
    assert(Py_REFCNT(frame_f080d921f70dd206cb3e2ae57f51ce17) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_set_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_activities);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_activities);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_activities);
        tmp_set_arg_1 = par_activities;
        tmp_assattr_value_1 = PySet_New(tmp_set_arg_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_f080d921f70dd206cb3e2ae57f51ce17->m_frame.f_lineno = 65;
        tmp_assattr_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[5], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_record_shapes);
        tmp_assattr_value_2 = par_record_shapes;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[6], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_with_flops);
        tmp_assattr_value_3 = par_with_flops;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[7], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_profile_memory);
        tmp_assattr_value_4 = par_profile_memory;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[8], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_with_stack);
        tmp_assattr_value_5 = par_with_stack;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[9], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_with_modules);
        tmp_assattr_value_6 = par_with_modules;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[10], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        tmp_assattr_value_7 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[11], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f080d921f70dd206cb3e2ae57f51ce17, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f080d921f70dd206cb3e2ae57f51ce17->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f080d921f70dd206cb3e2ae57f51ce17, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f080d921f70dd206cb3e2ae57f51ce17,
        type_description_1,
        par_self,
        par_activities,
        par_record_shapes,
        par_profile_memory,
        par_with_stack,
        par_with_flops,
        par_with_modules
    );


    // Release cached frame if used for exception.
    if (frame_f080d921f70dd206cb3e2ae57f51ce17 == cache_frame_f080d921f70dd206cb3e2ae57f51ce17) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f080d921f70dd206cb3e2ae57f51ce17);
        cache_frame_f080d921f70dd206cb3e2ae57f51ce17 = NULL;
    }

    assertFrameObject(frame_f080d921f70dd206cb3e2ae57f51ce17);

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
    CHECK_OBJECT(par_activities);
    Py_DECREF(par_activities);
    CHECK_OBJECT(par_record_shapes);
    Py_DECREF(par_record_shapes);
    CHECK_OBJECT(par_profile_memory);
    Py_DECREF(par_profile_memory);
    CHECK_OBJECT(par_with_stack);
    Py_DECREF(par_with_stack);
    CHECK_OBJECT(par_with_flops);
    Py_DECREF(par_with_flops);
    CHECK_OBJECT(par_with_modules);
    Py_DECREF(par_with_modules);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_activities);
    Py_DECREF(par_activities);
    CHECK_OBJECT(par_record_shapes);
    Py_DECREF(par_record_shapes);
    CHECK_OBJECT(par_profile_memory);
    Py_DECREF(par_profile_memory);
    CHECK_OBJECT(par_with_stack);
    Py_DECREF(par_with_stack);
    CHECK_OBJECT(par_with_flops);
    Py_DECREF(par_with_flops);
    CHECK_OBJECT(par_with_modules);
    Py_DECREF(par_with_modules);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$profiler$profiler$$$function__3_start(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_8b2abe1c3666074e2cdb40a000146719;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8b2abe1c3666074e2cdb40a000146719 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8b2abe1c3666074e2cdb40a000146719)) {
        Py_XDECREF(cache_frame_8b2abe1c3666074e2cdb40a000146719);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8b2abe1c3666074e2cdb40a000146719 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8b2abe1c3666074e2cdb40a000146719 = MAKE_FUNCTION_FRAME(codeobj_8b2abe1c3666074e2cdb40a000146719, module_torch$profiler$profiler, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8b2abe1c3666074e2cdb40a000146719->m_type_description == NULL);
    frame_8b2abe1c3666074e2cdb40a000146719 = cache_frame_8b2abe1c3666074e2cdb40a000146719;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8b2abe1c3666074e2cdb40a000146719);
    assert(Py_REFCNT(frame_8b2abe1c3666074e2cdb40a000146719) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_8b2abe1c3666074e2cdb40a000146719->m_frame.f_lineno = 74;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[12]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_8b2abe1c3666074e2cdb40a000146719->m_frame.f_lineno = 75;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[13]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8b2abe1c3666074e2cdb40a000146719, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8b2abe1c3666074e2cdb40a000146719->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8b2abe1c3666074e2cdb40a000146719, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8b2abe1c3666074e2cdb40a000146719,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_8b2abe1c3666074e2cdb40a000146719 == cache_frame_8b2abe1c3666074e2cdb40a000146719) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8b2abe1c3666074e2cdb40a000146719);
        cache_frame_8b2abe1c3666074e2cdb40a000146719 = NULL;
    }

    assertFrameObject(frame_8b2abe1c3666074e2cdb40a000146719);

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


static PyObject *impl_torch$profiler$profiler$$$function__4_stop(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_497645856fba6eeb13b52957bd2ccae0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_497645856fba6eeb13b52957bd2ccae0 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_497645856fba6eeb13b52957bd2ccae0)) {
        Py_XDECREF(cache_frame_497645856fba6eeb13b52957bd2ccae0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_497645856fba6eeb13b52957bd2ccae0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_497645856fba6eeb13b52957bd2ccae0 = MAKE_FUNCTION_FRAME(codeobj_497645856fba6eeb13b52957bd2ccae0, module_torch$profiler$profiler, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_497645856fba6eeb13b52957bd2ccae0->m_type_description == NULL);
    frame_497645856fba6eeb13b52957bd2ccae0 = cache_frame_497645856fba6eeb13b52957bd2ccae0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_497645856fba6eeb13b52957bd2ccae0);
    assert(Py_REFCNT(frame_497645856fba6eeb13b52957bd2ccae0) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_497645856fba6eeb13b52957bd2ccae0->m_frame.f_lineno = 78;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[14]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
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
        exception_tb = MAKE_TRACEBACK(frame_497645856fba6eeb13b52957bd2ccae0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_497645856fba6eeb13b52957bd2ccae0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_497645856fba6eeb13b52957bd2ccae0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_497645856fba6eeb13b52957bd2ccae0,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_497645856fba6eeb13b52957bd2ccae0 == cache_frame_497645856fba6eeb13b52957bd2ccae0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_497645856fba6eeb13b52957bd2ccae0);
        cache_frame_497645856fba6eeb13b52957bd2ccae0 = NULL;
    }

    assertFrameObject(frame_497645856fba6eeb13b52957bd2ccae0);

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


static PyObject *impl_torch$profiler$profiler$$$function__5_prepare_trace(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_c298d930df327f439df8f3f74e29d66c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_c298d930df327f439df8f3f74e29d66c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c298d930df327f439df8f3f74e29d66c)) {
        Py_XDECREF(cache_frame_c298d930df327f439df8f3f74e29d66c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c298d930df327f439df8f3f74e29d66c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c298d930df327f439df8f3f74e29d66c = MAKE_FUNCTION_FRAME(codeobj_c298d930df327f439df8f3f74e29d66c, module_torch$profiler$profiler, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c298d930df327f439df8f3f74e29d66c->m_type_description == NULL);
    frame_c298d930df327f439df8f3f74e29d66c = cache_frame_c298d930df327f439df8f3f74e29d66c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c298d930df327f439df8f3f74e29d66c);
    assert(Py_REFCNT(frame_c298d930df327f439df8f3f74e29d66c) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_kw_call_value_5_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_kw_call_value_6_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_kw_call_value_7_1;
        PyObject *tmp_assattr_target_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[16]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 82;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[18]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 82;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[5]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 82;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 82;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = (tmp_res == 1) ? Py_True : Py_False;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 83;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[19]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 83;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[5]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 83;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 83;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = (tmp_res == 1) ? Py_True : Py_False;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[6]);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 84;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_kw_call_value_3_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[7]);
        if (tmp_kw_call_value_3_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_2_1);

            exception_lineno = 85;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_kw_call_value_4_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[8]);
        if (tmp_kw_call_value_4_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);

            exception_lineno = 86;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_kw_call_value_5_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[9]);
        if (tmp_kw_call_value_5_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);

            exception_lineno = 87;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_kw_call_value_6_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[10]);
        if (tmp_kw_call_value_6_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);

            exception_lineno = 88;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_7_1 = Py_True;
        frame_c298d930df327f439df8f3f74e29d66c->m_frame.f_lineno = 81;
        {
            PyObject *kw_values[8] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1};

            tmp_assattr_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[20]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        Py_DECREF(tmp_kw_call_value_3_1);
        Py_DECREF(tmp_kw_call_value_4_1);
        Py_DECREF(tmp_kw_call_value_5_1);
        Py_DECREF(tmp_kw_call_value_6_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[11], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[11]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_c298d930df327f439df8f3f74e29d66c->m_frame.f_lineno = 91;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[21]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
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
        exception_tb = MAKE_TRACEBACK(frame_c298d930df327f439df8f3f74e29d66c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c298d930df327f439df8f3f74e29d66c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c298d930df327f439df8f3f74e29d66c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c298d930df327f439df8f3f74e29d66c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_c298d930df327f439df8f3f74e29d66c == cache_frame_c298d930df327f439df8f3f74e29d66c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c298d930df327f439df8f3f74e29d66c);
        cache_frame_c298d930df327f439df8f3f74e29d66c = NULL;
    }

    assertFrameObject(frame_c298d930df327f439df8f3f74e29d66c);

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


static PyObject *impl_torch$profiler$profiler$$$function__6_start_trace(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_dist_info = NULL;
    struct Nuitka_FrameObject *frame_8fb583df0787a8492fcbe7b0f4d7b806;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_8fb583df0787a8492fcbe7b0f4d7b806 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8fb583df0787a8492fcbe7b0f4d7b806)) {
        Py_XDECREF(cache_frame_8fb583df0787a8492fcbe7b0f4d7b806);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8fb583df0787a8492fcbe7b0f4d7b806 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8fb583df0787a8492fcbe7b0f4d7b806 = MAKE_FUNCTION_FRAME(codeobj_8fb583df0787a8492fcbe7b0f4d7b806, module_torch$profiler$profiler, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8fb583df0787a8492fcbe7b0f4d7b806->m_type_description == NULL);
    frame_8fb583df0787a8492fcbe7b0f4d7b806 = cache_frame_8fb583df0787a8492fcbe7b0f4d7b806;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8fb583df0787a8492fcbe7b0f4d7b806);
    assert(Py_REFCNT(frame_8fb583df0787a8492fcbe7b0f4d7b806) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oo";
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
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 94;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[11]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_8fb583df0787a8492fcbe7b0f4d7b806->m_frame.f_lineno = 95;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[22]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_2;
        int tmp_truth_name_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_8fb583df0787a8492fcbe7b0f4d7b806->m_frame.f_lineno = 97;
        tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 97;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_8fb583df0787a8492fcbe7b0f4d7b806->m_frame.f_lineno = 98;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[24]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_dist_info == NULL);
        var_dist_info = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_dist_info);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_dist_info);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[25]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[26];
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 100;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dist_info);
        tmp_args_element_value_3 = var_dist_info;
        frame_8fb583df0787a8492fcbe7b0f4d7b806->m_frame.f_lineno = 100;
        tmp_args_element_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[28], tmp_args_element_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 100;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_8fb583df0787a8492fcbe7b0f4d7b806->m_frame.f_lineno = 100;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_3:;
    branch_no_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8fb583df0787a8492fcbe7b0f4d7b806, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8fb583df0787a8492fcbe7b0f4d7b806->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8fb583df0787a8492fcbe7b0f4d7b806, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8fb583df0787a8492fcbe7b0f4d7b806,
        type_description_1,
        par_self,
        var_dist_info
    );


    // Release cached frame if used for exception.
    if (frame_8fb583df0787a8492fcbe7b0f4d7b806 == cache_frame_8fb583df0787a8492fcbe7b0f4d7b806) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8fb583df0787a8492fcbe7b0f4d7b806);
        cache_frame_8fb583df0787a8492fcbe7b0f4d7b806 = NULL;
    }

    assertFrameObject(frame_8fb583df0787a8492fcbe7b0f4d7b806);

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
    Py_XDECREF(var_dist_info);
    var_dist_info = NULL;
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

    Py_XDECREF(var_dist_info);
    var_dist_info = NULL;
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


static PyObject *impl_torch$profiler$profiler$$$function__7_stop_trace(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e10fe8782cae925c3933ba9f79a7d8ef;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_e10fe8782cae925c3933ba9f79a7d8ef = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e10fe8782cae925c3933ba9f79a7d8ef)) {
        Py_XDECREF(cache_frame_e10fe8782cae925c3933ba9f79a7d8ef);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e10fe8782cae925c3933ba9f79a7d8ef == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e10fe8782cae925c3933ba9f79a7d8ef = MAKE_FUNCTION_FRAME(codeobj_e10fe8782cae925c3933ba9f79a7d8ef, module_torch$profiler$profiler, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e10fe8782cae925c3933ba9f79a7d8ef->m_type_description == NULL);
    frame_e10fe8782cae925c3933ba9f79a7d8ef = cache_frame_e10fe8782cae925c3933ba9f79a7d8ef;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e10fe8782cae925c3933ba9f79a7d8ef);
    assert(Py_REFCNT(frame_e10fe8782cae925c3933ba9f79a7d8ef) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "o";
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
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 103;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[11]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e10fe8782cae925c3933ba9f79a7d8ef->m_frame.f_lineno = 104;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
            tmp_called_instance_1,
            mod_consts[29],
            &PyTuple_GET_ITEM(mod_consts[30], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
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
        exception_tb = MAKE_TRACEBACK(frame_e10fe8782cae925c3933ba9f79a7d8ef, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e10fe8782cae925c3933ba9f79a7d8ef->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e10fe8782cae925c3933ba9f79a7d8ef, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e10fe8782cae925c3933ba9f79a7d8ef,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_e10fe8782cae925c3933ba9f79a7d8ef == cache_frame_e10fe8782cae925c3933ba9f79a7d8ef) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e10fe8782cae925c3933ba9f79a7d8ef);
        cache_frame_e10fe8782cae925c3933ba9f79a7d8ef = NULL;
    }

    assertFrameObject(frame_e10fe8782cae925c3933ba9f79a7d8ef);

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


static PyObject *impl_torch$profiler$profiler$$$function__8_export_chrome_trace(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *var_fp = NULL;
    PyObject *var_retvalue = NULL;
    PyObject *var_fin = NULL;
    PyObject *var_fout = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    PyObject *tmp_with_2__enter = NULL;
    PyObject *tmp_with_2__exit = NULL;
    nuitka_bool tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_2__source = NULL;
    struct Nuitka_FrameObject *frame_75417a2cd5ec17786d4e24f43c589f68;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_75417a2cd5ec17786d4e24f43c589f68 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_75417a2cd5ec17786d4e24f43c589f68)) {
        Py_XDECREF(cache_frame_75417a2cd5ec17786d4e24f43c589f68);

#if _DEBUG_REFCOUNTS
        if (cache_frame_75417a2cd5ec17786d4e24f43c589f68 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_75417a2cd5ec17786d4e24f43c589f68 = MAKE_FUNCTION_FRAME(codeobj_75417a2cd5ec17786d4e24f43c589f68, module_torch$profiler$profiler, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_75417a2cd5ec17786d4e24f43c589f68->m_type_description == NULL);
    frame_75417a2cd5ec17786d4e24f43c589f68 = cache_frame_75417a2cd5ec17786d4e24f43c589f68;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_75417a2cd5ec17786d4e24f43c589f68);
    assert(Py_REFCNT(frame_75417a2cd5ec17786d4e24f43c589f68) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooo";
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
        exception_lineno = 110;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_path);
        tmp_expression_value_2 = par_path;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[31]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_75417a2cd5ec17786d4e24f43c589f68->m_frame.f_lineno = 111;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[32]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 111;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[34]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_75417a2cd5ec17786d4e24f43c589f68->m_frame.f_lineno = 112;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts[35], 0), mod_consts[36]);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fp == NULL);
        var_fp = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_fp);
        tmp_called_instance_1 = var_fp;
        frame_75417a2cd5ec17786d4e24f43c589f68->m_frame.f_lineno = 113;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[37]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[11]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[38]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_fp);
        tmp_expression_value_6 = var_fp;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[39]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 114;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_75417a2cd5ec17786d4e24f43c589f68->m_frame.f_lineno = 114;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_retvalue == NULL);
        var_retvalue = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_open_filename_1;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(var_fp);
        tmp_expression_value_7 = var_fp;
        tmp_open_filename_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[39]);
        if (tmp_open_filename_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = BUILTIN_OPEN(tmp_open_filename_1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
        Py_DECREF(tmp_open_filename_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_2__source == NULL);
        tmp_with_2__source = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_with_2__source);
        tmp_expression_value_8 = tmp_with_2__source;
        tmp_called_value_4 = LOOKUP_SPECIAL(tmp_expression_value_8, mod_consts[40]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_75417a2cd5ec17786d4e24f43c589f68->m_frame.f_lineno = 115;
        tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        Py_DECREF(tmp_called_value_4);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_2__enter == NULL);
        tmp_with_2__enter = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_with_2__source);
        tmp_expression_value_9 = tmp_with_2__source;
        tmp_assign_source_5 = LOOKUP_SPECIAL(tmp_expression_value_9, mod_consts[29]);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_2__exit == NULL);
        tmp_with_2__exit = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_assign_source_6;
        tmp_assign_source_6 = NUITKA_BOOL_TRUE;
        tmp_with_2__indicator = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_with_2__enter);
        tmp_assign_source_7 = tmp_with_2__enter;
        assert(var_fin == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_fin = tmp_assign_source_7;
    }
    // Tried code:
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_value_2 = par_path;
        tmp_args_element_value_3 = mod_consts[43];
        frame_75417a2cd5ec17786d4e24f43c589f68->m_frame.f_lineno = 116;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_8 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[42],
                call_args
            );
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_10 = tmp_with_1__source;
        tmp_called_value_5 = LOOKUP_SPECIAL(tmp_expression_value_10, mod_consts[40]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        frame_75417a2cd5ec17786d4e24f43c589f68->m_frame.f_lineno = 116;
        tmp_assign_source_9 = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
        Py_DECREF(tmp_called_value_5);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_11 = tmp_with_1__source;
        tmp_assign_source_10 = LOOKUP_SPECIAL(tmp_expression_value_11, mod_consts[29]);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_10;
    }
    {
        nuitka_bool tmp_assign_source_11;
        tmp_assign_source_11 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_with_1__enter);
        tmp_assign_source_12 = tmp_with_1__enter;
        assert(var_fout == NULL);
        Py_INCREF(tmp_assign_source_12);
        var_fout = tmp_assign_source_12;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_fout);
        tmp_called_instance_3 = var_fout;
        CHECK_OBJECT(var_fin);
        tmp_args_element_value_4 = var_fin;
        frame_75417a2cd5ec17786d4e24f43c589f68->m_frame.f_lineno = 117;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[44], tmp_args_element_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_3);
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_75417a2cd5ec17786d4e24f43c589f68, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_75417a2cd5ec17786d4e24f43c589f68, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
        nuitka_bool tmp_assign_source_13;
        tmp_assign_source_13 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_13;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_6 = tmp_with_1__exit;
        tmp_args_element_value_5 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_6 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_7 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_75417a2cd5ec17786d4e24f43c589f68->m_frame.f_lineno = 117;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_6, call_args);
        }

        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooo";
            goto try_except_handler_8;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooo";
            goto try_except_handler_8;
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
        exception_lineno = 117;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_75417a2cd5ec17786d4e24f43c589f68->m_frame) frame_75417a2cd5ec17786d4e24f43c589f68->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_8;
    branch_no_4:;
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 116;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_75417a2cd5ec17786d4e24f43c589f68->m_frame) frame_75417a2cd5ec17786d4e24f43c589f68->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_8;
    branch_end_3:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_8:;
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

    goto try_except_handler_6;
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
    try_except_handler_6:;
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
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = tmp_with_1__indicator;
        tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_7 = tmp_with_1__exit;
        frame_75417a2cd5ec17786d4e24f43c589f68->m_frame.f_lineno = 117;
        tmp_call_result_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_7, mod_consts[30]);

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);

            exception_lineno = 117;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_5:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_5;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_6;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = tmp_with_1__indicator;
        tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_6 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_8 = tmp_with_1__exit;
        frame_75417a2cd5ec17786d4e24f43c589f68->m_frame.f_lineno = 117;
        tmp_call_result_5 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_8, mod_consts[30]);

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_6:;
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

    goto try_except_handler_4;
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

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_5 == NULL) {
        exception_keeper_tb_5 = MAKE_TRACEBACK(frame_75417a2cd5ec17786d4e24f43c589f68, exception_keeper_lineno_5);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_keeper_tb_5 = ADD_TRACEBACK(exception_keeper_tb_5, frame_75417a2cd5ec17786d4e24f43c589f68, exception_keeper_lineno_5);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5);
    // Tried code:
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_4 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        nuitka_bool tmp_assign_source_14;
        tmp_assign_source_14 = NUITKA_BOOL_FALSE;
        tmp_with_2__indicator = tmp_assign_source_14;
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_value_9 = tmp_with_2__exit;
        tmp_args_element_value_8 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_9 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_10 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_75417a2cd5ec17786d4e24f43c589f68->m_frame.f_lineno = 117;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_operand_value_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_9, call_args);
        }

        if (tmp_operand_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooo";
            goto try_except_handler_9;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooo";
            goto try_except_handler_9;
        }
        tmp_condition_result_8 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 117;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_75417a2cd5ec17786d4e24f43c589f68->m_frame) frame_75417a2cd5ec17786d4e24f43c589f68->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_9;
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 115;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_75417a2cd5ec17786d4e24f43c589f68->m_frame) frame_75417a2cd5ec17786d4e24f43c589f68->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_9;
    branch_end_7:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_3;
    // End of try:
    try_end_6:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    goto try_end_5;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_5:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_9;
        nuitka_bool tmp_cmp_expr_left_5;
        nuitka_bool tmp_cmp_expr_right_5;
        assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_5 = tmp_with_2__indicator;
        tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
        tmp_condition_result_9 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_value_10 = tmp_with_2__exit;
        frame_75417a2cd5ec17786d4e24f43c589f68->m_frame.f_lineno = 117;
        tmp_call_result_6 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_10, mod_consts[30]);

        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_7);
            Py_XDECREF(exception_keeper_value_7);
            Py_XDECREF(exception_keeper_tb_7);

            exception_lineno = 117;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_9:;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_2;
    // End of try:
    try_end_7:;
    {
        bool tmp_condition_result_10;
        nuitka_bool tmp_cmp_expr_left_6;
        nuitka_bool tmp_cmp_expr_right_6;
        assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_6 = tmp_with_2__indicator;
        tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
        tmp_condition_result_10 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_call_result_7;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_value_11 = tmp_with_2__exit;
        frame_75417a2cd5ec17786d4e24f43c589f68->m_frame.f_lineno = 117;
        tmp_call_result_7 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_11, mod_consts[30]);

        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_7);
    }
    branch_no_10:;
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

    Py_XDECREF(tmp_with_2__source);
    tmp_with_2__source = NULL;
    Py_XDECREF(tmp_with_2__enter);
    tmp_with_2__enter = NULL;
    Py_XDECREF(tmp_with_2__exit);
    tmp_with_2__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_with_2__source);
    Py_DECREF(tmp_with_2__source);
    tmp_with_2__source = NULL;
    CHECK_OBJECT(tmp_with_2__enter);
    Py_DECREF(tmp_with_2__enter);
    tmp_with_2__enter = NULL;
    Py_XDECREF(tmp_with_2__exit);
    tmp_with_2__exit = NULL;
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_13;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_expression_value_12 == NULL));
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[46]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_fp);
        tmp_expression_value_13 = var_fp;
        tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[39]);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 118;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_75417a2cd5ec17786d4e24f43c589f68->m_frame.f_lineno = 118;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    CHECK_OBJECT(var_retvalue);
    tmp_return_value = var_retvalue;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_12;
        CHECK_OBJECT(par_self);
        tmp_expression_value_14 = par_self;
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[11]);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_value_12 = par_path;
        frame_75417a2cd5ec17786d4e24f43c589f68->m_frame.f_lineno = 121;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[38], tmp_args_element_value_12);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
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
        exception_tb = MAKE_TRACEBACK(frame_75417a2cd5ec17786d4e24f43c589f68, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_75417a2cd5ec17786d4e24f43c589f68->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_75417a2cd5ec17786d4e24f43c589f68, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_75417a2cd5ec17786d4e24f43c589f68,
        type_description_1,
        par_self,
        par_path,
        var_fp,
        var_retvalue,
        var_fin,
        var_fout
    );


    // Release cached frame if used for exception.
    if (frame_75417a2cd5ec17786d4e24f43c589f68 == cache_frame_75417a2cd5ec17786d4e24f43c589f68) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_75417a2cd5ec17786d4e24f43c589f68);
        cache_frame_75417a2cd5ec17786d4e24f43c589f68 = NULL;
    }

    assertFrameObject(frame_75417a2cd5ec17786d4e24f43c589f68);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_fp);
    var_fp = NULL;
    Py_XDECREF(var_retvalue);
    var_retvalue = NULL;
    Py_XDECREF(var_fin);
    var_fin = NULL;
    Py_XDECREF(var_fout);
    var_fout = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_fp);
    var_fp = NULL;
    Py_XDECREF(var_retvalue);
    var_retvalue = NULL;
    Py_XDECREF(var_fin);
    var_fin = NULL;
    Py_XDECREF(var_fout);
    var_fout = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$profiler$profiler$$$function__9_export_stacks(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *par_metric = python_pars[2];
    struct Nuitka_FrameObject *frame_de4a8d1b3f8ef1262ba386f22238a8b6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_de4a8d1b3f8ef1262ba386f22238a8b6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_de4a8d1b3f8ef1262ba386f22238a8b6)) {
        Py_XDECREF(cache_frame_de4a8d1b3f8ef1262ba386f22238a8b6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_de4a8d1b3f8ef1262ba386f22238a8b6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_de4a8d1b3f8ef1262ba386f22238a8b6 = MAKE_FUNCTION_FRAME(codeobj_de4a8d1b3f8ef1262ba386f22238a8b6, module_torch$profiler$profiler, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_de4a8d1b3f8ef1262ba386f22238a8b6->m_type_description == NULL);
    frame_de4a8d1b3f8ef1262ba386f22238a8b6 = cache_frame_de4a8d1b3f8ef1262ba386f22238a8b6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_de4a8d1b3f8ef1262ba386f22238a8b6);
    assert(Py_REFCNT(frame_de4a8d1b3f8ef1262ba386f22238a8b6) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooo";
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
        exception_lineno = 137;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[11]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_value_1 = par_path;
        CHECK_OBJECT(par_metric);
        tmp_args_element_value_2 = par_metric;
        frame_de4a8d1b3f8ef1262ba386f22238a8b6->m_frame.f_lineno = 138;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[48],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
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
        exception_tb = MAKE_TRACEBACK(frame_de4a8d1b3f8ef1262ba386f22238a8b6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_de4a8d1b3f8ef1262ba386f22238a8b6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_de4a8d1b3f8ef1262ba386f22238a8b6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_de4a8d1b3f8ef1262ba386f22238a8b6,
        type_description_1,
        par_self,
        par_path,
        par_metric
    );


    // Release cached frame if used for exception.
    if (frame_de4a8d1b3f8ef1262ba386f22238a8b6 == cache_frame_de4a8d1b3f8ef1262ba386f22238a8b6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_de4a8d1b3f8ef1262ba386f22238a8b6);
        cache_frame_de4a8d1b3f8ef1262ba386f22238a8b6 = NULL;
    }

    assertFrameObject(frame_de4a8d1b3f8ef1262ba386f22238a8b6);

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
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_metric);
    Py_DECREF(par_metric);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_metric);
    Py_DECREF(par_metric);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$profiler$profiler$$$function__10_key_averages(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_group_by_input_shape = python_pars[1];
    PyObject *par_group_by_stack_n = python_pars[2];
    struct Nuitka_FrameObject *frame_71934814f164c23d53114bb516bdd497;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_71934814f164c23d53114bb516bdd497 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_71934814f164c23d53114bb516bdd497)) {
        Py_XDECREF(cache_frame_71934814f164c23d53114bb516bdd497);

#if _DEBUG_REFCOUNTS
        if (cache_frame_71934814f164c23d53114bb516bdd497 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_71934814f164c23d53114bb516bdd497 = MAKE_FUNCTION_FRAME(codeobj_71934814f164c23d53114bb516bdd497, module_torch$profiler$profiler, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_71934814f164c23d53114bb516bdd497->m_type_description == NULL);
    frame_71934814f164c23d53114bb516bdd497 = cache_frame_71934814f164c23d53114bb516bdd497;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_71934814f164c23d53114bb516bdd497);
    assert(Py_REFCNT(frame_71934814f164c23d53114bb516bdd497) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooo";
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
        exception_lineno = 148;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[11]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_group_by_input_shape);
        tmp_args_element_value_1 = par_group_by_input_shape;
        CHECK_OBJECT(par_group_by_stack_n);
        tmp_args_element_value_2 = par_group_by_stack_n;
        frame_71934814f164c23d53114bb516bdd497->m_frame.f_lineno = 149;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[50],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
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
        exception_tb = MAKE_TRACEBACK(frame_71934814f164c23d53114bb516bdd497, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_71934814f164c23d53114bb516bdd497->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_71934814f164c23d53114bb516bdd497, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_71934814f164c23d53114bb516bdd497,
        type_description_1,
        par_self,
        par_group_by_input_shape,
        par_group_by_stack_n
    );


    // Release cached frame if used for exception.
    if (frame_71934814f164c23d53114bb516bdd497 == cache_frame_71934814f164c23d53114bb516bdd497) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_71934814f164c23d53114bb516bdd497);
        cache_frame_71934814f164c23d53114bb516bdd497 = NULL;
    }

    assertFrameObject(frame_71934814f164c23d53114bb516bdd497);

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
    CHECK_OBJECT(par_group_by_input_shape);
    Py_DECREF(par_group_by_input_shape);
    CHECK_OBJECT(par_group_by_stack_n);
    Py_DECREF(par_group_by_stack_n);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_group_by_input_shape);
    Py_DECREF(par_group_by_input_shape);
    CHECK_OBJECT(par_group_by_stack_n);
    Py_DECREF(par_group_by_stack_n);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$profiler$profiler$$$function__11_events(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_497bae2580f6d6cd7adbed681c6c8bfc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_497bae2580f6d6cd7adbed681c6c8bfc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_497bae2580f6d6cd7adbed681c6c8bfc)) {
        Py_XDECREF(cache_frame_497bae2580f6d6cd7adbed681c6c8bfc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_497bae2580f6d6cd7adbed681c6c8bfc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_497bae2580f6d6cd7adbed681c6c8bfc = MAKE_FUNCTION_FRAME(codeobj_497bae2580f6d6cd7adbed681c6c8bfc, module_torch$profiler$profiler, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_497bae2580f6d6cd7adbed681c6c8bfc->m_type_description == NULL);
    frame_497bae2580f6d6cd7adbed681c6c8bfc = cache_frame_497bae2580f6d6cd7adbed681c6c8bfc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_497bae2580f6d6cd7adbed681c6c8bfc);
    assert(Py_REFCNT(frame_497bae2580f6d6cd7adbed681c6c8bfc) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
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
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 156;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[11]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[52]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
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
        exception_tb = MAKE_TRACEBACK(frame_497bae2580f6d6cd7adbed681c6c8bfc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_497bae2580f6d6cd7adbed681c6c8bfc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_497bae2580f6d6cd7adbed681c6c8bfc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_497bae2580f6d6cd7adbed681c6c8bfc,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_497bae2580f6d6cd7adbed681c6c8bfc == cache_frame_497bae2580f6d6cd7adbed681c6c8bfc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_497bae2580f6d6cd7adbed681c6c8bfc);
        cache_frame_497bae2580f6d6cd7adbed681c6c8bfc = NULL;
    }

    assertFrameObject(frame_497bae2580f6d6cd7adbed681c6c8bfc);

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


static PyObject *impl_torch$profiler$profiler$$$function__12_add_metadata(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_key = python_pars[1];
    PyObject *par_value = python_pars[2];
    PyObject *var_wrapped_value = NULL;
    struct Nuitka_FrameObject *frame_1060075374aefe82c28f028da1c5461f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_1060075374aefe82c28f028da1c5461f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1060075374aefe82c28f028da1c5461f)) {
        Py_XDECREF(cache_frame_1060075374aefe82c28f028da1c5461f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1060075374aefe82c28f028da1c5461f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1060075374aefe82c28f028da1c5461f = MAKE_FUNCTION_FRAME(codeobj_1060075374aefe82c28f028da1c5461f, module_torch$profiler$profiler, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1060075374aefe82c28f028da1c5461f->m_type_description == NULL);
    frame_1060075374aefe82c28f028da1c5461f = cache_frame_1060075374aefe82c28f028da1c5461f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1060075374aefe82c28f028da1c5461f);
    assert(Py_REFCNT(frame_1060075374aefe82c28f028da1c5461f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        tmp_add_expr_left_2 = mod_consts[54];
        CHECK_OBJECT(par_value);
        tmp_expression_value_1 = par_value;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[55]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_1060075374aefe82c28f028da1c5461f->m_frame.f_lineno = 164;
        tmp_add_expr_right_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[56]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_add_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[54];
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_wrapped_value == NULL);
        var_wrapped_value = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_value_1 = par_key;
        CHECK_OBJECT(var_wrapped_value);
        tmp_args_element_value_2 = var_wrapped_value;
        frame_1060075374aefe82c28f028da1c5461f->m_frame.f_lineno = 165;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[57],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1060075374aefe82c28f028da1c5461f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1060075374aefe82c28f028da1c5461f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1060075374aefe82c28f028da1c5461f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1060075374aefe82c28f028da1c5461f,
        type_description_1,
        par_self,
        par_key,
        par_value,
        var_wrapped_value
    );


    // Release cached frame if used for exception.
    if (frame_1060075374aefe82c28f028da1c5461f == cache_frame_1060075374aefe82c28f028da1c5461f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1060075374aefe82c28f028da1c5461f);
        cache_frame_1060075374aefe82c28f028da1c5461f = NULL;
    }

    assertFrameObject(frame_1060075374aefe82c28f028da1c5461f);

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
    CHECK_OBJECT(var_wrapped_value);
    Py_DECREF(var_wrapped_value);
    var_wrapped_value = NULL;
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

    Py_XDECREF(var_wrapped_value);
    var_wrapped_value = NULL;
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
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$profiler$profiler$$$function__13_add_metadata_json(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_key = python_pars[1];
    PyObject *par_value = python_pars[2];
    struct Nuitka_FrameObject *frame_bdf360d1d234aceb4c470408493edece;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bdf360d1d234aceb4c470408493edece = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bdf360d1d234aceb4c470408493edece)) {
        Py_XDECREF(cache_frame_bdf360d1d234aceb4c470408493edece);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bdf360d1d234aceb4c470408493edece == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bdf360d1d234aceb4c470408493edece = MAKE_FUNCTION_FRAME(codeobj_bdf360d1d234aceb4c470408493edece, module_torch$profiler$profiler, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bdf360d1d234aceb4c470408493edece->m_type_description == NULL);
    frame_bdf360d1d234aceb4c470408493edece = cache_frame_bdf360d1d234aceb4c470408493edece;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bdf360d1d234aceb4c470408493edece);
    assert(Py_REFCNT(frame_bdf360d1d234aceb4c470408493edece) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_value_1 = par_key;
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_bdf360d1d234aceb4c470408493edece->m_frame.f_lineno = 172;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[57],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bdf360d1d234aceb4c470408493edece, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bdf360d1d234aceb4c470408493edece->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bdf360d1d234aceb4c470408493edece, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bdf360d1d234aceb4c470408493edece,
        type_description_1,
        par_self,
        par_key,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_bdf360d1d234aceb4c470408493edece == cache_frame_bdf360d1d234aceb4c470408493edece) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bdf360d1d234aceb4c470408493edece);
        cache_frame_bdf360d1d234aceb4c470408493edece = NULL;
    }

    assertFrameObject(frame_bdf360d1d234aceb4c470408493edece);

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
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$profiler$profiler$$$function__14__get_distributed_info(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_dist = NULL;
    struct Nuitka_FrameObject *frame_72901a3466c65c15493ac12ee0a1c49c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_72901a3466c65c15493ac12ee0a1c49c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_72901a3466c65c15493ac12ee0a1c49c)) {
        Py_XDECREF(cache_frame_72901a3466c65c15493ac12ee0a1c49c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_72901a3466c65c15493ac12ee0a1c49c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_72901a3466c65c15493ac12ee0a1c49c = MAKE_FUNCTION_FRAME(codeobj_72901a3466c65c15493ac12ee0a1c49c, module_torch$profiler$profiler, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_72901a3466c65c15493ac12ee0a1c49c->m_type_description == NULL);
    frame_72901a3466c65c15493ac12ee0a1c49c = cache_frame_72901a3466c65c15493ac12ee0a1c49c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_72901a3466c65c15493ac12ee0a1c49c);
    assert(Py_REFCNT(frame_72901a3466c65c15493ac12ee0a1c49c) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[60];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$profiler$profiler;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[61];
        frame_72901a3466c65c15493ac12ee0a1c49c->m_frame.f_lineno = 175;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$profiler$profiler,
                mod_consts[62],
                mod_consts[61]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[62]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_dist == NULL);
        var_dist = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        bool tmp_or_left_value_1;
        bool tmp_or_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_dist);
        tmp_called_instance_1 = var_dist;
        frame_72901a3466c65c15493ac12ee0a1c49c->m_frame.f_lineno = 176;
        tmp_operand_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[63]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res == 0) ? true : false;
        tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_dist);
        tmp_called_instance_2 = var_dist;
        frame_72901a3466c65c15493ac12ee0a1c49c->m_frame.f_lineno = 176;
        tmp_operand_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[64]);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = (tmp_res == 0) ? true : false;
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
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_instance_3;
        tmp_dict_key_1 = mod_consts[65];
        CHECK_OBJECT(var_dist);
        tmp_called_instance_3 = var_dist;
        frame_72901a3466c65c15493ac12ee0a1c49c->m_frame.f_lineno = 180;
        tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[66]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_called_instance_5;
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[67];
            CHECK_OBJECT(var_dist);
            tmp_called_instance_4 = var_dist;
            frame_72901a3466c65c15493ac12ee0a1c49c->m_frame.f_lineno = 181;
            tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[68]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[69];
            CHECK_OBJECT(var_dist);
            tmp_called_instance_5 = var_dist;
            frame_72901a3466c65c15493ac12ee0a1c49c->m_frame.f_lineno = 182;
            tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[70]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
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
        exception_tb = MAKE_TRACEBACK(frame_72901a3466c65c15493ac12ee0a1c49c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_72901a3466c65c15493ac12ee0a1c49c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_72901a3466c65c15493ac12ee0a1c49c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_72901a3466c65c15493ac12ee0a1c49c,
        type_description_1,
        par_self,
        var_dist
    );


    // Release cached frame if used for exception.
    if (frame_72901a3466c65c15493ac12ee0a1c49c == cache_frame_72901a3466c65c15493ac12ee0a1c49c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_72901a3466c65c15493ac12ee0a1c49c);
        cache_frame_72901a3466c65c15493ac12ee0a1c49c = NULL;
    }

    assertFrameObject(frame_72901a3466c65c15493ac12ee0a1c49c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_dist);
    Py_DECREF(var_dist);
    var_dist = NULL;
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

    Py_XDECREF(var_dist);
    var_dist = NULL;
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


static PyObject *impl_torch$profiler$profiler$$$function__15_schedule(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_wait = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_warmup = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_active = Nuitka_Cell_New1(python_pars[2]);
    struct Nuitka_CellObject *par_repeat = Nuitka_Cell_New1(python_pars[3]);
    struct Nuitka_CellObject *par_skip_first = Nuitka_Cell_New1(python_pars[4]);
    PyObject *var_schedule_fn = NULL;
    struct Nuitka_FrameObject *frame_88b6bc77f38c9cf324204aa1a0f02008;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_88b6bc77f38c9cf324204aa1a0f02008 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_88b6bc77f38c9cf324204aa1a0f02008)) {
        Py_XDECREF(cache_frame_88b6bc77f38c9cf324204aa1a0f02008);

#if _DEBUG_REFCOUNTS
        if (cache_frame_88b6bc77f38c9cf324204aa1a0f02008 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_88b6bc77f38c9cf324204aa1a0f02008 = MAKE_FUNCTION_FRAME(codeobj_88b6bc77f38c9cf324204aa1a0f02008, module_torch$profiler$profiler, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_88b6bc77f38c9cf324204aa1a0f02008->m_type_description == NULL);
    frame_88b6bc77f38c9cf324204aa1a0f02008 = cache_frame_88b6bc77f38c9cf324204aa1a0f02008;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_88b6bc77f38c9cf324204aa1a0f02008);
    assert(Py_REFCNT(frame_88b6bc77f38c9cf324204aa1a0f02008) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        struct Nuitka_CellObject *tmp_closure_1[5];
        tmp_dict_key_1 = mod_consts[71];
        tmp_dict_value_1 = (PyObject *)&PyLong_Type;
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[72];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ccccco";
            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;

        tmp_closure_1[0] = par_active;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_repeat;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_skip_first;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = par_wait;
        Py_INCREF(tmp_closure_1[3]);
        tmp_closure_1[4] = par_warmup;
        Py_INCREF(tmp_closure_1[4]);

        tmp_assign_source_1 = MAKE_FUNCTION_torch$profiler$profiler$$$function__15_schedule$$$function__1_schedule_fn(tmp_annotations_1, tmp_closure_1);

        assert(var_schedule_fn == NULL);
        var_schedule_fn = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        int tmp_and_left_truth_3;
        PyObject *tmp_and_left_value_3;
        PyObject *tmp_and_right_value_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        int tmp_and_left_truth_4;
        PyObject *tmp_and_left_value_4;
        PyObject *tmp_and_right_value_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(Nuitka_Cell_GET(par_wait));
        tmp_cmp_expr_left_1 = Nuitka_Cell_GET(par_wait);
        tmp_cmp_expr_right_1 = mod_consts[61];
        tmp_and_left_value_1 = RICH_COMPARE_GE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_and_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ccccco";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_1);

            exception_lineno = 221;
            type_description_1 = "ccccco";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        Py_DECREF(tmp_and_left_value_1);
        CHECK_OBJECT(Nuitka_Cell_GET(par_warmup));
        tmp_cmp_expr_left_2 = Nuitka_Cell_GET(par_warmup);
        tmp_cmp_expr_right_2 = mod_consts[61];
        tmp_and_left_value_2 = RICH_COMPARE_GE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_and_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ccccco";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_2);

            exception_lineno = 221;
            type_description_1 = "ccccco";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        Py_DECREF(tmp_and_left_value_2);
        CHECK_OBJECT(Nuitka_Cell_GET(par_active));
        tmp_cmp_expr_left_3 = Nuitka_Cell_GET(par_active);
        tmp_cmp_expr_right_3 = mod_consts[61];
        tmp_and_left_value_3 = RICH_COMPARE_GT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_and_left_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ccccco";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_3 = CHECK_IF_TRUE(tmp_and_left_value_3);
        if (tmp_and_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_3);

            exception_lineno = 221;
            type_description_1 = "ccccco";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        Py_DECREF(tmp_and_left_value_3);
        CHECK_OBJECT(Nuitka_Cell_GET(par_repeat));
        tmp_cmp_expr_left_4 = Nuitka_Cell_GET(par_repeat);
        tmp_cmp_expr_right_4 = mod_consts[61];
        tmp_and_left_value_4 = RICH_COMPARE_GE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_and_left_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ccccco";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_4 = CHECK_IF_TRUE(tmp_and_left_value_4);
        if (tmp_and_left_truth_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_4);

            exception_lineno = 222;
            type_description_1 = "ccccco";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_4 == 1) {
            goto and_right_4;
        } else {
            goto and_left_4;
        }
        and_right_4:;
        Py_DECREF(tmp_and_left_value_4);
        CHECK_OBJECT(Nuitka_Cell_GET(par_skip_first));
        tmp_cmp_expr_left_5 = Nuitka_Cell_GET(par_skip_first);
        tmp_cmp_expr_right_5 = mod_consts[61];
        tmp_and_right_value_4 = RICH_COMPARE_GE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_and_right_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ccccco";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_3 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_and_right_value_3 = tmp_and_left_value_4;
        and_end_4:;
        tmp_and_right_value_2 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_and_right_value_2 = tmp_and_left_value_3;
        and_end_3:;
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_operand_value_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_operand_value_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ccccco";
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
        PyObject *tmp_raise_value_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        tmp_raise_value_1 = mod_consts[76];
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        Py_INCREF(tmp_raise_value_1);
        exception_lineno = 221;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ccccco";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(Nuitka_Cell_GET(par_warmup));
        tmp_cmp_expr_left_6 = Nuitka_Cell_GET(par_warmup);
        tmp_cmp_expr_right_6 = mod_consts[61];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ccccco";
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ccccco";
            goto frame_exception_exit_1;
        }
        frame_88b6bc77f38c9cf324204aa1a0f02008->m_frame.f_lineno = 224;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[78]);

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ccccco";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_88b6bc77f38c9cf324204aa1a0f02008, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_88b6bc77f38c9cf324204aa1a0f02008->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_88b6bc77f38c9cf324204aa1a0f02008, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_88b6bc77f38c9cf324204aa1a0f02008,
        type_description_1,
        par_wait,
        par_warmup,
        par_active,
        par_repeat,
        par_skip_first,
        var_schedule_fn
    );


    // Release cached frame if used for exception.
    if (frame_88b6bc77f38c9cf324204aa1a0f02008 == cache_frame_88b6bc77f38c9cf324204aa1a0f02008) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_88b6bc77f38c9cf324204aa1a0f02008);
        cache_frame_88b6bc77f38c9cf324204aa1a0f02008 = NULL;
    }

    assertFrameObject(frame_88b6bc77f38c9cf324204aa1a0f02008);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_schedule_fn);
    tmp_return_value = var_schedule_fn;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_schedule_fn);
    Py_DECREF(var_schedule_fn);
    var_schedule_fn = NULL;
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

    Py_XDECREF(var_schedule_fn);
    var_schedule_fn = NULL;
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
    CHECK_OBJECT(par_wait);
    Py_DECREF(par_wait);
    CHECK_OBJECT(par_warmup);
    Py_DECREF(par_warmup);
    CHECK_OBJECT(par_active);
    Py_DECREF(par_active);
    CHECK_OBJECT(par_repeat);
    Py_DECREF(par_repeat);
    CHECK_OBJECT(par_skip_first);
    Py_DECREF(par_skip_first);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_wait);
    Py_DECREF(par_wait);
    CHECK_OBJECT(par_warmup);
    Py_DECREF(par_warmup);
    CHECK_OBJECT(par_active);
    Py_DECREF(par_active);
    CHECK_OBJECT(par_repeat);
    Py_DECREF(par_repeat);
    CHECK_OBJECT(par_skip_first);
    Py_DECREF(par_skip_first);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$profiler$profiler$$$function__15_schedule$$$function__1_schedule_fn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_step = python_pars[0];
    PyObject *var_num_steps = NULL;
    PyObject *var_mod_step = NULL;
    struct Nuitka_FrameObject *frame_0db3b8ef86e53a16cffb518dc5527805;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_0db3b8ef86e53a16cffb518dc5527805 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0db3b8ef86e53a16cffb518dc5527805)) {
        Py_XDECREF(cache_frame_0db3b8ef86e53a16cffb518dc5527805);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0db3b8ef86e53a16cffb518dc5527805 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0db3b8ef86e53a16cffb518dc5527805 = MAKE_FUNCTION_FRAME(codeobj_0db3b8ef86e53a16cffb518dc5527805, module_torch$profiler$profiler, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0db3b8ef86e53a16cffb518dc5527805->m_type_description == NULL);
    frame_0db3b8ef86e53a16cffb518dc5527805 = cache_frame_0db3b8ef86e53a16cffb518dc5527805;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0db3b8ef86e53a16cffb518dc5527805);
    assert(Py_REFCNT(frame_0db3b8ef86e53a16cffb518dc5527805) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_step);
        tmp_cmp_expr_left_1 = par_step;
        tmp_cmp_expr_right_1 = mod_consts[61];
        tmp_operand_value_1 = RICH_COMPARE_GE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooccccc";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooccccc";
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
        exception_lineno = 205;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooccccc";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_step);
        tmp_cmp_expr_left_2 = par_step;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 206;
            type_description_1 = "oooccccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_2 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_condition_result_2 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooccccc";
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
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooccccc";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[81]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooccccc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_isub_expr_left_1;
        PyObject *tmp_isub_expr_right_1;
        CHECK_OBJECT(par_step);
        tmp_isub_expr_left_1 = par_step;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 209;
            type_description_1 = "oooccccc";
            goto frame_exception_exit_1;
        }

        tmp_isub_expr_right_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooccccc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = tmp_isub_expr_left_1;
        par_step = tmp_assign_source_1;

    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[82]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 210;
            type_description_1 = "oooccccc";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_left_2 = Nuitka_Cell_GET(self->m_closure[3]);
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[83]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 210;
            type_description_1 = "oooccccc";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_right_2 = Nuitka_Cell_GET(self->m_closure[4]);
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_add_expr_left_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[84]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 210;
            type_description_1 = "oooccccc";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_right_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooccccc";
            goto frame_exception_exit_1;
        }
        assert(var_num_steps == NULL);
        var_num_steps = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[85]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 211;
            type_description_1 = "oooccccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_3 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_cmp_expr_right_3 = mod_consts[61];
        tmp_and_left_value_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooccccc";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooccccc";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_step);
        tmp_truediv_expr_left_1 = par_step;
        CHECK_OBJECT(var_num_steps);
        tmp_truediv_expr_right_1 = var_num_steps;
        tmp_cmp_expr_left_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_cmp_expr_left_4);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[85]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 211;
            type_description_1 = "oooccccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_4 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_and_right_value_1 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooccccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooccccc";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[81]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooccccc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        if (par_step == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 213;
            type_description_1 = "oooccccc";
            goto frame_exception_exit_1;
        }

        tmp_mod_expr_left_1 = par_step;
        if (var_num_steps == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 213;
            type_description_1 = "oooccccc";
            goto frame_exception_exit_1;
        }

        tmp_mod_expr_right_1 = var_num_steps;
        tmp_assign_source_3 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooccccc";
            goto frame_exception_exit_1;
        }
        assert(var_mod_step == NULL);
        var_mod_step = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_mod_step);
        tmp_cmp_expr_left_5 = var_mod_step;
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[82]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 214;
            type_description_1 = "oooccccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_5 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_condition_result_4 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooccccc";
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
        PyObject *tmp_expression_value_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooccccc";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[81]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooccccc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        CHECK_OBJECT(var_mod_step);
        tmp_cmp_expr_left_6 = var_mod_step;
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[82]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 216;
            type_description_1 = "oooccccc";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_left_3 = Nuitka_Cell_GET(self->m_closure[3]);
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[83]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 216;
            type_description_1 = "oooccccc";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_right_3 = Nuitka_Cell_GET(self->m_closure[4]);
        tmp_cmp_expr_right_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        if (tmp_cmp_expr_right_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooccccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_right_6);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooccccc";
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
        PyObject *tmp_expression_value_4;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooccccc";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[87]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooccccc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_5;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_mod_step);
        tmp_cmp_expr_left_7 = var_mod_step;
        if (var_num_steps == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 219;
            type_description_1 = "oooccccc";
            goto frame_exception_exit_1;
        }

        tmp_sub_expr_left_1 = var_num_steps;
        tmp_sub_expr_right_1 = mod_consts[88];
        tmp_cmp_expr_right_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_cmp_expr_right_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooccccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        Py_DECREF(tmp_cmp_expr_right_7);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooccccc";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooccccc";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[89]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooccccc";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooccccc";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[90]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooccccc";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        goto frame_return_exit_1;
    }
    branch_end_5:;
    branch_end_4:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0db3b8ef86e53a16cffb518dc5527805, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0db3b8ef86e53a16cffb518dc5527805->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0db3b8ef86e53a16cffb518dc5527805, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0db3b8ef86e53a16cffb518dc5527805,
        type_description_1,
        par_step,
        var_num_steps,
        var_mod_step,
        self->m_closure[2],
        self->m_closure[3],
        self->m_closure[4],
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_0db3b8ef86e53a16cffb518dc5527805 == cache_frame_0db3b8ef86e53a16cffb518dc5527805) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0db3b8ef86e53a16cffb518dc5527805);
        cache_frame_0db3b8ef86e53a16cffb518dc5527805 = NULL;
    }

    assertFrameObject(frame_0db3b8ef86e53a16cffb518dc5527805);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_step);
    par_step = NULL;
    Py_XDECREF(var_num_steps);
    var_num_steps = NULL;
    Py_XDECREF(var_mod_step);
    var_mod_step = NULL;
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

    Py_XDECREF(par_step);
    par_step = NULL;
    Py_XDECREF(var_num_steps);
    var_num_steps = NULL;
    Py_XDECREF(var_mod_step);
    var_mod_step = NULL;
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


static PyObject *impl_torch$profiler$profiler$$$function__16__default_schedule_fn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par__ = python_pars[0];
    struct Nuitka_FrameObject *frame_1db034ba6be62c2857197ca50d8a6b5f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1db034ba6be62c2857197ca50d8a6b5f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1db034ba6be62c2857197ca50d8a6b5f)) {
        Py_XDECREF(cache_frame_1db034ba6be62c2857197ca50d8a6b5f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1db034ba6be62c2857197ca50d8a6b5f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1db034ba6be62c2857197ca50d8a6b5f = MAKE_FUNCTION_FRAME(codeobj_1db034ba6be62c2857197ca50d8a6b5f, module_torch$profiler$profiler, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1db034ba6be62c2857197ca50d8a6b5f->m_type_description == NULL);
    frame_1db034ba6be62c2857197ca50d8a6b5f = cache_frame_1db034ba6be62c2857197ca50d8a6b5f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1db034ba6be62c2857197ca50d8a6b5f);
    assert(Py_REFCNT(frame_1db034ba6be62c2857197ca50d8a6b5f) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[89]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
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
        exception_tb = MAKE_TRACEBACK(frame_1db034ba6be62c2857197ca50d8a6b5f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1db034ba6be62c2857197ca50d8a6b5f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1db034ba6be62c2857197ca50d8a6b5f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1db034ba6be62c2857197ca50d8a6b5f,
        type_description_1,
        par__
    );


    // Release cached frame if used for exception.
    if (frame_1db034ba6be62c2857197ca50d8a6b5f == cache_frame_1db034ba6be62c2857197ca50d8a6b5f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1db034ba6be62c2857197ca50d8a6b5f);
        cache_frame_1db034ba6be62c2857197ca50d8a6b5f = NULL;
    }

    assertFrameObject(frame_1db034ba6be62c2857197ca50d8a6b5f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par__);
    Py_DECREF(par__);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par__);
    Py_DECREF(par__);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$profiler$profiler$$$function__17_tensorboard_trace_handler(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_dir_name = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_worker_name = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_use_gzip = Nuitka_Cell_New1(python_pars[2]);
    struct Nuitka_CellObject *var_os = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_socket = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_time = Nuitka_Cell_Empty();
    PyObject *var_handler_fn = NULL;
    struct Nuitka_FrameObject *frame_96ac7b3c356e342160ec0337ccb3e2ff;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_96ac7b3c356e342160ec0337ccb3e2ff = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_1 == NULL));
        assert(Nuitka_Cell_GET(var_os) == NULL);
        Py_INCREF(tmp_assign_source_1);
        PyCell_SET(var_os, tmp_assign_source_1);

    }
    // Tried code:
    if (isFrameUnusable(cache_frame_96ac7b3c356e342160ec0337ccb3e2ff)) {
        Py_XDECREF(cache_frame_96ac7b3c356e342160ec0337ccb3e2ff);

#if _DEBUG_REFCOUNTS
        if (cache_frame_96ac7b3c356e342160ec0337ccb3e2ff == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_96ac7b3c356e342160ec0337ccb3e2ff = MAKE_FUNCTION_FRAME(codeobj_96ac7b3c356e342160ec0337ccb3e2ff, module_torch$profiler$profiler, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_96ac7b3c356e342160ec0337ccb3e2ff->m_type_description == NULL);
    frame_96ac7b3c356e342160ec0337ccb3e2ff = cache_frame_96ac7b3c356e342160ec0337ccb3e2ff;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_96ac7b3c356e342160ec0337ccb3e2ff);
    assert(Py_REFCNT(frame_96ac7b3c356e342160ec0337ccb3e2ff) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[92];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$profiler$profiler;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[61];
        frame_96ac7b3c356e342160ec0337ccb3e2ff->m_frame.f_lineno = 243;
        tmp_assign_source_2 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "cccccco";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_socket) == NULL);
        PyCell_SET(var_socket, tmp_assign_source_2);

    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_96ac7b3c356e342160ec0337ccb3e2ff, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_96ac7b3c356e342160ec0337ccb3e2ff->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_96ac7b3c356e342160ec0337ccb3e2ff, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_96ac7b3c356e342160ec0337ccb3e2ff,
        type_description_1,
        par_dir_name,
        par_worker_name,
        par_use_gzip,
        var_os,
        var_socket,
        var_time,
        var_handler_fn
    );


    // Release cached frame if used for exception.
    if (frame_96ac7b3c356e342160ec0337ccb3e2ff == cache_frame_96ac7b3c356e342160ec0337ccb3e2ff) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_96ac7b3c356e342160ec0337ccb3e2ff);
        cache_frame_96ac7b3c356e342160ec0337ccb3e2ff = NULL;
    }

    assertFrameObject(frame_96ac7b3c356e342160ec0337ccb3e2ff);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[93];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torch$profiler$profiler;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[61];
        tmp_assign_source_3 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        assert(!(tmp_assign_source_3 == NULL));
        assert(Nuitka_Cell_GET(var_time) == NULL);
        PyCell_SET(var_time, tmp_assign_source_3);

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_annotations_1;
        struct Nuitka_CellObject *tmp_closure_1[6];
        tmp_annotations_1 = DICT_COPY(mod_consts[94]);

        tmp_closure_1[0] = par_dir_name;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = var_os;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = var_socket;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = var_time;
        Py_INCREF(tmp_closure_1[3]);
        tmp_closure_1[4] = par_use_gzip;
        Py_INCREF(tmp_closure_1[4]);
        tmp_closure_1[5] = par_worker_name;
        Py_INCREF(tmp_closure_1[5]);

        tmp_assign_source_4 = MAKE_FUNCTION_torch$profiler$profiler$$$function__17_tensorboard_trace_handler$$$function__1_handler_fn(tmp_annotations_1, tmp_closure_1);

        assert(var_handler_fn == NULL);
        var_handler_fn = tmp_assign_source_4;
    }
    CHECK_OBJECT(var_handler_fn);
    tmp_return_value = var_handler_fn;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_worker_name);
    Py_DECREF(par_worker_name);
    par_worker_name = NULL;
    CHECK_OBJECT(var_os);
    Py_DECREF(var_os);
    var_os = NULL;
    CHECK_OBJECT(var_socket);
    Py_DECREF(var_socket);
    var_socket = NULL;
    CHECK_OBJECT(var_time);
    Py_DECREF(var_time);
    var_time = NULL;
    CHECK_OBJECT(var_handler_fn);
    Py_DECREF(var_handler_fn);
    var_handler_fn = NULL;
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

    CHECK_OBJECT(par_worker_name);
    Py_DECREF(par_worker_name);
    par_worker_name = NULL;
    CHECK_OBJECT(var_os);
    Py_DECREF(var_os);
    var_os = NULL;
    CHECK_OBJECT(var_socket);
    Py_DECREF(var_socket);
    var_socket = NULL;
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
    CHECK_OBJECT(par_dir_name);
    Py_DECREF(par_dir_name);
    CHECK_OBJECT(par_use_gzip);
    Py_DECREF(par_use_gzip);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_dir_name);
    Py_DECREF(par_dir_name);
    CHECK_OBJECT(par_use_gzip);
    Py_DECREF(par_use_gzip);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$profiler$profiler$$$function__17_tensorboard_trace_handler$$$function__1_handler_fn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_prof = python_pars[0];
    PyObject *var_file_name = NULL;
    struct Nuitka_FrameObject *frame_3014036b23fd38eb5677f8cf59f6708e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    static struct Nuitka_FrameObject *cache_frame_3014036b23fd38eb5677f8cf59f6708e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3014036b23fd38eb5677f8cf59f6708e)) {
        Py_XDECREF(cache_frame_3014036b23fd38eb5677f8cf59f6708e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3014036b23fd38eb5677f8cf59f6708e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3014036b23fd38eb5677f8cf59f6708e = MAKE_FUNCTION_FRAME(codeobj_3014036b23fd38eb5677f8cf59f6708e, module_torch$profiler$profiler, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3014036b23fd38eb5677f8cf59f6708e->m_type_description == NULL);
    frame_3014036b23fd38eb5677f8cf59f6708e = cache_frame_3014036b23fd38eb5677f8cf59f6708e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3014036b23fd38eb5677f8cf59f6708e);
    assert(Py_REFCNT(frame_3014036b23fd38eb5677f8cf59f6708e) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 248;
            type_description_1 = "ococcccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[98]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ococcccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[99]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ococcccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[100]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 248;
            type_description_1 = "ococcccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_3014036b23fd38eb5677f8cf59f6708e->m_frame.f_lineno = 248;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ococcccc";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ococcccc";
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
    // Tried code:
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 250;
            type_description_1 = "ococcccc";
            goto try_except_handler_2;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[101]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ococcccc";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[100]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 250;
            type_description_1 = "ococcccc";
            goto try_except_handler_2;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[102]);
        frame_3014036b23fd38eb5677f8cf59f6708e->m_frame.f_lineno = 250;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ococcccc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_3014036b23fd38eb5677f8cf59f6708e, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_3014036b23fd38eb5677f8cf59f6708e, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_Exception;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        tmp_add_expr_left_1 = mod_consts[103];
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[100]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 252;
            type_description_1 = "ococcccc";
            goto try_except_handler_3;
        }

        tmp_add_expr_right_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_make_exception_arg_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ococcccc";
            goto try_except_handler_3;
        }
        frame_3014036b23fd38eb5677f8cf59f6708e->m_frame.f_lineno = 252;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 252;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ococcccc";
        goto try_except_handler_3;
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 249;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_3014036b23fd38eb5677f8cf59f6708e->m_frame) frame_3014036b23fd38eb5677f8cf59f6708e->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ococcccc";
    goto try_except_handler_3;
    branch_end_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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
    branch_no_1:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_2;
        if (Nuitka_Cell_GET(self->m_closure[5]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[104]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 253;
            type_description_1 = "ococcccc";
            goto frame_exception_exit_1;
        }

        tmp_operand_value_2 = Nuitka_Cell_GET(self->m_closure[5]);
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ococcccc";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_called_instance_2;
        tmp_kw_call_arg_value_0_1 = mod_consts[105];
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 254;
            type_description_1 = "ococcccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[2]);
        frame_3014036b23fd38eb5677f8cf59f6708e->m_frame.f_lineno = 254;
        tmp_kw_call_arg_value_1_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[106]);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ococcccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 254;
            type_description_1 = "ococcccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(self->m_closure[1]);
        frame_3014036b23fd38eb5677f8cf59f6708e->m_frame.f_lineno = 254;
        tmp_unicode_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[107]);
        if (tmp_unicode_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 254;
            type_description_1 = "ococcccc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_2_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 254;
            type_description_1 = "ococcccc";
            goto frame_exception_exit_1;
        }
        frame_3014036b23fd38eb5677f8cf59f6708e->m_frame.f_lineno = 254;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        Py_DECREF(tmp_kw_call_arg_value_2_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ococcccc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(self->m_closure[5]);
            PyCell_SET(self->m_closure[5], tmp_assign_source_1);
            Py_XDECREF(old);
        }

    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_arg_value_2_2;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_called_instance_3;
        tmp_kw_call_arg_value_0_2 = mod_consts[108];
        if (Nuitka_Cell_GET(self->m_closure[5]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[104]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 255;
            type_description_1 = "ococcccc";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_1_2 = Nuitka_Cell_GET(self->m_closure[5]);
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[93]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 255;
            type_description_1 = "ococcccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = Nuitka_Cell_GET(self->m_closure[3]);
        frame_3014036b23fd38eb5677f8cf59f6708e->m_frame.f_lineno = 255;
        tmp_mult_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[93]);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ococcccc";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_1 = mod_consts[109];
        tmp_int_arg_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ococcccc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_2_2 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_kw_call_arg_value_2_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ococcccc";
            goto frame_exception_exit_1;
        }
        frame_3014036b23fd38eb5677f8cf59f6708e->m_frame.f_lineno = 255;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_2_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ococcccc";
            goto frame_exception_exit_1;
        }
        assert(var_file_name == NULL);
        var_file_name = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 256;
            type_description_1 = "ococcccc";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(self->m_closure[4]));
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ococcccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        CHECK_OBJECT(var_file_name);
        tmp_add_expr_left_2 = var_file_name;
        tmp_add_expr_right_2 = mod_consts[111];
        tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        assert(!(tmp_assign_source_3 == NULL));
        {
            PyObject *old = var_file_name;
            assert(old != NULL);
            var_file_name = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_4:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_prof);
        tmp_expression_value_4 = par_prof;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[38]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ococcccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 258;
            type_description_1 = "ococcccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[98]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 258;
            type_description_1 = "ococcccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[112]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 258;
            type_description_1 = "ococcccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[100]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 258;
            type_description_1 = "ococcccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(var_file_name);
        tmp_args_element_value_4 = var_file_name;
        frame_3014036b23fd38eb5677f8cf59f6708e->m_frame.f_lineno = 258;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 258;
            type_description_1 = "ococcccc";
            goto frame_exception_exit_1;
        }
        frame_3014036b23fd38eb5677f8cf59f6708e->m_frame.f_lineno = 258;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ococcccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3014036b23fd38eb5677f8cf59f6708e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3014036b23fd38eb5677f8cf59f6708e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3014036b23fd38eb5677f8cf59f6708e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3014036b23fd38eb5677f8cf59f6708e,
        type_description_1,
        par_prof,
        self->m_closure[5],
        var_file_name,
        self->m_closure[1],
        self->m_closure[0],
        self->m_closure[2],
        self->m_closure[3],
        self->m_closure[4]
    );


    // Release cached frame if used for exception.
    if (frame_3014036b23fd38eb5677f8cf59f6708e == cache_frame_3014036b23fd38eb5677f8cf59f6708e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3014036b23fd38eb5677f8cf59f6708e);
        cache_frame_3014036b23fd38eb5677f8cf59f6708e = NULL;
    }

    assertFrameObject(frame_3014036b23fd38eb5677f8cf59f6708e);

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
    CHECK_OBJECT(var_file_name);
    Py_DECREF(var_file_name);
    var_file_name = NULL;
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

    Py_XDECREF(var_file_name);
    var_file_name = NULL;
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
    CHECK_OBJECT(par_prof);
    Py_DECREF(par_prof);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_prof);
    Py_DECREF(par_prof);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$profiler$profiler$$$function__18___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_activities = python_pars[1];
    PyObject *par_schedule = python_pars[2];
    PyObject *par_on_trace_ready = python_pars[3];
    PyObject *par_record_shapes = python_pars[4];
    PyObject *par_profile_memory = python_pars[5];
    PyObject *par_with_stack = python_pars[6];
    PyObject *par_with_flops = python_pars[7];
    PyObject *par_with_modules = python_pars[8];
    PyObject *par_use_cuda = python_pars[9];
    PyObject *var_activities_set = NULL;
    struct Nuitka_FrameObject *frame_2390aa0d3a6e30936eea18b1a97e4a33;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_2390aa0d3a6e30936eea18b1a97e4a33 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2390aa0d3a6e30936eea18b1a97e4a33)) {
        Py_XDECREF(cache_frame_2390aa0d3a6e30936eea18b1a97e4a33);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2390aa0d3a6e30936eea18b1a97e4a33 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2390aa0d3a6e30936eea18b1a97e4a33 = MAKE_FUNCTION_FRAME(codeobj_2390aa0d3a6e30936eea18b1a97e4a33, module_torch$profiler$profiler, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2390aa0d3a6e30936eea18b1a97e4a33->m_type_description == NULL);
    frame_2390aa0d3a6e30936eea18b1a97e4a33 = cache_frame_2390aa0d3a6e30936eea18b1a97e4a33;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2390aa0d3a6e30936eea18b1a97e4a33);
    assert(Py_REFCNT(frame_2390aa0d3a6e30936eea18b1a97e4a33) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_set_arg_1;
        PyObject *tmp_called_value_1;
        CHECK_OBJECT(par_activities);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_activities);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_activities);
        tmp_set_arg_1 = par_activities;
        tmp_assign_source_1 = PySet_New(tmp_set_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        frame_2390aa0d3a6e30936eea18b1a97e4a33->m_frame.f_lineno = 382;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        assert(var_activities_set == NULL);
        var_activities_set = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_use_cuda);
        tmp_cmp_expr_left_1 = par_use_cuda;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        frame_2390aa0d3a6e30936eea18b1a97e4a33->m_frame.f_lineno = 384;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[113]);

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_use_cuda);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_use_cuda);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_activities_set);
        tmp_expression_value_1 = var_activities_set;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[114]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 386;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[18]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 386;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        frame_2390aa0d3a6e30936eea18b1a97e4a33->m_frame.f_lineno = 386;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[18]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activities_set);
        tmp_cmp_expr_right_2 = var_activities_set;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_activities_set);
        tmp_expression_value_4 = var_activities_set;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[46]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 388;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[18]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 388;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        frame_2390aa0d3a6e30936eea18b1a97e4a33->m_frame.f_lineno = 388;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_3:;
    branch_end_2:;
    branch_no_1:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_3;
        nuitka_digit tmp_cmp_expr_right_3;
        PyObject *tmp_len_arg_1;
        if (var_activities_set == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 389;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_1 = var_activities_set;
        tmp_cmp_expr_left_3 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = 0;
        tmp_condition_result_5 = RICH_COMPARE_LE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_5 != false) {
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
        tmp_raise_value_1 = mod_consts[116];
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        Py_INCREF(tmp_raise_value_1);
        exception_lineno = 389;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooc";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_4;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_kw_call_value_5_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[117]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 391;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_6 = BUILTIN_SUPER0(moduledict_torch$profiler$profiler, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[118]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_activities);
        tmp_kw_call_value_0_1 = par_activities;
        CHECK_OBJECT(par_record_shapes);
        tmp_kw_call_value_1_1 = par_record_shapes;
        CHECK_OBJECT(par_profile_memory);
        tmp_kw_call_value_2_1 = par_profile_memory;
        CHECK_OBJECT(par_with_stack);
        tmp_kw_call_value_3_1 = par_with_stack;
        CHECK_OBJECT(par_with_flops);
        tmp_kw_call_value_4_1 = par_with_flops;
        CHECK_OBJECT(par_with_modules);
        tmp_kw_call_value_5_1 = par_with_modules;
        frame_2390aa0d3a6e30936eea18b1a97e4a33->m_frame.f_lineno = 391;
        {
            PyObject *kw_values[6] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1};

            tmp_call_result_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_5, kw_values, mod_consts[119]);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_schedule);
        tmp_truth_name_3 = CHECK_IF_TRUE(par_schedule);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_schedule);
        tmp_assattr_value_1 = par_schedule;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[120], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[121], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_assattr_value_3 == NULL)) {
            tmp_assattr_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
        }

        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[120], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[121], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    branch_end_5:;
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_on_trace_ready);
        tmp_assattr_value_5 = par_on_trace_ready;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 407;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[124], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_value_6 = mod_consts[61];
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 408;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[125], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_assattr_target_7;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 409;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = par_self;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[120]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 409;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[125]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 409;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        frame_2390aa0d3a6e30936eea18b1a97e4a33->m_frame.f_lineno = 409;
        tmp_assattr_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assattr_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 409;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[126], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        tmp_assattr_value_8 = Py_None;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 410;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[127], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_assattr_target_9;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[81]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_10;
            PyTuple_SET_ITEM(tmp_dict_key_1, 0, tmp_tuple_element_1);
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 414;
                type_description_1 = "oooooooooooc";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[81]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 414;
                type_description_1 = "oooooooooooc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_dict_key_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_dict_key_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_dict_value_1 = MAKE_LIST_EMPTY(0);
        tmp_assattr_value_9 = _PyDict_NewPresized( 19 );
        {
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_list_element_1;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_list_element_2;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_list_element_3;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_list_element_4;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_list_element_5;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_list_element_6;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_list_element_7;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_expression_value_37;
            PyObject *tmp_list_element_8;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_expression_value_40;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_expression_value_42;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_expression_value_44;
            PyObject *tmp_list_element_9;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_expression_value_48;
            PyObject *tmp_list_element_10;
            PyObject *tmp_expression_value_50;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_expression_value_53;
            PyObject *tmp_list_element_11;
            PyObject *tmp_expression_value_55;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_expression_value_59;
            PyObject *tmp_list_element_12;
            PyObject *tmp_expression_value_61;
            PyObject *tmp_tuple_element_17;
            PyObject *tmp_expression_value_65;
            PyObject *tmp_list_element_13;
            PyObject *tmp_expression_value_66;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_expression_value_68;
            PyObject *tmp_list_element_14;
            PyObject *tmp_expression_value_69;
            PyObject *tmp_tuple_element_19;
            PyObject *tmp_expression_value_71;
            PyObject *tmp_list_element_15;
            PyObject *tmp_expression_value_72;
            tmp_res = PyDict_SetItem(tmp_assattr_value_9, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 414;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 415;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[81]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 415;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_12;
                PyTuple_SET_ITEM(tmp_dict_key_1, 0, tmp_tuple_element_2);
                tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

                if (unlikely(tmp_expression_value_12 == NULL)) {
                    tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
                }

                if (tmp_expression_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 415;
                    type_description_1 = "oooooooooooc";
                    goto tuple_build_exception_2;
                }
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[87]);
                if (tmp_tuple_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 415;
                    type_description_1 = "oooooooooooc";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dict_key_1, 1, tmp_tuple_element_2);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_dict_key_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            if (par_self == NULL) {
                Py_DECREF(tmp_dict_key_1);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 415;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }

            tmp_expression_value_13 = par_self;
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[12]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 415;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_1);
            tmp_res = PyDict_SetItem(tmp_assattr_value_9, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 415;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[81]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_15;
                PyTuple_SET_ITEM(tmp_dict_key_1, 0, tmp_tuple_element_3);
                tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

                if (unlikely(tmp_expression_value_15 == NULL)) {
                    tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
                }

                if (tmp_expression_value_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 416;
                    type_description_1 = "oooooooooooc";
                    goto tuple_build_exception_3;
                }
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[89]);
                if (tmp_tuple_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 416;
                    type_description_1 = "oooooooooooc";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_dict_key_1, 1, tmp_tuple_element_3);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_dict_key_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            if (par_self == NULL) {
                Py_DECREF(tmp_dict_key_1);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 416;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }

            tmp_expression_value_16 = par_self;
            tmp_list_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[12]);
            if (tmp_list_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 416;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_expression_value_17;
                PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_2);
                if (par_self == NULL) {

                    FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 416;
                    type_description_1 = "oooooooooooc";
                    goto list_build_exception_1;
                }

                tmp_expression_value_17 = par_self;
                tmp_list_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[13]);
                if (tmp_list_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 416;
                    type_description_1 = "oooooooooooc";
                    goto list_build_exception_1;
                }
                PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_2);
            }
            goto list_build_noexception_1;
            // Exception handling pass through code for list_build:
            list_build_exception_1:;
            Py_DECREF(tmp_dict_key_1);
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_1:;
            tmp_res = PyDict_SetItem(tmp_assattr_value_9, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 417;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[81]);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 417;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_19;
                PyTuple_SET_ITEM(tmp_dict_key_1, 0, tmp_tuple_element_4);
                tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

                if (unlikely(tmp_expression_value_19 == NULL)) {
                    tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
                }

                if (tmp_expression_value_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 417;
                    type_description_1 = "oooooooooooc";
                    goto tuple_build_exception_4;
                }
                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[90]);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 417;
                    type_description_1 = "oooooooooooc";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_dict_key_1, 1, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_dict_key_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            if (par_self == NULL) {
                Py_DECREF(tmp_dict_key_1);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 417;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }

            tmp_expression_value_20 = par_self;
            tmp_list_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[12]);
            if (tmp_list_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 417;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_expression_value_21;
                PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_3);
                if (par_self == NULL) {

                    FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 417;
                    type_description_1 = "oooooooooooc";
                    goto list_build_exception_2;
                }

                tmp_expression_value_21 = par_self;
                tmp_list_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[13]);
                if (tmp_list_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 417;
                    type_description_1 = "oooooooooooc";
                    goto list_build_exception_2;
                }
                PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_3);
            }
            goto list_build_noexception_2;
            // Exception handling pass through code for list_build:
            list_build_exception_2:;
            Py_DECREF(tmp_dict_key_1);
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_2:;
            tmp_res = PyDict_SetItem(tmp_assattr_value_9, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 417;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 418;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[87]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 418;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_23;
                PyTuple_SET_ITEM(tmp_dict_key_1, 0, tmp_tuple_element_5);
                tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

                if (unlikely(tmp_expression_value_23 == NULL)) {
                    tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
                }

                if (tmp_expression_value_23 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 418;
                    type_description_1 = "oooooooooooc";
                    goto tuple_build_exception_5;
                }
                tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[81]);
                if (tmp_tuple_element_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 418;
                    type_description_1 = "oooooooooooc";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_dict_key_1, 1, tmp_tuple_element_5);
            }
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_dict_key_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[128]);

            if (unlikely(tmp_called_value_7 == NULL)) {
                tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
            }

            assert(!(tmp_called_value_7 == NULL));
            tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[77]);

            if (unlikely(tmp_args_element_value_4 == NULL)) {
                tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
            }

            if (tmp_args_element_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 419;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_5 = mod_consts[129];
            frame_2390aa0d3a6e30936eea18b1a97e4a33->m_frame.f_lineno = 419;
            {
                PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
                tmp_list_element_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
            }

            if (tmp_list_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 419;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_LIST_EMPTY(3);
            {
                PyObject *tmp_expression_value_24;
                PyObject *tmp_expression_value_25;
                PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_4);
                if (par_self == NULL) {

                    FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 420;
                    type_description_1 = "oooooooooooc";
                    goto list_build_exception_3;
                }

                tmp_expression_value_24 = par_self;
                tmp_list_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[13]);
                if (tmp_list_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 420;
                    type_description_1 = "oooooooooooc";
                    goto list_build_exception_3;
                }
                PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_4);
                if (par_self == NULL) {

                    FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 421;
                    type_description_1 = "oooooooooooc";
                    goto list_build_exception_3;
                }

                tmp_expression_value_25 = par_self;
                tmp_list_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[14]);
                if (tmp_list_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 421;
                    type_description_1 = "oooooooooooc";
                    goto list_build_exception_3;
                }
                PyList_SET_ITEM(tmp_dict_value_1, 2, tmp_list_element_4);
            }
            goto list_build_noexception_3;
            // Exception handling pass through code for list_build:
            list_build_exception_3:;
            Py_DECREF(tmp_dict_key_1);
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_3:;
            tmp_res = PyDict_SetItem(tmp_assattr_value_9, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 418;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_value_26 == NULL)) {
                tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 422;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[87]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 422;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_27;
                PyTuple_SET_ITEM(tmp_dict_key_1, 0, tmp_tuple_element_6);
                tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

                if (unlikely(tmp_expression_value_27 == NULL)) {
                    tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
                }

                if (tmp_expression_value_27 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 422;
                    type_description_1 = "oooooooooooc";
                    goto tuple_build_exception_6;
                }
                tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[87]);
                if (tmp_tuple_element_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 422;
                    type_description_1 = "oooooooooooc";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_dict_key_1, 1, tmp_tuple_element_6);
            }
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_dict_key_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_dict_value_1 = MAKE_LIST_EMPTY(0);
            tmp_res = PyDict_SetItem(tmp_assattr_value_9, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 422;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_value_28 == NULL)) {
                tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 423;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[87]);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 423;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_29;
                PyTuple_SET_ITEM(tmp_dict_key_1, 0, tmp_tuple_element_7);
                tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

                if (unlikely(tmp_expression_value_29 == NULL)) {
                    tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
                }

                if (tmp_expression_value_29 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 423;
                    type_description_1 = "oooooooooooc";
                    goto tuple_build_exception_7;
                }
                tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[89]);
                if (tmp_tuple_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 423;
                    type_description_1 = "oooooooooooc";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_dict_key_1, 1, tmp_tuple_element_7);
            }
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_dict_key_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            if (par_self == NULL) {
                Py_DECREF(tmp_dict_key_1);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 423;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }

            tmp_expression_value_30 = par_self;
            tmp_list_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[13]);
            if (tmp_list_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 423;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_5);
            tmp_res = PyDict_SetItem(tmp_assattr_value_9, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 423;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_value_31 == NULL)) {
                tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 424;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[87]);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 424;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_32;
                PyTuple_SET_ITEM(tmp_dict_key_1, 0, tmp_tuple_element_8);
                tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

                if (unlikely(tmp_expression_value_32 == NULL)) {
                    tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
                }

                if (tmp_expression_value_32 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 424;
                    type_description_1 = "oooooooooooc";
                    goto tuple_build_exception_8;
                }
                tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[90]);
                if (tmp_tuple_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 424;
                    type_description_1 = "oooooooooooc";
                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_dict_key_1, 1, tmp_tuple_element_8);
            }
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_dict_key_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            if (par_self == NULL) {
                Py_DECREF(tmp_dict_key_1);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 424;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }

            tmp_expression_value_33 = par_self;
            tmp_list_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[13]);
            if (tmp_list_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 424;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_6);
            tmp_res = PyDict_SetItem(tmp_assattr_value_9, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 424;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_value_34 == NULL)) {
                tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 425;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[89]);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 425;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_35;
                PyTuple_SET_ITEM(tmp_dict_key_1, 0, tmp_tuple_element_9);
                tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

                if (unlikely(tmp_expression_value_35 == NULL)) {
                    tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
                }

                if (tmp_expression_value_35 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 425;
                    type_description_1 = "oooooooooooc";
                    goto tuple_build_exception_9;
                }
                tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[81]);
                if (tmp_tuple_element_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 425;
                    type_description_1 = "oooooooooooc";
                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_dict_key_1, 1, tmp_tuple_element_9);
            }
            goto tuple_build_noexception_9;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_9:;
            Py_DECREF(tmp_dict_key_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_9:;
            tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[128]);

            if (unlikely(tmp_called_value_8 == NULL)) {
                tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
            }

            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 426;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[77]);

            if (unlikely(tmp_args_element_value_6 == NULL)) {
                tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
            }

            if (tmp_args_element_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 426;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_7 = mod_consts[130];
            frame_2390aa0d3a6e30936eea18b1a97e4a33->m_frame.f_lineno = 426;
            {
                PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
                tmp_list_element_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_8, call_args);
            }

            if (tmp_list_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 426;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_expression_value_36;
                PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_7);
                if (par_self == NULL) {

                    FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 427;
                    type_description_1 = "oooooooooooc";
                    goto list_build_exception_4;
                }

                tmp_expression_value_36 = par_self;
                tmp_list_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[14]);
                if (tmp_list_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 427;
                    type_description_1 = "oooooooooooc";
                    goto list_build_exception_4;
                }
                PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_7);
            }
            goto list_build_noexception_4;
            // Exception handling pass through code for list_build:
            list_build_exception_4:;
            Py_DECREF(tmp_dict_key_1);
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_4:;
            tmp_res = PyDict_SetItem(tmp_assattr_value_9, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 425;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_value_37 == NULL)) {
                tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 428;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[89]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 428;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_38;
                PyTuple_SET_ITEM(tmp_dict_key_1, 0, tmp_tuple_element_10);
                tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

                if (unlikely(tmp_expression_value_38 == NULL)) {
                    tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
                }

                if (tmp_expression_value_38 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 428;
                    type_description_1 = "oooooooooooc";
                    goto tuple_build_exception_10;
                }
                tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[87]);
                if (tmp_tuple_element_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 428;
                    type_description_1 = "oooooooooooc";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_dict_key_1, 1, tmp_tuple_element_10);
            }
            goto tuple_build_noexception_10;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_10:;
            Py_DECREF(tmp_dict_key_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_10:;
            tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[128]);

            if (unlikely(tmp_called_value_9 == NULL)) {
                tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
            }

            if (tmp_called_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 429;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[77]);

            if (unlikely(tmp_args_element_value_8 == NULL)) {
                tmp_args_element_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
            }

            if (tmp_args_element_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 429;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_9 = mod_consts[131];
            frame_2390aa0d3a6e30936eea18b1a97e4a33->m_frame.f_lineno = 429;
            {
                PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
                tmp_list_element_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_9, call_args);
            }

            if (tmp_list_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 429;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_expression_value_39;
                PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_8);
                if (par_self == NULL) {

                    FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 430;
                    type_description_1 = "oooooooooooc";
                    goto list_build_exception_5;
                }

                tmp_expression_value_39 = par_self;
                tmp_list_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[14]);
                if (tmp_list_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 430;
                    type_description_1 = "oooooooooooc";
                    goto list_build_exception_5;
                }
                PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_8);
            }
            goto list_build_noexception_5;
            // Exception handling pass through code for list_build:
            list_build_exception_5:;
            Py_DECREF(tmp_dict_key_1);
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_5:;
            tmp_res = PyDict_SetItem(tmp_assattr_value_9, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 428;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_value_40 == NULL)) {
                tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 431;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[89]);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 431;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_41;
                PyTuple_SET_ITEM(tmp_dict_key_1, 0, tmp_tuple_element_11);
                tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

                if (unlikely(tmp_expression_value_41 == NULL)) {
                    tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
                }

                if (tmp_expression_value_41 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 431;
                    type_description_1 = "oooooooooooc";
                    goto tuple_build_exception_11;
                }
                tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[89]);
                if (tmp_tuple_element_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 431;
                    type_description_1 = "oooooooooooc";
                    goto tuple_build_exception_11;
                }
                PyTuple_SET_ITEM(tmp_dict_key_1, 1, tmp_tuple_element_11);
            }
            goto tuple_build_noexception_11;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_11:;
            Py_DECREF(tmp_dict_key_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_11:;
            tmp_dict_value_1 = MAKE_LIST_EMPTY(0);
            tmp_res = PyDict_SetItem(tmp_assattr_value_9, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 431;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_value_42 == NULL)) {
                tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[89]);
            if (tmp_tuple_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_43;
                PyTuple_SET_ITEM(tmp_dict_key_1, 0, tmp_tuple_element_12);
                tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

                if (unlikely(tmp_expression_value_43 == NULL)) {
                    tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
                }

                if (tmp_expression_value_43 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 432;
                    type_description_1 = "oooooooooooc";
                    goto tuple_build_exception_12;
                }
                tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[90]);
                if (tmp_tuple_element_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 432;
                    type_description_1 = "oooooooooooc";
                    goto tuple_build_exception_12;
                }
                PyTuple_SET_ITEM(tmp_dict_key_1, 1, tmp_tuple_element_12);
            }
            goto tuple_build_noexception_12;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_12:;
            Py_DECREF(tmp_dict_key_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_12:;
            tmp_dict_value_1 = MAKE_LIST_EMPTY(0);
            tmp_res = PyDict_SetItem(tmp_assattr_value_9, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_value_44 == NULL)) {
                tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 433;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[90]);
            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 433;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_45;
                PyTuple_SET_ITEM(tmp_dict_key_1, 0, tmp_tuple_element_13);
                tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

                if (unlikely(tmp_expression_value_45 == NULL)) {
                    tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
                }

                if (tmp_expression_value_45 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 433;
                    type_description_1 = "oooooooooooc";
                    goto tuple_build_exception_13;
                }
                tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[81]);
                if (tmp_tuple_element_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 433;
                    type_description_1 = "oooooooooooc";
                    goto tuple_build_exception_13;
                }
                PyTuple_SET_ITEM(tmp_dict_key_1, 1, tmp_tuple_element_13);
            }
            goto tuple_build_noexception_13;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_13:;
            Py_DECREF(tmp_dict_key_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_13:;
            if (par_self == NULL) {
                Py_DECREF(tmp_dict_key_1);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 433;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }

            tmp_expression_value_46 = par_self;
            tmp_list_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[14]);
            if (tmp_list_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 433;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_expression_value_47;
                PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_9);
                if (par_self == NULL) {

                    FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 433;
                    type_description_1 = "oooooooooooc";
                    goto list_build_exception_6;
                }

                tmp_expression_value_47 = par_self;
                tmp_list_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[132]);
                if (tmp_list_element_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 433;
                    type_description_1 = "oooooooooooc";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_9);
            }
            goto list_build_noexception_6;
            // Exception handling pass through code for list_build:
            list_build_exception_6:;
            Py_DECREF(tmp_dict_key_1);
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_6:;
            tmp_res = PyDict_SetItem(tmp_assattr_value_9, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 433;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_value_48 == NULL)) {
                tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_value_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 434;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[90]);
            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 434;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_49;
                PyTuple_SET_ITEM(tmp_dict_key_1, 0, tmp_tuple_element_14);
                tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

                if (unlikely(tmp_expression_value_49 == NULL)) {
                    tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
                }

                if (tmp_expression_value_49 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 434;
                    type_description_1 = "oooooooooooc";
                    goto tuple_build_exception_14;
                }
                tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[87]);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 434;
                    type_description_1 = "oooooooooooc";
                    goto tuple_build_exception_14;
                }
                PyTuple_SET_ITEM(tmp_dict_key_1, 1, tmp_tuple_element_14);
            }
            goto tuple_build_noexception_14;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_14:;
            Py_DECREF(tmp_dict_key_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_14:;
            if (par_self == NULL) {
                Py_DECREF(tmp_dict_key_1);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 434;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }

            tmp_expression_value_50 = par_self;
            tmp_list_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[14]);
            if (tmp_list_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 434;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_LIST_EMPTY(3);
            {
                PyObject *tmp_expression_value_51;
                PyObject *tmp_expression_value_52;
                PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_10);
                if (par_self == NULL) {

                    FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 434;
                    type_description_1 = "oooooooooooc";
                    goto list_build_exception_7;
                }

                tmp_expression_value_51 = par_self;
                tmp_list_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[132]);
                if (tmp_list_element_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 434;
                    type_description_1 = "oooooooooooc";
                    goto list_build_exception_7;
                }
                PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_10);
                if (par_self == NULL) {

                    FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 434;
                    type_description_1 = "oooooooooooc";
                    goto list_build_exception_7;
                }

                tmp_expression_value_52 = par_self;
                tmp_list_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[12]);
                if (tmp_list_element_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 434;
                    type_description_1 = "oooooooooooc";
                    goto list_build_exception_7;
                }
                PyList_SET_ITEM(tmp_dict_value_1, 2, tmp_list_element_10);
            }
            goto list_build_noexception_7;
            // Exception handling pass through code for list_build:
            list_build_exception_7:;
            Py_DECREF(tmp_dict_key_1);
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_7:;
            tmp_res = PyDict_SetItem(tmp_assattr_value_9, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 434;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_value_53 == NULL)) {
                tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_value_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 435;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[90]);
            if (tmp_tuple_element_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 435;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_54;
                PyTuple_SET_ITEM(tmp_dict_key_1, 0, tmp_tuple_element_15);
                tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

                if (unlikely(tmp_expression_value_54 == NULL)) {
                    tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
                }

                if (tmp_expression_value_54 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 435;
                    type_description_1 = "oooooooooooc";
                    goto tuple_build_exception_15;
                }
                tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[89]);
                if (tmp_tuple_element_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 435;
                    type_description_1 = "oooooooooooc";
                    goto tuple_build_exception_15;
                }
                PyTuple_SET_ITEM(tmp_dict_key_1, 1, tmp_tuple_element_15);
            }
            goto tuple_build_noexception_15;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_15:;
            Py_DECREF(tmp_dict_key_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_15:;
            if (par_self == NULL) {
                Py_DECREF(tmp_dict_key_1);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 436;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }

            tmp_expression_value_55 = par_self;
            tmp_list_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[14]);
            if (tmp_list_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 436;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_expression_value_56;
                PyObject *tmp_expression_value_57;
                PyObject *tmp_expression_value_58;
                PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_11);
                if (par_self == NULL) {

                    FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 437;
                    type_description_1 = "oooooooooooc";
                    goto list_build_exception_8;
                }

                tmp_expression_value_56 = par_self;
                tmp_list_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[132]);
                if (tmp_list_element_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 437;
                    type_description_1 = "oooooooooooc";
                    goto list_build_exception_8;
                }
                PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_11);
                if (par_self == NULL) {

                    FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 438;
                    type_description_1 = "oooooooooooc";
                    goto list_build_exception_8;
                }

                tmp_expression_value_57 = par_self;
                tmp_list_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[12]);
                if (tmp_list_element_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 438;
                    type_description_1 = "oooooooooooc";
                    goto list_build_exception_8;
                }
                PyList_SET_ITEM(tmp_dict_value_1, 2, tmp_list_element_11);
                if (par_self == NULL) {

                    FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 439;
                    type_description_1 = "oooooooooooc";
                    goto list_build_exception_8;
                }

                tmp_expression_value_58 = par_self;
                tmp_list_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[13]);
                if (tmp_list_element_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 439;
                    type_description_1 = "oooooooooooc";
                    goto list_build_exception_8;
                }
                PyList_SET_ITEM(tmp_dict_value_1, 3, tmp_list_element_11);
            }
            goto list_build_noexception_8;
            // Exception handling pass through code for list_build:
            list_build_exception_8:;
            Py_DECREF(tmp_dict_key_1);
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_8:;
            tmp_res = PyDict_SetItem(tmp_assattr_value_9, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 435;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_value_59 == NULL)) {
                tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_value_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 440;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[90]);
            if (tmp_tuple_element_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 440;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_60;
                PyTuple_SET_ITEM(tmp_dict_key_1, 0, tmp_tuple_element_16);
                tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

                if (unlikely(tmp_expression_value_60 == NULL)) {
                    tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
                }

                if (tmp_expression_value_60 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 440;
                    type_description_1 = "oooooooooooc";
                    goto tuple_build_exception_16;
                }
                tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[90]);
                if (tmp_tuple_element_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 440;
                    type_description_1 = "oooooooooooc";
                    goto tuple_build_exception_16;
                }
                PyTuple_SET_ITEM(tmp_dict_key_1, 1, tmp_tuple_element_16);
            }
            goto tuple_build_noexception_16;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_16:;
            Py_DECREF(tmp_dict_key_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_16:;
            if (par_self == NULL) {
                Py_DECREF(tmp_dict_key_1);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 441;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }

            tmp_expression_value_61 = par_self;
            tmp_list_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[14]);
            if (tmp_list_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 441;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_expression_value_62;
                PyObject *tmp_expression_value_63;
                PyObject *tmp_expression_value_64;
                PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_12);
                if (par_self == NULL) {

                    FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 442;
                    type_description_1 = "oooooooooooc";
                    goto list_build_exception_9;
                }

                tmp_expression_value_62 = par_self;
                tmp_list_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[132]);
                if (tmp_list_element_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 442;
                    type_description_1 = "oooooooooooc";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_12);
                if (par_self == NULL) {

                    FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 443;
                    type_description_1 = "oooooooooooc";
                    goto list_build_exception_9;
                }

                tmp_expression_value_63 = par_self;
                tmp_list_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[12]);
                if (tmp_list_element_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 443;
                    type_description_1 = "oooooooooooc";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dict_value_1, 2, tmp_list_element_12);
                if (par_self == NULL) {

                    FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 444;
                    type_description_1 = "oooooooooooc";
                    goto list_build_exception_9;
                }

                tmp_expression_value_64 = par_self;
                tmp_list_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[13]);
                if (tmp_list_element_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 444;
                    type_description_1 = "oooooooooooc";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dict_value_1, 3, tmp_list_element_12);
            }
            goto list_build_noexception_9;
            // Exception handling pass through code for list_build:
            list_build_exception_9:;
            Py_DECREF(tmp_dict_key_1);
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_9:;
            tmp_res = PyDict_SetItem(tmp_assattr_value_9, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 440;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_value_65 == NULL)) {
                tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_value_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 446;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[87]);
            if (tmp_tuple_element_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 446;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_key_1, 0, tmp_tuple_element_17);
            tmp_tuple_element_17 = Py_None;
            PyTuple_SET_ITEM0(tmp_dict_key_1, 1, tmp_tuple_element_17);
            if (par_self == NULL) {
                Py_DECREF(tmp_dict_key_1);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 446;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }

            tmp_expression_value_66 = par_self;
            tmp_list_element_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[13]);
            if (tmp_list_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 446;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_expression_value_67;
                PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_13);
                if (par_self == NULL) {

                    FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 446;
                    type_description_1 = "oooooooooooc";
                    goto list_build_exception_10;
                }

                tmp_expression_value_67 = par_self;
                tmp_list_element_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[14]);
                if (tmp_list_element_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 446;
                    type_description_1 = "oooooooooooc";
                    goto list_build_exception_10;
                }
                PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_13);
            }
            goto list_build_noexception_10;
            // Exception handling pass through code for list_build:
            list_build_exception_10:;
            Py_DECREF(tmp_dict_key_1);
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_10:;
            tmp_res = PyDict_SetItem(tmp_assattr_value_9, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 446;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_value_68 == NULL)) {
                tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_value_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 447;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[89]);
            if (tmp_tuple_element_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 447;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_key_1, 0, tmp_tuple_element_18);
            tmp_tuple_element_18 = Py_None;
            PyTuple_SET_ITEM0(tmp_dict_key_1, 1, tmp_tuple_element_18);
            if (par_self == NULL) {
                Py_DECREF(tmp_dict_key_1);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 447;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }

            tmp_expression_value_69 = par_self;
            tmp_list_element_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[14]);
            if (tmp_list_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 447;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_expression_value_70;
                PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_14);
                if (par_self == NULL) {

                    FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 447;
                    type_description_1 = "oooooooooooc";
                    goto list_build_exception_11;
                }

                tmp_expression_value_70 = par_self;
                tmp_list_element_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[132]);
                if (tmp_list_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 447;
                    type_description_1 = "oooooooooooc";
                    goto list_build_exception_11;
                }
                PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_14);
            }
            goto list_build_noexception_11;
            // Exception handling pass through code for list_build:
            list_build_exception_11:;
            Py_DECREF(tmp_dict_key_1);
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_11:;
            tmp_res = PyDict_SetItem(tmp_assattr_value_9, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 447;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_value_71 == NULL)) {
                tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_value_71 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 448;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[90]);
            if (tmp_tuple_element_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 448;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_key_1, 0, tmp_tuple_element_19);
            tmp_tuple_element_19 = Py_None;
            PyTuple_SET_ITEM0(tmp_dict_key_1, 1, tmp_tuple_element_19);
            if (par_self == NULL) {
                Py_DECREF(tmp_dict_key_1);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 448;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }

            tmp_expression_value_72 = par_self;
            tmp_list_element_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[14]);
            if (tmp_list_element_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 448;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_expression_value_73;
                PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_15);
                if (par_self == NULL) {

                    FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 448;
                    type_description_1 = "oooooooooooc";
                    goto list_build_exception_12;
                }

                tmp_expression_value_73 = par_self;
                tmp_list_element_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[132]);
                if (tmp_list_element_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 448;
                    type_description_1 = "oooooooooooc";
                    goto list_build_exception_12;
                }
                PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_15);
            }
            goto list_build_noexception_12;
            // Exception handling pass through code for list_build:
            list_build_exception_12:;
            Py_DECREF(tmp_dict_key_1);
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_12:;
            tmp_res = PyDict_SetItem(tmp_assattr_value_9, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 448;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assattr_value_9);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 412;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[133], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2390aa0d3a6e30936eea18b1a97e4a33, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2390aa0d3a6e30936eea18b1a97e4a33->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2390aa0d3a6e30936eea18b1a97e4a33, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2390aa0d3a6e30936eea18b1a97e4a33,
        type_description_1,
        par_self,
        par_activities,
        par_schedule,
        par_on_trace_ready,
        par_record_shapes,
        par_profile_memory,
        par_with_stack,
        par_with_flops,
        par_with_modules,
        par_use_cuda,
        var_activities_set,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_2390aa0d3a6e30936eea18b1a97e4a33 == cache_frame_2390aa0d3a6e30936eea18b1a97e4a33) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2390aa0d3a6e30936eea18b1a97e4a33);
        cache_frame_2390aa0d3a6e30936eea18b1a97e4a33 = NULL;
    }

    assertFrameObject(frame_2390aa0d3a6e30936eea18b1a97e4a33);

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
    Py_XDECREF(var_activities_set);
    var_activities_set = NULL;
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

    Py_XDECREF(var_activities_set);
    var_activities_set = NULL;
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
    CHECK_OBJECT(par_activities);
    Py_DECREF(par_activities);
    CHECK_OBJECT(par_schedule);
    Py_DECREF(par_schedule);
    CHECK_OBJECT(par_on_trace_ready);
    Py_DECREF(par_on_trace_ready);
    CHECK_OBJECT(par_record_shapes);
    Py_DECREF(par_record_shapes);
    CHECK_OBJECT(par_profile_memory);
    Py_DECREF(par_profile_memory);
    CHECK_OBJECT(par_with_stack);
    Py_DECREF(par_with_stack);
    CHECK_OBJECT(par_with_flops);
    Py_DECREF(par_with_flops);
    CHECK_OBJECT(par_with_modules);
    Py_DECREF(par_with_modules);
    CHECK_OBJECT(par_use_cuda);
    Py_DECREF(par_use_cuda);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_activities);
    Py_DECREF(par_activities);
    CHECK_OBJECT(par_schedule);
    Py_DECREF(par_schedule);
    CHECK_OBJECT(par_on_trace_ready);
    Py_DECREF(par_on_trace_ready);
    CHECK_OBJECT(par_record_shapes);
    Py_DECREF(par_record_shapes);
    CHECK_OBJECT(par_profile_memory);
    Py_DECREF(par_profile_memory);
    CHECK_OBJECT(par_with_stack);
    Py_DECREF(par_with_stack);
    CHECK_OBJECT(par_with_flops);
    Py_DECREF(par_with_flops);
    CHECK_OBJECT(par_with_modules);
    Py_DECREF(par_with_modules);
    CHECK_OBJECT(par_use_cuda);
    Py_DECREF(par_use_cuda);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$profiler$profiler$$$function__19___enter__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_014299843b9f181a748401abe8b12469;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_014299843b9f181a748401abe8b12469 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_014299843b9f181a748401abe8b12469)) {
        Py_XDECREF(cache_frame_014299843b9f181a748401abe8b12469);

#if _DEBUG_REFCOUNTS
        if (cache_frame_014299843b9f181a748401abe8b12469 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_014299843b9f181a748401abe8b12469 = MAKE_FUNCTION_FRAME(codeobj_014299843b9f181a748401abe8b12469, module_torch$profiler$profiler, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_014299843b9f181a748401abe8b12469->m_type_description == NULL);
    frame_014299843b9f181a748401abe8b12469 = cache_frame_014299843b9f181a748401abe8b12469;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_014299843b9f181a748401abe8b12469);
    assert(Py_REFCNT(frame_014299843b9f181a748401abe8b12469) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_014299843b9f181a748401abe8b12469->m_frame.f_lineno = 452;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[134]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
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
        exception_tb = MAKE_TRACEBACK(frame_014299843b9f181a748401abe8b12469, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_014299843b9f181a748401abe8b12469->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_014299843b9f181a748401abe8b12469, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_014299843b9f181a748401abe8b12469,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_014299843b9f181a748401abe8b12469 == cache_frame_014299843b9f181a748401abe8b12469) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_014299843b9f181a748401abe8b12469);
        cache_frame_014299843b9f181a748401abe8b12469 = NULL;
    }

    assertFrameObject(frame_014299843b9f181a748401abe8b12469);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(par_self);
    tmp_return_value = par_self;
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


static PyObject *impl_torch$profiler$profiler$$$function__20___exit__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_exc_type = python_pars[1];
    PyObject *par_exc_val = python_pars[2];
    PyObject *par_exc_tb = python_pars[3];
    struct Nuitka_FrameObject *frame_d1310394d09c37a382b1c78ec34d20fb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d1310394d09c37a382b1c78ec34d20fb = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d1310394d09c37a382b1c78ec34d20fb)) {
        Py_XDECREF(cache_frame_d1310394d09c37a382b1c78ec34d20fb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d1310394d09c37a382b1c78ec34d20fb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d1310394d09c37a382b1c78ec34d20fb = MAKE_FUNCTION_FRAME(codeobj_d1310394d09c37a382b1c78ec34d20fb, module_torch$profiler$profiler, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d1310394d09c37a382b1c78ec34d20fb->m_type_description == NULL);
    frame_d1310394d09c37a382b1c78ec34d20fb = cache_frame_d1310394d09c37a382b1c78ec34d20fb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d1310394d09c37a382b1c78ec34d20fb);
    assert(Py_REFCNT(frame_d1310394d09c37a382b1c78ec34d20fb) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_d1310394d09c37a382b1c78ec34d20fb->m_frame.f_lineno = 456;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[135]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d1310394d09c37a382b1c78ec34d20fb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d1310394d09c37a382b1c78ec34d20fb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d1310394d09c37a382b1c78ec34d20fb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d1310394d09c37a382b1c78ec34d20fb,
        type_description_1,
        par_self,
        par_exc_type,
        par_exc_val,
        par_exc_tb
    );


    // Release cached frame if used for exception.
    if (frame_d1310394d09c37a382b1c78ec34d20fb == cache_frame_d1310394d09c37a382b1c78ec34d20fb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d1310394d09c37a382b1c78ec34d20fb);
        cache_frame_d1310394d09c37a382b1c78ec34d20fb = NULL;
    }

    assertFrameObject(frame_d1310394d09c37a382b1c78ec34d20fb);

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
    CHECK_OBJECT(par_exc_val);
    Py_DECREF(par_exc_val);
    CHECK_OBJECT(par_exc_tb);
    Py_DECREF(par_exc_tb);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_exc_type);
    Py_DECREF(par_exc_type);
    CHECK_OBJECT(par_exc_val);
    Py_DECREF(par_exc_val);
    CHECK_OBJECT(par_exc_tb);
    Py_DECREF(par_exc_tb);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$profiler$profiler$$$function__21_start(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_5a50cb541b25e3503ce30719143d0d3d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_5a50cb541b25e3503ce30719143d0d3d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5a50cb541b25e3503ce30719143d0d3d)) {
        Py_XDECREF(cache_frame_5a50cb541b25e3503ce30719143d0d3d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5a50cb541b25e3503ce30719143d0d3d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5a50cb541b25e3503ce30719143d0d3d = MAKE_FUNCTION_FRAME(codeobj_5a50cb541b25e3503ce30719143d0d3d, module_torch$profiler$profiler, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5a50cb541b25e3503ce30719143d0d3d->m_type_description == NULL);
    frame_5a50cb541b25e3503ce30719143d0d3d = cache_frame_5a50cb541b25e3503ce30719143d0d3d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5a50cb541b25e3503ce30719143d0d3d);
    assert(Py_REFCNT(frame_5a50cb541b25e3503ce30719143d0d3d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[136]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 459;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[81]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 459;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[126]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 459;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_5a50cb541b25e3503ce30719143d0d3d->m_frame.f_lineno = 459;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[121]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 460;
            type_description_1 = "o";
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
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_assattr_target_1;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[137]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = mod_consts[138];
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_unicode_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[125]);
        if (tmp_unicode_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 461;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 461;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 461;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_5a50cb541b25e3503ce30719143d0d3d->m_frame.f_lineno = 461;
        tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[127], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[127]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_5a50cb541b25e3503ce30719143d0d3d->m_frame.f_lineno = 462;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[40]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_5a50cb541b25e3503ce30719143d0d3d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5a50cb541b25e3503ce30719143d0d3d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5a50cb541b25e3503ce30719143d0d3d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5a50cb541b25e3503ce30719143d0d3d,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_5a50cb541b25e3503ce30719143d0d3d == cache_frame_5a50cb541b25e3503ce30719143d0d3d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5a50cb541b25e3503ce30719143d0d3d);
        cache_frame_5a50cb541b25e3503ce30719143d0d3d = NULL;
    }

    assertFrameObject(frame_5a50cb541b25e3503ce30719143d0d3d);

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


static PyObject *impl_torch$profiler$profiler$$$function__22_stop(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_48fa3072225de6cb22d5b45d66f55007;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_48fa3072225de6cb22d5b45d66f55007 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_48fa3072225de6cb22d5b45d66f55007)) {
        Py_XDECREF(cache_frame_48fa3072225de6cb22d5b45d66f55007);

#if _DEBUG_REFCOUNTS
        if (cache_frame_48fa3072225de6cb22d5b45d66f55007 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_48fa3072225de6cb22d5b45d66f55007 = MAKE_FUNCTION_FRAME(codeobj_48fa3072225de6cb22d5b45d66f55007, module_torch$profiler$profiler, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_48fa3072225de6cb22d5b45d66f55007->m_type_description == NULL);
    frame_48fa3072225de6cb22d5b45d66f55007 = cache_frame_48fa3072225de6cb22d5b45d66f55007;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_48fa3072225de6cb22d5b45d66f55007);
    assert(Py_REFCNT(frame_48fa3072225de6cb22d5b45d66f55007) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[121]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 465;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[127]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 465;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[127]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_48fa3072225de6cb22d5b45d66f55007->m_frame.f_lineno = 466;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
            tmp_called_instance_1,
            mod_consts[29],
            &PyTuple_GET_ITEM(mod_consts[30], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[136]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[126]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 467;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = Py_None;
        frame_48fa3072225de6cb22d5b45d66f55007->m_frame.f_lineno = 467;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_48fa3072225de6cb22d5b45d66f55007, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_48fa3072225de6cb22d5b45d66f55007->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_48fa3072225de6cb22d5b45d66f55007, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_48fa3072225de6cb22d5b45d66f55007,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_48fa3072225de6cb22d5b45d66f55007 == cache_frame_48fa3072225de6cb22d5b45d66f55007) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_48fa3072225de6cb22d5b45d66f55007);
        cache_frame_48fa3072225de6cb22d5b45d66f55007 = NULL;
    }

    assertFrameObject(frame_48fa3072225de6cb22d5b45d66f55007);

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


static PyObject *impl_torch$profiler$profiler$$$function__23_step(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_prev_action = NULL;
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_999c966d6124dc2602bc4b8fc4ff5da7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_999c966d6124dc2602bc4b8fc4ff5da7 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_999c966d6124dc2602bc4b8fc4ff5da7)) {
        Py_XDECREF(cache_frame_999c966d6124dc2602bc4b8fc4ff5da7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_999c966d6124dc2602bc4b8fc4ff5da7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_999c966d6124dc2602bc4b8fc4ff5da7 = MAKE_FUNCTION_FRAME(codeobj_999c966d6124dc2602bc4b8fc4ff5da7, module_torch$profiler$profiler, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_999c966d6124dc2602bc4b8fc4ff5da7->m_type_description == NULL);
    frame_999c966d6124dc2602bc4b8fc4ff5da7 = cache_frame_999c966d6124dc2602bc4b8fc4ff5da7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_999c966d6124dc2602bc4b8fc4ff5da7);
    assert(Py_REFCNT(frame_999c966d6124dc2602bc4b8fc4ff5da7) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[121]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 473;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[127]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 473;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[127]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_999c966d6124dc2602bc4b8fc4ff5da7->m_frame.f_lineno = 474;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
            tmp_called_instance_1,
            mod_consts[29],
            &PyTuple_GET_ITEM(mod_consts[30], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[126]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_prev_action == NULL);
        var_prev_action = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[125]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        tmp_iadd_expr_right_1 = mod_consts[88];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_3;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[125], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[120]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[125]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 477;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_999c966d6124dc2602bc4b8fc4ff5da7->m_frame.f_lineno = 477;
        tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[126], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[136]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_prev_action);
        tmp_args_element_value_2 = var_prev_action;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[126]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 479;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_999c966d6124dc2602bc4b8fc4ff5da7->m_frame.f_lineno = 479;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_attribute_value_3;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[121]);
        if (tmp_attribute_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_3);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_3);

            exception_lineno = 481;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_3);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_assattr_target_3;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[137]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = mod_consts[138];
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_unicode_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[125]);
        if (tmp_unicode_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 482;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 482;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 482;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_999c966d6124dc2602bc4b8fc4ff5da7->m_frame.f_lineno = 482;
        tmp_assattr_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[127], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[127]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_999c966d6124dc2602bc4b8fc4ff5da7->m_frame.f_lineno = 483;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[40]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_999c966d6124dc2602bc4b8fc4ff5da7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_999c966d6124dc2602bc4b8fc4ff5da7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_999c966d6124dc2602bc4b8fc4ff5da7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_999c966d6124dc2602bc4b8fc4ff5da7,
        type_description_1,
        par_self,
        var_prev_action
    );


    // Release cached frame if used for exception.
    if (frame_999c966d6124dc2602bc4b8fc4ff5da7 == cache_frame_999c966d6124dc2602bc4b8fc4ff5da7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_999c966d6124dc2602bc4b8fc4ff5da7);
        cache_frame_999c966d6124dc2602bc4b8fc4ff5da7 = NULL;
    }

    assertFrameObject(frame_999c966d6124dc2602bc4b8fc4ff5da7);

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
    CHECK_OBJECT(var_prev_action);
    Py_DECREF(var_prev_action);
    var_prev_action = NULL;
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

    Py_XDECREF(var_prev_action);
    var_prev_action = NULL;
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


static PyObject *impl_torch$profiler$profiler$$$function__24__trace_ready(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ab2d45c7e0688e65d373ac64972dceac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ab2d45c7e0688e65d373ac64972dceac = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ab2d45c7e0688e65d373ac64972dceac)) {
        Py_XDECREF(cache_frame_ab2d45c7e0688e65d373ac64972dceac);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ab2d45c7e0688e65d373ac64972dceac == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ab2d45c7e0688e65d373ac64972dceac = MAKE_FUNCTION_FRAME(codeobj_ab2d45c7e0688e65d373ac64972dceac, module_torch$profiler$profiler, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ab2d45c7e0688e65d373ac64972dceac->m_type_description == NULL);
    frame_ab2d45c7e0688e65d373ac64972dceac = cache_frame_ab2d45c7e0688e65d373ac64972dceac;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ab2d45c7e0688e65d373ac64972dceac);
    assert(Py_REFCNT(frame_ab2d45c7e0688e65d373ac64972dceac) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[124]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 486;
            type_description_1 = "o";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_ab2d45c7e0688e65d373ac64972dceac->m_frame.f_lineno = 487;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[124], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ab2d45c7e0688e65d373ac64972dceac, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ab2d45c7e0688e65d373ac64972dceac->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ab2d45c7e0688e65d373ac64972dceac, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ab2d45c7e0688e65d373ac64972dceac,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ab2d45c7e0688e65d373ac64972dceac == cache_frame_ab2d45c7e0688e65d373ac64972dceac) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ab2d45c7e0688e65d373ac64972dceac);
        cache_frame_ab2d45c7e0688e65d373ac64972dceac = NULL;
    }

    assertFrameObject(frame_ab2d45c7e0688e65d373ac64972dceac);

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


static PyObject *impl_torch$profiler$profiler$$$function__25__transit_action(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_prev_action = python_pars[1];
    PyObject *par_current_action = python_pars[2];
    PyObject *var_action_list = NULL;
    PyObject *var_action = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_ef708eaa8008bde4d347119d2e1f7d5e;
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
    static struct Nuitka_FrameObject *cache_frame_ef708eaa8008bde4d347119d2e1f7d5e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ef708eaa8008bde4d347119d2e1f7d5e)) {
        Py_XDECREF(cache_frame_ef708eaa8008bde4d347119d2e1f7d5e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ef708eaa8008bde4d347119d2e1f7d5e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ef708eaa8008bde4d347119d2e1f7d5e = MAKE_FUNCTION_FRAME(codeobj_ef708eaa8008bde4d347119d2e1f7d5e, module_torch$profiler$profiler, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ef708eaa8008bde4d347119d2e1f7d5e->m_type_description == NULL);
    frame_ef708eaa8008bde4d347119d2e1f7d5e = cache_frame_ef708eaa8008bde4d347119d2e1f7d5e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ef708eaa8008bde4d347119d2e1f7d5e);
    assert(Py_REFCNT(frame_ef708eaa8008bde4d347119d2e1f7d5e) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[133]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[140]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prev_action);
        tmp_tuple_element_1 = par_prev_action;
        tmp_args_element_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_element_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_current_action);
        tmp_tuple_element_1 = par_current_action;
        PyTuple_SET_ITEM0(tmp_args_element_value_1, 1, tmp_tuple_element_1);
        frame_ef708eaa8008bde4d347119d2e1f7d5e->m_frame.f_lineno = 490;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_action_list == NULL);
        var_action_list = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_action_list);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_action_list);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "ooooo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_action_list);
        tmp_iter_arg_1 = var_action_list;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;
            type_description_1 = "ooooo";
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
                type_description_1 = "ooooo";
                exception_lineno = 492;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_action;
            var_action = tmp_assign_source_4;
            Py_INCREF(var_action);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_action);
        tmp_called_value_2 = var_action;
        frame_ef708eaa8008bde4d347119d2e1f7d5e->m_frame.f_lineno = 493;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 492;
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
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ef708eaa8008bde4d347119d2e1f7d5e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ef708eaa8008bde4d347119d2e1f7d5e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ef708eaa8008bde4d347119d2e1f7d5e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ef708eaa8008bde4d347119d2e1f7d5e,
        type_description_1,
        par_self,
        par_prev_action,
        par_current_action,
        var_action_list,
        var_action
    );


    // Release cached frame if used for exception.
    if (frame_ef708eaa8008bde4d347119d2e1f7d5e == cache_frame_ef708eaa8008bde4d347119d2e1f7d5e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ef708eaa8008bde4d347119d2e1f7d5e);
        cache_frame_ef708eaa8008bde4d347119d2e1f7d5e = NULL;
    }

    assertFrameObject(frame_ef708eaa8008bde4d347119d2e1f7d5e);

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
    Py_XDECREF(var_action_list);
    var_action_list = NULL;
    Py_XDECREF(var_action);
    var_action = NULL;
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

    Py_XDECREF(var_action_list);
    var_action_list = NULL;
    Py_XDECREF(var_action);
    var_action = NULL;
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
    CHECK_OBJECT(par_prev_action);
    Py_DECREF(par_prev_action);
    CHECK_OBJECT(par_current_action);
    Py_DECREF(par_current_action);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prev_action);
    Py_DECREF(par_prev_action);
    CHECK_OBJECT(par_current_action);
    Py_DECREF(par_current_action);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__10_key_averages(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$profiler$profiler$$$function__10_key_averages,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        mod_consts[190],
#endif
        codeobj_71934814f164c23d53114bb516bdd497,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$profiler$profiler,
        mod_consts[51],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__11_events() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$profiler$profiler$$$function__11_events,
        mod_consts[191],
#if PYTHON_VERSION >= 0x300
        mod_consts[192],
#endif
        codeobj_497bae2580f6d6cd7adbed681c6c8bfc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$profiler$profiler,
        mod_consts[53],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__12_add_metadata(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$profiler$profiler$$$function__12_add_metadata,
        mod_consts[195],
#if PYTHON_VERSION >= 0x300
        mod_consts[196],
#endif
        codeobj_1060075374aefe82c28f028da1c5461f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$profiler$profiler,
        mod_consts[58],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__13_add_metadata_json(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$profiler$profiler$$$function__13_add_metadata_json,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[197],
#endif
        codeobj_bdf360d1d234aceb4c470408493edece,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$profiler$profiler,
        mod_consts[59],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__14__get_distributed_info() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$profiler$profiler$$$function__14__get_distributed_info,
        mod_consts[24],
#if PYTHON_VERSION >= 0x300
        mod_consts[198],
#endif
        codeobj_72901a3466c65c15493ac12ee0a1c49c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$profiler$profiler,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__15_schedule(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$profiler$profiler$$$function__15_schedule,
        mod_consts[120],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_88b6bc77f38c9cf324204aa1a0f02008,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_torch$profiler$profiler,
        mod_consts[79],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__15_schedule$$$function__1_schedule_fn(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$profiler$profiler$$$function__15_schedule$$$function__1_schedule_fn,
        mod_consts[74],
#if PYTHON_VERSION >= 0x300
        mod_consts[75],
#endif
        codeobj_0db3b8ef86e53a16cffb518dc5527805,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$profiler$profiler,
        NULL,
        closure,
        5
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__16__default_schedule_fn(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$profiler$profiler$$$function__16__default_schedule_fn,
        mod_consts[122],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1db034ba6be62c2857197ca50d8a6b5f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$profiler$profiler,
        mod_consts[91],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__17_tensorboard_trace_handler(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$profiler$profiler$$$function__17_tensorboard_trace_handler,
        mod_consts[206],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_96ac7b3c356e342160ec0337ccb3e2ff,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$profiler$profiler,
        mod_consts[97],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__17_tensorboard_trace_handler$$$function__1_handler_fn(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$profiler$profiler$$$function__17_tensorboard_trace_handler$$$function__1_handler_fn,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        mod_consts[96],
#endif
        codeobj_3014036b23fd38eb5677f8cf59f6708e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$profiler$profiler,
        NULL,
        closure,
        6
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__18___init__(PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$profiler$profiler$$$function__18___init__,
        mod_consts[118],
#if PYTHON_VERSION >= 0x300
        mod_consts[210],
#endif
        codeobj_2390aa0d3a6e30936eea18b1a97e4a33,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_torch$profiler$profiler,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__19___enter__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$profiler$profiler$$$function__19___enter__,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        mod_consts[211],
#endif
        codeobj_014299843b9f181a748401abe8b12469,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$profiler$profiler,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__1_supported_activities() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$profiler$profiler$$$function__1_supported_activities,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_43ff9e760a39dc65fb330f8974edd240,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$profiler$profiler,
        mod_consts[3],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__20___exit__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$profiler$profiler$$$function__20___exit__,
        mod_consts[29],
#if PYTHON_VERSION >= 0x300
        mod_consts[212],
#endif
        codeobj_d1310394d09c37a382b1c78ec34d20fb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$profiler$profiler,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__21_start() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$profiler$profiler$$$function__21_start,
        mod_consts[134],
#if PYTHON_VERSION >= 0x300
        mod_consts[213],
#endif
        codeobj_5a50cb541b25e3503ce30719143d0d3d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$profiler$profiler,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__22_stop() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$profiler$profiler$$$function__22_stop,
        mod_consts[135],
#if PYTHON_VERSION >= 0x300
        mod_consts[214],
#endif
        codeobj_48fa3072225de6cb22d5b45d66f55007,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$profiler$profiler,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__23_step() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$profiler$profiler$$$function__23_step,
        mod_consts[71],
#if PYTHON_VERSION >= 0x300
        mod_consts[215],
#endif
        codeobj_999c966d6124dc2602bc4b8fc4ff5da7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$profiler$profiler,
        mod_consts[139],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__24__trace_ready() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$profiler$profiler$$$function__24__trace_ready,
        mod_consts[132],
#if PYTHON_VERSION >= 0x300
        mod_consts[216],
#endif
        codeobj_ab2d45c7e0688e65d373ac64972dceac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$profiler$profiler,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__25__transit_action() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$profiler$profiler$$$function__25__transit_action,
        mod_consts[136],
#if PYTHON_VERSION >= 0x300
        mod_consts[217],
#endif
        codeobj_ef708eaa8008bde4d347119d2e1f7d5e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$profiler$profiler,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__2___init__(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$profiler$profiler$$$function__2___init__,
        mod_consts[118],
#if PYTHON_VERSION >= 0x300
        mod_consts[175],
#endif
        codeobj_f080d921f70dd206cb3e2ae57f51ce17,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_torch$profiler$profiler,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__3_start() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$profiler$profiler$$$function__3_start,
        mod_consts[134],
#if PYTHON_VERSION >= 0x300
        mod_consts[176],
#endif
        codeobj_8b2abe1c3666074e2cdb40a000146719,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$profiler$profiler,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__4_stop() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$profiler$profiler$$$function__4_stop,
        mod_consts[135],
#if PYTHON_VERSION >= 0x300
        mod_consts[177],
#endif
        codeobj_497645856fba6eeb13b52957bd2ccae0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$profiler$profiler,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__5_prepare_trace() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$profiler$profiler$$$function__5_prepare_trace,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[178],
#endif
        codeobj_c298d930df327f439df8f3f74e29d66c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$profiler$profiler,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__6_start_trace() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$profiler$profiler$$$function__6_start_trace,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        codeobj_8fb583df0787a8492fcbe7b0f4d7b806,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$profiler$profiler,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__7_stop_trace() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$profiler$profiler$$$function__7_stop_trace,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[180],
#endif
        codeobj_e10fe8782cae925c3933ba9f79a7d8ef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$profiler$profiler,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__8_export_chrome_trace(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$profiler$profiler$$$function__8_export_chrome_trace,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        mod_consts[182],
#endif
        codeobj_75417a2cd5ec17786d4e24f43c589f68,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$profiler$profiler,
        mod_consts[47],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$profiler$profiler$$$function__9_export_stacks(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$profiler$profiler$$$function__9_export_stacks,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        mod_consts[185],
#endif
        codeobj_de4a8d1b3f8ef1262ba386f22238a8b6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$profiler$profiler,
        mod_consts[49],
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

function_impl_code functable_torch$profiler$profiler[] = {
    impl_torch$profiler$profiler$$$function__15_schedule$$$function__1_schedule_fn,
    impl_torch$profiler$profiler$$$function__17_tensorboard_trace_handler$$$function__1_handler_fn,
    impl_torch$profiler$profiler$$$function__1_supported_activities,
    impl_torch$profiler$profiler$$$function__2___init__,
    impl_torch$profiler$profiler$$$function__3_start,
    impl_torch$profiler$profiler$$$function__4_stop,
    impl_torch$profiler$profiler$$$function__5_prepare_trace,
    impl_torch$profiler$profiler$$$function__6_start_trace,
    impl_torch$profiler$profiler$$$function__7_stop_trace,
    impl_torch$profiler$profiler$$$function__8_export_chrome_trace,
    impl_torch$profiler$profiler$$$function__9_export_stacks,
    impl_torch$profiler$profiler$$$function__10_key_averages,
    impl_torch$profiler$profiler$$$function__11_events,
    impl_torch$profiler$profiler$$$function__12_add_metadata,
    impl_torch$profiler$profiler$$$function__13_add_metadata_json,
    impl_torch$profiler$profiler$$$function__14__get_distributed_info,
    impl_torch$profiler$profiler$$$function__15_schedule,
    impl_torch$profiler$profiler$$$function__16__default_schedule_fn,
    impl_torch$profiler$profiler$$$function__17_tensorboard_trace_handler,
    impl_torch$profiler$profiler$$$function__18___init__,
    impl_torch$profiler$profiler$$$function__19___enter__,
    impl_torch$profiler$profiler$$$function__20___exit__,
    impl_torch$profiler$profiler$$$function__21_start,
    impl_torch$profiler$profiler$$$function__22_stop,
    impl_torch$profiler$profiler$$$function__23_step,
    impl_torch$profiler$profiler$$$function__24__trace_ready,
    impl_torch$profiler$profiler$$$function__25__transit_action,
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

    function_impl_code *current = functable_torch$profiler$profiler;
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

    if (offset > sizeof(functable_torch$profiler$profiler) || offset < 0) {
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
        functable_torch$profiler$profiler[offset],
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
        module_torch$profiler$profiler,
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
PyObject *modulecode_torch$profiler$profiler(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torch.profiler.profiler");

    // Store the module for future use.
    module_torch$profiler$profiler = module;

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
        PRINT_STRING("torch.profiler.profiler: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.profiler.profiler: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.profiler.profiler: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorch$profiler$profiler\n");

    moduledict_torch$profiler$profiler = MODULE_DICT(module_torch$profiler$profiler);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torch$profiler$profiler,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torch$profiler$profiler,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[241]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torch$profiler$profiler,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torch$profiler$profiler,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torch$profiler$profiler,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torch$profiler$profiler);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torch$profiler$profiler);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    struct Nuitka_CellObject *outline_2_var___class__ = Nuitka_Cell_Empty();
    PyObject *tmp_class_creation_1__bases = NULL;
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
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_bb7fef1901f22baf493ae566a8b2f7d5;
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
    PyObject *locals_torch$profiler$profiler$$$class__1__KinetoProfile_29 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_b0835a7278bdf3770c9edbda4c462350_2;
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
    PyObject *locals_torch$profiler$profiler$$$class__2_ProfilerAction_186 = NULL;
    struct Nuitka_FrameObject *frame_176e60610f371fa38343dc01a78aa9c9_3;
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
    PyObject *locals_torch$profiler$profiler$$$class__3_profile_262 = NULL;
    struct Nuitka_FrameObject *frame_db88af50f5a75d1adf3933a773d77008_4;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_2);
    }
    frame_bb7fef1901f22baf493ae566a8b2f7d5 = MAKE_MODULE_FRAME(codeobj_bb7fef1901f22baf493ae566a8b2f7d5, module_torch$profiler$profiler);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bb7fef1901f22baf493ae566a8b2f7d5);
    assert(Py_REFCNT(frame_bb7fef1901f22baf493ae566a8b2f7d5) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[143]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[144], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[143]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[145], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[41];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$profiler$profiler;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[61];
        frame_bb7fef1901f22baf493ae566a8b2f7d5->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[27];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torch$profiler$profiler;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[61];
        frame_bb7fef1901f22baf493ae566a8b2f7d5->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[33];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_torch$profiler$profiler;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[61];
        frame_bb7fef1901f22baf493ae566a8b2f7d5->m_frame.f_lineno = 4;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[147];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_torch$profiler$profiler;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[148];
        tmp_level_value_4 = mod_consts[61];
        frame_bb7fef1901f22baf493ae566a8b2f7d5->m_frame.f_lineno = 5;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$profiler$profiler,
                mod_consts[149],
                mod_consts[61]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[149]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        {
            PyObject *hard_module = IMPORT_HARD_FUNCTOOLS();
            tmp_assign_source_9 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[128]);
        }
        assert(!(tmp_assign_source_9 == NULL));
        UPDATE_STRING_DICT1(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_9);
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
                (PyObject *)moduledict_torch$profiler$profiler,
                mod_consts[150],
                mod_consts[61]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[150]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_torch$profiler$profiler,
                mod_consts[151],
                mod_consts[61]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[151]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_torch$profiler$profiler,
                mod_consts[152],
                mod_consts[61]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[152]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_torch$profiler$profiler,
                mod_consts[153],
                mod_consts[61]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[153]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_torch$profiler$profiler,
                mod_consts[154],
                mod_consts[61]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[154]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_torch$profiler$profiler,
                mod_consts[155],
                mod_consts[61]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[155]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_torch$profiler$profiler,
                mod_consts[156],
                mod_consts[61]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[156]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_17);
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
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[157];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_torch$profiler$profiler;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[158];
        tmp_level_value_5 = mod_consts[61];
        frame_bb7fef1901f22baf493ae566a8b2f7d5->m_frame.f_lineno = 8;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_torch$profiler$profiler,
                mod_consts[77],
                mod_consts[61]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[77]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[0];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_torch$profiler$profiler;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = Py_None;
        tmp_level_value_6 = mod_consts[61];
        frame_bb7fef1901f22baf493ae566a8b2f7d5->m_frame.f_lineno = 10;
        tmp_assign_source_19 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[159];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_torch$profiler$profiler;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = Py_None;
        tmp_level_value_7 = mod_consts[61];
        frame_bb7fef1901f22baf493ae566a8b2f7d5->m_frame.f_lineno = 11;
        tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_import_name_from_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_torch$profiler$profiler,
                mod_consts[1],
                mod_consts[61]
            );
        } else {
            tmp_import_name_from_10 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[1]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_torch$profiler$profiler,
                mod_consts[11],
                mod_consts[61]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[11]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[160];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_torch$profiler$profiler;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[161];
        tmp_level_value_8 = mod_consts[61];
        frame_bb7fef1901f22baf493ae566a8b2f7d5->m_frame.f_lineno = 12;
        tmp_assign_source_21 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_21;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_12 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_torch$profiler$profiler,
                mod_consts[17],
                mod_consts[61]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[17]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_13 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_torch$profiler$profiler,
                mod_consts[23],
                mod_consts[61]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[23]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_23);
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
        PyObject *tmp_assign_source_24;


        tmp_assign_source_24 = MAKE_FUNCTION_torch$profiler$profiler$$$function__1_supported_activities();

        UPDATE_STRING_DICT1(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_24);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[162];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_25 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

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
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

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
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[61];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_3;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

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


            exception_lineno = 29;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_27;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[163]);
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
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[163]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_3;
        }
        tmp_tuple_element_1 = mod_consts[164];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_1 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_bb7fef1901f22baf493ae566a8b2f7d5->m_frame.f_lineno = 29;
        tmp_assign_source_28 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_28;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[165]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

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
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[166];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[167];
        tmp_getattr_default_1 = mod_consts[168];
        tmp_tuple_element_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_3;
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
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[167]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_3;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 29;
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
            locals_torch$profiler$profiler$$$class__1__KinetoProfile_29 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[169];
        tmp_res = PyObject_SetItem(locals_torch$profiler$profiler$$$class__1__KinetoProfile_29, mod_consts[170], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[171];
        tmp_res = PyObject_SetItem(locals_torch$profiler$profiler$$$class__1__KinetoProfile_29, mod_consts[141], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[164];
        tmp_res = PyObject_SetItem(locals_torch$profiler$profiler$$$class__1__KinetoProfile_29, mod_consts[172], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_5;
        }
        frame_b0835a7278bdf3770c9edbda4c462350_2 = MAKE_CLASS_FRAME(codeobj_b0835a7278bdf3770c9edbda4c462350, module_torch$profiler$profiler, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_b0835a7278bdf3770c9edbda4c462350_2);
        assert(Py_REFCNT(frame_b0835a7278bdf3770c9edbda4c462350_2) == 2);

        // Framed code:
        {
            PyObject *tmp_kw_defaults_1;
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_3;
            tmp_kw_defaults_1 = DICT_COPY(mod_consts[173]);
            tmp_dict_key_1 = mod_consts[5];
            tmp_expression_value_6 = PyObject_GetItem(locals_torch$profiler$profiler$$$class__1__KinetoProfile_29, mod_consts[155]);

            if (tmp_expression_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[155]);

                    if (unlikely(tmp_expression_value_6 == NULL)) {
                        tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[155]);
                    }

                    if (tmp_expression_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_kw_defaults_1);

                        exception_lineno = 59;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_expression_value_7 = PyObject_GetItem(locals_torch$profiler$profiler$$$class__1__KinetoProfile_29, mod_consts[153]);

            if (tmp_expression_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[153]);

                    if (unlikely(tmp_expression_value_7 == NULL)) {
                        tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[153]);
                    }

                    if (tmp_expression_value_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_kw_defaults_1);
                        Py_DECREF(tmp_expression_value_6);

                        exception_lineno = 59;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_7);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_3 = PyObject_GetItem(locals_torch$profiler$profiler$$$class__1__KinetoProfile_29, mod_consts[17]);

            if (tmp_subscript_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[17]);

                    if (unlikely(tmp_subscript_value_3 == NULL)) {
                        tmp_subscript_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                    }

                    if (tmp_subscript_value_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_kw_defaults_1);
                        Py_DECREF(tmp_expression_value_6);
                        Py_DECREF(tmp_expression_value_7);

                        exception_lineno = 59;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_3);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_3);
            Py_DECREF(tmp_expression_value_7);
            Py_DECREF(tmp_subscript_value_3);
            if (tmp_subscript_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_defaults_1);
                Py_DECREF(tmp_expression_value_6);

                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_2);
            Py_DECREF(tmp_expression_value_6);
            Py_DECREF(tmp_subscript_value_2);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_defaults_1);

                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_1 = _PyDict_NewPresized( 6 );
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[6];
            tmp_dict_value_1 = PyObject_GetItem(locals_torch$profiler$profiler$$$class__1__KinetoProfile_29, mod_consts[174]);

            if (tmp_dict_value_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_1 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_1);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[8];
            tmp_dict_value_1 = PyObject_GetItem(locals_torch$profiler$profiler$$$class__1__KinetoProfile_29, mod_consts[174]);

            if (tmp_dict_value_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_1 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_1);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[9];
            tmp_dict_value_1 = PyObject_GetItem(locals_torch$profiler$profiler$$$class__1__KinetoProfile_29, mod_consts[174]);

            if (tmp_dict_value_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_1 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_1);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[7];
            tmp_dict_value_1 = PyObject_GetItem(locals_torch$profiler$profiler$$$class__1__KinetoProfile_29, mod_consts[174]);

            if (tmp_dict_value_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_1 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_1);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[10];
            tmp_dict_value_1 = PyObject_GetItem(locals_torch$profiler$profiler$$$class__1__KinetoProfile_29, mod_consts[174]);

            if (tmp_dict_value_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_1 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_1);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_torch$profiler$profiler$$$function__2___init__(tmp_kw_defaults_1, tmp_annotations_1);

            tmp_res = PyObject_SetItem(locals_torch$profiler$profiler$$$class__1__KinetoProfile_29, mod_consts[118], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$profiler$profiler$$$function__3_start();

        tmp_res = PyObject_SetItem(locals_torch$profiler$profiler$$$class__1__KinetoProfile_29, mod_consts[134], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$profiler$profiler$$$function__4_stop();

        tmp_res = PyObject_SetItem(locals_torch$profiler$profiler$$$class__1__KinetoProfile_29, mod_consts[135], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$profiler$profiler$$$function__5_prepare_trace();

        tmp_res = PyObject_SetItem(locals_torch$profiler$profiler$$$class__1__KinetoProfile_29, mod_consts[12], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$profiler$profiler$$$function__6_start_trace();

        tmp_res = PyObject_SetItem(locals_torch$profiler$profiler$$$class__1__KinetoProfile_29, mod_consts[13], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$profiler$profiler$$$function__7_stop_trace();

        tmp_res = PyObject_SetItem(locals_torch$profiler$profiler$$$class__1__KinetoProfile_29, mod_consts[14], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_dict_key_2 = mod_consts[98];
            tmp_dict_value_2 = PyObject_GetItem(locals_torch$profiler$profiler$$$class__1__KinetoProfile_29, mod_consts[181]);

            if (tmp_dict_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_2);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_torch$profiler$profiler$$$function__8_export_chrome_trace(tmp_annotations_2);

            tmp_res = PyObject_SetItem(locals_torch$profiler$profiler$$$class__1__KinetoProfile_29, mod_consts[38], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_defaults_1 = mod_consts[183];
            tmp_dict_key_3 = mod_consts[98];
            tmp_dict_value_3 = PyObject_GetItem(locals_torch$profiler$profiler$$$class__1__KinetoProfile_29, mod_consts[181]);

            if (tmp_dict_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_3 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_3);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_3 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[184];
            tmp_dict_value_3 = PyObject_GetItem(locals_torch$profiler$profiler$$$class__1__KinetoProfile_29, mod_consts[181]);

            if (tmp_dict_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_3 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_3);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_torch$profiler$profiler$$$function__9_export_stacks(tmp_defaults_1, tmp_annotations_3);

            tmp_res = PyObject_SetItem(locals_torch$profiler$profiler$$$class__1__KinetoProfile_29, mod_consts[48], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            tmp_defaults_2 = mod_consts[186];
            tmp_dict_key_4 = mod_consts[187];
            tmp_dict_value_4 = PyObject_GetItem(locals_torch$profiler$profiler$$$class__1__KinetoProfile_29, mod_consts[174]);

            if (tmp_dict_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_4 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_4);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_4 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[188];
            tmp_dict_value_4 = PyObject_GetItem(locals_torch$profiler$profiler$$$class__1__KinetoProfile_29, mod_consts[189]);

            if (tmp_dict_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_4 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_4);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_torch$profiler$profiler$$$function__10_key_averages(tmp_defaults_2, tmp_annotations_4);

            tmp_res = PyObject_SetItem(locals_torch$profiler$profiler$$$class__1__KinetoProfile_29, mod_consts[50], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$profiler$profiler$$$function__11_events();

        tmp_res = PyObject_SetItem(locals_torch$profiler$profiler$$$class__1__KinetoProfile_29, mod_consts[191], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            tmp_dict_key_5 = mod_consts[193];
            tmp_dict_value_5 = PyObject_GetItem(locals_torch$profiler$profiler$$$class__1__KinetoProfile_29, mod_consts[181]);

            if (tmp_dict_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_5 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_5);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_5 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[194];
            tmp_dict_value_5 = PyObject_GetItem(locals_torch$profiler$profiler$$$class__1__KinetoProfile_29, mod_consts[181]);

            if (tmp_dict_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_5 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_5);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_torch$profiler$profiler$$$function__12_add_metadata(tmp_annotations_5);

            tmp_res = PyObject_SetItem(locals_torch$profiler$profiler$$$class__1__KinetoProfile_29, mod_consts[195], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            tmp_dict_key_6 = mod_consts[193];
            tmp_dict_value_6 = PyObject_GetItem(locals_torch$profiler$profiler$$$class__1__KinetoProfile_29, mod_consts[181]);

            if (tmp_dict_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_6 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_6 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[194];
            tmp_dict_value_6 = PyObject_GetItem(locals_torch$profiler$profiler$$$class__1__KinetoProfile_29, mod_consts[181]);

            if (tmp_dict_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_6 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_torch$profiler$profiler$$$function__13_add_metadata_json(tmp_annotations_6);

            tmp_res = PyObject_SetItem(locals_torch$profiler$profiler$$$class__1__KinetoProfile_29, mod_consts[25], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$profiler$profiler$$$function__14__get_distributed_info();

        tmp_res = PyObject_SetItem(locals_torch$profiler$profiler$$$class__1__KinetoProfile_29, mod_consts[24], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b0835a7278bdf3770c9edbda4c462350_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b0835a7278bdf3770c9edbda4c462350_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b0835a7278bdf3770c9edbda4c462350_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b0835a7278bdf3770c9edbda4c462350_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_b0835a7278bdf3770c9edbda4c462350_2);

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
            tmp_cmp_expr_right_1 = mod_consts[162];
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto try_except_handler_5;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        tmp_dictset_value = mod_consts[162];
        tmp_res = PyObject_SetItem(locals_torch$profiler$profiler$$$class__1__KinetoProfile_29, mod_consts[199], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_5;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = mod_consts[164];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_torch$profiler$profiler$$$class__1__KinetoProfile_29;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_bb7fef1901f22baf493ae566a8b2f7d5->m_frame.f_lineno = 29;
            tmp_assign_source_31 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

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
        Py_DECREF(locals_torch$profiler$profiler$$$class__1__KinetoProfile_29);
        locals_torch$profiler$profiler$$$class__1__KinetoProfile_29 = NULL;
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

        Py_DECREF(locals_torch$profiler$profiler$$$class__1__KinetoProfile_29);
        locals_torch$profiler$profiler$$$class__1__KinetoProfile_29 = NULL;
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
        exception_lineno = 29;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_30);
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
        PyObject *tmp_tuple_element_4;
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[149]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[149]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto try_except_handler_6;
        }
        tmp_assign_source_32 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_32, 0, tmp_tuple_element_4);
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


            exception_lineno = 186;

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
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

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
        tmp_expression_value_8 = tmp_class_creation_2__bases;
        tmp_subscript_value_4 = mod_consts[61];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_8, tmp_subscript_value_4, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto try_except_handler_6;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

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


            exception_lineno = 186;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_35;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_9 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_9, mod_consts[163]);
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
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_10 = tmp_class_creation_2__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[163]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto try_except_handler_6;
        }
        tmp_tuple_element_5 = mod_consts[73];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_5 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_bb7fef1901f22baf493ae566a8b2f7d5->m_frame.f_lineno = 186;
        tmp_assign_source_36 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_36;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_11 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_11, mod_consts[165]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

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
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[166];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[167];
        tmp_getattr_default_2 = mod_consts[168];
        tmp_tuple_element_6 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto try_except_handler_6;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_12;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_12 == NULL));
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[167]);
            Py_DECREF(tmp_expression_value_12);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto try_except_handler_6;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 186;
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
            locals_torch$profiler$profiler$$$class__2_ProfilerAction_186 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[169];
        tmp_res = PyObject_SetItem(locals_torch$profiler$profiler$$$class__2_ProfilerAction_186, mod_consts[170], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[200];
        tmp_res = PyObject_SetItem(locals_torch$profiler$profiler$$$class__2_ProfilerAction_186, mod_consts[141], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[73];
        tmp_res = PyObject_SetItem(locals_torch$profiler$profiler$$$class__2_ProfilerAction_186, mod_consts[172], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto try_except_handler_8;
        }
        frame_176e60610f371fa38343dc01a78aa9c9_3 = MAKE_CLASS_FRAME(codeobj_176e60610f371fa38343dc01a78aa9c9, module_torch$profiler$profiler, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_176e60610f371fa38343dc01a78aa9c9_3);
        assert(Py_REFCNT(frame_176e60610f371fa38343dc01a78aa9c9_3) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[61];
        tmp_res = PyObject_SetItem(locals_torch$profiler$profiler$$$class__2_ProfilerAction_186, mod_consts[81], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = mod_consts[88];
        tmp_res = PyObject_SetItem(locals_torch$profiler$profiler$$$class__2_ProfilerAction_186, mod_consts[87], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = mod_consts[201];
        tmp_res = PyObject_SetItem(locals_torch$profiler$profiler$$$class__2_ProfilerAction_186, mod_consts[89], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = mod_consts[202];
        tmp_res = PyObject_SetItem(locals_torch$profiler$profiler$$$class__2_ProfilerAction_186, mod_consts[90], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_176e60610f371fa38343dc01a78aa9c9_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_176e60610f371fa38343dc01a78aa9c9_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_176e60610f371fa38343dc01a78aa9c9_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_176e60610f371fa38343dc01a78aa9c9_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_176e60610f371fa38343dc01a78aa9c9_3);

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


                exception_lineno = 186;

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
        tmp_res = PyObject_SetItem(locals_torch$profiler$profiler$$$class__2_ProfilerAction_186, mod_consts[199], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto try_except_handler_8;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_7 = mod_consts[73];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_7 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = locals_torch$profiler$profiler$$$class__2_ProfilerAction_186;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_bb7fef1901f22baf493ae566a8b2f7d5->m_frame.f_lineno = 186;
            tmp_assign_source_39 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;

                goto try_except_handler_8;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_39;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_38 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_38);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_torch$profiler$profiler$$$class__2_ProfilerAction_186);
        locals_torch$profiler$profiler$$$class__2_ProfilerAction_186 = NULL;
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

        Py_DECREF(locals_torch$profiler$profiler$$$class__2_ProfilerAction_186);
        locals_torch$profiler$profiler$$$class__2_ProfilerAction_186 = NULL;
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
        exception_lineno = 186;
        goto try_except_handler_6;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_38);
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
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_kw_defaults_2;
        PyObject *tmp_annotations_7;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        tmp_kw_defaults_2 = DICT_COPY(mod_consts[203]);
        tmp_dict_key_7 = mod_consts[82];
        tmp_dict_value_7 = (PyObject *)&PyLong_Type;
        tmp_annotations_7 = _PyDict_NewPresized( 6 );
        tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[83];
        tmp_dict_value_7 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[84];
        tmp_dict_value_7 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[85];
        tmp_dict_value_7 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[80];
        tmp_dict_value_7 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[72];
        tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[151]);

        if (unlikely(tmp_dict_value_7 == NULL)) {
            tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[151]);
        }

        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_kw_defaults_2);
        Py_DECREF(tmp_annotations_7);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;


        tmp_assign_source_40 = MAKE_FUNCTION_torch$profiler$profiler$$$function__15_schedule(tmp_kw_defaults_2, tmp_annotations_7);

        UPDATE_STRING_DICT1(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_annotations_8;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        tmp_dict_key_8 = mod_consts[204];
        tmp_dict_value_8 = (PyObject *)&PyLong_Type;
        tmp_annotations_8 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[72];
        tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_dict_value_8 == NULL)) {
            tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_dict_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_annotations_8);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;


        tmp_assign_source_41 = MAKE_FUNCTION_torch$profiler$profiler$$$function__16__default_schedule_fn(tmp_annotations_8);

        UPDATE_STRING_DICT1(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_defaults_3;
        PyObject *tmp_annotations_9;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        tmp_defaults_3 = mod_consts[205];
        tmp_dict_key_9 = mod_consts[100];
        tmp_dict_value_9 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_9 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_13;
            PyObject *tmp_subscript_value_5;
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[104];
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[155]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[155]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_5 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_5);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[110];
            tmp_dict_value_9 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_annotations_9);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_42 = MAKE_FUNCTION_torch$profiler$profiler$$$function__17_tensorboard_trace_handler(tmp_defaults_3, tmp_annotations_9);

        UPDATE_STRING_DICT1(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_42);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_tuple_element_8;
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[164]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[164]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto try_except_handler_9;
        }
        tmp_assign_source_43 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_43, 0, tmp_tuple_element_8);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_44 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

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
        tmp_expression_value_14 = tmp_class_creation_3__bases;
        tmp_subscript_value_6 = mod_consts[61];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_14, tmp_subscript_value_6, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto try_except_handler_9;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto try_except_handler_9;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_46 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_46;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_15 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_15, mod_consts[163]);
        tmp_condition_result_10 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_16 = tmp_class_creation_3__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[163]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto try_except_handler_9;
        }
        tmp_tuple_element_9 = mod_consts[16];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_9);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_9 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_9);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_bb7fef1901f22baf493ae566a8b2f7d5->m_frame.f_lineno = 262;
        tmp_assign_source_47 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_47;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_17 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_17, mod_consts[165]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

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
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[166];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[167];
        tmp_getattr_default_3 = mod_consts[168];
        tmp_tuple_element_10 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto try_except_handler_9;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_18;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_18 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_18 == NULL));
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[167]);
            Py_DECREF(tmp_expression_value_18);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_10);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_9;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto try_except_handler_9;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 262;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_9;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_48;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_49;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_torch$profiler$profiler$$$class__3_profile_262 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[169];
        tmp_res = PyObject_SetItem(locals_torch$profiler$profiler$$$class__3_profile_262, mod_consts[170], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto try_except_handler_11;
        }
        tmp_dictset_value = mod_consts[207];
        tmp_res = PyObject_SetItem(locals_torch$profiler$profiler$$$class__3_profile_262, mod_consts[141], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto try_except_handler_11;
        }
        tmp_dictset_value = mod_consts[16];
        tmp_res = PyObject_SetItem(locals_torch$profiler$profiler$$$class__3_profile_262, mod_consts[172], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto try_except_handler_11;
        }
        frame_db88af50f5a75d1adf3933a773d77008_4 = MAKE_CLASS_FRAME(codeobj_db88af50f5a75d1adf3933a773d77008, module_torch$profiler$profiler, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_db88af50f5a75d1adf3933a773d77008_4);
        assert(Py_REFCNT(frame_db88af50f5a75d1adf3933a773d77008_4) == 2);

        // Framed code:
        {
            PyObject *tmp_kw_defaults_3;
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_subscript_value_7;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_subscript_value_8;
            struct Nuitka_CellObject *tmp_closure_1[1];
            tmp_kw_defaults_3 = DICT_COPY(mod_consts[208]);
            tmp_dict_key_10 = mod_consts[5];
            tmp_expression_value_19 = PyObject_GetItem(locals_torch$profiler$profiler$$$class__3_profile_262, mod_consts[155]);

            if (tmp_expression_value_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[155]);

                    if (unlikely(tmp_expression_value_19 == NULL)) {
                        tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[155]);
                    }

                    if (tmp_expression_value_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_kw_defaults_3);

                        exception_lineno = 371;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_19);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_20 = PyObject_GetItem(locals_torch$profiler$profiler$$$class__3_profile_262, mod_consts[153]);

            if (tmp_expression_value_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[153]);

                    if (unlikely(tmp_expression_value_20 == NULL)) {
                        tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[153]);
                    }

                    if (tmp_expression_value_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_kw_defaults_3);
                        Py_DECREF(tmp_expression_value_19);

                        exception_lineno = 371;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_20);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_8 = PyObject_GetItem(locals_torch$profiler$profiler$$$class__3_profile_262, mod_consts[17]);

            if (tmp_subscript_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[17]);

                    if (unlikely(tmp_subscript_value_8 == NULL)) {
                        tmp_subscript_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                    }

                    if (tmp_subscript_value_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_kw_defaults_3);
                        Py_DECREF(tmp_expression_value_19);
                        Py_DECREF(tmp_expression_value_20);

                        exception_lineno = 371;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_subscript_value_8);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_8);
            Py_DECREF(tmp_expression_value_20);
            Py_DECREF(tmp_subscript_value_8);
            if (tmp_subscript_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_defaults_3);
                Py_DECREF(tmp_expression_value_19);

                exception_lineno = 371;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_7);
            Py_DECREF(tmp_expression_value_19);
            Py_DECREF(tmp_subscript_value_7);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_defaults_3);

                exception_lineno = 371;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_annotations_10 = _PyDict_NewPresized( 9 );
            {
                PyObject *tmp_expression_value_21;
                PyObject *tmp_subscript_value_9;
                PyObject *tmp_expression_value_22;
                PyObject *tmp_subscript_value_10;
                PyObject *tmp_tuple_element_11;
                PyObject *tmp_list_element_1;
                PyObject *tmp_expression_value_23;
                PyObject *tmp_subscript_value_11;
                PyObject *tmp_expression_value_24;
                PyObject *tmp_subscript_value_12;
                PyObject *tmp_tuple_element_12;
                PyObject *tmp_expression_value_25;
                PyObject *tmp_subscript_value_13;
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
                Py_DECREF(tmp_dict_value_10);
                assert(!(tmp_res != 0));
                tmp_dict_key_10 = mod_consts[120];
                tmp_expression_value_21 = PyObject_GetItem(locals_torch$profiler$profiler$$$class__3_profile_262, mod_consts[155]);

                if (tmp_expression_value_21 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[155]);

                        if (unlikely(tmp_expression_value_21 == NULL)) {
                            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[155]);
                        }

                        if (tmp_expression_value_21 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 372;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_21);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_expression_value_22 = PyObject_GetItem(locals_torch$profiler$profiler$$$class__3_profile_262, mod_consts[151]);

                if (tmp_expression_value_22 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[151]);

                        if (unlikely(tmp_expression_value_22 == NULL)) {
                            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[151]);
                        }

                        if (tmp_expression_value_22 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_21);

                            exception_lineno = 372;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_22);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_list_element_1 = PyObject_GetItem(locals_torch$profiler$profiler$$$class__3_profile_262, mod_consts[189]);

                if (tmp_list_element_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_list_element_1 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_list_element_1);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_tuple_element_11 = MAKE_LIST_EMPTY(1);
                PyList_SET_ITEM(tmp_tuple_element_11, 0, tmp_list_element_1);
                tmp_subscript_value_10 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_10, 0, tmp_tuple_element_11);
                tmp_tuple_element_11 = PyObject_GetItem(locals_torch$profiler$profiler$$$class__3_profile_262, mod_consts[73]);

                if (tmp_tuple_element_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[73]);

                        if (unlikely(tmp_tuple_element_11 == NULL)) {
                            tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
                        }

                        if (tmp_tuple_element_11 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 372;
                            type_description_2 = "c";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_tuple_element_11);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_10, 1, tmp_tuple_element_11);
                goto tuple_build_noexception_4;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_4:;
                Py_DECREF(tmp_expression_value_21);
                Py_DECREF(tmp_expression_value_22);
                Py_DECREF(tmp_subscript_value_10);
                goto dict_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_4:;
                tmp_subscript_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_10);
                Py_DECREF(tmp_expression_value_22);
                Py_DECREF(tmp_subscript_value_10);
                if (tmp_subscript_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_21);

                    exception_lineno = 372;
                    type_description_2 = "c";
                    goto dict_build_exception_4;
                }
                tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_9);
                Py_DECREF(tmp_expression_value_21);
                Py_DECREF(tmp_subscript_value_9);
                if (tmp_dict_value_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 372;
                    type_description_2 = "c";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
                Py_DECREF(tmp_dict_value_10);
                assert(!(tmp_res != 0));
                tmp_dict_key_10 = mod_consts[124];
                tmp_expression_value_23 = PyObject_GetItem(locals_torch$profiler$profiler$$$class__3_profile_262, mod_consts[155]);

                if (tmp_expression_value_23 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[155]);

                        if (unlikely(tmp_expression_value_23 == NULL)) {
                            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[155]);
                        }

                        if (tmp_expression_value_23 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 373;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_23);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_expression_value_24 = PyObject_GetItem(locals_torch$profiler$profiler$$$class__3_profile_262, mod_consts[151]);

                if (tmp_expression_value_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[151]);

                        if (unlikely(tmp_expression_value_24 == NULL)) {
                            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[151]);
                        }

                        if (tmp_expression_value_24 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_23);

                            exception_lineno = 373;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_24);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_tuple_element_12 = Py_Ellipsis;
                tmp_subscript_value_12 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_subscript_value_12, 0, tmp_tuple_element_12);
                tmp_tuple_element_12 = PyObject_GetItem(locals_torch$profiler$profiler$$$class__3_profile_262, mod_consts[150]);

                if (tmp_tuple_element_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[150]);

                        if (unlikely(tmp_tuple_element_12 == NULL)) {
                            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
                        }

                        if (tmp_tuple_element_12 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 373;
                            type_description_2 = "c";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_tuple_element_12);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_12, 1, tmp_tuple_element_12);
                goto tuple_build_noexception_5;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_5:;
                Py_DECREF(tmp_expression_value_23);
                Py_DECREF(tmp_expression_value_24);
                Py_DECREF(tmp_subscript_value_12);
                goto dict_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_5:;
                tmp_subscript_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_12);
                Py_DECREF(tmp_expression_value_24);
                Py_DECREF(tmp_subscript_value_12);
                if (tmp_subscript_value_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_23);

                    exception_lineno = 373;
                    type_description_2 = "c";
                    goto dict_build_exception_4;
                }
                tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_11);
                Py_DECREF(tmp_expression_value_23);
                Py_DECREF(tmp_subscript_value_11);
                if (tmp_dict_value_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 373;
                    type_description_2 = "c";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
                Py_DECREF(tmp_dict_value_10);
                assert(!(tmp_res != 0));
                tmp_dict_key_10 = mod_consts[6];
                tmp_dict_value_10 = PyObject_GetItem(locals_torch$profiler$profiler$$$class__3_profile_262, mod_consts[174]);

                if (tmp_dict_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_10 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_dict_value_10);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
                Py_DECREF(tmp_dict_value_10);
                assert(!(tmp_res != 0));
                tmp_dict_key_10 = mod_consts[8];
                tmp_dict_value_10 = PyObject_GetItem(locals_torch$profiler$profiler$$$class__3_profile_262, mod_consts[174]);

                if (tmp_dict_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_10 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_dict_value_10);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
                Py_DECREF(tmp_dict_value_10);
                assert(!(tmp_res != 0));
                tmp_dict_key_10 = mod_consts[9];
                tmp_dict_value_10 = PyObject_GetItem(locals_torch$profiler$profiler$$$class__3_profile_262, mod_consts[174]);

                if (tmp_dict_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_10 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_dict_value_10);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
                Py_DECREF(tmp_dict_value_10);
                assert(!(tmp_res != 0));
                tmp_dict_key_10 = mod_consts[7];
                tmp_dict_value_10 = PyObject_GetItem(locals_torch$profiler$profiler$$$class__3_profile_262, mod_consts[174]);

                if (tmp_dict_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_10 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_dict_value_10);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
                Py_DECREF(tmp_dict_value_10);
                assert(!(tmp_res != 0));
                tmp_dict_key_10 = mod_consts[10];
                tmp_dict_value_10 = PyObject_GetItem(locals_torch$profiler$profiler$$$class__3_profile_262, mod_consts[174]);

                if (tmp_dict_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_10 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_dict_value_10);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
                Py_DECREF(tmp_dict_value_10);
                assert(!(tmp_res != 0));
                tmp_dict_key_10 = mod_consts[209];
                tmp_expression_value_25 = PyObject_GetItem(locals_torch$profiler$profiler$$$class__3_profile_262, mod_consts[155]);

                if (tmp_expression_value_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[155]);

                        if (unlikely(tmp_expression_value_25 == NULL)) {
                            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[155]);
                        }

                        if (tmp_expression_value_25 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 380;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_25);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_subscript_value_13 = PyObject_GetItem(locals_torch$profiler$profiler$$$class__3_profile_262, mod_consts[174]);

                if (tmp_subscript_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_13 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_13);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_13);
                Py_DECREF(tmp_expression_value_25);
                Py_DECREF(tmp_subscript_value_13);
                if (tmp_dict_value_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 380;
                    type_description_2 = "c";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
                Py_DECREF(tmp_dict_value_10);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_4;
            // Exception handling pass through code for dict_build:
            dict_build_exception_4:;
            Py_DECREF(tmp_kw_defaults_3);
            Py_DECREF(tmp_annotations_10);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_4:;

            tmp_closure_1[0] = outline_2_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_torch$profiler$profiler$$$function__18___init__(tmp_kw_defaults_3, tmp_annotations_10, tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_torch$profiler$profiler$$$class__3_profile_262, mod_consts[118], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 368;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$profiler$profiler$$$function__19___enter__();

        tmp_res = PyObject_SetItem(locals_torch$profiler$profiler$$$class__3_profile_262, mod_consts[40], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
            type_description_2 = "c";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$profiler$profiler$$$function__20___exit__();

        tmp_res = PyObject_SetItem(locals_torch$profiler$profiler$$$class__3_profile_262, mod_consts[29], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_2 = "c";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$profiler$profiler$$$function__21_start();

        tmp_res = PyObject_SetItem(locals_torch$profiler$profiler$$$class__3_profile_262, mod_consts[134], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_2 = "c";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$profiler$profiler$$$function__22_stop();

        tmp_res = PyObject_SetItem(locals_torch$profiler$profiler$$$class__3_profile_262, mod_consts[135], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_2 = "c";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$profiler$profiler$$$function__23_step();

        tmp_res = PyObject_SetItem(locals_torch$profiler$profiler$$$class__3_profile_262, mod_consts[71], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_2 = "c";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$profiler$profiler$$$function__24__trace_ready();

        tmp_res = PyObject_SetItem(locals_torch$profiler$profiler$$$class__3_profile_262, mod_consts[132], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;
            type_description_2 = "c";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$profiler$profiler$$$function__25__transit_action();

        tmp_res = PyObject_SetItem(locals_torch$profiler$profiler$$$class__3_profile_262, mod_consts[136], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_2 = "c";
            goto frame_exception_exit_4;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_db88af50f5a75d1adf3933a773d77008_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_db88af50f5a75d1adf3933a773d77008_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_db88af50f5a75d1adf3933a773d77008_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_db88af50f5a75d1adf3933a773d77008_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_db88af50f5a75d1adf3933a773d77008_4);

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


                exception_lineno = 262;

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
        tmp_res = PyObject_SetItem(locals_torch$profiler$profiler$$$class__3_profile_262, mod_consts[199], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto try_except_handler_11;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_50;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_6 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_13 = mod_consts[16];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_13 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_13);
            tmp_tuple_element_13 = locals_torch$profiler$profiler$$$class__3_profile_262;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_bb7fef1901f22baf493ae566a8b2f7d5->m_frame.f_lineno = 262;
            tmp_assign_source_50 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;

                goto try_except_handler_11;
            }
            assert(Nuitka_Cell_GET(outline_2_var___class__) == NULL);
            PyCell_SET(outline_2_var___class__, tmp_assign_source_50);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_2_var___class__));
        tmp_assign_source_49 = Nuitka_Cell_GET(outline_2_var___class__);
        Py_INCREF(tmp_assign_source_49);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF(locals_torch$profiler$profiler$$$class__3_profile_262);
        locals_torch$profiler$profiler$$$class__3_profile_262 = NULL;
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

        Py_DECREF(locals_torch$profiler$profiler$$$class__3_profile_262);
        locals_torch$profiler$profiler$$$class__3_profile_262 = NULL;
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
        exception_lineno = 262;
        goto try_except_handler_9;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_49);
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


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bb7fef1901f22baf493ae566a8b2f7d5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bb7fef1901f22baf493ae566a8b2f7d5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bb7fef1901f22baf493ae566a8b2f7d5, exception_lineno);
    }



    assertFrameObject(frame_bb7fef1901f22baf493ae566a8b2f7d5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_4:;
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

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torch.profiler.profiler", false);

    Py_INCREF(module_torch$profiler$profiler);
    return module_torch$profiler$profiler;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$profiler$profiler, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torch$profiler$profiler", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
