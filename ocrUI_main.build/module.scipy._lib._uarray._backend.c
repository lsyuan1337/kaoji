/* Generated code for Python module 'scipy._lib._uarray._backend'
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

/* The "module_scipy$_lib$_uarray$_backend" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$_lib$_uarray$_backend;
PyDictObject *moduledict_scipy$_lib$_uarray$_backend;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[154];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[154];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("scipy._lib._uarray._backend"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 154; i++) {
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
void checkModuleConstants_scipy$_lib$_uarray$_backend(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 154; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_ea7cdfebd10a5278154a4831c42a5b89;
static PyCodeObject *codeobj_44ad0130f907b96756fffc93e770510d;
static PyCodeObject *codeobj_3f0327ac5ad7583e8e7a59fcfe8e669b;
static PyCodeObject *codeobj_9f448f3d867c349e029503082ab069a4;
static PyCodeObject *codeobj_55073e0878bd0f70ed6b340f8b3d6113;
static PyCodeObject *codeobj_9a2a1d01a71e670e5c7f5fd6fadf7e70;
static PyCodeObject *codeobj_2ae48138748d7f7141116be40a9b3d4c;
static PyCodeObject *codeobj_a05e12e224cb59f0b28f45e0c945244b;
static PyCodeObject *codeobj_4bf6c65878d9ea16b35ce794c4b5cccc;
static PyCodeObject *codeobj_6ebcdc679be20a50e9b1f6de4ccf8335;
static PyCodeObject *codeobj_360cd00662447106107489d8e0df4eca;
static PyCodeObject *codeobj_5508691fd1e2ab2823b4b0b2e66e2647;
static PyCodeObject *codeobj_444cf38df15f6d7803e80006ea01b35e;
static PyCodeObject *codeobj_3be22cb4260de5ebe68ecae665478bf4;
static PyCodeObject *codeobj_9a7c20c09ca14ed596a53fcc2213b42a;
static PyCodeObject *codeobj_1c5cf3b81f7d19d4fad800ddfcc07452;
static PyCodeObject *codeobj_3a5c1d38724278bf4a7695d79f805412;
static PyCodeObject *codeobj_28d8ba4a4d49b2e397901819a8cfdc84;
static PyCodeObject *codeobj_87a418a73b99e5eebed55cce2ecc95d7;
static PyCodeObject *codeobj_4f3582fc6bc15eab7bfd4084af3c45d3;
static PyCodeObject *codeobj_78c8d8ffc1831278ef66a26156ee1ab6;
static PyCodeObject *codeobj_e30049b24726179fafa19ee388a0b78e;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[128]); CHECK_OBJECT(module_filename_obj);
    codeobj_ea7cdfebd10a5278154a4831c42a5b89 = MAKE_CODE_OBJECT(module_filename_obj, 392, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[72], mod_consts[72], mod_consts[129], mod_consts[130], 1, 0, 0);
    codeobj_44ad0130f907b96756fffc93e770510d = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[131], mod_consts[131], NULL, NULL, 0, 0, 0);
    codeobj_3f0327ac5ad7583e8e7a59fcfe8e669b = MAKE_CODE_OBJECT(module_filename_obj, 350, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[119], mod_consts[119], mod_consts[132], NULL, 2, 0, 0);
    codeobj_9f448f3d867c349e029503082ab069a4 = MAKE_CODE_OBJECT(module_filename_obj, 345, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[117], mod_consts[117], mod_consts[133], NULL, 4, 0, 0);
    codeobj_55073e0878bd0f70ed6b340f8b3d6113 = MAKE_CODE_OBJECT(module_filename_obj, 353, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[121], mod_consts[121], mod_consts[134], NULL, 1, 0, 0);
    codeobj_9a2a1d01a71e670e5c7f5fd6fadf7e70 = MAKE_CODE_OBJECT(module_filename_obj, 412, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[74], mod_consts[74], mod_consts[135], mod_consts[136], 2, 0, 0);
    codeobj_2ae48138748d7f7141116be40a9b3d4c = MAKE_CODE_OBJECT(module_filename_obj, 374, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[126], mod_consts[126], mod_consts[137], NULL, 1, 0, 0);
    codeobj_a05e12e224cb59f0b28f45e0c945244b = MAKE_CODE_OBJECT(module_filename_obj, 286, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[53], mod_consts[53], mod_consts[138], NULL, 3, 0, 0);
    codeobj_4bf6c65878d9ea16b35ce794c4b5cccc = MAKE_CODE_OBJECT(module_filename_obj, 72, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[104], mod_consts[104], mod_consts[139], NULL, 0, 0, 0);
    codeobj_6ebcdc679be20a50e9b1f6de4ccf8335 = MAKE_CODE_OBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[16], mod_consts[140], NULL, 4, 0, 0);
    codeobj_360cd00662447106107489d8e0df4eca = MAKE_CODE_OBJECT(module_filename_obj, 224, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[19], mod_consts[19], mod_consts[141], NULL, 1, 0, 0);
    codeobj_5508691fd1e2ab2823b4b0b2e66e2647 = MAKE_CODE_OBJECT(module_filename_obj, 388, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, mod_consts[68], mod_consts[68], mod_consts[142], mod_consts[130], 0, 0, 0);
    codeobj_444cf38df15f6d7803e80006ea01b35e = MAKE_CODE_OBJECT(module_filename_obj, 361, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[125], mod_consts[125], mod_consts[62], NULL, 1, 0, 0);
    codeobj_3be22cb4260de5ebe68ecae665478bf4 = MAKE_CODE_OBJECT(module_filename_obj, 387, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[64], mod_consts[64], mod_consts[143], mod_consts[144], 1, 0, 0);
    codeobj_9a7c20c09ca14ed596a53fcc2213b42a = MAKE_CODE_OBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[101], mod_consts[101], mod_consts[145], NULL, 1, 0, 0);
    codeobj_1c5cf3b81f7d19d4fad800ddfcc07452 = MAKE_CODE_OBJECT(module_filename_obj, 270, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[51], mod_consts[51], mod_consts[146], NULL, 1, 0, 0);
    codeobj_3a5c1d38724278bf4a7695d79f805412 = MAKE_CODE_OBJECT(module_filename_obj, 166, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[111], mod_consts[111], mod_consts[147], NULL, 3, 0, 0);
    codeobj_28d8ba4a4d49b2e397901819a8cfdc84 = MAKE_CODE_OBJECT(module_filename_obj, 242, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[49], mod_consts[49], mod_consts[148], NULL, 3, 0, 0);
    codeobj_87a418a73b99e5eebed55cce2ecc95d7 = MAKE_CODE_OBJECT(module_filename_obj, 196, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[112], mod_consts[112], mod_consts[149], NULL, 1, 0, 0);
    codeobj_4f3582fc6bc15eab7bfd4084af3c45d3 = MAKE_CODE_OBJECT(module_filename_obj, 38, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[150], NULL, 2, 0, 0);
    codeobj_78c8d8ffc1831278ef66a26156ee1ab6 = MAKE_CODE_OBJECT(module_filename_obj, 403, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[127], mod_consts[127], mod_consts[151], NULL, 1, 0, 0);
    codeobj_e30049b24726179fafa19ee388a0b78e = MAKE_CODE_OBJECT(module_filename_obj, 86, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[13], mod_consts[13], mod_consts[152], mod_consts[153], 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_scipy$_lib$_uarray$_backend$$$function__15_all_of_type$$$function__1_outer$$$function__1_inner$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__6_complex_call_helper_pos_star_list_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__5_complex_call_helper_star_list_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__10_clear_backends(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__11___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__12___getitem__();


static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__13___str__();


static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__14_mark_as();


static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__15_all_of_type();


static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__15_all_of_type$$$function__1_outer(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__15_all_of_type$$$function__1_outer$$$function__1_inner(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__16_wrap_single_convertor();


static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__16_wrap_single_convertor$$$function__1___ua_convert__(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__1_unpickle_function();


static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__2_pickle_function();


static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__3_create_multimethod();


static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__3_create_multimethod$$$function__1_wrapper(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__4_generate_multimethod(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__5_set_backend(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__6_skip_backend();


static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__7_get_defaults();


static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__8_set_global_backend(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__9_register_backend();


// The module function definitions.
static PyObject *impl_scipy$_lib$_uarray$_backend$$$function__1_unpickle_function(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_mod_name = python_pars[0];
    PyObject *par_qname = python_pars[1];
    PyObject *var_importlib = NULL;
    PyObject *var_module = NULL;
    PyObject *var_func = NULL;
    PyObject *var_e = NULL;
    PyObject *var_UnpicklingError = NULL;
    struct Nuitka_FrameObject *frame_4f3582fc6bc15eab7bfd4084af3c45d3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_4f3582fc6bc15eab7bfd4084af3c45d3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = IMPORT_HARD_IMPORTLIB();
        assert(!(tmp_assign_source_1 == NULL));
        assert(var_importlib == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_importlib = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_4f3582fc6bc15eab7bfd4084af3c45d3)) {
        Py_XDECREF(cache_frame_4f3582fc6bc15eab7bfd4084af3c45d3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4f3582fc6bc15eab7bfd4084af3c45d3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4f3582fc6bc15eab7bfd4084af3c45d3 = MAKE_FUNCTION_FRAME(codeobj_4f3582fc6bc15eab7bfd4084af3c45d3, module_scipy$_lib$_uarray$_backend, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4f3582fc6bc15eab7bfd4084af3c45d3->m_type_description == NULL);
    frame_4f3582fc6bc15eab7bfd4084af3c45d3 = cache_frame_4f3582fc6bc15eab7bfd4084af3c45d3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4f3582fc6bc15eab7bfd4084af3c45d3);
    assert(Py_REFCNT(frame_4f3582fc6bc15eab7bfd4084af3c45d3) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_name_value_1;
        CHECK_OBJECT(par_mod_name);
        tmp_name_value_1 = par_mod_name;
        frame_4f3582fc6bc15eab7bfd4084af3c45d3->m_frame.f_lineno = 42;
        {
            PyObject *hard_module = IMPORT_HARD_IMPORTLIB();
            PyObject *import_module_func = LOOKUP_ATTRIBUTE(hard_module, mod_consts[0]);
            tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(import_module_func, tmp_name_value_1);
            Py_DECREF(import_module_func);
        }
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        assert(var_module == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_module = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        CHECK_OBJECT(var_module);
        tmp_getattr_target_1 = var_module;
        CHECK_OBJECT(par_qname);
        tmp_getattr_attr_1 = par_qname;
        tmp_assign_source_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        assert(var_func == NULL);
        var_func = tmp_assign_source_3;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_4f3582fc6bc15eab7bfd4084af3c45d3, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_4f3582fc6bc15eab7bfd4084af3c45d3, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = mod_consts[1];
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooooo";
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
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_e = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_2 = mod_consts[2];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_scipy$_lib$_uarray$_backend;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[3];
        tmp_level_value_1 = mod_consts[4];
        frame_4f3582fc6bc15eab7bfd4084af3c45d3->m_frame.f_lineno = 46;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_scipy$_lib$_uarray$_backend,
                mod_consts[5],
                mod_consts[4]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[5]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        assert(var_UnpicklingError == NULL);
        var_UnpicklingError = tmp_assign_source_5;
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_cause_1;
        CHECK_OBJECT(var_UnpicklingError);
        tmp_raise_type_1 = var_UnpicklingError;
        CHECK_OBJECT(var_e);
        tmp_raise_cause_1 = var_e;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = NULL;
        Py_INCREF(tmp_raise_cause_1);
        exception_lineno = 48;
        RAISE_EXCEPTION_WITH_CAUSE(&exception_type, &exception_value, &exception_tb, tmp_raise_cause_1);
        type_description_1 = "ooooooo";
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
        exception_lineno = 41;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_4f3582fc6bc15eab7bfd4084af3c45d3->m_frame) frame_4f3582fc6bc15eab7bfd4084af3c45d3->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooo";
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
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4f3582fc6bc15eab7bfd4084af3c45d3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4f3582fc6bc15eab7bfd4084af3c45d3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4f3582fc6bc15eab7bfd4084af3c45d3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4f3582fc6bc15eab7bfd4084af3c45d3,
        type_description_1,
        par_mod_name,
        par_qname,
        var_importlib,
        var_module,
        var_func,
        var_e,
        var_UnpicklingError
    );


    // Release cached frame if used for exception.
    if (frame_4f3582fc6bc15eab7bfd4084af3c45d3 == cache_frame_4f3582fc6bc15eab7bfd4084af3c45d3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4f3582fc6bc15eab7bfd4084af3c45d3);
        cache_frame_4f3582fc6bc15eab7bfd4084af3c45d3 = NULL;
    }

    assertFrameObject(frame_4f3582fc6bc15eab7bfd4084af3c45d3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_func);
    tmp_return_value = var_func;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_importlib);
    Py_DECREF(var_importlib);
    var_importlib = NULL;
    CHECK_OBJECT(var_module);
    Py_DECREF(var_module);
    var_module = NULL;
    CHECK_OBJECT(var_func);
    Py_DECREF(var_func);
    var_func = NULL;
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

    CHECK_OBJECT(var_importlib);
    Py_DECREF(var_importlib);
    var_importlib = NULL;
    Py_XDECREF(var_module);
    var_module = NULL;
    Py_XDECREF(var_UnpicklingError);
    var_UnpicklingError = NULL;
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
    CHECK_OBJECT(par_mod_name);
    Py_DECREF(par_mod_name);
    CHECK_OBJECT(par_qname);
    Py_DECREF(par_qname);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_mod_name);
    Py_DECREF(par_mod_name);
    CHECK_OBJECT(par_qname);
    Py_DECREF(par_qname);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$_lib$_uarray$_backend$$$function__2_pickle_function(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[0];
    PyObject *var_mod_name = NULL;
    PyObject *var_qname = NULL;
    PyObject *var_test = NULL;
    struct Nuitka_FrameObject *frame_9a7c20c09ca14ed596a53fcc2213b42a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9a7c20c09ca14ed596a53fcc2213b42a = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9a7c20c09ca14ed596a53fcc2213b42a)) {
        Py_XDECREF(cache_frame_9a7c20c09ca14ed596a53fcc2213b42a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9a7c20c09ca14ed596a53fcc2213b42a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9a7c20c09ca14ed596a53fcc2213b42a = MAKE_FUNCTION_FRAME(codeobj_9a7c20c09ca14ed596a53fcc2213b42a, module_scipy$_lib$_uarray$_backend, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9a7c20c09ca14ed596a53fcc2213b42a->m_type_description == NULL);
    frame_9a7c20c09ca14ed596a53fcc2213b42a = cache_frame_9a7c20c09ca14ed596a53fcc2213b42a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9a7c20c09ca14ed596a53fcc2213b42a);
    assert(Py_REFCNT(frame_9a7c20c09ca14ed596a53fcc2213b42a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT(par_func);
        tmp_getattr_target_1 = par_func;
        tmp_getattr_attr_1 = mod_consts[6];
        tmp_getattr_default_1 = Py_None;
        tmp_assign_source_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_mod_name == NULL);
        var_mod_name = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        CHECK_OBJECT(par_func);
        tmp_getattr_target_2 = par_func;
        tmp_getattr_attr_2 = mod_consts[7];
        tmp_getattr_default_2 = Py_None;
        tmp_assign_source_2 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_qname == NULL);
        var_qname = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_mod_name);
        tmp_args_element_value_1 = var_mod_name;
        CHECK_OBJECT(var_qname);
        tmp_args_element_value_2 = var_qname;
        frame_9a7c20c09ca14ed596a53fcc2213b42a->m_frame.f_lineno = 56;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert(var_test == NULL);
        var_test = tmp_assign_source_3;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_9a7c20c09ca14ed596a53fcc2213b42a, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_9a7c20c09ca14ed596a53fcc2213b42a, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooo";
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
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        assert(var_test == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_test = tmp_assign_source_4;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 55;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_9a7c20c09ca14ed596a53fcc2213b42a->m_frame) frame_9a7c20c09ca14ed596a53fcc2213b42a->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_3;
    branch_end_1:;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
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
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_test);
        tmp_cmp_expr_left_2 = var_test;
        CHECK_OBJECT(par_func);
        tmp_cmp_expr_right_2 = par_func;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[9]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[10];
        CHECK_OBJECT(par_func);
        tmp_kw_call_arg_value_1_1 = par_func;
        CHECK_OBJECT(var_test);
        tmp_kw_call_arg_value_2_1 = var_test;
        frame_9a7c20c09ca14ed596a53fcc2213b42a->m_frame.f_lineno = 62;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            tmp_args_element_value_3 = CALL_FUNCTION_WITH_ARGS3(unicode_builtin_format, call_args);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 62;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_9a7c20c09ca14ed596a53fcc2213b42a->m_frame.f_lineno = 61;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 61;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_tuple_element_2;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
            if (var_mod_name == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 65;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }

            tmp_tuple_element_2 = var_mod_name;
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_2);
            if (var_qname == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 65;
                type_description_1 = "oooo";
                goto tuple_build_exception_2;
            }

            tmp_tuple_element_2 = var_qname;
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_2);
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_9a7c20c09ca14ed596a53fcc2213b42a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9a7c20c09ca14ed596a53fcc2213b42a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9a7c20c09ca14ed596a53fcc2213b42a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9a7c20c09ca14ed596a53fcc2213b42a,
        type_description_1,
        par_func,
        var_mod_name,
        var_qname,
        var_test
    );


    // Release cached frame if used for exception.
    if (frame_9a7c20c09ca14ed596a53fcc2213b42a == cache_frame_9a7c20c09ca14ed596a53fcc2213b42a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9a7c20c09ca14ed596a53fcc2213b42a);
        cache_frame_9a7c20c09ca14ed596a53fcc2213b42a = NULL;
    }

    assertFrameObject(frame_9a7c20c09ca14ed596a53fcc2213b42a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_mod_name);
    var_mod_name = NULL;
    Py_XDECREF(var_qname);
    var_qname = NULL;
    CHECK_OBJECT(var_test);
    Py_DECREF(var_test);
    var_test = NULL;
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

    Py_XDECREF(var_mod_name);
    var_mod_name = NULL;
    Py_XDECREF(var_qname);
    var_qname = NULL;
    Py_XDECREF(var_test);
    var_test = NULL;
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


static PyObject *impl_scipy$_lib$_uarray$_backend$$$function__3_create_multimethod(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_args = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_kwargs = Nuitka_Cell_New1(python_pars[1]);
    PyObject *var_wrapper = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_args;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_kwargs;
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_1 = MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__3_create_multimethod$$$function__1_wrapper(tmp_closure_1);

        assert(var_wrapper == NULL);
        var_wrapper = tmp_assign_source_1;
    }
    // Tried code:
    CHECK_OBJECT(var_wrapper);
    tmp_return_value = var_wrapper;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_wrapper);
    Py_DECREF(var_wrapper);
    var_wrapper = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
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


static PyObject *impl_scipy$_lib$_uarray$_backend$$$function__3_create_multimethod$$$function__1_wrapper(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    struct Nuitka_FrameObject *frame_e30049b24726179fafa19ee388a0b78e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e30049b24726179fafa19ee388a0b78e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e30049b24726179fafa19ee388a0b78e)) {
        Py_XDECREF(cache_frame_e30049b24726179fafa19ee388a0b78e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e30049b24726179fafa19ee388a0b78e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e30049b24726179fafa19ee388a0b78e = MAKE_FUNCTION_FRAME(codeobj_e30049b24726179fafa19ee388a0b78e, module_scipy$_lib$_uarray$_backend, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e30049b24726179fafa19ee388a0b78e->m_type_description == NULL);
    frame_e30049b24726179fafa19ee388a0b78e = cache_frame_e30049b24726179fafa19ee388a0b78e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e30049b24726179fafa19ee388a0b78e);
    assert(Py_REFCNT(frame_e30049b24726179fafa19ee388a0b78e) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_a);
        tmp_tuple_element_1 = par_a;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_dircall_arg2_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 87;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_1 = Nuitka_Cell_GET(self->m_closure[0]);
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_dircall_arg2_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 87;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg4_1 = Nuitka_Cell_GET(self->m_closure[1]);
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___main__$$$function__6_complex_call_helper_pos_star_list_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "occ";
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
        exception_tb = MAKE_TRACEBACK(frame_e30049b24726179fafa19ee388a0b78e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e30049b24726179fafa19ee388a0b78e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e30049b24726179fafa19ee388a0b78e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e30049b24726179fafa19ee388a0b78e,
        type_description_1,
        par_a,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_e30049b24726179fafa19ee388a0b78e == cache_frame_e30049b24726179fafa19ee388a0b78e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e30049b24726179fafa19ee388a0b78e);
        cache_frame_e30049b24726179fafa19ee388a0b78e = NULL;
    }

    assertFrameObject(frame_e30049b24726179fafa19ee388a0b78e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$_lib$_uarray$_backend$$$function__4_generate_multimethod(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_argument_extractor = python_pars[0];
    PyObject *par_argument_replacer = python_pars[1];
    PyObject *par_domain = python_pars[2];
    PyObject *par_default = python_pars[3];
    PyObject *var_kw_defaults = NULL;
    PyObject *var_arg_defaults = NULL;
    PyObject *var_opts = NULL;
    PyObject *var_ua_func = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_6ebcdc679be20a50e9b1f6de4ccf8335;
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
    static struct Nuitka_FrameObject *cache_frame_6ebcdc679be20a50e9b1f6de4ccf8335 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6ebcdc679be20a50e9b1f6de4ccf8335)) {
        Py_XDECREF(cache_frame_6ebcdc679be20a50e9b1f6de4ccf8335);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6ebcdc679be20a50e9b1f6de4ccf8335 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6ebcdc679be20a50e9b1f6de4ccf8335 = MAKE_FUNCTION_FRAME(codeobj_6ebcdc679be20a50e9b1f6de4ccf8335, module_scipy$_lib$_uarray$_backend, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6ebcdc679be20a50e9b1f6de4ccf8335->m_type_description == NULL);
    frame_6ebcdc679be20a50e9b1f6de4ccf8335 = cache_frame_6ebcdc679be20a50e9b1f6de4ccf8335;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6ebcdc679be20a50e9b1f6de4ccf8335);
    assert(Py_REFCNT(frame_6ebcdc679be20a50e9b1f6de4ccf8335) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_argument_extractor);
        tmp_args_element_value_1 = par_argument_extractor;
        frame_6ebcdc679be20a50e9b1f6de4ccf8335->m_frame.f_lineno = 153;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
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


            type_description_1 = "oooooooo";
            exception_lineno = 153;
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


            type_description_1 = "oooooooo";
            exception_lineno = 153;
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


            type_description_1 = "oooooooo";
            exception_lineno = 153;
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

                    type_description_1 = "oooooooo";
                    exception_lineno = 153;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[20];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooo";
            exception_lineno = 153;
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
        assert(var_kw_defaults == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_kw_defaults = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var_arg_defaults == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_arg_defaults = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
        assert(var_opts == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_opts = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_argument_extractor);
        tmp_args_element_value_2 = par_argument_extractor;
        CHECK_OBJECT(par_argument_replacer);
        tmp_args_element_value_3 = par_argument_replacer;
        CHECK_OBJECT(par_domain);
        tmp_args_element_value_4 = par_domain;
        CHECK_OBJECT(var_arg_defaults);
        tmp_args_element_value_5 = var_arg_defaults;
        CHECK_OBJECT(var_kw_defaults);
        tmp_args_element_value_6 = var_kw_defaults;
        CHECK_OBJECT(par_default);
        tmp_args_element_value_7 = par_default;
        frame_6ebcdc679be20a50e9b1f6de4ccf8335->m_frame.f_lineno = 154;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_2, call_args);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ua_func == NULL);
        var_ua_func = tmp_assign_source_8;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        CHECK_OBJECT(var_ua_func);
        tmp_args_element_value_8 = var_ua_func;
        CHECK_OBJECT(par_argument_extractor);
        tmp_args_element_value_9 = par_argument_extractor;
        frame_6ebcdc679be20a50e9b1f6de4ccf8335->m_frame.f_lineno = 163;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[23],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_6ebcdc679be20a50e9b1f6de4ccf8335, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6ebcdc679be20a50e9b1f6de4ccf8335->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6ebcdc679be20a50e9b1f6de4ccf8335, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6ebcdc679be20a50e9b1f6de4ccf8335,
        type_description_1,
        par_argument_extractor,
        par_argument_replacer,
        par_domain,
        par_default,
        var_kw_defaults,
        var_arg_defaults,
        var_opts,
        var_ua_func
    );


    // Release cached frame if used for exception.
    if (frame_6ebcdc679be20a50e9b1f6de4ccf8335 == cache_frame_6ebcdc679be20a50e9b1f6de4ccf8335) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6ebcdc679be20a50e9b1f6de4ccf8335);
        cache_frame_6ebcdc679be20a50e9b1f6de4ccf8335 = NULL;
    }

    assertFrameObject(frame_6ebcdc679be20a50e9b1f6de4ccf8335);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_kw_defaults);
    Py_DECREF(var_kw_defaults);
    var_kw_defaults = NULL;
    CHECK_OBJECT(var_arg_defaults);
    Py_DECREF(var_arg_defaults);
    var_arg_defaults = NULL;
    CHECK_OBJECT(var_opts);
    Py_DECREF(var_opts);
    var_opts = NULL;
    CHECK_OBJECT(var_ua_func);
    Py_DECREF(var_ua_func);
    var_ua_func = NULL;
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

    Py_XDECREF(var_kw_defaults);
    var_kw_defaults = NULL;
    Py_XDECREF(var_arg_defaults);
    var_arg_defaults = NULL;
    Py_XDECREF(var_opts);
    var_opts = NULL;
    Py_XDECREF(var_ua_func);
    var_ua_func = NULL;
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
    CHECK_OBJECT(par_argument_extractor);
    Py_DECREF(par_argument_extractor);
    CHECK_OBJECT(par_argument_replacer);
    Py_DECREF(par_argument_replacer);
    CHECK_OBJECT(par_domain);
    Py_DECREF(par_domain);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_argument_extractor);
    Py_DECREF(par_argument_extractor);
    CHECK_OBJECT(par_argument_replacer);
    Py_DECREF(par_argument_replacer);
    CHECK_OBJECT(par_domain);
    Py_DECREF(par_domain);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$_lib$_uarray$_backend$$$function__5_set_backend(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_backend = python_pars[0];
    PyObject *par_coerce = python_pars[1];
    PyObject *par_only = python_pars[2];
    PyObject *var_ctx = NULL;
    struct Nuitka_FrameObject *frame_3a5c1d38724278bf4a7695d79f805412;
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
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_3a5c1d38724278bf4a7695d79f805412 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3a5c1d38724278bf4a7695d79f805412)) {
        Py_XDECREF(cache_frame_3a5c1d38724278bf4a7695d79f805412);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3a5c1d38724278bf4a7695d79f805412 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3a5c1d38724278bf4a7695d79f805412 = MAKE_FUNCTION_FRAME(codeobj_3a5c1d38724278bf4a7695d79f805412, module_scipy$_lib$_uarray$_backend, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3a5c1d38724278bf4a7695d79f805412->m_type_description == NULL);
    frame_3a5c1d38724278bf4a7695d79f805412 = cache_frame_3a5c1d38724278bf4a7695d79f805412;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3a5c1d38724278bf4a7695d79f805412);
    assert(Py_REFCNT(frame_3a5c1d38724278bf4a7695d79f805412) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_backend);
        tmp_expression_value_2 = par_backend;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[25]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_tuple_element_1 = mod_consts[26];
        tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_subscript_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_coerce);
        tmp_tuple_element_1 = par_coerce;
        PyTuple_SET_ITEM0(tmp_subscript_value_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_only);
        tmp_tuple_element_1 = par_only;
        PyTuple_SET_ITEM0(tmp_subscript_value_1, 2, tmp_tuple_element_1);
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooo";
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_3a5c1d38724278bf4a7695d79f805412, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_3a5c1d38724278bf4a7695d79f805412, exception_keeper_lineno_1);
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
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = MAKE_DICT_EMPTY();
        CHECK_OBJECT(par_backend);
        tmp_assattr_target_1 = par_backend;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[25], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_KeyError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
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
        exception_lineno = 184;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_3a5c1d38724278bf4a7695d79f805412->m_frame) frame_3a5c1d38724278bf4a7695d79f805412->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_3;
    branch_no_2:;
    branch_end_1:;
    goto try_end_1;
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
    try_end_1:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_backend);
        tmp_args_element_value_1 = par_backend;
        CHECK_OBJECT(par_coerce);
        tmp_args_element_value_2 = par_coerce;
        CHECK_OBJECT(par_only);
        tmp_args_element_value_3 = par_only;
        frame_3a5c1d38724278bf4a7695d79f805412->m_frame.f_lineno = 191;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_ctx == NULL);
        var_ctx = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(var_ctx);
        tmp_ass_subvalue_1 = var_ctx;
        CHECK_OBJECT(par_backend);
        tmp_expression_value_3 = par_backend;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[25]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = mod_consts[26];
        tmp_ass_subscript_1 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_ass_subscript_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_coerce);
        tmp_tuple_element_2 = par_coerce;
        PyTuple_SET_ITEM0(tmp_ass_subscript_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(par_only);
        tmp_tuple_element_2 = par_only;
        PyTuple_SET_ITEM0(tmp_ass_subscript_1, 2, tmp_tuple_element_2);
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subscript_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
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
        exception_tb = MAKE_TRACEBACK(frame_3a5c1d38724278bf4a7695d79f805412, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3a5c1d38724278bf4a7695d79f805412->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3a5c1d38724278bf4a7695d79f805412, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3a5c1d38724278bf4a7695d79f805412,
        type_description_1,
        par_backend,
        par_coerce,
        par_only,
        var_ctx
    );


    // Release cached frame if used for exception.
    if (frame_3a5c1d38724278bf4a7695d79f805412 == cache_frame_3a5c1d38724278bf4a7695d79f805412) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3a5c1d38724278bf4a7695d79f805412);
        cache_frame_3a5c1d38724278bf4a7695d79f805412 = NULL;
    }

    assertFrameObject(frame_3a5c1d38724278bf4a7695d79f805412);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_ctx);
    tmp_return_value = var_ctx;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_ctx);
    var_ctx = NULL;
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

    Py_XDECREF(var_ctx);
    var_ctx = NULL;
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
    CHECK_OBJECT(par_backend);
    Py_DECREF(par_backend);
    CHECK_OBJECT(par_coerce);
    Py_DECREF(par_coerce);
    CHECK_OBJECT(par_only);
    Py_DECREF(par_only);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_backend);
    Py_DECREF(par_backend);
    CHECK_OBJECT(par_coerce);
    Py_DECREF(par_coerce);
    CHECK_OBJECT(par_only);
    Py_DECREF(par_only);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$_lib$_uarray$_backend$$$function__6_skip_backend(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_backend = python_pars[0];
    PyObject *var_ctx = NULL;
    struct Nuitka_FrameObject *frame_87a418a73b99e5eebed55cce2ecc95d7;
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
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_87a418a73b99e5eebed55cce2ecc95d7 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_87a418a73b99e5eebed55cce2ecc95d7)) {
        Py_XDECREF(cache_frame_87a418a73b99e5eebed55cce2ecc95d7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_87a418a73b99e5eebed55cce2ecc95d7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_87a418a73b99e5eebed55cce2ecc95d7 = MAKE_FUNCTION_FRAME(codeobj_87a418a73b99e5eebed55cce2ecc95d7, module_scipy$_lib$_uarray$_backend, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_87a418a73b99e5eebed55cce2ecc95d7->m_type_description == NULL);
    frame_87a418a73b99e5eebed55cce2ecc95d7 = cache_frame_87a418a73b99e5eebed55cce2ecc95d7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_87a418a73b99e5eebed55cce2ecc95d7);
    assert(Py_REFCNT(frame_87a418a73b99e5eebed55cce2ecc95d7) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_backend);
        tmp_expression_value_2 = par_backend;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[25]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_1 = mod_consts[29];
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oo";
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_87a418a73b99e5eebed55cce2ecc95d7, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_87a418a73b99e5eebed55cce2ecc95d7, exception_keeper_lineno_1);
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
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = MAKE_DICT_EMPTY();
        CHECK_OBJECT(par_backend);
        tmp_assattr_target_1 = par_backend;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[25], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_KeyError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
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
        exception_lineno = 212;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_87a418a73b99e5eebed55cce2ecc95d7->m_frame) frame_87a418a73b99e5eebed55cce2ecc95d7->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_3;
    branch_no_2:;
    branch_end_1:;
    goto try_end_1;
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
    try_end_1:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_backend);
        tmp_args_element_value_1 = par_backend;
        frame_87a418a73b99e5eebed55cce2ecc95d7->m_frame.f_lineno = 219;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_ctx == NULL);
        var_ctx = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_ctx);
        tmp_ass_subvalue_1 = var_ctx;
        CHECK_OBJECT(par_backend);
        tmp_expression_value_3 = par_backend;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[25]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[29];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
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
        exception_tb = MAKE_TRACEBACK(frame_87a418a73b99e5eebed55cce2ecc95d7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_87a418a73b99e5eebed55cce2ecc95d7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_87a418a73b99e5eebed55cce2ecc95d7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_87a418a73b99e5eebed55cce2ecc95d7,
        type_description_1,
        par_backend,
        var_ctx
    );


    // Release cached frame if used for exception.
    if (frame_87a418a73b99e5eebed55cce2ecc95d7 == cache_frame_87a418a73b99e5eebed55cce2ecc95d7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_87a418a73b99e5eebed55cce2ecc95d7);
        cache_frame_87a418a73b99e5eebed55cce2ecc95d7 = NULL;
    }

    assertFrameObject(frame_87a418a73b99e5eebed55cce2ecc95d7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_ctx);
    tmp_return_value = var_ctx;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_ctx);
    var_ctx = NULL;
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

    Py_XDECREF(var_ctx);
    var_ctx = NULL;
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


static PyObject *impl_scipy$_lib$_uarray$_backend$$$function__7_get_defaults(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_f = python_pars[0];
    PyObject *var_sig = NULL;
    PyObject *var_kw_defaults = NULL;
    PyObject *var_arg_defaults = NULL;
    PyObject *var_opts = NULL;
    PyObject *var_k = NULL;
    PyObject *var_v = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_360cd00662447106107489d8e0df4eca;
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
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_360cd00662447106107489d8e0df4eca = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_360cd00662447106107489d8e0df4eca)) {
        Py_XDECREF(cache_frame_360cd00662447106107489d8e0df4eca);

#if _DEBUG_REFCOUNTS
        if (cache_frame_360cd00662447106107489d8e0df4eca == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_360cd00662447106107489d8e0df4eca = MAKE_FUNCTION_FRAME(codeobj_360cd00662447106107489d8e0df4eca, module_scipy$_lib$_uarray$_backend, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_360cd00662447106107489d8e0df4eca->m_type_description == NULL);
    frame_360cd00662447106107489d8e0df4eca = cache_frame_360cd00662447106107489d8e0df4eca;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_360cd00662447106107489d8e0df4eca);
    assert(Py_REFCNT(frame_360cd00662447106107489d8e0df4eca) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_f);
        tmp_args_element_value_1 = par_f;
        frame_360cd00662447106107489d8e0df4eca->m_frame.f_lineno = 225;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[33], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sig == NULL);
        var_sig = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_DICT_EMPTY();
        assert(var_kw_defaults == NULL);
        var_kw_defaults = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = MAKE_LIST_EMPTY(0);
        assert(var_arg_defaults == NULL);
        var_arg_defaults = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = PySet_New(NULL);
        assert(var_opts == NULL);
        var_opts = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_sig);
        tmp_expression_value_2 = var_sig;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[34]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[35]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_360cd00662447106107489d8e0df4eca->m_frame.f_lineno = 229;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_5;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_6 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooo";
                exception_lineno = 229;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 229;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 229;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
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

                    type_description_1 = "ooooooo";
                    exception_lineno = 229;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[36];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooo";
            exception_lineno = 229;
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_10;
            Py_INCREF(var_k);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_11;
            Py_INCREF(var_v);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_v);
        tmp_expression_value_3 = var_v;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[37]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 230;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[38]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 230;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[39]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 230;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_v);
        tmp_expression_value_6 = var_v;
        tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[37]);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        if (var_kw_defaults == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 231;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_ass_subscribed_1 = var_kw_defaults;
        CHECK_OBJECT(var_k);
        tmp_ass_subscript_1 = var_k;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(var_v);
        tmp_expression_value_7 = var_v;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[41]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 233;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[38]);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 233;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[42]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 233;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_10;
            PyObject *tmp_expression_value_11;
            PyTuple_SET_ITEM(tmp_cmp_expr_right_2, 0, tmp_tuple_element_1);
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[32]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_1;
            }
            tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[38]);
            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[43]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_cmp_expr_right_2, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
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
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_13;
        if (var_arg_defaults == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 236;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_12 = var_arg_defaults;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[45]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_v);
        tmp_expression_value_13 = var_v;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[37]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 236;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_360cd00662447106107489d8e0df4eca->m_frame.f_lineno = 236;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_2:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 237;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_2 = var_opts;
        CHECK_OBJECT(var_k);
        tmp_args_element_value_3 = var_k;
        frame_360cd00662447106107489d8e0df4eca->m_frame.f_lineno = 237;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[47], tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 229;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
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
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_tuple_element_2;
        if (var_kw_defaults == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 239;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = var_kw_defaults;
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_tuple_arg_1;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
            if (var_arg_defaults == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 239;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_2;
            }

            tmp_tuple_arg_1 = var_arg_defaults;
            tmp_tuple_element_2 = PySequence_Tuple(tmp_tuple_arg_1);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_2);
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 239;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_2;
            }

            tmp_tuple_element_2 = var_opts;
            PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_360cd00662447106107489d8e0df4eca, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_360cd00662447106107489d8e0df4eca->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_360cd00662447106107489d8e0df4eca, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_360cd00662447106107489d8e0df4eca,
        type_description_1,
        par_f,
        var_sig,
        var_kw_defaults,
        var_arg_defaults,
        var_opts,
        var_k,
        var_v
    );


    // Release cached frame if used for exception.
    if (frame_360cd00662447106107489d8e0df4eca == cache_frame_360cd00662447106107489d8e0df4eca) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_360cd00662447106107489d8e0df4eca);
        cache_frame_360cd00662447106107489d8e0df4eca = NULL;
    }

    assertFrameObject(frame_360cd00662447106107489d8e0df4eca);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_sig);
    Py_DECREF(var_sig);
    var_sig = NULL;
    Py_XDECREF(var_kw_defaults);
    var_kw_defaults = NULL;
    Py_XDECREF(var_arg_defaults);
    var_arg_defaults = NULL;
    Py_XDECREF(var_opts);
    var_opts = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
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

    Py_XDECREF(var_sig);
    var_sig = NULL;
    Py_XDECREF(var_kw_defaults);
    var_kw_defaults = NULL;
    Py_XDECREF(var_arg_defaults);
    var_arg_defaults = NULL;
    Py_XDECREF(var_opts);
    var_opts = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
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
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$_lib$_uarray$_backend$$$function__8_set_global_backend(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_backend = python_pars[0];
    PyObject *par_coerce = python_pars[1];
    PyObject *par_only = python_pars[2];
    struct Nuitka_FrameObject *frame_28d8ba4a4d49b2e397901819a8cfdc84;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_28d8ba4a4d49b2e397901819a8cfdc84 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_28d8ba4a4d49b2e397901819a8cfdc84)) {
        Py_XDECREF(cache_frame_28d8ba4a4d49b2e397901819a8cfdc84);

#if _DEBUG_REFCOUNTS
        if (cache_frame_28d8ba4a4d49b2e397901819a8cfdc84 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_28d8ba4a4d49b2e397901819a8cfdc84 = MAKE_FUNCTION_FRAME(codeobj_28d8ba4a4d49b2e397901819a8cfdc84, module_scipy$_lib$_uarray$_backend, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_28d8ba4a4d49b2e397901819a8cfdc84->m_type_description == NULL);
    frame_28d8ba4a4d49b2e397901819a8cfdc84 = cache_frame_28d8ba4a4d49b2e397901819a8cfdc84;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_28d8ba4a4d49b2e397901819a8cfdc84);
    assert(Py_REFCNT(frame_28d8ba4a4d49b2e397901819a8cfdc84) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_backend);
        tmp_args_element_value_1 = par_backend;
        CHECK_OBJECT(par_coerce);
        tmp_args_element_value_2 = par_coerce;
        CHECK_OBJECT(par_only);
        tmp_args_element_value_3 = par_only;
        frame_28d8ba4a4d49b2e397901819a8cfdc84->m_frame.f_lineno = 267;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[49],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
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
        exception_tb = MAKE_TRACEBACK(frame_28d8ba4a4d49b2e397901819a8cfdc84, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_28d8ba4a4d49b2e397901819a8cfdc84->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_28d8ba4a4d49b2e397901819a8cfdc84, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_28d8ba4a4d49b2e397901819a8cfdc84,
        type_description_1,
        par_backend,
        par_coerce,
        par_only
    );


    // Release cached frame if used for exception.
    if (frame_28d8ba4a4d49b2e397901819a8cfdc84 == cache_frame_28d8ba4a4d49b2e397901819a8cfdc84) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_28d8ba4a4d49b2e397901819a8cfdc84);
        cache_frame_28d8ba4a4d49b2e397901819a8cfdc84 = NULL;
    }

    assertFrameObject(frame_28d8ba4a4d49b2e397901819a8cfdc84);

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
    CHECK_OBJECT(par_backend);
    Py_DECREF(par_backend);
    CHECK_OBJECT(par_coerce);
    Py_DECREF(par_coerce);
    CHECK_OBJECT(par_only);
    Py_DECREF(par_only);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_backend);
    Py_DECREF(par_backend);
    CHECK_OBJECT(par_coerce);
    Py_DECREF(par_coerce);
    CHECK_OBJECT(par_only);
    Py_DECREF(par_only);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$_lib$_uarray$_backend$$$function__9_register_backend(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_backend = python_pars[0];
    struct Nuitka_FrameObject *frame_1c5cf3b81f7d19d4fad800ddfcc07452;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1c5cf3b81f7d19d4fad800ddfcc07452 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1c5cf3b81f7d19d4fad800ddfcc07452)) {
        Py_XDECREF(cache_frame_1c5cf3b81f7d19d4fad800ddfcc07452);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1c5cf3b81f7d19d4fad800ddfcc07452 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1c5cf3b81f7d19d4fad800ddfcc07452 = MAKE_FUNCTION_FRAME(codeobj_1c5cf3b81f7d19d4fad800ddfcc07452, module_scipy$_lib$_uarray$_backend, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1c5cf3b81f7d19d4fad800ddfcc07452->m_type_description == NULL);
    frame_1c5cf3b81f7d19d4fad800ddfcc07452 = cache_frame_1c5cf3b81f7d19d4fad800ddfcc07452;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1c5cf3b81f7d19d4fad800ddfcc07452);
    assert(Py_REFCNT(frame_1c5cf3b81f7d19d4fad800ddfcc07452) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_backend);
        tmp_args_element_value_1 = par_backend;
        frame_1c5cf3b81f7d19d4fad800ddfcc07452->m_frame.f_lineno = 283;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[51], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
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
        exception_tb = MAKE_TRACEBACK(frame_1c5cf3b81f7d19d4fad800ddfcc07452, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1c5cf3b81f7d19d4fad800ddfcc07452->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1c5cf3b81f7d19d4fad800ddfcc07452, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1c5cf3b81f7d19d4fad800ddfcc07452,
        type_description_1,
        par_backend
    );


    // Release cached frame if used for exception.
    if (frame_1c5cf3b81f7d19d4fad800ddfcc07452 == cache_frame_1c5cf3b81f7d19d4fad800ddfcc07452) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1c5cf3b81f7d19d4fad800ddfcc07452);
        cache_frame_1c5cf3b81f7d19d4fad800ddfcc07452 = NULL;
    }

    assertFrameObject(frame_1c5cf3b81f7d19d4fad800ddfcc07452);

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


static PyObject *impl_scipy$_lib$_uarray$_backend$$$function__10_clear_backends(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_domain = python_pars[0];
    PyObject *par_registered = python_pars[1];
    PyObject *par_globals = python_pars[2];
    struct Nuitka_FrameObject *frame_a05e12e224cb59f0b28f45e0c945244b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a05e12e224cb59f0b28f45e0c945244b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a05e12e224cb59f0b28f45e0c945244b)) {
        Py_XDECREF(cache_frame_a05e12e224cb59f0b28f45e0c945244b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a05e12e224cb59f0b28f45e0c945244b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a05e12e224cb59f0b28f45e0c945244b = MAKE_FUNCTION_FRAME(codeobj_a05e12e224cb59f0b28f45e0c945244b, module_scipy$_lib$_uarray$_backend, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a05e12e224cb59f0b28f45e0c945244b->m_type_description == NULL);
    frame_a05e12e224cb59f0b28f45e0c945244b = cache_frame_a05e12e224cb59f0b28f45e0c945244b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a05e12e224cb59f0b28f45e0c945244b);
    assert(Py_REFCNT(frame_a05e12e224cb59f0b28f45e0c945244b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_domain);
        tmp_args_element_value_1 = par_domain;
        CHECK_OBJECT(par_registered);
        tmp_args_element_value_2 = par_registered;
        CHECK_OBJECT(par_globals);
        tmp_args_element_value_3 = par_globals;
        frame_a05e12e224cb59f0b28f45e0c945244b->m_frame.f_lineno = 314;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[53],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
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
        exception_tb = MAKE_TRACEBACK(frame_a05e12e224cb59f0b28f45e0c945244b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a05e12e224cb59f0b28f45e0c945244b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a05e12e224cb59f0b28f45e0c945244b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a05e12e224cb59f0b28f45e0c945244b,
        type_description_1,
        par_domain,
        par_registered,
        par_globals
    );


    // Release cached frame if used for exception.
    if (frame_a05e12e224cb59f0b28f45e0c945244b == cache_frame_a05e12e224cb59f0b28f45e0c945244b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a05e12e224cb59f0b28f45e0c945244b);
        cache_frame_a05e12e224cb59f0b28f45e0c945244b = NULL;
    }

    assertFrameObject(frame_a05e12e224cb59f0b28f45e0c945244b);

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
    CHECK_OBJECT(par_domain);
    Py_DECREF(par_domain);
    CHECK_OBJECT(par_registered);
    Py_DECREF(par_registered);
    CHECK_OBJECT(par_globals);
    Py_DECREF(par_globals);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_domain);
    Py_DECREF(par_domain);
    CHECK_OBJECT(par_registered);
    Py_DECREF(par_registered);
    CHECK_OBJECT(par_globals);
    Py_DECREF(par_globals);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$_lib$_uarray$_backend$$$function__11___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    PyObject *par_dispatch_type = python_pars[2];
    PyObject *par_coercible = python_pars[3];
    struct Nuitka_FrameObject *frame_9f448f3d867c349e029503082ab069a4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9f448f3d867c349e029503082ab069a4 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9f448f3d867c349e029503082ab069a4)) {
        Py_XDECREF(cache_frame_9f448f3d867c349e029503082ab069a4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9f448f3d867c349e029503082ab069a4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9f448f3d867c349e029503082ab069a4 = MAKE_FUNCTION_FRAME(codeobj_9f448f3d867c349e029503082ab069a4, module_scipy$_lib$_uarray$_backend, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9f448f3d867c349e029503082ab069a4->m_type_description == NULL);
    frame_9f448f3d867c349e029503082ab069a4 = cache_frame_9f448f3d867c349e029503082ab069a4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9f448f3d867c349e029503082ab069a4);
    assert(Py_REFCNT(frame_9f448f3d867c349e029503082ab069a4) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[55], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_dispatch_type);
        tmp_assattr_value_2 = par_dispatch_type;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[56], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_coercible);
        tmp_assattr_value_3 = par_coercible;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[57], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9f448f3d867c349e029503082ab069a4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9f448f3d867c349e029503082ab069a4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9f448f3d867c349e029503082ab069a4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9f448f3d867c349e029503082ab069a4,
        type_description_1,
        par_self,
        par_value,
        par_dispatch_type,
        par_coercible
    );


    // Release cached frame if used for exception.
    if (frame_9f448f3d867c349e029503082ab069a4 == cache_frame_9f448f3d867c349e029503082ab069a4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9f448f3d867c349e029503082ab069a4);
        cache_frame_9f448f3d867c349e029503082ab069a4 = NULL;
    }

    assertFrameObject(frame_9f448f3d867c349e029503082ab069a4);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_dispatch_type);
    Py_DECREF(par_dispatch_type);
    CHECK_OBJECT(par_coercible);
    Py_DECREF(par_coercible);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_dispatch_type);
    Py_DECREF(par_dispatch_type);
    CHECK_OBJECT(par_coercible);
    Py_DECREF(par_coercible);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$_lib$_uarray$_backend$$$function__12___getitem__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_index = python_pars[1];
    struct Nuitka_FrameObject *frame_3f0327ac5ad7583e8e7a59fcfe8e669b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3f0327ac5ad7583e8e7a59fcfe8e669b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3f0327ac5ad7583e8e7a59fcfe8e669b)) {
        Py_XDECREF(cache_frame_3f0327ac5ad7583e8e7a59fcfe8e669b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3f0327ac5ad7583e8e7a59fcfe8e669b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3f0327ac5ad7583e8e7a59fcfe8e669b = MAKE_FUNCTION_FRAME(codeobj_3f0327ac5ad7583e8e7a59fcfe8e669b, module_scipy$_lib$_uarray$_backend, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3f0327ac5ad7583e8e7a59fcfe8e669b->m_type_description == NULL);
    frame_3f0327ac5ad7583e8e7a59fcfe8e669b = cache_frame_3f0327ac5ad7583e8e7a59fcfe8e669b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3f0327ac5ad7583e8e7a59fcfe8e669b);
    assert(Py_REFCNT(frame_3f0327ac5ad7583e8e7a59fcfe8e669b) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[56]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_3;
            PyTuple_SET_ITEM(tmp_expression_value_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[55]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_expression_value_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_expression_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        CHECK_OBJECT(par_index);
        tmp_subscript_value_1 = par_index;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
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
        exception_tb = MAKE_TRACEBACK(frame_3f0327ac5ad7583e8e7a59fcfe8e669b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3f0327ac5ad7583e8e7a59fcfe8e669b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3f0327ac5ad7583e8e7a59fcfe8e669b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3f0327ac5ad7583e8e7a59fcfe8e669b,
        type_description_1,
        par_self,
        par_index
    );


    // Release cached frame if used for exception.
    if (frame_3f0327ac5ad7583e8e7a59fcfe8e669b == cache_frame_3f0327ac5ad7583e8e7a59fcfe8e669b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3f0327ac5ad7583e8e7a59fcfe8e669b);
        cache_frame_3f0327ac5ad7583e8e7a59fcfe8e669b = NULL;
    }

    assertFrameObject(frame_3f0327ac5ad7583e8e7a59fcfe8e669b);

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
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$_lib$_uarray$_backend$$$function__13___str__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_55073e0878bd0f70ed6b340f8b3d6113;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_55073e0878bd0f70ed6b340f8b3d6113 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_55073e0878bd0f70ed6b340f8b3d6113)) {
        Py_XDECREF(cache_frame_55073e0878bd0f70ed6b340f8b3d6113);

#if _DEBUG_REFCOUNTS
        if (cache_frame_55073e0878bd0f70ed6b340f8b3d6113 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_55073e0878bd0f70ed6b340f8b3d6113 = MAKE_FUNCTION_FRAME(codeobj_55073e0878bd0f70ed6b340f8b3d6113, module_scipy$_lib$_uarray$_backend, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_55073e0878bd0f70ed6b340f8b3d6113->m_type_description == NULL);
    frame_55073e0878bd0f70ed6b340f8b3d6113 = cache_frame_55073e0878bd0f70ed6b340f8b3d6113;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_55073e0878bd0f70ed6b340f8b3d6113);
    assert(Py_REFCNT(frame_55073e0878bd0f70ed6b340f8b3d6113) == 2);

    // Framed code:
    {
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_expression_value_3;
        tmp_kw_call_arg_value_0_1 = mod_consts[58];
        CHECK_OBJECT(par_self);
        tmp_type_arg_1 = par_self;
        tmp_expression_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_expression_value_1 == NULL));
        tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[59]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_kw_call_arg_value_2_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[56]);
        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 355;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_kw_call_arg_value_3_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[55]);
        if (tmp_kw_call_arg_value_3_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);

            exception_lineno = 355;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_55073e0878bd0f70ed6b340f8b3d6113->m_frame.f_lineno = 354;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        Py_DECREF(tmp_kw_call_arg_value_2_1);
        Py_DECREF(tmp_kw_call_arg_value_3_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
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
        exception_tb = MAKE_TRACEBACK(frame_55073e0878bd0f70ed6b340f8b3d6113, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_55073e0878bd0f70ed6b340f8b3d6113->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_55073e0878bd0f70ed6b340f8b3d6113, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_55073e0878bd0f70ed6b340f8b3d6113,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_55073e0878bd0f70ed6b340f8b3d6113 == cache_frame_55073e0878bd0f70ed6b340f8b3d6113) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_55073e0878bd0f70ed6b340f8b3d6113);
        cache_frame_55073e0878bd0f70ed6b340f8b3d6113 = NULL;
    }

    assertFrameObject(frame_55073e0878bd0f70ed6b340f8b3d6113);

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


static PyObject *impl_scipy$_lib$_uarray$_backend$$$function__14_mark_as(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dispatch_type = python_pars[0];
    struct Nuitka_FrameObject *frame_444cf38df15f6d7803e80006ea01b35e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_444cf38df15f6d7803e80006ea01b35e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_444cf38df15f6d7803e80006ea01b35e)) {
        Py_XDECREF(cache_frame_444cf38df15f6d7803e80006ea01b35e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_444cf38df15f6d7803e80006ea01b35e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_444cf38df15f6d7803e80006ea01b35e = MAKE_FUNCTION_FRAME(codeobj_444cf38df15f6d7803e80006ea01b35e, module_scipy$_lib$_uarray$_backend, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_444cf38df15f6d7803e80006ea01b35e->m_type_description == NULL);
    frame_444cf38df15f6d7803e80006ea01b35e = cache_frame_444cf38df15f6d7803e80006ea01b35e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_444cf38df15f6d7803e80006ea01b35e);
    assert(Py_REFCNT(frame_444cf38df15f6d7803e80006ea01b35e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        {
            PyObject *hard_module = IMPORT_HARD_FUNCTOOLS();
            tmp_called_value_1 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[60]);
        }
        assert(!(tmp_called_value_1 == NULL));
        tmp_kw_call_arg_value_0_1 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_kw_call_arg_value_0_1 == NULL)) {
            tmp_kw_call_arg_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 371;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dispatch_type);
        tmp_kw_call_dict_value_0_1 = par_dispatch_type;
        frame_444cf38df15f6d7803e80006ea01b35e->m_frame.f_lineno = 371;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[62]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
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
        exception_tb = MAKE_TRACEBACK(frame_444cf38df15f6d7803e80006ea01b35e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_444cf38df15f6d7803e80006ea01b35e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_444cf38df15f6d7803e80006ea01b35e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_444cf38df15f6d7803e80006ea01b35e,
        type_description_1,
        par_dispatch_type
    );


    // Release cached frame if used for exception.
    if (frame_444cf38df15f6d7803e80006ea01b35e == cache_frame_444cf38df15f6d7803e80006ea01b35e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_444cf38df15f6d7803e80006ea01b35e);
        cache_frame_444cf38df15f6d7803e80006ea01b35e = NULL;
    }

    assertFrameObject(frame_444cf38df15f6d7803e80006ea01b35e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_dispatch_type);
    Py_DECREF(par_dispatch_type);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_dispatch_type);
    Py_DECREF(par_dispatch_type);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$_lib$_uarray$_backend$$$function__15_all_of_type(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_arg_type = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var_outer = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_arg_type;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__15_all_of_type$$$function__1_outer(tmp_closure_1);

        assert(var_outer == NULL);
        var_outer = tmp_assign_source_1;
    }
    // Tried code:
    CHECK_OBJECT(var_outer);
    tmp_return_value = var_outer;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_outer);
    Py_DECREF(var_outer);
    var_outer = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_arg_type);
    Py_DECREF(par_arg_type);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$_lib$_uarray$_backend$$$function__15_all_of_type$$$function__1_outer(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_func = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var_inner = NULL;
    struct Nuitka_FrameObject *frame_3be22cb4260de5ebe68ecae665478bf4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3be22cb4260de5ebe68ecae665478bf4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3be22cb4260de5ebe68ecae665478bf4)) {
        Py_XDECREF(cache_frame_3be22cb4260de5ebe68ecae665478bf4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3be22cb4260de5ebe68ecae665478bf4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3be22cb4260de5ebe68ecae665478bf4 = MAKE_FUNCTION_FRAME(codeobj_3be22cb4260de5ebe68ecae665478bf4, module_scipy$_lib$_uarray$_backend, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3be22cb4260de5ebe68ecae665478bf4->m_type_description == NULL);
    frame_3be22cb4260de5ebe68ecae665478bf4 = cache_frame_3be22cb4260de5ebe68ecae665478bf4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3be22cb4260de5ebe68ecae665478bf4);
    assert(Py_REFCNT(frame_3be22cb4260de5ebe68ecae665478bf4) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        struct Nuitka_CellObject *tmp_closure_1[2];
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        CHECK_OBJECT(Nuitka_Cell_GET(par_func));
        tmp_args_element_value_1 = Nuitka_Cell_GET(par_func);
        frame_3be22cb4260de5ebe68ecae665478bf4->m_frame.f_lineno = 388;
        tmp_called_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[67], tmp_args_element_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }

        tmp_closure_1[0] = self->m_closure[0];
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_func;
        Py_INCREF(tmp_closure_1[1]);

        tmp_args_element_value_2 = MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__15_all_of_type$$$function__1_outer$$$function__1_inner(tmp_closure_1);

        frame_3be22cb4260de5ebe68ecae665478bf4->m_frame.f_lineno = 388;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        assert(var_inner == NULL);
        var_inner = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3be22cb4260de5ebe68ecae665478bf4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3be22cb4260de5ebe68ecae665478bf4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3be22cb4260de5ebe68ecae665478bf4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3be22cb4260de5ebe68ecae665478bf4,
        type_description_1,
        par_func,
        var_inner
    );


    // Release cached frame if used for exception.
    if (frame_3be22cb4260de5ebe68ecae665478bf4 == cache_frame_3be22cb4260de5ebe68ecae665478bf4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3be22cb4260de5ebe68ecae665478bf4);
        cache_frame_3be22cb4260de5ebe68ecae665478bf4 = NULL;
    }

    assertFrameObject(frame_3be22cb4260de5ebe68ecae665478bf4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_inner);
    tmp_return_value = var_inner;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_inner);
    Py_DECREF(var_inner);
    var_inner = NULL;
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


static PyObject *impl_scipy$_lib$_uarray$_backend$$$function__15_all_of_type$$$function__1_outer$$$function__1_inner(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    PyObject *var_extracted_args = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_5508691fd1e2ab2823b4b0b2e66e2647;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5508691fd1e2ab2823b4b0b2e66e2647 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5508691fd1e2ab2823b4b0b2e66e2647)) {
        Py_XDECREF(cache_frame_5508691fd1e2ab2823b4b0b2e66e2647);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5508691fd1e2ab2823b4b0b2e66e2647 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5508691fd1e2ab2823b4b0b2e66e2647 = MAKE_FUNCTION_FRAME(codeobj_5508691fd1e2ab2823b4b0b2e66e2647, module_scipy$_lib$_uarray$_backend, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5508691fd1e2ab2823b4b0b2e66e2647->m_type_description == NULL);
    frame_5508691fd1e2ab2823b4b0b2e66e2647 = cache_frame_5508691fd1e2ab2823b4b0b2e66e2647;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5508691fd1e2ab2823b4b0b2e66e2647);
    assert(Py_REFCNT(frame_5508691fd1e2ab2823b4b0b2e66e2647) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[70]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 390;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_1 = impl___main__$$$function__5_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        assert(var_extracted_args == NULL);
        var_extracted_args = tmp_assign_source_1;
    }
    {
        PyObject *tmp_tuple_arg_1;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(var_extracted_args);
            tmp_iter_arg_1 = var_extracted_args;
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 392;
                type_description_1 = "oooc";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_2;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[2];

            tmp_closure_1[0] = self->m_closure[0];
            Py_INCREF(tmp_closure_1[0]);
            tmp_closure_1[1] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_tuple_arg_1 = MAKE_GENERATOR_scipy$_lib$_uarray$_backend$$$function__15_all_of_type$$$function__1_outer$$$function__1_inner$$$genexpr__1_genexpr(tmp_closure_1);

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
        tmp_return_value = PySequence_Tuple(tmp_tuple_arg_1);
        Py_DECREF(tmp_tuple_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "oooc";
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
        exception_tb = MAKE_TRACEBACK(frame_5508691fd1e2ab2823b4b0b2e66e2647, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5508691fd1e2ab2823b4b0b2e66e2647->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5508691fd1e2ab2823b4b0b2e66e2647, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5508691fd1e2ab2823b4b0b2e66e2647,
        type_description_1,
        par_args,
        par_kwargs,
        var_extracted_args,
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_5508691fd1e2ab2823b4b0b2e66e2647 == cache_frame_5508691fd1e2ab2823b4b0b2e66e2647) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5508691fd1e2ab2823b4b0b2e66e2647);
        cache_frame_5508691fd1e2ab2823b4b0b2e66e2647 = NULL;
    }

    assertFrameObject(frame_5508691fd1e2ab2823b4b0b2e66e2647);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_extracted_args);
    Py_DECREF(var_extracted_args);
    var_extracted_args = NULL;
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

    Py_XDECREF(var_extracted_args);
    var_extracted_args = NULL;
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
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
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



struct scipy$_lib$_uarray$_backend$$$function__15_all_of_type$$$function__1_outer$$$function__1_inner$$$genexpr__1_genexpr_locals {
    PyObject *var_arg;
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

static PyObject *scipy$_lib$_uarray$_backend$$$function__15_all_of_type$$$function__1_outer$$$function__1_inner$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct scipy$_lib$_uarray$_backend$$$function__15_all_of_type$$$function__1_outer$$$function__1_inner$$$genexpr__1_genexpr_locals *generator_heap = (struct scipy$_lib$_uarray$_backend$$$function__15_all_of_type$$$function__1_outer$$$function__1_inner$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_arg = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_ea7cdfebd10a5278154a4831c42a5b89, module_scipy$_lib$_uarray$_backend, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
                generator_heap->exception_lineno = 392;
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
            PyObject *old = generator_heap->var_arg;
            generator_heap->var_arg = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_arg);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_arg);
        tmp_isinstance_inst_1 = generator_heap->var_arg;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 393;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        generator_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 393;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_operand_value_1 = (generator_heap->tmp_res != 0) ? Py_True : Py_False;
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 393;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 392;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_arg);
        tmp_args_element_value_1 = generator_heap->var_arg;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[71]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 392;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator->m_frame->m_frame.f_lineno = 392;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 392;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(generator_heap->var_arg);
        tmp_expression_value_1 = generator_heap->var_arg;
        Py_INCREF(tmp_expression_value_1);
        condexpr_end_1:;
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(bool), &tmp_operand_value_1, sizeof(PyObject *), &tmp_isinstance_inst_1, sizeof(PyObject *), &tmp_isinstance_cls_1, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(bool), &tmp_operand_value_1, sizeof(PyObject *), &tmp_isinstance_inst_1, sizeof(PyObject *), &tmp_isinstance_cls_1, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 392;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 392;
        generator_heap->type_description_1 = "Noc";
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
            generator_heap->var_arg,
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
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_arg);
    generator_heap->var_arg = NULL;
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
    Py_XDECREF(generator_heap->var_arg);
    generator_heap->var_arg = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_scipy$_lib$_uarray$_backend$$$function__15_all_of_type$$$function__1_outer$$$function__1_inner$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        scipy$_lib$_uarray$_backend$$$function__15_all_of_type$$$function__1_outer$$$function__1_inner$$$genexpr__1_genexpr_context,
        module_scipy$_lib$_uarray$_backend,
        mod_consts[72],
#if PYTHON_VERSION >= 0x350
        mod_consts[73],
#endif
        codeobj_ea7cdfebd10a5278154a4831c42a5b89,
        closure,
        2,
        sizeof(struct scipy$_lib$_uarray$_backend$$$function__15_all_of_type$$$function__1_outer$$$function__1_inner$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_scipy$_lib$_uarray$_backend$$$function__16_wrap_single_convertor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_convert_single = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var___ua_convert__ = NULL;
    struct Nuitka_FrameObject *frame_78c8d8ffc1831278ef66a26156ee1ab6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_78c8d8ffc1831278ef66a26156ee1ab6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_78c8d8ffc1831278ef66a26156ee1ab6)) {
        Py_XDECREF(cache_frame_78c8d8ffc1831278ef66a26156ee1ab6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_78c8d8ffc1831278ef66a26156ee1ab6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_78c8d8ffc1831278ef66a26156ee1ab6 = MAKE_FUNCTION_FRAME(codeobj_78c8d8ffc1831278ef66a26156ee1ab6, module_scipy$_lib$_uarray$_backend, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_78c8d8ffc1831278ef66a26156ee1ab6->m_type_description == NULL);
    frame_78c8d8ffc1831278ef66a26156ee1ab6 = cache_frame_78c8d8ffc1831278ef66a26156ee1ab6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_78c8d8ffc1831278ef66a26156ee1ab6);
    assert(Py_REFCNT(frame_78c8d8ffc1831278ef66a26156ee1ab6) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        struct Nuitka_CellObject *tmp_closure_1[1];
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        CHECK_OBJECT(Nuitka_Cell_GET(par_convert_single));
        tmp_args_element_value_1 = Nuitka_Cell_GET(par_convert_single);
        frame_78c8d8ffc1831278ef66a26156ee1ab6->m_frame.f_lineno = 412;
        tmp_called_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[67], tmp_args_element_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }

        tmp_closure_1[0] = par_convert_single;
        Py_INCREF(tmp_closure_1[0]);

        tmp_args_element_value_2 = MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__16_wrap_single_convertor$$$function__1___ua_convert__(tmp_closure_1);

        frame_78c8d8ffc1831278ef66a26156ee1ab6->m_frame.f_lineno = 412;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        assert(var___ua_convert__ == NULL);
        var___ua_convert__ = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_78c8d8ffc1831278ef66a26156ee1ab6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_78c8d8ffc1831278ef66a26156ee1ab6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_78c8d8ffc1831278ef66a26156ee1ab6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_78c8d8ffc1831278ef66a26156ee1ab6,
        type_description_1,
        par_convert_single,
        var___ua_convert__
    );


    // Release cached frame if used for exception.
    if (frame_78c8d8ffc1831278ef66a26156ee1ab6 == cache_frame_78c8d8ffc1831278ef66a26156ee1ab6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_78c8d8ffc1831278ef66a26156ee1ab6);
        cache_frame_78c8d8ffc1831278ef66a26156ee1ab6 = NULL;
    }

    assertFrameObject(frame_78c8d8ffc1831278ef66a26156ee1ab6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var___ua_convert__);
    tmp_return_value = var___ua_convert__;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var___ua_convert__);
    Py_DECREF(var___ua_convert__);
    var___ua_convert__ = NULL;
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
    CHECK_OBJECT(par_convert_single);
    Py_DECREF(par_convert_single);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_convert_single);
    Py_DECREF(par_convert_single);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$_lib$_uarray$_backend$$$function__16_wrap_single_convertor$$$function__1___ua_convert__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dispatchables = python_pars[0];
    PyObject *par_coerce = python_pars[1];
    PyObject *var_converted = NULL;
    PyObject *var_d = NULL;
    PyObject *var_c = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_9a2a1d01a71e670e5c7f5fd6fadf7e70;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_9a2a1d01a71e670e5c7f5fd6fadf7e70 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(var_converted == NULL);
        var_converted = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_9a2a1d01a71e670e5c7f5fd6fadf7e70)) {
        Py_XDECREF(cache_frame_9a2a1d01a71e670e5c7f5fd6fadf7e70);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9a2a1d01a71e670e5c7f5fd6fadf7e70 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9a2a1d01a71e670e5c7f5fd6fadf7e70 = MAKE_FUNCTION_FRAME(codeobj_9a2a1d01a71e670e5c7f5fd6fadf7e70, module_scipy$_lib$_uarray$_backend, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9a2a1d01a71e670e5c7f5fd6fadf7e70->m_type_description == NULL);
    frame_9a2a1d01a71e670e5c7f5fd6fadf7e70 = cache_frame_9a2a1d01a71e670e5c7f5fd6fadf7e70;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9a2a1d01a71e670e5c7f5fd6fadf7e70);
    assert(Py_REFCNT(frame_9a2a1d01a71e670e5c7f5fd6fadf7e70) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_dispatchables);
        tmp_iter_arg_1 = par_dispatchables;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "oooooc";
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
                type_description_1 = "oooooc";
                exception_lineno = 415;
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
            PyObject *old = var_d;
            var_d = tmp_assign_source_4;
            Py_INCREF(var_d);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_3;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_expression_value_3;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[77]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 416;
            type_description_1 = "oooooc";
            goto try_except_handler_2;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(var_d);
        tmp_expression_value_1 = var_d;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[55]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "oooooc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_d);
        tmp_expression_value_2 = var_d;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[56]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 416;
            type_description_1 = "oooooc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_coerce);
        tmp_and_left_value_1 = par_coerce;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 416;
            type_description_1 = "oooooc";
            goto try_except_handler_2;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_d);
        tmp_expression_value_3 = var_d;
        tmp_and_right_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[57]);
        if (tmp_and_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 416;
            type_description_1 = "oooooc";
            goto try_except_handler_2;
        }
        tmp_args_element_value_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        Py_INCREF(tmp_and_left_value_1);
        tmp_args_element_value_3 = tmp_and_left_value_1;
        and_end_1:;
        frame_9a2a1d01a71e670e5c7f5fd6fadf7e70->m_frame.f_lineno = 416;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "oooooc";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_c);
        tmp_cmp_expr_left_1 = var_c;
        tmp_cmp_expr_right_1 = Py_NotImplemented;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_NotImplemented;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    branch_no_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_4;
        if (var_converted == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 421;
            type_description_1 = "oooooc";
            goto try_except_handler_2;
        }

        tmp_expression_value_4 = var_converted;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[45]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "oooooc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_c);
        tmp_args_element_value_4 = var_c;
        frame_9a2a1d01a71e670e5c7f5fd6fadf7e70->m_frame.f_lineno = 421;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "oooooc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 415;
        type_description_1 = "oooooc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT(tmp_for_loop_1__iter_value);
    Py_DECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    goto frame_return_exit_1;
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
    if (var_converted == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 423;
        type_description_1 = "oooooc";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_converted;
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
        exception_tb = MAKE_TRACEBACK(frame_9a2a1d01a71e670e5c7f5fd6fadf7e70, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9a2a1d01a71e670e5c7f5fd6fadf7e70->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9a2a1d01a71e670e5c7f5fd6fadf7e70, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9a2a1d01a71e670e5c7f5fd6fadf7e70,
        type_description_1,
        par_dispatchables,
        par_coerce,
        var_converted,
        var_d,
        var_c,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_9a2a1d01a71e670e5c7f5fd6fadf7e70 == cache_frame_9a2a1d01a71e670e5c7f5fd6fadf7e70) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9a2a1d01a71e670e5c7f5fd6fadf7e70);
        cache_frame_9a2a1d01a71e670e5c7f5fd6fadf7e70 = NULL;
    }

    assertFrameObject(frame_9a2a1d01a71e670e5c7f5fd6fadf7e70);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_converted);
    var_converted = NULL;
    Py_XDECREF(var_d);
    var_d = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
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

    Py_XDECREF(var_converted);
    var_converted = NULL;
    Py_XDECREF(var_d);
    var_d = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
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
    CHECK_OBJECT(par_dispatchables);
    Py_DECREF(par_dispatchables);
    CHECK_OBJECT(par_coerce);
    Py_DECREF(par_coerce);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_dispatchables);
    Py_DECREF(par_dispatchables);
    CHECK_OBJECT(par_coerce);
    Py_DECREF(par_coerce);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__10_clear_backends(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$_lib$_uarray$_backend$$$function__10_clear_backends,
        mod_consts[53],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a05e12e224cb59f0b28f45e0c945244b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$_lib$_uarray$_backend,
        mod_consts[54],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__11___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$_lib$_uarray$_backend$$$function__11___init__,
        mod_consts[117],
#if PYTHON_VERSION >= 0x300
        mod_consts[118],
#endif
        codeobj_9f448f3d867c349e029503082ab069a4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$_lib$_uarray$_backend,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__12___getitem__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$_lib$_uarray$_backend$$$function__12___getitem__,
        mod_consts[119],
#if PYTHON_VERSION >= 0x300
        mod_consts[120],
#endif
        codeobj_3f0327ac5ad7583e8e7a59fcfe8e669b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$_lib$_uarray$_backend,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__13___str__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$_lib$_uarray$_backend$$$function__13___str__,
        mod_consts[121],
#if PYTHON_VERSION >= 0x300
        mod_consts[122],
#endif
        codeobj_55073e0878bd0f70ed6b340f8b3d6113,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$_lib$_uarray$_backend,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__14_mark_as() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$_lib$_uarray$_backend$$$function__14_mark_as,
        mod_consts[125],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_444cf38df15f6d7803e80006ea01b35e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$_lib$_uarray$_backend,
        mod_consts[63],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__15_all_of_type() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$_lib$_uarray$_backend$$$function__15_all_of_type,
        mod_consts[126],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2ae48138748d7f7141116be40a9b3d4c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$_lib$_uarray$_backend,
        mod_consts[66],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__15_all_of_type$$$function__1_outer(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$_lib$_uarray$_backend$$$function__15_all_of_type$$$function__1_outer,
        mod_consts[64],
#if PYTHON_VERSION >= 0x300
        mod_consts[65],
#endif
        codeobj_3be22cb4260de5ebe68ecae665478bf4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$_lib$_uarray$_backend,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__15_all_of_type$$$function__1_outer$$$function__1_inner(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$_lib$_uarray$_backend$$$function__15_all_of_type$$$function__1_outer$$$function__1_inner,
        mod_consts[68],
#if PYTHON_VERSION >= 0x300
        mod_consts[69],
#endif
        codeobj_5508691fd1e2ab2823b4b0b2e66e2647,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$_lib$_uarray$_backend,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__16_wrap_single_convertor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$_lib$_uarray$_backend$$$function__16_wrap_single_convertor,
        mod_consts[127],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_78c8d8ffc1831278ef66a26156ee1ab6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$_lib$_uarray$_backend,
        mod_consts[76],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__16_wrap_single_convertor$$$function__1___ua_convert__(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$_lib$_uarray$_backend$$$function__16_wrap_single_convertor$$$function__1___ua_convert__,
        mod_consts[74],
#if PYTHON_VERSION >= 0x300
        mod_consts[75],
#endif
        codeobj_9a2a1d01a71e670e5c7f5fd6fadf7e70,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$_lib$_uarray$_backend,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__1_unpickle_function() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$_lib$_uarray$_backend$$$function__1_unpickle_function,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4f3582fc6bc15eab7bfd4084af3c45d3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$_lib$_uarray$_backend,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__2_pickle_function() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$_lib$_uarray$_backend$$$function__2_pickle_function,
        mod_consts[101],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9a7c20c09ca14ed596a53fcc2213b42a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$_lib$_uarray$_backend,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__3_create_multimethod() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$_lib$_uarray$_backend$$$function__3_create_multimethod,
        mod_consts[104],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4bf6c65878d9ea16b35ce794c4b5cccc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$_lib$_uarray$_backend,
        mod_consts[15],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__3_create_multimethod$$$function__1_wrapper(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$_lib$_uarray$_backend$$$function__3_create_multimethod$$$function__1_wrapper,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[14],
#endif
        codeobj_e30049b24726179fafa19ee388a0b78e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$_lib$_uarray$_backend,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__4_generate_multimethod(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$_lib$_uarray$_backend$$$function__4_generate_multimethod,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6ebcdc679be20a50e9b1f6de4ccf8335,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_scipy$_lib$_uarray$_backend,
        mod_consts[24],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__5_set_backend(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$_lib$_uarray$_backend$$$function__5_set_backend,
        mod_consts[111],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3a5c1d38724278bf4a7695d79f805412,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$_lib$_uarray$_backend,
        mod_consts[28],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__6_skip_backend() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$_lib$_uarray$_backend$$$function__6_skip_backend,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_87a418a73b99e5eebed55cce2ecc95d7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$_lib$_uarray$_backend,
        mod_consts[31],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__7_get_defaults() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$_lib$_uarray$_backend$$$function__7_get_defaults,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_360cd00662447106107489d8e0df4eca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$_lib$_uarray$_backend,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__8_set_global_backend(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$_lib$_uarray$_backend$$$function__8_set_global_backend,
        mod_consts[49],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_28d8ba4a4d49b2e397901819a8cfdc84,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$_lib$_uarray$_backend,
        mod_consts[50],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__9_register_backend() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$_lib$_uarray$_backend$$$function__9_register_backend,
        mod_consts[51],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1c5cf3b81f7d19d4fad800ddfcc07452,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$_lib$_uarray$_backend,
        mod_consts[52],
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

function_impl_code functable_scipy$_lib$_uarray$_backend[] = {
    impl_scipy$_lib$_uarray$_backend$$$function__3_create_multimethod$$$function__1_wrapper,
    impl_scipy$_lib$_uarray$_backend$$$function__15_all_of_type$$$function__1_outer,
    impl_scipy$_lib$_uarray$_backend$$$function__15_all_of_type$$$function__1_outer$$$function__1_inner,
    impl_scipy$_lib$_uarray$_backend$$$function__16_wrap_single_convertor$$$function__1___ua_convert__,
    impl_scipy$_lib$_uarray$_backend$$$function__1_unpickle_function,
    impl_scipy$_lib$_uarray$_backend$$$function__2_pickle_function,
    impl_scipy$_lib$_uarray$_backend$$$function__3_create_multimethod,
    impl_scipy$_lib$_uarray$_backend$$$function__4_generate_multimethod,
    impl_scipy$_lib$_uarray$_backend$$$function__5_set_backend,
    impl_scipy$_lib$_uarray$_backend$$$function__6_skip_backend,
    impl_scipy$_lib$_uarray$_backend$$$function__7_get_defaults,
    impl_scipy$_lib$_uarray$_backend$$$function__8_set_global_backend,
    impl_scipy$_lib$_uarray$_backend$$$function__9_register_backend,
    impl_scipy$_lib$_uarray$_backend$$$function__10_clear_backends,
    impl_scipy$_lib$_uarray$_backend$$$function__11___init__,
    impl_scipy$_lib$_uarray$_backend$$$function__12___getitem__,
    impl_scipy$_lib$_uarray$_backend$$$function__13___str__,
    impl_scipy$_lib$_uarray$_backend$$$function__14_mark_as,
    impl_scipy$_lib$_uarray$_backend$$$function__15_all_of_type,
    impl_scipy$_lib$_uarray$_backend$$$function__16_wrap_single_convertor,
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

    function_impl_code *current = functable_scipy$_lib$_uarray$_backend;
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

    if (offset > sizeof(functable_scipy$_lib$_uarray$_backend) || offset < 0) {
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
        functable_scipy$_lib$_uarray$_backend[offset],
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
        module_scipy$_lib$_uarray$_backend,
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
PyObject *modulecode_scipy$_lib$_uarray$_backend(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("scipy._lib._uarray._backend");

    // Store the module for future use.
    module_scipy$_lib$_uarray$_backend = module;

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
        PRINT_STRING("scipy._lib._uarray._backend: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("scipy._lib._uarray._backend: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("scipy._lib._uarray._backend: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initscipy$_lib$_uarray$_backend\n");

    moduledict_scipy$_lib$_uarray$_backend = MODULE_DICT(module_scipy$_lib$_uarray$_backend);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_scipy$_lib$_uarray$_backend,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_scipy$_lib$_uarray$_backend,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[86]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_scipy$_lib$_uarray$_backend,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$_lib$_uarray$_backend,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$_lib$_uarray$_backend,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_scipy$_lib$_uarray$_backend);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_scipy$_lib$_uarray$_backend);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_44ad0130f907b96756fffc93e770510d;
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
    PyObject *locals_scipy$_lib$_uarray$_backend$$$class__1_Dispatchable_317 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_2);
    }
    frame_44ad0130f907b96756fffc93e770510d = MAKE_MODULE_FRAME(codeobj_44ad0130f907b96756fffc93e770510d, module_scipy$_lib$_uarray$_backend);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_44ad0130f907b96756fffc93e770510d);
    assert(Py_REFCNT(frame_44ad0130f907b96756fffc93e770510d) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[81]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[81]);

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
        UPDATE_STRING_DICT0(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[32];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_scipy$_lib$_uarray$_backend;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[4];
        frame_44ad0130f907b96756fffc93e770510d->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_FUNCTOOLS();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[86];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_scipy$_lib$_uarray$_backend;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[87];
        tmp_level_value_2 = mod_consts[88];
        frame_44ad0130f907b96756fffc93e770510d->m_frame.f_lineno = 4;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_scipy$_lib$_uarray$_backend,
                mod_consts[48],
                mod_consts[4]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[48]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[89];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_scipy$_lib$_uarray$_backend;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[4];
        frame_44ad0130f907b96756fffc93e770510d->m_frame.f_lineno = 5;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[90];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_scipy$_lib$_uarray$_backend;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[4];
        frame_44ad0130f907b96756fffc93e770510d->m_frame.f_lineno = 6;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        assert(!(tmp_assign_source_9 == NULL));
        UPDATE_STRING_DICT1(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[2];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_scipy$_lib$_uarray$_backend;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = Py_None;
        tmp_level_value_5 = mod_consts[4];
        frame_44ad0130f907b96756fffc93e770510d->m_frame.f_lineno = 7;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_tuple_element_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[91]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = Py_Ellipsis;
        tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_2;
            PyTuple_SET_ITEM0(tmp_subscript_value_1, 0, tmp_tuple_element_1);
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[85]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
            }

            assert(!(tmp_expression_value_4 == NULL));
            tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[92]);
            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;

                goto tuple_build_exception_1;
            }
            tmp_subscript_value_2 = mod_consts[93];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_expression_value_1);
        Py_DECREF(tmp_subscript_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_value_7;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        assert(!(tmp_expression_value_6 == NULL));
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[91]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        assert(!(tmp_expression_value_7 == NULL));
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[92]);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_5);

            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_expression_value_8;
            PyObject *tmp_expression_value_9;
            PyList_SET_ITEM(tmp_tuple_element_2, 0, tmp_list_element_1);
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[85]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
            }

            assert(!(tmp_expression_value_8 == NULL));
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[95]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_tuple_element_2, 1, tmp_list_element_1);
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[85]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
            }

            assert(!(tmp_expression_value_9 == NULL));
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[92]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_tuple_element_2, 2, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_expression_value_5);
        Py_DECREF(tmp_tuple_element_2);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_10;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_expression_value_12;
            PyTuple_SET_ITEM(tmp_subscript_value_3, 0, tmp_tuple_element_2);
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[85]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
            }

            assert(!(tmp_expression_value_11 == NULL));
            tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[92]);
            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;

                goto tuple_build_exception_2;
            }
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[85]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
            }

            assert(!(tmp_expression_value_12 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[92]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_10);

                exception_lineno = 11;

                goto tuple_build_exception_2;
            }
            tmp_subscript_value_4 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_13;
                PyTuple_SET_ITEM(tmp_subscript_value_4, 0, tmp_tuple_element_3);
                tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[85]);

                if (unlikely(tmp_expression_value_13 == NULL)) {
                    tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                }

                assert(!(tmp_expression_value_13 == NULL));
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[95]);
                if (tmp_tuple_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 11;

                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_4, 1, tmp_tuple_element_3);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_expression_value_10);
            Py_DECREF(tmp_subscript_value_4);
            goto tuple_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_4);
            Py_DECREF(tmp_expression_value_10);
            Py_DECREF(tmp_subscript_value_4);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_3, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_expression_value_5);
        Py_DECREF(tmp_subscript_value_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_assign_source_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_5);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[48];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_scipy$_lib$_uarray$_backend;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[97];
        tmp_level_value_6 = mod_consts[88];
        frame_44ad0130f907b96756fffc93e770510d->m_frame.f_lineno = 14;
        tmp_assign_source_13 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_scipy$_lib$_uarray$_backend,
                mod_consts[98],
                mod_consts[4]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[98]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_scipy$_lib$_uarray$_backend,
                mod_consts[21],
                mod_consts[4]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[21]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_scipy$_lib$_uarray$_backend,
                mod_consts[30],
                mod_consts[4]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[30]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_scipy$_lib$_uarray$_backend,
                mod_consts[27],
                mod_consts[4]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[27]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_17);
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
        tmp_assign_source_18 = LIST_COPY(mod_consts[99]);
        UPDATE_STRING_DICT1(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__1_unpickle_function();

        UPDATE_STRING_DICT1(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__2_pickle_function();

        UPDATE_STRING_DICT1(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_20);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[2]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[101]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        frame_44ad0130f907b96756fffc93e770510d->m_frame.f_lineno = 68;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_16;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[102]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[103]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        frame_44ad0130f907b96756fffc93e770510d->m_frame.f_lineno = 69;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_21;


        tmp_assign_source_21 = MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__3_create_multimethod();

        UPDATE_STRING_DICT1(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_defaults_1;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_defaults_1 = mod_consts[105];
        tmp_dict_key_1 = mod_consts[106];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_17;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_expression_value_19;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[107];
            tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[96]);

            if (unlikely(tmp_dict_value_1 == NULL)) {
                tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
            }

            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[108];
            tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[37];
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[85]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
            }

            assert(!(tmp_expression_value_18 == NULL));
            tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[109]);
            if (tmp_expression_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto dict_build_exception_1;
            }
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[85]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
            }

            assert(!(tmp_expression_value_19 == NULL));
            tmp_subscript_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[91]);
            if (tmp_subscript_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_17);

                exception_lineno = 96;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_5);
            Py_DECREF(tmp_expression_value_17);
            Py_DECREF(tmp_subscript_value_5);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_22 = MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__4_generate_multimethod(tmp_defaults_1, tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[110];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_23 = MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__5_set_backend(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;


        tmp_assign_source_24 = MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__6_skip_backend();

        UPDATE_STRING_DICT1(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;


        tmp_assign_source_25 = MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__7_get_defaults();

        UPDATE_STRING_DICT1(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = mod_consts[110];
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_26 = MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__8_set_global_backend(tmp_defaults_3);

        UPDATE_STRING_DICT1(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;


        tmp_assign_source_27 = MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__9_register_backend();

        UPDATE_STRING_DICT1(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = mod_consts[113];
        Py_INCREF(tmp_defaults_4);


        tmp_assign_source_28 = MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__10_clear_backends(tmp_defaults_4);

        UPDATE_STRING_DICT1(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_30;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_scipy$_lib$_uarray$_backend$$$class__1_Dispatchable_317 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[114];
        tmp_res = PyDict_SetItem(locals_scipy$_lib$_uarray$_backend$$$class__1_Dispatchable_317, mod_consts[6], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[115];
        tmp_res = PyDict_SetItem(locals_scipy$_lib$_uarray$_backend$$$class__1_Dispatchable_317, mod_consts[79], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[61];
        tmp_res = PyDict_SetItem(locals_scipy$_lib$_uarray$_backend$$$class__1_Dispatchable_317, mod_consts[7], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = mod_consts[116];
            Py_INCREF(tmp_defaults_5);


            tmp_dictset_value = MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__11___init__(tmp_defaults_5);

            tmp_res = PyDict_SetItem(locals_scipy$_lib$_uarray$_backend$$$class__1_Dispatchable_317, mod_consts[117], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }


        tmp_dictset_value = MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__12___getitem__();

        tmp_res = PyDict_SetItem(locals_scipy$_lib$_uarray$_backend$$$class__1_Dispatchable_317, mod_consts[119], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__13___str__();

        tmp_res = PyDict_SetItem(locals_scipy$_lib$_uarray$_backend$$$class__1_Dispatchable_317, mod_consts[121], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = DICT_GET_ITEM0(locals_scipy$_lib$_uarray$_backend$$$class__1_Dispatchable_317, mod_consts[121]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[121]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 358;

            goto outline_exception_1;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;

            goto outline_exception_1;
        }
        tmp_res = PyDict_SetItem(locals_scipy$_lib$_uarray$_backend$$$class__1_Dispatchable_317, mod_consts[123], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_3 = (PyObject *)&PyType_Type;
            tmp_tuple_element_4 = mod_consts[61];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[124];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_scipy$_lib$_uarray$_backend$$$class__1_Dispatchable_317;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_44ad0130f907b96756fffc93e770510d->m_frame.f_lineno = 317;
            tmp_assign_source_32 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_32;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_31 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_31);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_scipy$_lib$_uarray$_backend$$$class__1_Dispatchable_317);
        locals_scipy$_lib$_uarray$_backend$$$class__1_Dispatchable_317 = NULL;
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

        Py_DECREF(locals_scipy$_lib$_uarray$_backend$$$class__1_Dispatchable_317);
        locals_scipy$_lib$_uarray$_backend$$$class__1_Dispatchable_317 = NULL;
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
        exception_lineno = 317;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_31);
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

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_44ad0130f907b96756fffc93e770510d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_44ad0130f907b96756fffc93e770510d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_44ad0130f907b96756fffc93e770510d, exception_lineno);
    }



    assertFrameObject(frame_44ad0130f907b96756fffc93e770510d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_33;


        tmp_assign_source_33 = MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__14_mark_as();

        UPDATE_STRING_DICT1(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;


        tmp_assign_source_34 = MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__15_all_of_type();

        UPDATE_STRING_DICT1(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;


        tmp_assign_source_35 = MAKE_FUNCTION_scipy$_lib$_uarray$_backend$$$function__16_wrap_single_convertor();

        UPDATE_STRING_DICT1(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_35);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("scipy._lib._uarray._backend", false);

    Py_INCREF(module_scipy$_lib$_uarray$_backend);
    return module_scipy$_lib$_uarray$_backend;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$_uarray$_backend, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("scipy$_lib$_uarray$_backend", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
