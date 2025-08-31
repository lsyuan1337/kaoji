/* Generated code for Python module 'importlib_resources._common'
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

/* The "module_importlib_resources$_common" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_importlib_resources$_common;
PyDictObject *moduledict_importlib_resources$_common;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[128];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[128];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("importlib_resources._common"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 128; i++) {
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
void checkModuleConstants_importlib_resources$_common(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 128; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_a1bee483206c7cc52f0846cdf052a702;
static PyCodeObject *codeobj_ebdda04c55e6c7afa03f1b6e538d6cca;
static PyCodeObject *codeobj_8e1a3035a11327f0a570074972a9b487;
static PyCodeObject *codeobj_59ec10c6aa1c34814a2f9a9534a58ae9;
static PyCodeObject *codeobj_dfb0710489c40f669cf3d6808844bd51;
static PyCodeObject *codeobj_cc92c8b597c5c95dee0a3d8710307619;
static PyCodeObject *codeobj_bdb5420afb24b377e825e1c302d8989e;
static PyCodeObject *codeobj_3d543be7c106053512371a8efe323a57;
static PyCodeObject *codeobj_00821529344a5a20a0b4fb1b54219d3d;
static PyCodeObject *codeobj_87cf5a186d07e591468d451c485ee3f9;
static PyCodeObject *codeobj_70e469daaf0500073d6f1ac01bbdbdb7;
static PyCodeObject *codeobj_3d3a0d2142606acf33a5a5153720515f;
static PyCodeObject *codeobj_f35d9c2847486b113c3e6b5bbd4f5c1c;
static PyCodeObject *codeobj_8c3345b87ee6d0809a97b259f1a885a2;
static PyCodeObject *codeobj_cf93aa93763b6a99d1f669405a0a9853;
static PyCodeObject *codeobj_098a098dce0c3924a60dca60978ea1ac;
static PyCodeObject *codeobj_b963c198e07cad317775eb34f4f55e71;
static PyCodeObject *codeobj_062d019bf010d4eb52dbfd365e130863;
static PyCodeObject *codeobj_84e3b8e1f1c963eb8d986f90a48eebe6;
static PyCodeObject *codeobj_09011b006c37095f2742a83f6fbd19db;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[112]); CHECK_OBJECT(module_filename_obj);
    codeobj_a1bee483206c7cc52f0846cdf052a702 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[113], mod_consts[113], NULL, NULL, 0, 0, 0);
    codeobj_ebdda04c55e6c7afa03f1b6e538d6cca = MAKE_CODE_OBJECT(module_filename_obj, 80, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[71], mod_consts[71], mod_consts[114], NULL, 1, 0, 0);
    codeobj_8e1a3035a11327f0a570074972a9b487 = MAKE_CODE_OBJECT(module_filename_obj, 85, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[71], mod_consts[71], mod_consts[114], NULL, 1, 0, 0);
    codeobj_59ec10c6aa1c34814a2f9a9534a58ae9 = MAKE_CODE_OBJECT(module_filename_obj, 170, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[71], mod_consts[71], mod_consts[115], NULL, 1, 0, 0);
    codeobj_dfb0710489c40f669cf3d6808844bd51 = MAKE_CODE_OBJECT(module_filename_obj, 90, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[24], mod_consts[24], mod_consts[116], NULL, 0, 0, 0);
    codeobj_cc92c8b597c5c95dee0a3d8710307619 = MAKE_CODE_OBJECT(module_filename_obj, 148, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[65], mod_consts[65], mod_consts[115], NULL, 1, 0, 0);
    codeobj_bdb5420afb24b377e825e1c302d8989e = MAKE_CODE_OBJECT(module_filename_obj, 188, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[66], mod_consts[66], mod_consts[117], NULL, 1, 0, 0);
    codeobj_3d543be7c106053512371a8efe323a57 = MAKE_CODE_OBJECT(module_filename_obj, 144, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[115], NULL, 1, 0, 0);
    codeobj_00821529344a5a20a0b4fb1b54219d3d = MAKE_CODE_OBJECT(module_filename_obj, 179, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[74], mod_consts[74], mod_consts[118], NULL, 1, 0, 0);
    codeobj_87cf5a186d07e591468d451c485ee3f9 = MAKE_CODE_OBJECT(module_filename_obj, 117, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[55], mod_consts[55], mod_consts[119], NULL, 2, 1, 0);
    codeobj_70e469daaf0500073d6f1ac01bbdbdb7 = MAKE_CODE_OBJECT(module_filename_obj, 199, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[77], mod_consts[77], mod_consts[120], NULL, 2, 0, 0);
    codeobj_3d3a0d2142606acf33a5a5153720515f = MAKE_CODE_OBJECT(module_filename_obj, 161, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[111], mod_consts[111], mod_consts[115], NULL, 1, 0, 0);
    codeobj_f35d9c2847486b113c3e6b5bbd4f5c1c = MAKE_CODE_OBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[41], mod_consts[41], mod_consts[121], NULL, 1, 0, 0);
    codeobj_8c3345b87ee6d0809a97b259f1a885a2 = MAKE_CODE_OBJECT(module_filename_obj, 107, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[122], NULL, 1, 0, 0);
    codeobj_cf93aa93763b6a99d1f669405a0a9853 = MAKE_CODE_OBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[17], mod_consts[17], mod_consts[122], NULL, 1, 0, 0);
    codeobj_098a098dce0c3924a60dca60978ea1ac = MAKE_CODE_OBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[27], mod_consts[27], mod_consts[123], NULL, 1, 0, 0);
    codeobj_b963c198e07cad317775eb34f4f55e71 = MAKE_CODE_OBJECT(module_filename_obj, 98, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[29], mod_consts[29], mod_consts[123], NULL, 1, 0, 0);
    codeobj_062d019bf010d4eb52dbfd365e130863 = MAKE_CODE_OBJECT(module_filename_obj, 21, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[100], mod_consts[100], mod_consts[124], NULL, 1, 0, 0);
    codeobj_84e3b8e1f1c963eb8d986f90a48eebe6 = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[13], mod_consts[114], NULL, 1, 0, 0);
    codeobj_09011b006c37095f2742a83f6fbd19db = MAKE_CODE_OBJECT(module_filename_obj, 33, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[2], mod_consts[2], mod_consts[125], mod_consts[126], 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_importlib_resources$_common$$$function__9__tempfile$$$genobj__1__tempfile(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_importlib_resources$_common$$$function__13__$$$genobj__1__(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_importlib_resources$_common$$$function__14__temp_path$$$genobj__1__temp_path(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_importlib_resources$_common$$$function__15__temp_dir$$$genobj__1__temp_dir(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_importlib_resources$_common$$$function__10__temp_file();


static PyObject *MAKE_FUNCTION_importlib_resources$_common$$$function__11__is_present_dir(PyObject *annotations);


static PyObject *MAKE_FUNCTION_importlib_resources$_common$$$function__12_as_file();


static PyObject *MAKE_FUNCTION_importlib_resources$_common$$$function__13__();


static PyObject *MAKE_FUNCTION_importlib_resources$_common$$$function__14__temp_path(PyObject *annotations);


static PyObject *MAKE_FUNCTION_importlib_resources$_common$$$function__15__temp_dir();


static PyObject *MAKE_FUNCTION_importlib_resources$_common$$$function__16__write_contents();


static PyObject *MAKE_FUNCTION_importlib_resources$_common$$$function__1_package_to_anchor();


static PyObject *MAKE_FUNCTION_importlib_resources$_common$$$function__1_package_to_anchor$$$function__1_wrapper(PyObject *defaults, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_importlib_resources$_common$$$function__2_files(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_importlib_resources$_common$$$function__3_get_resource_reader(PyObject *annotations);


static PyObject *MAKE_FUNCTION_importlib_resources$_common$$$function__4_resolve(PyObject *annotations);


static PyObject *MAKE_FUNCTION_importlib_resources$_common$$$function__5__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_importlib_resources$_common$$$function__6__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_importlib_resources$_common$$$function__7__infer_caller();


static PyObject *MAKE_FUNCTION_importlib_resources$_common$$$function__7__infer_caller$$$function__1_is_this_file();


static PyObject *MAKE_FUNCTION_importlib_resources$_common$$$function__7__infer_caller$$$function__2_is_wrapper();


static PyObject *MAKE_FUNCTION_importlib_resources$_common$$$function__8_from_package(PyObject *annotations);


static PyObject *MAKE_FUNCTION_importlib_resources$_common$$$function__9__tempfile(PyObject *defaults, PyObject *kw_defaults);


// The module function definitions.
static PyObject *impl_importlib_resources$_common$$$function__1_package_to_anchor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_func = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *var_undefined = Nuitka_Cell_Empty();
    PyObject *var_wrapper = NULL;
    struct Nuitka_FrameObject *frame_062d019bf010d4eb52dbfd365e130863;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_062d019bf010d4eb52dbfd365e130863 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_062d019bf010d4eb52dbfd365e130863)) {
        Py_XDECREF(cache_frame_062d019bf010d4eb52dbfd365e130863);

#if _DEBUG_REFCOUNTS
        if (cache_frame_062d019bf010d4eb52dbfd365e130863 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_062d019bf010d4eb52dbfd365e130863 = MAKE_FUNCTION_FRAME(codeobj_062d019bf010d4eb52dbfd365e130863, module_importlib_resources$_common, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_062d019bf010d4eb52dbfd365e130863->m_type_description == NULL);
    frame_062d019bf010d4eb52dbfd365e130863 = cache_frame_062d019bf010d4eb52dbfd365e130863;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_062d019bf010d4eb52dbfd365e130863);
    assert(Py_REFCNT(frame_062d019bf010d4eb52dbfd365e130863) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = (PyObject *)&PyBaseObject_Type;
        frame_062d019bf010d4eb52dbfd365e130863->m_frame.f_lineno = 31;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "cco";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_undefined) == NULL);
        PyCell_SET(var_undefined, tmp_assign_source_1);

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_1;
        struct Nuitka_CellObject *tmp_closure_1[2];
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        CHECK_OBJECT(Nuitka_Cell_GET(par_func));
        tmp_args_element_value_1 = Nuitka_Cell_GET(par_func);
        frame_062d019bf010d4eb52dbfd365e130863->m_frame.f_lineno = 33;
        tmp_called_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[1], tmp_args_element_value_1);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "cco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_undefined));
        tmp_tuple_element_1 = Nuitka_Cell_GET(var_undefined);
        tmp_defaults_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(Nuitka_Cell_GET(var_undefined));
        tmp_tuple_element_1 = Nuitka_Cell_GET(var_undefined);
        PyTuple_SET_ITEM0(tmp_defaults_1, 1, tmp_tuple_element_1);

        tmp_closure_1[0] = par_func;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = var_undefined;
        Py_INCREF(tmp_closure_1[1]);

        tmp_args_element_value_2 = MAKE_FUNCTION_importlib_resources$_common$$$function__1_package_to_anchor$$$function__1_wrapper(tmp_defaults_1, tmp_closure_1);

        frame_062d019bf010d4eb52dbfd365e130863->m_frame.f_lineno = 33;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "cco";
            goto frame_exception_exit_1;
        }
        assert(var_wrapper == NULL);
        var_wrapper = tmp_assign_source_2;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_062d019bf010d4eb52dbfd365e130863, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_062d019bf010d4eb52dbfd365e130863->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_062d019bf010d4eb52dbfd365e130863, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_062d019bf010d4eb52dbfd365e130863,
        type_description_1,
        par_func,
        var_undefined,
        var_wrapper
    );


    // Release cached frame if used for exception.
    if (frame_062d019bf010d4eb52dbfd365e130863 == cache_frame_062d019bf010d4eb52dbfd365e130863) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_062d019bf010d4eb52dbfd365e130863);
        cache_frame_062d019bf010d4eb52dbfd365e130863 = NULL;
    }

    assertFrameObject(frame_062d019bf010d4eb52dbfd365e130863);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_wrapper);
    tmp_return_value = var_wrapper;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_undefined);
    Py_DECREF(var_undefined);
    var_undefined = NULL;
    CHECK_OBJECT(var_wrapper);
    Py_DECREF(var_wrapper);
    var_wrapper = NULL;
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

    CHECK_OBJECT(var_undefined);
    Py_DECREF(var_undefined);
    var_undefined = NULL;
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
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_importlib_resources$_common$$$function__1_package_to_anchor$$$function__1_wrapper(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_anchor = python_pars[0];
    PyObject *par_package = python_pars[1];
    struct Nuitka_FrameObject *frame_09011b006c37095f2742a83f6fbd19db;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_09011b006c37095f2742a83f6fbd19db = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_09011b006c37095f2742a83f6fbd19db)) {
        Py_XDECREF(cache_frame_09011b006c37095f2742a83f6fbd19db);

#if _DEBUG_REFCOUNTS
        if (cache_frame_09011b006c37095f2742a83f6fbd19db == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_09011b006c37095f2742a83f6fbd19db = MAKE_FUNCTION_FRAME(codeobj_09011b006c37095f2742a83f6fbd19db, module_importlib_resources$_common, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_09011b006c37095f2742a83f6fbd19db->m_type_description == NULL);
    frame_09011b006c37095f2742a83f6fbd19db = cache_frame_09011b006c37095f2742a83f6fbd19db;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_09011b006c37095f2742a83f6fbd19db);
    assert(Py_REFCNT(frame_09011b006c37095f2742a83f6fbd19db) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_package);
        tmp_cmp_expr_left_1 = par_package;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 35;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
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
        CHECK_OBJECT(par_anchor);
        tmp_cmp_expr_left_2 = par_anchor;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 36;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_2 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 37;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_anchor);
        tmp_args_element_value_1 = par_anchor;
        CHECK_OBJECT(par_package);
        tmp_args_element_value_2 = par_package;
        frame_09011b006c37095f2742a83f6fbd19db->m_frame.f_lineno = 37;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[8]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[9];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oocc";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[11]);
        frame_09011b006c37095f2742a83f6fbd19db->m_frame.f_lineno = 38;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 43;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_package);
        tmp_args_element_value_3 = par_package;
        frame_09011b006c37095f2742a83f6fbd19db->m_frame.f_lineno = 43;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_anchor);
        tmp_cmp_expr_left_3 = par_anchor;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 44;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_3 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_4;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 45;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_4 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_09011b006c37095f2742a83f6fbd19db->m_frame.f_lineno = 45;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_3:;
    branch_end_1:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_4;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 46;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_5 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_anchor);
        tmp_args_element_value_4 = par_anchor;
        frame_09011b006c37095f2742a83f6fbd19db->m_frame.f_lineno = 46;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_09011b006c37095f2742a83f6fbd19db, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_09011b006c37095f2742a83f6fbd19db->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_09011b006c37095f2742a83f6fbd19db, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_09011b006c37095f2742a83f6fbd19db,
        type_description_1,
        par_anchor,
        par_package,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_09011b006c37095f2742a83f6fbd19db == cache_frame_09011b006c37095f2742a83f6fbd19db) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_09011b006c37095f2742a83f6fbd19db);
        cache_frame_09011b006c37095f2742a83f6fbd19db = NULL;
    }

    assertFrameObject(frame_09011b006c37095f2742a83f6fbd19db);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_anchor);
    Py_DECREF(par_anchor);
    CHECK_OBJECT(par_package);
    Py_DECREF(par_package);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_anchor);
    Py_DECREF(par_anchor);
    CHECK_OBJECT(par_package);
    Py_DECREF(par_package);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_importlib_resources$_common$$$function__2_files(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_anchor = python_pars[0];
    struct Nuitka_FrameObject *frame_f35d9c2847486b113c3e6b5bbd4f5c1c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f35d9c2847486b113c3e6b5bbd4f5c1c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f35d9c2847486b113c3e6b5bbd4f5c1c)) {
        Py_XDECREF(cache_frame_f35d9c2847486b113c3e6b5bbd4f5c1c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f35d9c2847486b113c3e6b5bbd4f5c1c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f35d9c2847486b113c3e6b5bbd4f5c1c = MAKE_FUNCTION_FRAME(codeobj_f35d9c2847486b113c3e6b5bbd4f5c1c, module_importlib_resources$_common, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f35d9c2847486b113c3e6b5bbd4f5c1c->m_type_description == NULL);
    frame_f35d9c2847486b113c3e6b5bbd4f5c1c = cache_frame_f35d9c2847486b113c3e6b5bbd4f5c1c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f35d9c2847486b113c3e6b5bbd4f5c1c);
    assert(Py_REFCNT(frame_f35d9c2847486b113c3e6b5bbd4f5c1c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_anchor);
        tmp_args_element_value_2 = par_anchor;
        frame_f35d9c2847486b113c3e6b5bbd4f5c1c->m_frame.f_lineno = 56;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_f35d9c2847486b113c3e6b5bbd4f5c1c->m_frame.f_lineno = 56;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
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
        exception_tb = MAKE_TRACEBACK(frame_f35d9c2847486b113c3e6b5bbd4f5c1c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f35d9c2847486b113c3e6b5bbd4f5c1c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f35d9c2847486b113c3e6b5bbd4f5c1c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f35d9c2847486b113c3e6b5bbd4f5c1c,
        type_description_1,
        par_anchor
    );


    // Release cached frame if used for exception.
    if (frame_f35d9c2847486b113c3e6b5bbd4f5c1c == cache_frame_f35d9c2847486b113c3e6b5bbd4f5c1c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f35d9c2847486b113c3e6b5bbd4f5c1c);
        cache_frame_f35d9c2847486b113c3e6b5bbd4f5c1c = NULL;
    }

    assertFrameObject(frame_f35d9c2847486b113c3e6b5bbd4f5c1c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_anchor);
    Py_DECREF(par_anchor);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_anchor);
    Py_DECREF(par_anchor);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_importlib_resources$_common$$$function__3_get_resource_reader(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_package = python_pars[0];
    PyObject *var_spec = NULL;
    PyObject *var_reader = NULL;
    struct Nuitka_FrameObject *frame_cf93aa93763b6a99d1f669405a0a9853;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_cf93aa93763b6a99d1f669405a0a9853 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_cf93aa93763b6a99d1f669405a0a9853)) {
        Py_XDECREF(cache_frame_cf93aa93763b6a99d1f669405a0a9853);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cf93aa93763b6a99d1f669405a0a9853 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cf93aa93763b6a99d1f669405a0a9853 = MAKE_FUNCTION_FRAME(codeobj_cf93aa93763b6a99d1f669405a0a9853, module_importlib_resources$_common, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cf93aa93763b6a99d1f669405a0a9853->m_type_description == NULL);
    frame_cf93aa93763b6a99d1f669405a0a9853 = cache_frame_cf93aa93763b6a99d1f669405a0a9853;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cf93aa93763b6a99d1f669405a0a9853);
    assert(Py_REFCNT(frame_cf93aa93763b6a99d1f669405a0a9853) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_package);
        tmp_expression_value_1 = par_package;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[15]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_spec == NULL);
        var_spec = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT(var_spec);
        tmp_expression_value_2 = var_spec;
        tmp_getattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[16]);
        if (tmp_getattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_getattr_attr_1 = mod_consts[17];
        tmp_getattr_default_1 = Py_None;
        tmp_assign_source_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        Py_DECREF(tmp_getattr_target_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_reader == NULL);
        var_reader = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_reader);
        tmp_cmp_expr_left_1 = var_reader;
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
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_reader);
        tmp_called_value_1 = var_reader;
        CHECK_OBJECT(var_spec);
        tmp_expression_value_3 = var_spec;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[18]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_cf93aa93763b6a99d1f669405a0a9853->m_frame.f_lineno = 72;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cf93aa93763b6a99d1f669405a0a9853, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cf93aa93763b6a99d1f669405a0a9853->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cf93aa93763b6a99d1f669405a0a9853, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cf93aa93763b6a99d1f669405a0a9853,
        type_description_1,
        par_package,
        var_spec,
        var_reader
    );


    // Release cached frame if used for exception.
    if (frame_cf93aa93763b6a99d1f669405a0a9853 == cache_frame_cf93aa93763b6a99d1f669405a0a9853) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cf93aa93763b6a99d1f669405a0a9853);
        cache_frame_cf93aa93763b6a99d1f669405a0a9853 = NULL;
    }

    assertFrameObject(frame_cf93aa93763b6a99d1f669405a0a9853);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_spec);
    Py_DECREF(var_spec);
    var_spec = NULL;
    Py_XDECREF(var_reader);
    var_reader = NULL;
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

    Py_XDECREF(var_spec);
    var_spec = NULL;
    Py_XDECREF(var_reader);
    var_reader = NULL;
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
    CHECK_OBJECT(par_package);
    Py_DECREF(par_package);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_package);
    Py_DECREF(par_package);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_importlib_resources$_common$$$function__4_resolve(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cand = python_pars[0];
    struct Nuitka_FrameObject *frame_84e3b8e1f1c963eb8d986f90a48eebe6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_84e3b8e1f1c963eb8d986f90a48eebe6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_84e3b8e1f1c963eb8d986f90a48eebe6)) {
        Py_XDECREF(cache_frame_84e3b8e1f1c963eb8d986f90a48eebe6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_84e3b8e1f1c963eb8d986f90a48eebe6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_84e3b8e1f1c963eb8d986f90a48eebe6 = MAKE_FUNCTION_FRAME(codeobj_84e3b8e1f1c963eb8d986f90a48eebe6, module_importlib_resources$_common, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_84e3b8e1f1c963eb8d986f90a48eebe6->m_type_description == NULL);
    frame_84e3b8e1f1c963eb8d986f90a48eebe6 = cache_frame_84e3b8e1f1c963eb8d986f90a48eebe6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_84e3b8e1f1c963eb8d986f90a48eebe6);
    assert(Py_REFCNT(frame_84e3b8e1f1c963eb8d986f90a48eebe6) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[22]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cand);
        tmp_args_element_value_2 = par_cand;
        frame_84e3b8e1f1c963eb8d986f90a48eebe6->m_frame.f_lineno = 77;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
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
        exception_tb = MAKE_TRACEBACK(frame_84e3b8e1f1c963eb8d986f90a48eebe6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_84e3b8e1f1c963eb8d986f90a48eebe6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_84e3b8e1f1c963eb8d986f90a48eebe6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_84e3b8e1f1c963eb8d986f90a48eebe6,
        type_description_1,
        par_cand
    );


    // Release cached frame if used for exception.
    if (frame_84e3b8e1f1c963eb8d986f90a48eebe6 == cache_frame_84e3b8e1f1c963eb8d986f90a48eebe6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_84e3b8e1f1c963eb8d986f90a48eebe6);
        cache_frame_84e3b8e1f1c963eb8d986f90a48eebe6 = NULL;
    }

    assertFrameObject(frame_84e3b8e1f1c963eb8d986f90a48eebe6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cand);
    Py_DECREF(par_cand);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cand);
    Py_DECREF(par_cand);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_importlib_resources$_common$$$function__5__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cand = python_pars[0];
    struct Nuitka_FrameObject *frame_ebdda04c55e6c7afa03f1b6e538d6cca;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ebdda04c55e6c7afa03f1b6e538d6cca = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ebdda04c55e6c7afa03f1b6e538d6cca)) {
        Py_XDECREF(cache_frame_ebdda04c55e6c7afa03f1b6e538d6cca);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ebdda04c55e6c7afa03f1b6e538d6cca == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ebdda04c55e6c7afa03f1b6e538d6cca = MAKE_FUNCTION_FRAME(codeobj_ebdda04c55e6c7afa03f1b6e538d6cca, module_importlib_resources$_common, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ebdda04c55e6c7afa03f1b6e538d6cca->m_type_description == NULL);
    frame_ebdda04c55e6c7afa03f1b6e538d6cca = cache_frame_ebdda04c55e6c7afa03f1b6e538d6cca;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ebdda04c55e6c7afa03f1b6e538d6cca);
    assert(Py_REFCNT(frame_ebdda04c55e6c7afa03f1b6e538d6cca) == 2);

    // Framed code:
    {
        PyObject *tmp_name_value_1;
        CHECK_OBJECT(par_cand);
        tmp_name_value_1 = par_cand;
        frame_ebdda04c55e6c7afa03f1b6e538d6cca->m_frame.f_lineno = 82;
        {
            PyObject *hard_module = IMPORT_HARD_IMPORTLIB();
            PyObject *import_module_func = LOOKUP_ATTRIBUTE(hard_module, mod_consts[23]);
            tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(import_module_func, tmp_name_value_1);
            Py_DECREF(import_module_func);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
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
        exception_tb = MAKE_TRACEBACK(frame_ebdda04c55e6c7afa03f1b6e538d6cca, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ebdda04c55e6c7afa03f1b6e538d6cca->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ebdda04c55e6c7afa03f1b6e538d6cca, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ebdda04c55e6c7afa03f1b6e538d6cca,
        type_description_1,
        par_cand
    );


    // Release cached frame if used for exception.
    if (frame_ebdda04c55e6c7afa03f1b6e538d6cca == cache_frame_ebdda04c55e6c7afa03f1b6e538d6cca) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ebdda04c55e6c7afa03f1b6e538d6cca);
        cache_frame_ebdda04c55e6c7afa03f1b6e538d6cca = NULL;
    }

    assertFrameObject(frame_ebdda04c55e6c7afa03f1b6e538d6cca);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cand);
    Py_DECREF(par_cand);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cand);
    Py_DECREF(par_cand);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_importlib_resources$_common$$$function__6__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cand = python_pars[0];
    struct Nuitka_FrameObject *frame_8e1a3035a11327f0a570074972a9b487;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8e1a3035a11327f0a570074972a9b487 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8e1a3035a11327f0a570074972a9b487)) {
        Py_XDECREF(cache_frame_8e1a3035a11327f0a570074972a9b487);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8e1a3035a11327f0a570074972a9b487 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8e1a3035a11327f0a570074972a9b487 = MAKE_FUNCTION_FRAME(codeobj_8e1a3035a11327f0a570074972a9b487, module_importlib_resources$_common, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8e1a3035a11327f0a570074972a9b487->m_type_description == NULL);
    frame_8e1a3035a11327f0a570074972a9b487 = cache_frame_8e1a3035a11327f0a570074972a9b487;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8e1a3035a11327f0a570074972a9b487);
    assert(Py_REFCNT(frame_8e1a3035a11327f0a570074972a9b487) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_8e1a3035a11327f0a570074972a9b487->m_frame.f_lineno = 87;
        tmp_expression_value_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[25]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[26];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_8e1a3035a11327f0a570074972a9b487->m_frame.f_lineno = 87;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
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
        exception_tb = MAKE_TRACEBACK(frame_8e1a3035a11327f0a570074972a9b487, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8e1a3035a11327f0a570074972a9b487->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8e1a3035a11327f0a570074972a9b487, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8e1a3035a11327f0a570074972a9b487,
        type_description_1,
        par_cand
    );


    // Release cached frame if used for exception.
    if (frame_8e1a3035a11327f0a570074972a9b487 == cache_frame_8e1a3035a11327f0a570074972a9b487) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8e1a3035a11327f0a570074972a9b487);
        cache_frame_8e1a3035a11327f0a570074972a9b487 = NULL;
    }

    assertFrameObject(frame_8e1a3035a11327f0a570074972a9b487);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cand);
    Py_DECREF(par_cand);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cand);
    Py_DECREF(par_cand);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_importlib_resources$_common$$$function__7__infer_caller(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_is_this_file = NULL;
    PyObject *var_is_wrapper = NULL;
    PyObject *var_not_this_file = NULL;
    PyObject *var_callers = NULL;
    struct Nuitka_FrameObject *frame_dfb0710489c40f669cf3d6808844bd51;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_dfb0710489c40f669cf3d6808844bd51 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;


        tmp_assign_source_1 = MAKE_FUNCTION_importlib_resources$_common$$$function__7__infer_caller$$$function__1_is_this_file();

        assert(var_is_this_file == NULL);
        var_is_this_file = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;


        tmp_assign_source_2 = MAKE_FUNCTION_importlib_resources$_common$$$function__7__infer_caller$$$function__2_is_wrapper();

        assert(var_is_wrapper == NULL);
        var_is_wrapper = tmp_assign_source_2;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_dfb0710489c40f669cf3d6808844bd51)) {
        Py_XDECREF(cache_frame_dfb0710489c40f669cf3d6808844bd51);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dfb0710489c40f669cf3d6808844bd51 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dfb0710489c40f669cf3d6808844bd51 = MAKE_FUNCTION_FRAME(codeobj_dfb0710489c40f669cf3d6808844bd51, module_importlib_resources$_common, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dfb0710489c40f669cf3d6808844bd51->m_type_description == NULL);
    frame_dfb0710489c40f669cf3d6808844bd51 = cache_frame_dfb0710489c40f669cf3d6808844bd51;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_dfb0710489c40f669cf3d6808844bd51);
    assert(Py_REFCNT(frame_dfb0710489c40f669cf3d6808844bd51) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_instance_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[32]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_is_this_file);
        tmp_args_element_value_1 = var_is_this_file;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 101;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_dfb0710489c40f669cf3d6808844bd51->m_frame.f_lineno = 101;
        tmp_args_element_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[34]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 101;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_dfb0710489c40f669cf3d6808844bd51->m_frame.f_lineno = 101;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_not_this_file == NULL);
        var_not_this_file = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_is_wrapper);
        tmp_args_element_value_3 = var_is_wrapper;
        CHECK_OBJECT(var_not_this_file);
        tmp_args_element_value_4 = var_not_this_file;
        frame_dfb0710489c40f669cf3d6808844bd51->m_frame.f_lineno = 103;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[32],
                call_args
            );
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_callers == NULL);
        var_callers = tmp_assign_source_4;
    }
    {
        PyObject *tmp_expression_value_2;
        PyObject *tmp_value_value_1;
        CHECK_OBJECT(var_callers);
        tmp_value_value_1 = var_callers;
        tmp_expression_value_2 = ITERATOR_NEXT(tmp_value_value_1);
        if (tmp_expression_value_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooo";
            exception_lineno = 104;
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[35]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dfb0710489c40f669cf3d6808844bd51, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dfb0710489c40f669cf3d6808844bd51->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dfb0710489c40f669cf3d6808844bd51, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dfb0710489c40f669cf3d6808844bd51,
        type_description_1,
        var_is_this_file,
        var_is_wrapper,
        var_not_this_file,
        var_callers
    );


    // Release cached frame if used for exception.
    if (frame_dfb0710489c40f669cf3d6808844bd51 == cache_frame_dfb0710489c40f669cf3d6808844bd51) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dfb0710489c40f669cf3d6808844bd51);
        cache_frame_dfb0710489c40f669cf3d6808844bd51 = NULL;
    }

    assertFrameObject(frame_dfb0710489c40f669cf3d6808844bd51);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_is_this_file);
    Py_DECREF(var_is_this_file);
    var_is_this_file = NULL;
    CHECK_OBJECT(var_is_wrapper);
    Py_DECREF(var_is_wrapper);
    var_is_wrapper = NULL;
    CHECK_OBJECT(var_not_this_file);
    Py_DECREF(var_not_this_file);
    var_not_this_file = NULL;
    CHECK_OBJECT(var_callers);
    Py_DECREF(var_callers);
    var_callers = NULL;
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

    CHECK_OBJECT(var_is_this_file);
    Py_DECREF(var_is_this_file);
    var_is_this_file = NULL;
    CHECK_OBJECT(var_is_wrapper);
    Py_DECREF(var_is_wrapper);
    var_is_wrapper = NULL;
    Py_XDECREF(var_not_this_file);
    var_not_this_file = NULL;
    Py_XDECREF(var_callers);
    var_callers = NULL;
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


static PyObject *impl_importlib_resources$_common$$$function__7__infer_caller$$$function__1_is_this_file(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_frame_info = python_pars[0];
    struct Nuitka_FrameObject *frame_098a098dce0c3924a60dca60978ea1ac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_098a098dce0c3924a60dca60978ea1ac = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_098a098dce0c3924a60dca60978ea1ac)) {
        Py_XDECREF(cache_frame_098a098dce0c3924a60dca60978ea1ac);

#if _DEBUG_REFCOUNTS
        if (cache_frame_098a098dce0c3924a60dca60978ea1ac == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_098a098dce0c3924a60dca60978ea1ac = MAKE_FUNCTION_FRAME(codeobj_098a098dce0c3924a60dca60978ea1ac, module_importlib_resources$_common, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_098a098dce0c3924a60dca60978ea1ac->m_type_description == NULL);
    frame_098a098dce0c3924a60dca60978ea1ac = cache_frame_098a098dce0c3924a60dca60978ea1ac;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_098a098dce0c3924a60dca60978ea1ac);
    assert(Py_REFCNT(frame_098a098dce0c3924a60dca60978ea1ac) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_frame_info);
        tmp_expression_value_1 = par_frame_info;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[37]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 96;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
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
        exception_tb = MAKE_TRACEBACK(frame_098a098dce0c3924a60dca60978ea1ac, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_098a098dce0c3924a60dca60978ea1ac->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_098a098dce0c3924a60dca60978ea1ac, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_098a098dce0c3924a60dca60978ea1ac,
        type_description_1,
        par_frame_info
    );


    // Release cached frame if used for exception.
    if (frame_098a098dce0c3924a60dca60978ea1ac == cache_frame_098a098dce0c3924a60dca60978ea1ac) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_098a098dce0c3924a60dca60978ea1ac);
        cache_frame_098a098dce0c3924a60dca60978ea1ac = NULL;
    }

    assertFrameObject(frame_098a098dce0c3924a60dca60978ea1ac);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_frame_info);
    Py_DECREF(par_frame_info);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_frame_info);
    Py_DECREF(par_frame_info);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_importlib_resources$_common$$$function__7__infer_caller$$$function__2_is_wrapper(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_frame_info = python_pars[0];
    struct Nuitka_FrameObject *frame_b963c198e07cad317775eb34f4f55e71;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b963c198e07cad317775eb34f4f55e71 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b963c198e07cad317775eb34f4f55e71)) {
        Py_XDECREF(cache_frame_b963c198e07cad317775eb34f4f55e71);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b963c198e07cad317775eb34f4f55e71 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b963c198e07cad317775eb34f4f55e71 = MAKE_FUNCTION_FRAME(codeobj_b963c198e07cad317775eb34f4f55e71, module_importlib_resources$_common, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b963c198e07cad317775eb34f4f55e71->m_type_description == NULL);
    frame_b963c198e07cad317775eb34f4f55e71 = cache_frame_b963c198e07cad317775eb34f4f55e71;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b963c198e07cad317775eb34f4f55e71);
    assert(Py_REFCNT(frame_b963c198e07cad317775eb34f4f55e71) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_frame_info);
        tmp_expression_value_1 = par_frame_info;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[39]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
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
        exception_tb = MAKE_TRACEBACK(frame_b963c198e07cad317775eb34f4f55e71, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b963c198e07cad317775eb34f4f55e71->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b963c198e07cad317775eb34f4f55e71, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b963c198e07cad317775eb34f4f55e71,
        type_description_1,
        par_frame_info
    );


    // Release cached frame if used for exception.
    if (frame_b963c198e07cad317775eb34f4f55e71 == cache_frame_b963c198e07cad317775eb34f4f55e71) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b963c198e07cad317775eb34f4f55e71);
        cache_frame_b963c198e07cad317775eb34f4f55e71 = NULL;
    }

    assertFrameObject(frame_b963c198e07cad317775eb34f4f55e71);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_frame_info);
    Py_DECREF(par_frame_info);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_frame_info);
    Py_DECREF(par_frame_info);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_importlib_resources$_common$$$function__8_from_package(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_package = python_pars[0];
    PyObject *var_spec = NULL;
    PyObject *var_reader = NULL;
    struct Nuitka_FrameObject *frame_8c3345b87ee6d0809a97b259f1a885a2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8c3345b87ee6d0809a97b259f1a885a2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8c3345b87ee6d0809a97b259f1a885a2)) {
        Py_XDECREF(cache_frame_8c3345b87ee6d0809a97b259f1a885a2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8c3345b87ee6d0809a97b259f1a885a2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8c3345b87ee6d0809a97b259f1a885a2 = MAKE_FUNCTION_FRAME(codeobj_8c3345b87ee6d0809a97b259f1a885a2, module_importlib_resources$_common, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8c3345b87ee6d0809a97b259f1a885a2->m_type_description == NULL);
    frame_8c3345b87ee6d0809a97b259f1a885a2 = cache_frame_8c3345b87ee6d0809a97b259f1a885a2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8c3345b87ee6d0809a97b259f1a885a2);
    assert(Py_REFCNT(frame_8c3345b87ee6d0809a97b259f1a885a2) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_package);
        tmp_args_element_value_1 = par_package;
        frame_8c3345b87ee6d0809a97b259f1a885a2->m_frame.f_lineno = 112;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_spec == NULL);
        var_spec = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_spec);
        tmp_expression_value_2 = var_spec;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[16]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[17]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_spec);
        tmp_expression_value_3 = var_spec;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[18]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 113;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_8c3345b87ee6d0809a97b259f1a885a2->m_frame.f_lineno = 113;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_reader == NULL);
        var_reader = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_reader);
        tmp_called_instance_1 = var_reader;
        frame_8c3345b87ee6d0809a97b259f1a885a2->m_frame.f_lineno = 114;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[41]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8c3345b87ee6d0809a97b259f1a885a2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8c3345b87ee6d0809a97b259f1a885a2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8c3345b87ee6d0809a97b259f1a885a2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8c3345b87ee6d0809a97b259f1a885a2,
        type_description_1,
        par_package,
        var_spec,
        var_reader
    );


    // Release cached frame if used for exception.
    if (frame_8c3345b87ee6d0809a97b259f1a885a2 == cache_frame_8c3345b87ee6d0809a97b259f1a885a2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8c3345b87ee6d0809a97b259f1a885a2);
        cache_frame_8c3345b87ee6d0809a97b259f1a885a2 = NULL;
    }

    assertFrameObject(frame_8c3345b87ee6d0809a97b259f1a885a2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_spec);
    Py_DECREF(var_spec);
    var_spec = NULL;
    CHECK_OBJECT(var_reader);
    Py_DECREF(var_reader);
    var_reader = NULL;
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

    Py_XDECREF(var_spec);
    var_spec = NULL;
    Py_XDECREF(var_reader);
    var_reader = NULL;
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
    CHECK_OBJECT(par_package);
    Py_DECREF(par_package);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_package);
    Py_DECREF(par_package);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_importlib_resources$_common$$$function__9__tempfile(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_reader = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_suffix = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par__os_remove = Nuitka_Cell_New1(python_pars[2]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        struct Nuitka_CellObject *tmp_closure_1[3];

        tmp_closure_1[0] = par__os_remove;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_reader;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_suffix;
        Py_INCREF(tmp_closure_1[2]);

        tmp_return_value = MAKE_GENERATOR_importlib_resources$_common$$$function__9__tempfile$$$genobj__1__tempfile(tmp_closure_1);

        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_reader);
    Py_DECREF(par_reader);
    par_reader = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_suffix);
    Py_DECREF(par_suffix);
    CHECK_OBJECT(par__os_remove);
    Py_DECREF(par__os_remove);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct importlib_resources$_common$$$function__9__tempfile$$$genobj__1__tempfile_locals {
    PyObject *var_fd;
    PyObject *var_raw_path;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__source_iter;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    bool tmp_result;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    int exception_keeper_lineno_5;
    struct Nuitka_ExceptionStackItem exception_preserved_3;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    int exception_keeper_lineno_6;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    int tmp_res;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    int exception_keeper_lineno_11;
};

static PyObject *importlib_resources$_common$$$function__9__tempfile$$$genobj__1__tempfile_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct importlib_resources$_common$$$function__9__tempfile$$$genobj__1__tempfile_locals *generator_heap = (struct importlib_resources$_common$$$function__9__tempfile$$$genobj__1__tempfile_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_fd = NULL;
    generator_heap->var_raw_path = NULL;
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_87cf5a186d07e591468d451c485ee3f9, module_importlib_resources$_common, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 129;
            generator_heap->type_description_1 = "cccoo";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[44]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 129;
            generator_heap->type_description_1 = "cccoo";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[45]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 129;
            generator_heap->type_description_1 = "cccoo";
            goto try_except_handler_2;
        }

        tmp_kw_call_value_0_1 = Nuitka_Cell_GET(generator->m_closure[2]);
        generator->m_frame->m_frame.f_lineno = 129;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_iter_arg_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[46]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 129;
            generator_heap->type_description_1 = "cccoo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 129;
            generator_heap->type_description_1 = "cccoo";
            goto try_except_handler_2;
        }
        assert(generator_heap->tmp_tuple_unpack_1__source_iter == NULL);
        generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "cccoo";
            generator_heap->exception_lineno = 129;
            goto try_except_handler_3;
        }
        assert(generator_heap->tmp_tuple_unpack_1__element_1 == NULL);
        generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "cccoo";
            generator_heap->exception_lineno = 129;
            goto try_except_handler_3;
        }
        assert(generator_heap->tmp_tuple_unpack_1__element_2 == NULL);
        generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "cccoo";
                    generator_heap->exception_lineno = 129;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[47];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "cccoo";
            generator_heap->exception_lineno = 129;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
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

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = generator_heap->tmp_tuple_unpack_1__element_1;
        assert(generator_heap->var_fd == NULL);
        Py_INCREF(tmp_assign_source_4);
        generator_heap->var_fd = tmp_assign_source_4;
    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = generator_heap->tmp_tuple_unpack_1__element_2;
        assert(generator_heap->var_raw_path == NULL);
        Py_INCREF(tmp_assign_source_5);
        generator_heap->var_raw_path = tmp_assign_source_5;
    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_3;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[49]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 132;
            generator_heap->type_description_1 = "cccoo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(generator_heap->var_fd);
        tmp_args_element_value_1 = generator_heap->var_fd;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[50]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 132;
            generator_heap->type_description_1 = "cccoo";
            goto try_except_handler_5;
        }

        tmp_called_value_3 = Nuitka_Cell_GET(generator->m_closure[1]);
        generator->m_frame->m_frame.f_lineno = 132;
        tmp_args_element_value_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_2);

            generator_heap->exception_lineno = 132;
            generator_heap->type_description_1 = "cccoo";
            goto try_except_handler_5;
        }
        generator->m_frame->m_frame.f_lineno = 132;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 132;
            generator_heap->type_description_1 = "cccoo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 1.
    generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (generator_heap->exception_keeper_tb_3 == NULL) {
        generator_heap->exception_keeper_tb_3 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_3);
    } else if (generator_heap->exception_keeper_lineno_3 != 0) {
        generator_heap->exception_keeper_tb_3 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_3, generator->m_frame, generator_heap->exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(&generator_heap->exception_keeper_type_3, &generator_heap->exception_keeper_value_3, &generator_heap->exception_keeper_tb_3);
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 134;
            generator_heap->type_description_1 = "cccoo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(generator_heap->var_fd);
        tmp_args_element_value_3 = generator_heap->var_fd;
        generator->m_frame->m_frame.f_lineno = 134;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[51], tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 134;
            generator_heap->type_description_1 = "cccoo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_2);
    }
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 131;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "cccoo";
    goto try_except_handler_6;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_6:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_1);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 134;
            generator_heap->type_description_1 = "cccoo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(generator_heap->var_fd);
        tmp_args_element_value_4 = generator_heap->var_fd;
        generator->m_frame->m_frame.f_lineno = 134;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[51], tmp_args_element_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 134;
            generator_heap->type_description_1 = "cccoo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *old = Nuitka_Cell_GET(generator->m_closure[1]);
        PyCell_SET(generator->m_closure[1], NULL);
        Py_XDECREF(old);

        generator_heap->tmp_result = old != NULL;
    }

    if (generator_heap->tmp_result == false) {

        FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[50]);
        generator_heap->exception_tb = NULL;
        NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
        CHAIN_EXCEPTION(generator_heap->exception_value);

        generator_heap->exception_lineno = 135;
        generator_heap->type_description_1 = "cccoo";
        goto try_except_handler_4;
    }

    {
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_5;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 136;
            generator_heap->type_description_1 = "cccoo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(generator_heap->var_raw_path);
        tmp_args_element_value_5 = generator_heap->var_raw_path;
        generator->m_frame->m_frame.f_lineno = 136;
        tmp_expression_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[53], tmp_args_element_value_5);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 136;
            generator_heap->type_description_1 = "cccoo";
            goto try_except_handler_4;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_instance_3, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_3;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_instance_3, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 136;
            generator_heap->type_description_1 = "cccoo";
            goto try_except_handler_4;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    generator_heap->exception_keeper_type_5 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_5 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_5 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 3.
    generator_heap->exception_preserved_3 = GET_CURRENT_EXCEPTION();

    if (generator_heap->exception_keeper_tb_5 == NULL) {
        generator_heap->exception_keeper_tb_5 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_5);
    } else if (generator_heap->exception_keeper_lineno_5 != 0) {
        generator_heap->exception_keeper_tb_5 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_5, generator->m_frame, generator_heap->exception_keeper_lineno_5);
    }

    PUBLISH_CURRENT_EXCEPTION(&generator_heap->exception_keeper_type_5, &generator_heap->exception_keeper_value_5, &generator_heap->exception_keeper_tb_5);
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_6;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[54]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 139;
            generator_heap->type_description_1 = "cccoo";
            goto try_except_handler_8;
        }

        tmp_called_value_4 = Nuitka_Cell_GET(generator->m_closure[0]);
        CHECK_OBJECT(generator_heap->var_raw_path);
        tmp_args_element_value_6 = generator_heap->var_raw_path;
        generator->m_frame->m_frame.f_lineno = 139;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_6);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 139;
            generator_heap->type_description_1 = "cccoo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_8:;
    generator_heap->exception_keeper_type_6 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_6 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_6 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 2.
    generator_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (generator_heap->exception_keeper_tb_6 == NULL) {
        generator_heap->exception_keeper_tb_6 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_6);
    } else if (generator_heap->exception_keeper_lineno_6 != 0) {
        generator_heap->exception_keeper_tb_6 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_6, generator->m_frame, generator_heap->exception_keeper_lineno_6);
    }

    PUBLISH_CURRENT_EXCEPTION(&generator_heap->exception_keeper_type_6, &generator_heap->exception_keeper_value_6, &generator_heap->exception_keeper_tb_6);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_FileNotFoundError;
        generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_1 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 138;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "cccoo";
    goto try_except_handler_9;
    branch_no_1:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    generator_heap->exception_keeper_type_7 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_7 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_7 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_7 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_2);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_7;
    generator_heap->exception_value = generator_heap->exception_keeper_value_7;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_7;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_7;

    goto try_except_handler_7;
    // End of try:
    try_end_6:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_2);

    goto try_end_5;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_5:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 130;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "cccoo";
    goto try_except_handler_7;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_7:;
    generator_heap->exception_keeper_type_8 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_8 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_8 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_8 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_3);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_8;
    generator_heap->exception_value = generator_heap->exception_keeper_value_8;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_8;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_4:;
    // Tried code:
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_7;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[54]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 139;
            generator_heap->type_description_1 = "cccoo";
            goto try_except_handler_10;
        }

        tmp_called_value_5 = Nuitka_Cell_GET(generator->m_closure[0]);
        CHECK_OBJECT(generator_heap->var_raw_path);
        tmp_args_element_value_7 = generator_heap->var_raw_path;
        generator->m_frame->m_frame.f_lineno = 139;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_7);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 139;
            generator_heap->type_description_1 = "cccoo";
            goto try_except_handler_10;
        }
        Py_DECREF(tmp_call_result_5);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_10:;
    generator_heap->exception_keeper_type_9 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_9 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_9 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_9 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 2.
    generator_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (generator_heap->exception_keeper_tb_9 == NULL) {
        generator_heap->exception_keeper_tb_9 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_9);
    } else if (generator_heap->exception_keeper_lineno_9 != 0) {
        generator_heap->exception_keeper_tb_9 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_9, generator->m_frame, generator_heap->exception_keeper_lineno_9);
    }

    PUBLISH_CURRENT_EXCEPTION(&generator_heap->exception_keeper_type_9, &generator_heap->exception_keeper_value_9, &generator_heap->exception_keeper_tb_9);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_FileNotFoundError;
        generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_2 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 138;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "cccoo";
    goto try_except_handler_11;
    branch_no_2:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_11:;
    generator_heap->exception_keeper_type_10 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_10 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_10 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_10 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_2);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_10;
    generator_heap->exception_value = generator_heap->exception_keeper_value_10;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_10;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_2);

    goto try_end_7;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_7:;

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
            generator->m_closure[1],
            generator->m_closure[2],
            generator->m_closure[0],
            generator_heap->var_fd,
            generator_heap->var_raw_path
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
    goto try_end_9;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_11 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_11 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_11 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_11 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_fd);
    generator_heap->var_fd = NULL;
    Py_XDECREF(generator_heap->var_raw_path);
    generator_heap->var_raw_path = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_11;
    generator_heap->exception_value = generator_heap->exception_keeper_value_11;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_11;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_11;

    goto function_exception_exit;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(generator_heap->var_fd);
    Py_DECREF(generator_heap->var_fd);
    generator_heap->var_fd = NULL;
    CHECK_OBJECT(generator_heap->var_raw_path);
    Py_DECREF(generator_heap->var_raw_path);
    generator_heap->var_raw_path = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_importlib_resources$_common$$$function__9__tempfile$$$genobj__1__tempfile(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        importlib_resources$_common$$$function__9__tempfile$$$genobj__1__tempfile_context,
        module_importlib_resources$_common,
        mod_consts[55],
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        codeobj_87cf5a186d07e591468d451c485ee3f9,
        closure,
        3,
        sizeof(struct importlib_resources$_common$$$function__9__tempfile$$$genobj__1__tempfile_locals)
    );
}


static PyObject *impl_importlib_resources$_common$$$function__10__temp_file(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_path = python_pars[0];
    struct Nuitka_FrameObject *frame_3d543be7c106053512371a8efe323a57;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3d543be7c106053512371a8efe323a57 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3d543be7c106053512371a8efe323a57)) {
        Py_XDECREF(cache_frame_3d543be7c106053512371a8efe323a57);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3d543be7c106053512371a8efe323a57 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3d543be7c106053512371a8efe323a57 = MAKE_FUNCTION_FRAME(codeobj_3d543be7c106053512371a8efe323a57, module_importlib_resources$_common, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3d543be7c106053512371a8efe323a57->m_type_description == NULL);
    frame_3d543be7c106053512371a8efe323a57 = cache_frame_3d543be7c106053512371a8efe323a57;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3d543be7c106053512371a8efe323a57);
    assert(Py_REFCNT(frame_3d543be7c106053512371a8efe323a57) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_expression_value_1 = par_path;
        tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[56]);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_expression_value_2 = par_path;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[18]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 145;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_3d543be7c106053512371a8efe323a57->m_frame.f_lineno = 145;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[46]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
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
        exception_tb = MAKE_TRACEBACK(frame_3d543be7c106053512371a8efe323a57, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3d543be7c106053512371a8efe323a57->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3d543be7c106053512371a8efe323a57, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3d543be7c106053512371a8efe323a57,
        type_description_1,
        par_path
    );


    // Release cached frame if used for exception.
    if (frame_3d543be7c106053512371a8efe323a57 == cache_frame_3d543be7c106053512371a8efe323a57) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3d543be7c106053512371a8efe323a57);
        cache_frame_3d543be7c106053512371a8efe323a57 = NULL;
    }

    assertFrameObject(frame_3d543be7c106053512371a8efe323a57);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_importlib_resources$_common$$$function__11__is_present_dir(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_path = python_pars[0];
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_cc92c8b597c5c95dee0a3d8710307619;
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
    static struct Nuitka_FrameObject *cache_frame_cc92c8b597c5c95dee0a3d8710307619 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cc92c8b597c5c95dee0a3d8710307619)) {
        Py_XDECREF(cache_frame_cc92c8b597c5c95dee0a3d8710307619);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cc92c8b597c5c95dee0a3d8710307619 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cc92c8b597c5c95dee0a3d8710307619 = MAKE_FUNCTION_FRAME(codeobj_cc92c8b597c5c95dee0a3d8710307619, module_importlib_resources$_common, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cc92c8b597c5c95dee0a3d8710307619->m_type_description == NULL);
    frame_cc92c8b597c5c95dee0a3d8710307619 = cache_frame_cc92c8b597c5c95dee0a3d8710307619;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cc92c8b597c5c95dee0a3d8710307619);
    assert(Py_REFCNT(frame_cc92c8b597c5c95dee0a3d8710307619) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        frame_cc92c8b597c5c95dee0a3d8710307619->m_frame.f_lineno = 156;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[58],
            PyTuple_GET_ITEM(mod_consts[59], 0)
        );

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_1 = tmp_with_1__source;
        tmp_called_value_1 = LOOKUP_SPECIAL(tmp_expression_value_1, mod_consts[60]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        frame_cc92c8b597c5c95dee0a3d8710307619->m_frame.f_lineno = 156;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_2 = tmp_with_1__source;
        tmp_assign_source_3 = LOOKUP_SPECIAL(tmp_expression_value_2, mod_consts[61]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_4;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_path);
        tmp_called_instance_2 = par_path;
        frame_cc92c8b597c5c95dee0a3d8710307619->m_frame.f_lineno = 157;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[62]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        goto try_return_handler_2;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_cc92c8b597c5c95dee0a3d8710307619, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_cc92c8b597c5c95dee0a3d8710307619, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_BaseException;
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
        nuitka_bool tmp_assign_source_5;
        tmp_assign_source_5 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_5;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_2 = tmp_with_1__exit;
        tmp_args_element_value_1 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_2 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_3 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_cc92c8b597c5c95dee0a3d8710307619->m_frame.f_lineno = 157;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "o";
            goto try_except_handler_4;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "o";
            goto try_except_handler_4;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 157;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_cc92c8b597c5c95dee0a3d8710307619->m_frame) frame_cc92c8b597c5c95dee0a3d8710307619->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto try_except_handler_4;
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 156;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_cc92c8b597c5c95dee0a3d8710307619->m_frame) frame_cc92c8b597c5c95dee0a3d8710307619->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto try_except_handler_4;
    branch_end_1:;
    goto try_end_1;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
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
    try_return_handler_2:;
    {
        bool tmp_condition_result_3;
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = tmp_with_1__indicator;
        tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_3 = tmp_with_1__exit;
        frame_cc92c8b597c5c95dee0a3d8710307619->m_frame.f_lineno = 157;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_3, mod_consts[63]);

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_3:;
    goto try_return_handler_1;
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

    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = tmp_with_1__indicator;
        tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_4 = tmp_with_1__exit;
        frame_cc92c8b597c5c95dee0a3d8710307619->m_frame.f_lineno = 157;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_4, mod_consts[63]);

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);

            exception_lineno = 157;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_4:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_1;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_5;
        nuitka_bool tmp_cmp_expr_left_4;
        nuitka_bool tmp_cmp_expr_right_4;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_4 = tmp_with_1__indicator;
        tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_5 = tmp_with_1__exit;
        frame_cc92c8b597c5c95dee0a3d8710307619->m_frame.f_lineno = 157;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_5, mod_consts[63]);

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_5:;
    goto try_end_4;
    // Return handler code:
    try_return_handler_1:;
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
    try_except_handler_1:;
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


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cc92c8b597c5c95dee0a3d8710307619, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cc92c8b597c5c95dee0a3d8710307619->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cc92c8b597c5c95dee0a3d8710307619, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cc92c8b597c5c95dee0a3d8710307619,
        type_description_1,
        par_path
    );


    // Release cached frame if used for exception.
    if (frame_cc92c8b597c5c95dee0a3d8710307619 == cache_frame_cc92c8b597c5c95dee0a3d8710307619) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cc92c8b597c5c95dee0a3d8710307619);
        cache_frame_cc92c8b597c5c95dee0a3d8710307619 = NULL;
    }

    assertFrameObject(frame_cc92c8b597c5c95dee0a3d8710307619);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    CHECK_OBJECT(tmp_with_1__exit);
    Py_DECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_importlib_resources$_common$$$function__12_as_file(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_path = python_pars[0];
    struct Nuitka_FrameObject *frame_3d3a0d2142606acf33a5a5153720515f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3d3a0d2142606acf33a5a5153720515f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3d3a0d2142606acf33a5a5153720515f)) {
        Py_XDECREF(cache_frame_3d3a0d2142606acf33a5a5153720515f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3d3a0d2142606acf33a5a5153720515f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3d3a0d2142606acf33a5a5153720515f = MAKE_FUNCTION_FRAME(codeobj_3d3a0d2142606acf33a5a5153720515f, module_importlib_resources$_common, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3d3a0d2142606acf33a5a5153720515f->m_type_description == NULL);
    frame_3d3a0d2142606acf33a5a5153720515f = cache_frame_3d3a0d2142606acf33a5a5153720515f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3d3a0d2142606acf33a5a5153720515f);
    assert(Py_REFCNT(frame_3d3a0d2142606acf33a5a5153720515f) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_value_1 = par_path;
        frame_3d3a0d2142606acf33a5a5153720515f->m_frame.f_lineno = 167;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 167;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_value_2 = par_path;
        frame_3d3a0d2142606acf33a5a5153720515f->m_frame.f_lineno = 167;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_value_3 = par_path;
        frame_3d3a0d2142606acf33a5a5153720515f->m_frame.f_lineno = 167;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_3d3a0d2142606acf33a5a5153720515f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3d3a0d2142606acf33a5a5153720515f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3d3a0d2142606acf33a5a5153720515f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3d3a0d2142606acf33a5a5153720515f,
        type_description_1,
        par_path
    );


    // Release cached frame if used for exception.
    if (frame_3d3a0d2142606acf33a5a5153720515f == cache_frame_3d3a0d2142606acf33a5a5153720515f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3d3a0d2142606acf33a5a5153720515f);
        cache_frame_3d3a0d2142606acf33a5a5153720515f = NULL;
    }

    assertFrameObject(frame_3d3a0d2142606acf33a5a5153720515f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_importlib_resources$_common$$$function__13__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_path = Nuitka_Cell_New1(python_pars[0]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_path;
        Py_INCREF(tmp_closure_1[0]);

        tmp_return_value = MAKE_GENERATOR_importlib_resources$_common$$$function__13__$$$genobj__1__(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct importlib_resources$_common$$$function__13__$$$genobj__1___locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
};

static PyObject *importlib_resources$_common$$$function__13__$$$genobj__1___context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct importlib_resources$_common$$$function__13__$$$genobj__1___locals *generator_heap = (struct importlib_resources$_common$$$function__13__$$$genobj__1___locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_59ec10c6aa1c34814a2f9a9534a58ae9, module_importlib_resources$_common, sizeof(void *));
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
    {
        PyObject *tmp_expression_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[70]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 176;
            generator_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        Py_INCREF(tmp_expression_value_1);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 176;
            generator_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_yield_result_1 = yield_return_value;
    }

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
    goto function_exception_exit;

    frame_no_exception_1:;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_importlib_resources$_common$$$function__13__$$$genobj__1__(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        importlib_resources$_common$$$function__13__$$$genobj__1___context,
        module_importlib_resources$_common,
        mod_consts[71],
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        codeobj_59ec10c6aa1c34814a2f9a9534a58ae9,
        closure,
        1,
        sizeof(struct importlib_resources$_common$$$function__13__$$$genobj__1___locals)
    );
}


static PyObject *impl_importlib_resources$_common$$$function__14__temp_path(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_dir = Nuitka_Cell_New1(python_pars[0]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_dir;
        Py_INCREF(tmp_closure_1[0]);

        tmp_return_value = MAKE_GENERATOR_importlib_resources$_common$$$function__14__temp_path$$$genobj__1__temp_path(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_dir);
    Py_DECREF(par_dir);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct importlib_resources$_common$$$function__14__temp_path$$$genobj__1__temp_path_locals {
    PyObject *var_result;
    PyObject *tmp_with_1__enter;
    PyObject *tmp_with_1__exit;
    nuitka_bool tmp_with_1__indicator;
    PyObject *tmp_with_1__source;
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
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    int exception_keeper_lineno_5;
};

static PyObject *importlib_resources$_common$$$function__14__temp_path$$$genobj__1__temp_path_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct importlib_resources$_common$$$function__14__temp_path$$$genobj__1__temp_path_locals *generator_heap = (struct importlib_resources$_common$$$function__14__temp_path$$$genobj__1__temp_path_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_result = NULL;
    generator_heap->tmp_with_1__enter = NULL;
    generator_heap->tmp_with_1__exit = NULL;
    generator_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    generator_heap->tmp_with_1__source = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_00821529344a5a20a0b4fb1b54219d3d, module_importlib_resources$_common, sizeof(void *)+sizeof(void *));
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
    {
        PyObject *tmp_assign_source_1;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[73]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 184;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }

        tmp_assign_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        assert(generator_heap->tmp_with_1__source == NULL);
        Py_INCREF(tmp_assign_source_1);
        generator_heap->tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(generator_heap->tmp_with_1__source);
        tmp_expression_value_1 = generator_heap->tmp_with_1__source;
        tmp_called_value_1 = LOOKUP_SPECIAL(tmp_expression_value_1, mod_consts[60]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 184;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 184;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 184;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }
        assert(generator_heap->tmp_with_1__enter == NULL);
        generator_heap->tmp_with_1__enter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(generator_heap->tmp_with_1__source);
        tmp_expression_value_2 = generator_heap->tmp_with_1__source;
        tmp_assign_source_3 = LOOKUP_SPECIAL(tmp_expression_value_2, mod_consts[61]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 184;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }
        assert(generator_heap->tmp_with_1__exit == NULL);
        generator_heap->tmp_with_1__exit = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_TRUE;
        generator_heap->tmp_with_1__indicator = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(generator_heap->tmp_with_1__enter);
        tmp_assign_source_5 = generator_heap->tmp_with_1__enter;
        assert(generator_heap->var_result == NULL);
        Py_INCREF(tmp_assign_source_5);
        generator_heap->var_result = tmp_assign_source_5;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 185;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(generator_heap->var_result);
        tmp_args_element_value_1 = generator_heap->var_result;
        generator->m_frame->m_frame.f_lineno = 185;
        tmp_expression_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[53], tmp_args_element_value_1);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 185;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_4;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_3;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 185;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_4;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 1.
    generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (generator_heap->exception_keeper_tb_1 == NULL) {
        generator_heap->exception_keeper_tb_1 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_1);
    } else if (generator_heap->exception_keeper_lineno_1 != 0) {
        generator_heap->exception_keeper_tb_1 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_1, generator->m_frame, generator_heap->exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&generator_heap->exception_keeper_type_1, &generator_heap->exception_keeper_value_1, &generator_heap->exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_BaseException;
        generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_1 = (generator_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_assign_source_6;
        tmp_assign_source_6 = NUITKA_BOOL_FALSE;
        generator_heap->tmp_with_1__indicator = tmp_assign_source_6;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(generator_heap->tmp_with_1__exit);
        tmp_called_value_2 = generator_heap->tmp_with_1__exit;
        tmp_args_element_value_2 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_3 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_4 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        generator->m_frame->m_frame.f_lineno = 185;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 185;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_5;
        }
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 185;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_5;
        }
        tmp_condition_result_2 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 185;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "co";
    goto try_except_handler_5;
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 184;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "co";
    goto try_except_handler_5;
    branch_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_1);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    {
        bool tmp_condition_result_3;
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = generator_heap->tmp_with_1__indicator;
        tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(generator_heap->tmp_with_1__exit);
        tmp_called_value_3 = generator_heap->tmp_with_1__exit;
        generator->m_frame->m_frame.f_lineno = 185;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_3, mod_consts[63]);

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

            Py_DECREF(generator_heap->exception_keeper_type_3);
            Py_XDECREF(generator_heap->exception_keeper_value_3);
            Py_XDECREF(generator_heap->exception_keeper_tb_3);

            generator_heap->exception_lineno = 185;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_3:;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = generator_heap->tmp_with_1__indicator;
        tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(generator_heap->tmp_with_1__exit);
        tmp_called_value_4 = generator_heap->tmp_with_1__exit;
        generator->m_frame->m_frame.f_lineno = 185;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_4, mod_consts[63]);

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 185;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_4:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_with_1__source);
    generator_heap->tmp_with_1__source = NULL;
    Py_XDECREF(generator_heap->tmp_with_1__enter);
    generator_heap->tmp_with_1__enter = NULL;
    Py_XDECREF(generator_heap->tmp_with_1__exit);
    generator_heap->tmp_with_1__exit = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

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
            generator->m_closure[0],
            generator_heap->var_result
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
    goto try_end_5;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_5 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_5 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_5 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_result);
    generator_heap->var_result = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_5;
    generator_heap->exception_value = generator_heap->exception_keeper_value_5;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_5;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(generator_heap->tmp_with_1__source);
    Py_DECREF(generator_heap->tmp_with_1__source);
    generator_heap->tmp_with_1__source = NULL;
    CHECK_OBJECT(generator_heap->tmp_with_1__enter);
    Py_DECREF(generator_heap->tmp_with_1__enter);
    generator_heap->tmp_with_1__enter = NULL;
    Py_XDECREF(generator_heap->tmp_with_1__exit);
    generator_heap->tmp_with_1__exit = NULL;
    CHECK_OBJECT(generator_heap->var_result);
    Py_DECREF(generator_heap->var_result);
    generator_heap->var_result = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_importlib_resources$_common$$$function__14__temp_path$$$genobj__1__temp_path(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        importlib_resources$_common$$$function__14__temp_path$$$genobj__1__temp_path_context,
        module_importlib_resources$_common,
        mod_consts[74],
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        codeobj_00821529344a5a20a0b4fb1b54219d3d,
        closure,
        1,
        sizeof(struct importlib_resources$_common$$$function__14__temp_path$$$genobj__1__temp_path_locals)
    );
}


static PyObject *impl_importlib_resources$_common$$$function__15__temp_dir(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_path = Nuitka_Cell_New1(python_pars[0]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_path;
        Py_INCREF(tmp_closure_1[0]);

        tmp_return_value = MAKE_GENERATOR_importlib_resources$_common$$$function__15__temp_dir$$$genobj__1__temp_dir(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct importlib_resources$_common$$$function__15__temp_dir$$$genobj__1__temp_dir_locals {
    PyObject *var_temp_dir;
    PyObject *tmp_with_1__enter;
    PyObject *tmp_with_1__exit;
    nuitka_bool tmp_with_1__indicator;
    PyObject *tmp_with_1__source;
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
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    int exception_keeper_lineno_5;
};

static PyObject *importlib_resources$_common$$$function__15__temp_dir$$$genobj__1__temp_dir_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct importlib_resources$_common$$$function__15__temp_dir$$$genobj__1__temp_dir_locals *generator_heap = (struct importlib_resources$_common$$$function__15__temp_dir$$$genobj__1__temp_dir_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_temp_dir = NULL;
    generator_heap->tmp_with_1__enter = NULL;
    generator_heap->tmp_with_1__exit = NULL;
    generator_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    generator_heap->tmp_with_1__source = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_bdb5420afb24b377e825e1c302d8989e, module_importlib_resources$_common, sizeof(void *)+sizeof(void *));
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
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_1;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[70]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 194;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator->m_frame->m_frame.f_lineno = 194;
        tmp_operand_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[62]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 194;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 194;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (generator_heap->tmp_res == 0) ? true : false;
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
        generator_heap->exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        generator_heap->exception_lineno = 194;
        RAISE_EXCEPTION_WITH_TYPE(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
        generator_heap->type_description_1 = "co";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 195;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 195;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 195;
        tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[76]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 195;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 195;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 195;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }
        assert(generator_heap->tmp_with_1__source == NULL);
        generator_heap->tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(generator_heap->tmp_with_1__source);
        tmp_expression_value_1 = generator_heap->tmp_with_1__source;
        tmp_called_value_2 = LOOKUP_SPECIAL(tmp_expression_value_1, mod_consts[60]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 195;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 195;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 195;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }
        assert(generator_heap->tmp_with_1__enter == NULL);
        generator_heap->tmp_with_1__enter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(generator_heap->tmp_with_1__source);
        tmp_expression_value_2 = generator_heap->tmp_with_1__source;
        tmp_assign_source_3 = LOOKUP_SPECIAL(tmp_expression_value_2, mod_consts[61]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 195;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }
        assert(generator_heap->tmp_with_1__exit == NULL);
        generator_heap->tmp_with_1__exit = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_TRUE;
        generator_heap->tmp_with_1__indicator = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(generator_heap->tmp_with_1__enter);
        tmp_assign_source_5 = generator_heap->tmp_with_1__enter;
        assert(generator_heap->var_temp_dir == NULL);
        Py_INCREF(tmp_assign_source_5);
        generator_heap->var_temp_dir = tmp_assign_source_5;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 196;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(generator_heap->var_temp_dir);
        tmp_args_element_value_2 = generator_heap->var_temp_dir;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[70]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 196;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_4;
        }

        tmp_args_element_value_3 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator->m_frame->m_frame.f_lineno = 196;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_expression_value_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 196;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_4;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_3, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_3;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_3, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 196;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_4;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 1.
    generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (generator_heap->exception_keeper_tb_1 == NULL) {
        generator_heap->exception_keeper_tb_1 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_1);
    } else if (generator_heap->exception_keeper_lineno_1 != 0) {
        generator_heap->exception_keeper_tb_1 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_1, generator->m_frame, generator_heap->exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&generator_heap->exception_keeper_type_1, &generator_heap->exception_keeper_value_1, &generator_heap->exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_BaseException;
        generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_2 = (generator_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        nuitka_bool tmp_assign_source_6;
        tmp_assign_source_6 = NUITKA_BOOL_FALSE;
        generator_heap->tmp_with_1__indicator = tmp_assign_source_6;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(generator_heap->tmp_with_1__exit);
        tmp_called_value_4 = generator_heap->tmp_with_1__exit;
        tmp_args_element_value_4 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_5 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_6 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        generator->m_frame->m_frame.f_lineno = 196;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_4, call_args);
        }

        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 196;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_5;
        }
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 196;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_5;
        }
        tmp_condition_result_3 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 196;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "co";
    goto try_except_handler_5;
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 195;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "co";
    goto try_except_handler_5;
    branch_end_2:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_1);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = generator_heap->tmp_with_1__indicator;
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
        CHECK_OBJECT(generator_heap->tmp_with_1__exit);
        tmp_called_value_5 = generator_heap->tmp_with_1__exit;
        generator->m_frame->m_frame.f_lineno = 196;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_5, mod_consts[63]);

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

            Py_DECREF(generator_heap->exception_keeper_type_3);
            Py_XDECREF(generator_heap->exception_keeper_value_3);
            Py_XDECREF(generator_heap->exception_keeper_tb_3);

            generator_heap->exception_lineno = 196;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_4:;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_5;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = generator_heap->tmp_with_1__indicator;
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
        CHECK_OBJECT(generator_heap->tmp_with_1__exit);
        tmp_called_value_6 = generator_heap->tmp_with_1__exit;
        generator->m_frame->m_frame.f_lineno = 196;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_6, mod_consts[63]);

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 196;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_5:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_with_1__source);
    generator_heap->tmp_with_1__source = NULL;
    Py_XDECREF(generator_heap->tmp_with_1__enter);
    generator_heap->tmp_with_1__enter = NULL;
    Py_XDECREF(generator_heap->tmp_with_1__exit);
    generator_heap->tmp_with_1__exit = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

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
            generator->m_closure[0],
            generator_heap->var_temp_dir
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
    goto try_end_5;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_5 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_5 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_5 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_temp_dir);
    generator_heap->var_temp_dir = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_5;
    generator_heap->exception_value = generator_heap->exception_keeper_value_5;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_5;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(generator_heap->tmp_with_1__source);
    Py_DECREF(generator_heap->tmp_with_1__source);
    generator_heap->tmp_with_1__source = NULL;
    CHECK_OBJECT(generator_heap->tmp_with_1__enter);
    Py_DECREF(generator_heap->tmp_with_1__enter);
    generator_heap->tmp_with_1__enter = NULL;
    Py_XDECREF(generator_heap->tmp_with_1__exit);
    generator_heap->tmp_with_1__exit = NULL;
    CHECK_OBJECT(generator_heap->var_temp_dir);
    Py_DECREF(generator_heap->var_temp_dir);
    generator_heap->var_temp_dir = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_importlib_resources$_common$$$function__15__temp_dir$$$genobj__1__temp_dir(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        importlib_resources$_common$$$function__15__temp_dir$$$genobj__1__temp_dir_context,
        module_importlib_resources$_common,
        mod_consts[66],
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        codeobj_bdb5420afb24b377e825e1c302d8989e,
        closure,
        1,
        sizeof(struct importlib_resources$_common$$$function__15__temp_dir$$$genobj__1__temp_dir_locals)
    );
}


static PyObject *impl_importlib_resources$_common$$$function__16__write_contents(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_target = python_pars[0];
    PyObject *par_source = python_pars[1];
    PyObject *var_child = NULL;
    PyObject *var_item = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_70e469daaf0500073d6f1ac01bbdbdb7;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_70e469daaf0500073d6f1ac01bbdbdb7 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_70e469daaf0500073d6f1ac01bbdbdb7)) {
        Py_XDECREF(cache_frame_70e469daaf0500073d6f1ac01bbdbdb7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_70e469daaf0500073d6f1ac01bbdbdb7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_70e469daaf0500073d6f1ac01bbdbdb7 = MAKE_FUNCTION_FRAME(codeobj_70e469daaf0500073d6f1ac01bbdbdb7, module_importlib_resources$_common, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_70e469daaf0500073d6f1ac01bbdbdb7->m_type_description == NULL);
    frame_70e469daaf0500073d6f1ac01bbdbdb7 = cache_frame_70e469daaf0500073d6f1ac01bbdbdb7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_70e469daaf0500073d6f1ac01bbdbdb7);
    assert(Py_REFCNT(frame_70e469daaf0500073d6f1ac01bbdbdb7) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_target);
        tmp_expression_value_1 = par_target;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[78]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_source);
        tmp_expression_value_2 = par_source;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[18]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 200;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_70e469daaf0500073d6f1ac01bbdbdb7->m_frame.f_lineno = 200;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_child == NULL);
        var_child = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_source);
        tmp_called_instance_1 = par_source;
        frame_70e469daaf0500073d6f1ac01bbdbdb7->m_frame.f_lineno = 201;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[62]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 201;
            type_description_1 = "oooo";
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
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_child);
        tmp_called_instance_2 = var_child;
        frame_70e469daaf0500073d6f1ac01bbdbdb7->m_frame.f_lineno = 202;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[79]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(par_source);
        tmp_called_instance_3 = par_source;
        frame_70e469daaf0500073d6f1ac01bbdbdb7->m_frame.f_lineno = 203;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[80]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oooo";
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
                type_description_1 = "oooo";
                exception_lineno = 203;
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
            PyObject *old = var_item;
            var_item = tmp_assign_source_4;
            Py_INCREF(var_item);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        if (var_child == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[81]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 204;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_2 = var_child;
        CHECK_OBJECT(var_item);
        tmp_args_element_value_3 = var_item;
        frame_70e469daaf0500073d6f1ac01bbdbdb7->m_frame.f_lineno = 204;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 203;
        type_description_1 = "oooo";
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
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(var_child);
        tmp_expression_value_3 = var_child;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[82]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_source);
        tmp_called_instance_4 = par_source;
        frame_70e469daaf0500073d6f1ac01bbdbdb7->m_frame.f_lineno = 206;
        tmp_args_element_value_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[56]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 206;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_70e469daaf0500073d6f1ac01bbdbdb7->m_frame.f_lineno = 206;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_end_1:;
    if (var_child == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[81]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 207;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_child;
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
        exception_tb = MAKE_TRACEBACK(frame_70e469daaf0500073d6f1ac01bbdbdb7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_70e469daaf0500073d6f1ac01bbdbdb7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_70e469daaf0500073d6f1ac01bbdbdb7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_70e469daaf0500073d6f1ac01bbdbdb7,
        type_description_1,
        par_target,
        par_source,
        var_child,
        var_item
    );


    // Release cached frame if used for exception.
    if (frame_70e469daaf0500073d6f1ac01bbdbdb7 == cache_frame_70e469daaf0500073d6f1ac01bbdbdb7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_70e469daaf0500073d6f1ac01bbdbdb7);
        cache_frame_70e469daaf0500073d6f1ac01bbdbdb7 = NULL;
    }

    assertFrameObject(frame_70e469daaf0500073d6f1ac01bbdbdb7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_child);
    var_child = NULL;
    Py_XDECREF(var_item);
    var_item = NULL;
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

    Py_XDECREF(var_child);
    var_child = NULL;
    Py_XDECREF(var_item);
    var_item = NULL;
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
    CHECK_OBJECT(par_target);
    Py_DECREF(par_target);
    CHECK_OBJECT(par_source);
    Py_DECREF(par_source);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_target);
    Py_DECREF(par_target);
    CHECK_OBJECT(par_source);
    Py_DECREF(par_source);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_common$$$function__10__temp_file() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_common$$$function__10__temp_file,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3d543be7c106053512371a8efe323a57,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_common,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_common$$$function__11__is_present_dir(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_common$$$function__11__is_present_dir,
        mod_consts[65],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cc92c8b597c5c95dee0a3d8710307619,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_importlib_resources$_common,
        mod_consts[64],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_common$$$function__12_as_file() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_common$$$function__12_as_file,
        mod_consts[111],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3d3a0d2142606acf33a5a5153720515f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_common,
        mod_consts[68],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_common$$$function__13__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_common$$$function__13__,
        mod_consts[71],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_59ec10c6aa1c34814a2f9a9534a58ae9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_common,
        mod_consts[69],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_common$$$function__14__temp_path(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_common$$$function__14__temp_path,
        mod_consts[74],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_00821529344a5a20a0b4fb1b54219d3d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_importlib_resources$_common,
        mod_consts[72],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_common$$$function__15__temp_dir() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_common$$$function__15__temp_dir,
        mod_consts[66],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bdb5420afb24b377e825e1c302d8989e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_common,
        mod_consts[75],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_common$$$function__16__write_contents() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_common$$$function__16__write_contents,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_70e469daaf0500073d6f1ac01bbdbdb7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_common,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_common$$$function__1_package_to_anchor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_common$$$function__1_package_to_anchor,
        mod_consts[100],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_062d019bf010d4eb52dbfd365e130863,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_common,
        mod_consts[4],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_common$$$function__1_package_to_anchor$$$function__1_wrapper(PyObject *defaults, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_common$$$function__1_package_to_anchor$$$function__1_wrapper,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[3],
#endif
        codeobj_09011b006c37095f2742a83f6fbd19db,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_common,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_common$$$function__2_files(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_common$$$function__2_files,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f35d9c2847486b113c3e6b5bbd4f5c1c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_importlib_resources$_common,
        mod_consts[14],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_common$$$function__3_get_resource_reader(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_common$$$function__3_get_resource_reader,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cf93aa93763b6a99d1f669405a0a9853,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_importlib_resources$_common,
        mod_consts[19],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_common$$$function__4_resolve(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_common$$$function__4_resolve,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_84e3b8e1f1c963eb8d986f90a48eebe6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_importlib_resources$_common,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_common$$$function__5__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_common$$$function__5__,
        mod_consts[71],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ebdda04c55e6c7afa03f1b6e538d6cca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_importlib_resources$_common,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_common$$$function__6__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_common$$$function__6__,
        mod_consts[71],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8e1a3035a11327f0a570074972a9b487,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_importlib_resources$_common,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_common$$$function__7__infer_caller() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_common$$$function__7__infer_caller,
        mod_consts[24],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dfb0710489c40f669cf3d6808844bd51,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_common,
        mod_consts[36],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_common$$$function__7__infer_caller$$$function__1_is_this_file() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_common$$$function__7__infer_caller$$$function__1_is_this_file,
        mod_consts[27],
#if PYTHON_VERSION >= 0x300
        mod_consts[28],
#endif
        codeobj_098a098dce0c3924a60dca60978ea1ac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_common,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_common$$$function__7__infer_caller$$$function__2_is_wrapper() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_common$$$function__7__infer_caller$$$function__2_is_wrapper,
        mod_consts[29],
#if PYTHON_VERSION >= 0x300
        mod_consts[30],
#endif
        codeobj_b963c198e07cad317775eb34f4f55e71,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_common,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_common$$$function__8_from_package(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_common$$$function__8_from_package,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8c3345b87ee6d0809a97b259f1a885a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_importlib_resources$_common,
        mod_consts[42],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_common$$$function__9__tempfile(PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_common$$$function__9__tempfile,
        mod_consts[55],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_87cf5a186d07e591468d451c485ee3f9,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_importlib_resources$_common,
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

function_impl_code functable_importlib_resources$_common[] = {
    impl_importlib_resources$_common$$$function__1_package_to_anchor$$$function__1_wrapper,
    impl_importlib_resources$_common$$$function__7__infer_caller$$$function__1_is_this_file,
    impl_importlib_resources$_common$$$function__7__infer_caller$$$function__2_is_wrapper,
    impl_importlib_resources$_common$$$function__1_package_to_anchor,
    impl_importlib_resources$_common$$$function__2_files,
    impl_importlib_resources$_common$$$function__3_get_resource_reader,
    impl_importlib_resources$_common$$$function__4_resolve,
    impl_importlib_resources$_common$$$function__5__,
    impl_importlib_resources$_common$$$function__6__,
    impl_importlib_resources$_common$$$function__7__infer_caller,
    impl_importlib_resources$_common$$$function__8_from_package,
    impl_importlib_resources$_common$$$function__9__tempfile,
    impl_importlib_resources$_common$$$function__10__temp_file,
    impl_importlib_resources$_common$$$function__11__is_present_dir,
    impl_importlib_resources$_common$$$function__12_as_file,
    impl_importlib_resources$_common$$$function__13__,
    impl_importlib_resources$_common$$$function__14__temp_path,
    impl_importlib_resources$_common$$$function__15__temp_dir,
    impl_importlib_resources$_common$$$function__16__write_contents,
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

    function_impl_code *current = functable_importlib_resources$_common;
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

    if (offset > sizeof(functable_importlib_resources$_common) || offset < 0) {
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
        functable_importlib_resources$_common[offset],
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
        module_importlib_resources$_common,
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
PyObject *modulecode_importlib_resources$_common(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("importlib_resources._common");

    // Store the module for future use.
    module_importlib_resources$_common = module;

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
        PRINT_STRING("importlib_resources._common: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("importlib_resources._common: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("importlib_resources._common: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initimportlib_resources$_common\n");

    moduledict_importlib_resources$_common = MODULE_DICT(module_importlib_resources$_common);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_importlib_resources$_common,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_importlib_resources$_common,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[127]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_importlib_resources$_common,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_importlib_resources$_common,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_importlib_resources$_common,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_importlib_resources$_common);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_importlib_resources$_common, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_importlib_resources$_common, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_importlib_resources$_common, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_importlib_resources$_common);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_importlib_resources$_common, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_a1bee483206c7cc52f0846cdf052a702;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_2);
    }
    frame_a1bee483206c7cc52f0846cdf052a702 = MAKE_MODULE_FRAME(codeobj_a1bee483206c7cc52f0846cdf052a702, module_importlib_resources$_common);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a1bee483206c7cc52f0846cdf052a702);
    assert(Py_REFCNT(frame_a1bee483206c7cc52f0846cdf052a702) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[84], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[85], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[52];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_importlib_resources$_common;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[87];
        frame_a1bee483206c7cc52f0846cdf052a702->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[43];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_importlib_resources$_common;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[87];
        frame_a1bee483206c7cc52f0846cdf052a702->m_frame.f_lineno = 3;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = IMPORT_HARD_FUNCTOOLS();
        assert(!(tmp_assign_source_7 == NULL));
        UPDATE_STRING_DICT0(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[57];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_importlib_resources$_common;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[87];
        frame_a1bee483206c7cc52f0846cdf052a702->m_frame.f_lineno = 5;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = IMPORT_HARD_TYPES();
        assert(!(tmp_assign_source_9 == NULL));
        UPDATE_STRING_DICT0(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = IMPORT_HARD_IMPORTLIB();
        assert(!(tmp_assign_source_10 == NULL));
        UPDATE_STRING_DICT0(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[33];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_importlib_resources$_common;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[87];
        frame_a1bee483206c7cc52f0846cdf052a702->m_frame.f_lineno = 8;
        tmp_assign_source_11 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[7];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_importlib_resources$_common;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = Py_None;
        tmp_level_value_5 = mod_consts[87];
        frame_a1bee483206c7cc52f0846cdf052a702->m_frame.f_lineno = 9;
        tmp_assign_source_12 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[31];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_importlib_resources$_common;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = Py_None;
        tmp_level_value_6 = mod_consts[87];
        frame_a1bee483206c7cc52f0846cdf052a702->m_frame.f_lineno = 10;
        tmp_assign_source_13 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        assert(!(tmp_assign_source_13 == NULL));
        UPDATE_STRING_DICT1(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_14 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_14);
        tmp_import_from_1__module = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_importlib_resources$_common,
                mod_consts[89],
                mod_consts[87]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[89]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_importlib_resources$_common,
                mod_consts[90],
                mod_consts[87]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[90]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_importlib_resources$_common,
                mod_consts[20],
                mod_consts[87]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[20]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_17);
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
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[91];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_importlib_resources$_common;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[92];
        tmp_level_value_7 = mod_consts[93];
        frame_a1bee483206c7cc52f0846cdf052a702->m_frame.f_lineno = 13;
        tmp_assign_source_18 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_18;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_4 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_importlib_resources$_common,
                mod_consts[94],
                mod_consts[87]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[94]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_importlib_resources$_common,
                mod_consts[95],
                mod_consts[87]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[95]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_20);
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
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[96];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_importlib_resources$_common;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[97];
        tmp_level_value_8 = mod_consts[93];
        frame_a1bee483206c7cc52f0846cdf052a702->m_frame.f_lineno = 15;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_importlib_resources$_common,
                mod_consts[40],
                mod_consts[87]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[40]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[22]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_subscript_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = (PyObject *)&PyUnicode_Type;
        PyTuple_SET_ITEM0(tmp_subscript_value_1, 1, tmp_tuple_element_1);
        tmp_assign_source_22 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_assign_source_23 == NULL)) {
            tmp_assign_source_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        assert(!(tmp_assign_source_23 == NULL));
        UPDATE_STRING_DICT0(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;


        tmp_assign_source_24 = MAKE_FUNCTION_importlib_resources$_common$$$function__1_package_to_anchor();

        UPDATE_STRING_DICT1(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_defaults_1;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
        }

        assert(!(tmp_called_value_1 == NULL));
        tmp_defaults_1 = mod_consts[101];
        tmp_dict_key_1 = mod_consts[102];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_subscript_value_2 == NULL)) {
            tmp_subscript_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        assert(!(tmp_subscript_value_2 == NULL));
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[103];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

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
        Py_INCREF(tmp_defaults_1);


        tmp_args_element_value_1 = MAKE_FUNCTION_importlib_resources$_common$$$function__2_files(tmp_defaults_1, tmp_annotations_1);

        frame_a1bee483206c7cc52f0846cdf052a702->m_frame.f_lineno = 51;
        tmp_assign_source_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_value_4;
        tmp_dict_key_2 = mod_consts[104];
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        assert(!(tmp_expression_value_4 == NULL));
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[22]);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_subscript_value_3;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[103];
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_3 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[94]);

            if (unlikely(tmp_subscript_value_3 == NULL)) {
                tmp_subscript_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
            }

            if (tmp_subscript_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_3);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_annotations_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;


        tmp_assign_source_26 = MAKE_FUNCTION_importlib_resources$_common$$$function__3_get_resource_reader(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_4;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        assert(!(tmp_expression_value_6 == NULL));
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[105]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_3 = mod_consts[106];
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_4 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_subscript_value_4 == NULL)) {
            tmp_subscript_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        if (tmp_subscript_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_4);
        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_8;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[103];
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
            }

            assert(!(tmp_expression_value_8 == NULL));
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[22]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_annotations_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;


        tmp_args_element_value_2 = MAKE_FUNCTION_importlib_resources$_common$$$function__4_resolve(tmp_annotations_3);

        frame_a1bee483206c7cc52f0846cdf052a702->m_frame.f_lineno = 75;
        tmp_assign_source_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        assert(!(tmp_expression_value_9 == NULL));
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[107]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_4 = mod_consts[106];
        tmp_dict_value_4 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_4 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_10;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[103];
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
            }

            assert(!(tmp_expression_value_10 == NULL));
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[22]);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_4;
        // Exception handling pass through code for dict_build:
        dict_build_exception_4:;
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_annotations_4);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_4:;


        tmp_args_element_value_3 = MAKE_FUNCTION_importlib_resources$_common$$$function__5__(tmp_annotations_4);

        frame_a1bee483206c7cc52f0846cdf052a702->m_frame.f_lineno = 80;
        tmp_assign_source_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_annotations_5;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[107]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_5 = mod_consts[106];
        tmp_dict_value_5 = Py_None;
        tmp_annotations_5 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_12;
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[103];
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
            }

            assert(!(tmp_expression_value_12 == NULL));
            tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[22]);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_5;
        // Exception handling pass through code for dict_build:
        dict_build_exception_5:;
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_annotations_5);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_5:;


        tmp_args_element_value_4 = MAKE_FUNCTION_importlib_resources$_common$$$function__6__(tmp_annotations_5);

        frame_a1bee483206c7cc52f0846cdf052a702->m_frame.f_lineno = 85;
        tmp_assign_source_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;


        tmp_assign_source_30 = MAKE_FUNCTION_importlib_resources$_common$$$function__7__infer_caller();

        UPDATE_STRING_DICT1(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_annotations_6;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_expression_value_13;
        tmp_dict_key_6 = mod_consts[104];
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        assert(!(tmp_expression_value_13 == NULL));
        tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[22]);
        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_annotations_6 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
        Py_DECREF(tmp_dict_value_6);
        assert(!(tmp_res != 0));


        tmp_assign_source_31 = MAKE_FUNCTION_importlib_resources$_common$$$function__8_from_package(tmp_annotations_6);

        UPDATE_STRING_DICT1(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_defaults_2;
        PyObject *tmp_kw_defaults_1;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_expression_value_15;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[108]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_defaults_2 = mod_consts[109];
        tmp_dict_key_7 = mod_consts[54];
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        assert(!(tmp_expression_value_15 == NULL));
        tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[110]);
        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_kw_defaults_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_7, tmp_dict_value_7);
        Py_DECREF(tmp_dict_value_7);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_defaults_2);


        tmp_args_element_value_5 = MAKE_FUNCTION_importlib_resources$_common$$$function__9__tempfile(tmp_defaults_2, tmp_kw_defaults_1);

        frame_a1bee483206c7cc52f0846cdf052a702->m_frame.f_lineno = 117;
        tmp_assign_source_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;


        tmp_assign_source_33 = MAKE_FUNCTION_importlib_resources$_common$$$function__10__temp_file();

        UPDATE_STRING_DICT1(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_annotations_7;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        tmp_dict_key_8 = mod_consts[70];
        tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_dict_value_8 == NULL)) {
            tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        if (tmp_dict_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_annotations_7 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[103];
        tmp_dict_value_8 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));


        tmp_assign_source_34 = MAKE_FUNCTION_importlib_resources$_common$$$function__11__is_present_dir(tmp_annotations_7);

        UPDATE_STRING_DICT1(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_6;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        assert(!(tmp_called_instance_1 == NULL));


        tmp_args_element_value_6 = MAKE_FUNCTION_importlib_resources$_common$$$function__12_as_file();

        frame_a1bee483206c7cc52f0846cdf052a702->m_frame.f_lineno = 161;
        tmp_assign_source_35 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[105], tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_value_6;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_9;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
        }

        assert(!(tmp_expression_value_16 == NULL));
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[107]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[53]);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        frame_a1bee483206c7cc52f0846cdf052a702->m_frame.f_lineno = 170;
        tmp_called_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 171;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_9 = MAKE_FUNCTION_importlib_resources$_common$$$function__13__();

        frame_a1bee483206c7cc52f0846cdf052a702->m_frame.f_lineno = 171;
        tmp_args_element_value_8 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[108], tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        frame_a1bee483206c7cc52f0846cdf052a702->m_frame.f_lineno = 170;
        tmp_assign_source_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_annotations_8;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_expression_value_19;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[108]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_9 = mod_consts[73];
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[76]);
        if (tmp_dict_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_annotations_8 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_9, tmp_dict_value_9);
        Py_DECREF(tmp_dict_value_9);
        assert(!(tmp_res != 0));


        tmp_args_element_value_10 = MAKE_FUNCTION_importlib_resources$_common$$$function__14__temp_path(tmp_annotations_8);

        frame_a1bee483206c7cc52f0846cdf052a702->m_frame.f_lineno = 179;
        tmp_assign_source_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_11;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_11 = MAKE_FUNCTION_importlib_resources$_common$$$function__15__temp_dir();

        frame_a1bee483206c7cc52f0846cdf052a702->m_frame.f_lineno = 188;
        tmp_assign_source_38 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[108], tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_38);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a1bee483206c7cc52f0846cdf052a702, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a1bee483206c7cc52f0846cdf052a702->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a1bee483206c7cc52f0846cdf052a702, exception_lineno);
    }



    assertFrameObject(frame_a1bee483206c7cc52f0846cdf052a702);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_39;


        tmp_assign_source_39 = MAKE_FUNCTION_importlib_resources$_common$$$function__16__write_contents();

        UPDATE_STRING_DICT1(moduledict_importlib_resources$_common, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_39);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("importlib_resources._common", false);

    Py_INCREF(module_importlib_resources$_common);
    return module_importlib_resources$_common;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_common, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("importlib_resources$_common", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
