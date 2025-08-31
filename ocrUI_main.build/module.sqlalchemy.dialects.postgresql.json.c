/* Generated code for Python module 'sqlalchemy.dialects.postgresql.json'
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

/* The "module_sqlalchemy$dialects$postgresql$json" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_sqlalchemy$dialects$postgresql$json;
PyDictObject *moduledict_sqlalchemy$dialects$postgresql$json;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[142];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[142];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("sqlalchemy.dialects.postgresql.json"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 142; i++) {
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
void checkModuleConstants_sqlalchemy$dialects$postgresql$json(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 142; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_8e41cfa631a90e3a208d5a7452d49913;
static PyCodeObject *codeobj_eb6e4522bf7a998707ecb5f7f7e80db9;
static PyCodeObject *codeobj_88b03c98cd79156dc2de421992aaa4ac;
static PyCodeObject *codeobj_a430e365fc70d9a789614d598b53c430;
static PyCodeObject *codeobj_01d8762f21762dc4548d457e3c68ed69;
static PyCodeObject *codeobj_23aba0620b0a81179a55b1308bbc37c5;
static PyCodeObject *codeobj_a1b212ee1b89104a0324bf741cbccf89;
static PyCodeObject *codeobj_1be88c3e19ab447f0cd68fb1d3618a97;
static PyCodeObject *codeobj_c01b98a086741c27375718ac87134fad;
static PyCodeObject *codeobj_a23e592a82f85cb6c956f71805897926;
static PyCodeObject *codeobj_b29f043104c4672e86ec6121154a3d72;
static PyCodeObject *codeobj_2e6b25db259728e09944bd74809e6ca2;
static PyCodeObject *codeobj_e2c19e6199ba04adf3151dbee1a86f20;
static PyCodeObject *codeobj_6a82e319f346b086440297d086d8d176;
static PyCodeObject *codeobj_9ffb51bc95fc6daa1dba698c85dd4052;
static PyCodeObject *codeobj_5fff9decc7b7bc13bd8d5d786ec0059f;
static PyCodeObject *codeobj_4d33967ef769d756703f0352ddff505a;
static PyCodeObject *codeobj_762da12e0e2f06056c60b9efae6f7acc;
static PyCodeObject *codeobj_cb1495773742166d2aaeb1db339b6753;
static PyCodeObject *codeobj_0b10ceb4baa7879ac6ee8a77dc9398a4;
static PyCodeObject *codeobj_f457b818437363dd20cad492fa53faa7;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[130]); CHECK_OBJECT(module_filename_obj);
    codeobj_8e41cfa631a90e3a208d5a7452d49913 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[131], mod_consts[131], NULL, NULL, 0, 0, 0);
    codeobj_eb6e4522bf7a998707ecb5f7f7e80db9 = MAKE_CODE_OBJECT(module_filename_obj, 252, CO_NOFREE, mod_consts[105], mod_consts[105], mod_consts[132], NULL, 0, 0, 0);
    codeobj_88b03c98cd79156dc2de421992aaa4ac = MAKE_CODE_OBJECT(module_filename_obj, 336, CO_NOFREE, mod_consts[105], mod_consts[105], mod_consts[132], NULL, 0, 0, 0);
    codeobj_a430e365fc70d9a789614d598b53c430 = MAKE_CODE_OBJECT(module_filename_obj, 137, CO_NOFREE, mod_consts[18], mod_consts[18], mod_consts[132], NULL, 0, 0, 0);
    codeobj_01d8762f21762dc4548d457e3c68ed69 = MAKE_CODE_OBJECT(module_filename_obj, 283, CO_NOFREE, mod_consts[42], mod_consts[42], mod_consts[132], NULL, 0, 0, 0);
    codeobj_23aba0620b0a81179a55b1308bbc37c5 = MAKE_CODE_OBJECT(module_filename_obj, 119, CO_NOFREE, mod_consts[98], mod_consts[98], mod_consts[132], NULL, 0, 0, 0);
    codeobj_a1b212ee1b89104a0324bf741cbccf89 = MAKE_CODE_OBJECT(module_filename_obj, 93, CO_NOFREE, mod_consts[19], mod_consts[19], mod_consts[132], NULL, 0, 0, 0);
    codeobj_1be88c3e19ab447f0cd68fb1d3618a97 = MAKE_CODE_OBJECT(module_filename_obj, 223, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[10], mod_consts[10], mod_consts[133], mod_consts[132], 3, 0, 0);
    codeobj_c01b98a086741c27375718ac87134fad = MAKE_CODE_OBJECT(module_filename_obj, 94, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[134], NULL, 3, 0, 0);
    codeobj_a23e592a82f85cb6c956f71805897926 = MAKE_CODE_OBJECT(module_filename_obj, 255, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[109], mod_consts[109], mod_consts[135], NULL, 1, 0, 0);
    codeobj_b29f043104c4672e86ec6121154a3d72 = MAKE_CODE_OBJECT(module_filename_obj, 112, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[93], mod_consts[93], mod_consts[136], NULL, 2, 0, 0);
    codeobj_2e6b25db259728e09944bd74809e6ca2 = MAKE_CODE_OBJECT(module_filename_obj, 362, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[122], mod_consts[122], mod_consts[137], NULL, 2, 0, 0);
    codeobj_e2c19e6199ba04adf3151dbee1a86f20 = MAKE_CODE_OBJECT(module_filename_obj, 353, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[120], mod_consts[120], mod_consts[138], NULL, 2, 0, 0);
    codeobj_6a82e319f346b086440297d086d8d176 = MAKE_CODE_OBJECT(module_filename_obj, 370, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[124], mod_consts[124], mod_consts[139], NULL, 2, 0, 0);
    codeobj_9ffb51bc95fc6daa1dba698c85dd4052 = MAKE_CODE_OBJECT(module_filename_obj, 345, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[116], mod_consts[116], mod_consts[137], NULL, 2, 0, 0);
    codeobj_5fff9decc7b7bc13bd8d5d786ec0059f = MAKE_CODE_OBJECT(module_filename_obj, 349, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[118], mod_consts[118], mod_consts[137], NULL, 2, 0, 0);
    codeobj_4d33967ef769d756703f0352ddff505a = MAKE_CODE_OBJECT(module_filename_obj, 339, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[114], mod_consts[114], mod_consts[137], NULL, 2, 0, 0);
    codeobj_762da12e0e2f06056c60b9efae6f7acc = MAKE_CODE_OBJECT(module_filename_obj, 115, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[95], mod_consts[95], mod_consts[136], NULL, 2, 0, 0);
    codeobj_cb1495773742166d2aaeb1db339b6753 = MAKE_CODE_OBJECT(module_filename_obj, 384, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[126], mod_consts[126], mod_consts[137], NULL, 2, 0, 0);
    codeobj_0b10ceb4baa7879ac6ee8a77dc9398a4 = MAKE_CODE_OBJECT(module_filename_obj, 394, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[128], mod_consts[128], mod_consts[137], NULL, 2, 0, 0);
    codeobj_f457b818437363dd20cad492fa53faa7 = MAKE_CODE_OBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[0], mod_consts[0], mod_consts[140], mod_consts[141], 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__10_contained_by();


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__11_delete_path();


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__12_path_exists();


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__13_path_match();


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__1__processor();


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__1__processor$$$function__1_process(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__2_bind_processor();


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__3_literal_processor();


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__4___init__(PyObject *defaults, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__5_astext();


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__6_has_key();


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__7_has_all();


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__8_has_any();


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__9_contains();


// The module function definitions.
static PyObject *impl_sqlalchemy$dialects$postgresql$json$$$function__1__processor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dialect = python_pars[1];
    struct Nuitka_CellObject *par_super_proc = Nuitka_Cell_New1(python_pars[2]);
    PyObject *var_process = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_super_proc;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__1__processor$$$function__1_process(tmp_closure_1);

        assert(var_process == NULL);
        var_process = tmp_assign_source_1;
    }
    // Tried code:
    CHECK_OBJECT(var_process);
    tmp_return_value = var_process;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_process);
    Py_DECREF(var_process);
    var_process = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dialect);
    Py_DECREF(par_dialect);
    CHECK_OBJECT(par_super_proc);
    Py_DECREF(par_super_proc);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$postgresql$json$$$function__1__processor$$$function__1_process(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_f457b818437363dd20cad492fa53faa7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f457b818437363dd20cad492fa53faa7 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f457b818437363dd20cad492fa53faa7)) {
        Py_XDECREF(cache_frame_f457b818437363dd20cad492fa53faa7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f457b818437363dd20cad492fa53faa7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f457b818437363dd20cad492fa53faa7 = MAKE_FUNCTION_FRAME(codeobj_f457b818437363dd20cad492fa53faa7, module_sqlalchemy$dialects$postgresql$json, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f457b818437363dd20cad492fa53faa7->m_type_description == NULL);
    frame_f457b818437363dd20cad492fa53faa7 = cache_frame_f457b818437363dd20cad492fa53faa7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f457b818437363dd20cad492fa53faa7);
    assert(Py_REFCNT(frame_f457b818437363dd20cad492fa53faa7) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oc";
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
    CHECK_OBJECT(par_value);
    tmp_return_value = par_value;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_value);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_value);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oc";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_mod_expr_left_1 = mod_consts[2];
        tmp_str_arg_value_1 = mod_consts[3];
        tmp_called_value_1 = (PyObject *)&PyMap_Type;
        tmp_args_element_value_1 = (PyObject *)&PyUnicode_Type;
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_f457b818437363dd20cad492fa53faa7->m_frame.f_lineno = 103;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_iterable_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_iterable_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_UNICODE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_value;
            assert(old != NULL);
            par_value = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[4];
        {
            PyObject *old = par_value;
            assert(old != NULL);
            par_value = tmp_assign_source_2;
            Py_INCREF(par_value);
            Py_DECREF(old);
        }

    }
    branch_end_2:;
    branch_end_1:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 106;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_2 = CHECK_IF_TRUE(Nuitka_Cell_GET(self->m_closure[0]));
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oc";
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
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 107;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_value);
        tmp_args_element_value_3 = par_value;
        frame_f457b818437363dd20cad492fa53faa7->m_frame.f_lineno = 107;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_value;
            assert(old != NULL);
            par_value = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_3:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f457b818437363dd20cad492fa53faa7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f457b818437363dd20cad492fa53faa7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f457b818437363dd20cad492fa53faa7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f457b818437363dd20cad492fa53faa7,
        type_description_1,
        par_value,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_f457b818437363dd20cad492fa53faa7 == cache_frame_f457b818437363dd20cad492fa53faa7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f457b818437363dd20cad492fa53faa7);
        cache_frame_f457b818437363dd20cad492fa53faa7 = NULL;
    }

    assertFrameObject(frame_f457b818437363dd20cad492fa53faa7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(par_value);
    tmp_return_value = par_value;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    par_value = NULL;
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

    Py_XDECREF(par_value);
    par_value = NULL;
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


static PyObject *impl_sqlalchemy$dialects$postgresql$json$$$function__2_bind_processor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dialect = python_pars[1];
    struct Nuitka_FrameObject *frame_b29f043104c4672e86ec6121154a3d72;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b29f043104c4672e86ec6121154a3d72 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b29f043104c4672e86ec6121154a3d72)) {
        Py_XDECREF(cache_frame_b29f043104c4672e86ec6121154a3d72);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b29f043104c4672e86ec6121154a3d72 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b29f043104c4672e86ec6121154a3d72 = MAKE_FUNCTION_FRAME(codeobj_b29f043104c4672e86ec6121154a3d72, module_sqlalchemy$dialects$postgresql$json, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b29f043104c4672e86ec6121154a3d72->m_type_description == NULL);
    frame_b29f043104c4672e86ec6121154a3d72 = cache_frame_b29f043104c4672e86ec6121154a3d72;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b29f043104c4672e86ec6121154a3d72);
    assert(Py_REFCNT(frame_b29f043104c4672e86ec6121154a3d72) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dialect);
        tmp_args_element_value_1 = par_dialect;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_dialect);
        tmp_args_element_value_3 = par_dialect;
        frame_b29f043104c4672e86ec6121154a3d72->m_frame.f_lineno = 113;
        tmp_args_element_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[7], tmp_args_element_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 113;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_b29f043104c4672e86ec6121154a3d72->m_frame.f_lineno = 113;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
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
        exception_tb = MAKE_TRACEBACK(frame_b29f043104c4672e86ec6121154a3d72, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b29f043104c4672e86ec6121154a3d72->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b29f043104c4672e86ec6121154a3d72, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b29f043104c4672e86ec6121154a3d72,
        type_description_1,
        par_self,
        par_dialect
    );


    // Release cached frame if used for exception.
    if (frame_b29f043104c4672e86ec6121154a3d72 == cache_frame_b29f043104c4672e86ec6121154a3d72) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b29f043104c4672e86ec6121154a3d72);
        cache_frame_b29f043104c4672e86ec6121154a3d72 = NULL;
    }

    assertFrameObject(frame_b29f043104c4672e86ec6121154a3d72);

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
    CHECK_OBJECT(par_dialect);
    Py_DECREF(par_dialect);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dialect);
    Py_DECREF(par_dialect);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$postgresql$json$$$function__3_literal_processor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dialect = python_pars[1];
    struct Nuitka_FrameObject *frame_762da12e0e2f06056c60b9efae6f7acc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_762da12e0e2f06056c60b9efae6f7acc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_762da12e0e2f06056c60b9efae6f7acc)) {
        Py_XDECREF(cache_frame_762da12e0e2f06056c60b9efae6f7acc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_762da12e0e2f06056c60b9efae6f7acc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_762da12e0e2f06056c60b9efae6f7acc = MAKE_FUNCTION_FRAME(codeobj_762da12e0e2f06056c60b9efae6f7acc, module_sqlalchemy$dialects$postgresql$json, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_762da12e0e2f06056c60b9efae6f7acc->m_type_description == NULL);
    frame_762da12e0e2f06056c60b9efae6f7acc = cache_frame_762da12e0e2f06056c60b9efae6f7acc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_762da12e0e2f06056c60b9efae6f7acc);
    assert(Py_REFCNT(frame_762da12e0e2f06056c60b9efae6f7acc) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dialect);
        tmp_args_element_value_1 = par_dialect;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_dialect);
        tmp_args_element_value_3 = par_dialect;
        frame_762da12e0e2f06056c60b9efae6f7acc->m_frame.f_lineno = 116;
        tmp_args_element_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[8], tmp_args_element_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 116;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_762da12e0e2f06056c60b9efae6f7acc->m_frame.f_lineno = 116;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
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
        exception_tb = MAKE_TRACEBACK(frame_762da12e0e2f06056c60b9efae6f7acc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_762da12e0e2f06056c60b9efae6f7acc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_762da12e0e2f06056c60b9efae6f7acc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_762da12e0e2f06056c60b9efae6f7acc,
        type_description_1,
        par_self,
        par_dialect
    );


    // Release cached frame if used for exception.
    if (frame_762da12e0e2f06056c60b9efae6f7acc == cache_frame_762da12e0e2f06056c60b9efae6f7acc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_762da12e0e2f06056c60b9efae6f7acc);
        cache_frame_762da12e0e2f06056c60b9efae6f7acc = NULL;
    }

    assertFrameObject(frame_762da12e0e2f06056c60b9efae6f7acc);

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
    CHECK_OBJECT(par_dialect);
    Py_DECREF(par_dialect);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dialect);
    Py_DECREF(par_dialect);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$postgresql$json$$$function__4___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_none_as_null = python_pars[1];
    PyObject *par_astext_type = python_pars[2];
    struct Nuitka_FrameObject *frame_1be88c3e19ab447f0cd68fb1d3618a97;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_1be88c3e19ab447f0cd68fb1d3618a97 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1be88c3e19ab447f0cd68fb1d3618a97)) {
        Py_XDECREF(cache_frame_1be88c3e19ab447f0cd68fb1d3618a97);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1be88c3e19ab447f0cd68fb1d3618a97 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1be88c3e19ab447f0cd68fb1d3618a97 = MAKE_FUNCTION_FRAME(codeobj_1be88c3e19ab447f0cd68fb1d3618a97, module_sqlalchemy$dialects$postgresql$json, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1be88c3e19ab447f0cd68fb1d3618a97->m_type_description == NULL);
    frame_1be88c3e19ab447f0cd68fb1d3618a97 = cache_frame_1be88c3e19ab447f0cd68fb1d3618a97;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1be88c3e19ab447f0cd68fb1d3618a97);
    assert(Py_REFCNT(frame_1be88c3e19ab447f0cd68fb1d3618a97) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 248;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(moduledict_sqlalchemy$dialects$postgresql$json, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[10]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_none_as_null);
        tmp_kw_call_value_0_1 = par_none_as_null;
        frame_1be88c3e19ab447f0cd68fb1d3618a97->m_frame.f_lineno = 248;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[11]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_astext_type);
        tmp_cmp_expr_left_1 = par_astext_type;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
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
        CHECK_OBJECT(par_astext_type);
        tmp_assattr_value_1 = par_astext_type;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[12], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1be88c3e19ab447f0cd68fb1d3618a97, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1be88c3e19ab447f0cd68fb1d3618a97->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1be88c3e19ab447f0cd68fb1d3618a97, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1be88c3e19ab447f0cd68fb1d3618a97,
        type_description_1,
        par_self,
        par_none_as_null,
        par_astext_type,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_1be88c3e19ab447f0cd68fb1d3618a97 == cache_frame_1be88c3e19ab447f0cd68fb1d3618a97) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1be88c3e19ab447f0cd68fb1d3618a97);
        cache_frame_1be88c3e19ab447f0cd68fb1d3618a97 = NULL;
    }

    assertFrameObject(frame_1be88c3e19ab447f0cd68fb1d3618a97);

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
    CHECK_OBJECT(par_none_as_null);
    Py_DECREF(par_none_as_null);
    CHECK_OBJECT(par_astext_type);
    Py_DECREF(par_astext_type);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_none_as_null);
    Py_DECREF(par_none_as_null);
    CHECK_OBJECT(par_astext_type);
    Py_DECREF(par_astext_type);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$postgresql$json$$$function__5_astext(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a23e592a82f85cb6c956f71805897926;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a23e592a82f85cb6c956f71805897926 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a23e592a82f85cb6c956f71805897926)) {
        Py_XDECREF(cache_frame_a23e592a82f85cb6c956f71805897926);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a23e592a82f85cb6c956f71805897926 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a23e592a82f85cb6c956f71805897926 = MAKE_FUNCTION_FRAME(codeobj_a23e592a82f85cb6c956f71805897926, module_sqlalchemy$dialects$postgresql$json, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a23e592a82f85cb6c956f71805897926->m_type_description == NULL);
    frame_a23e592a82f85cb6c956f71805897926 = cache_frame_a23e592a82f85cb6c956f71805897926;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a23e592a82f85cb6c956f71805897926);
    assert(Py_REFCNT(frame_a23e592a82f85cb6c956f71805897926) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[14]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[15]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[16]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_isinstance_inst_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_1);

            exception_lineno = 269;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[18]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_1);

            exception_lineno = 269;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[19]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_1);

            exception_lineno = 269;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_inst_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "o";
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
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[14]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[20]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[21]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_kw_call_arg_value_0_1 == NULL)) {
            tmp_kw_call_arg_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 271;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[14]);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 272;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[15]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 272;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[16]);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 273;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[12]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 273;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_a23e592a82f85cb6c956f71805897926->m_frame.f_lineno = 270;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[23]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_arg_value_1_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(par_self);
        tmp_expression_value_15 = par_self;
        tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[14]);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[20]);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[21]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_kw_call_arg_value_0_2 == NULL)) {
            tmp_kw_call_arg_value_0_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_kw_call_arg_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 277;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_17 = par_self;
        tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[14]);
        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 277;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_1_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[15]);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_kw_call_arg_value_1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 277;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_19 = par_self;
        tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[16]);
        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_1_2);

            exception_lineno = 277;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[12]);
        Py_DECREF(tmp_expression_value_18);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_1_2);

            exception_lineno = 277;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_a23e592a82f85cb6c956f71805897926->m_frame.f_lineno = 276;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[23]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_arg_value_1_2);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a23e592a82f85cb6c956f71805897926, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a23e592a82f85cb6c956f71805897926->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a23e592a82f85cb6c956f71805897926, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a23e592a82f85cb6c956f71805897926,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_a23e592a82f85cb6c956f71805897926 == cache_frame_a23e592a82f85cb6c956f71805897926) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a23e592a82f85cb6c956f71805897926);
        cache_frame_a23e592a82f85cb6c956f71805897926 = NULL;
    }

    assertFrameObject(frame_a23e592a82f85cb6c956f71805897926);

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


static PyObject *impl_sqlalchemy$dialects$postgresql$json$$$function__6_has_key(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_4d33967ef769d756703f0352ddff505a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4d33967ef769d756703f0352ddff505a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4d33967ef769d756703f0352ddff505a)) {
        Py_XDECREF(cache_frame_4d33967ef769d756703f0352ddff505a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4d33967ef769d756703f0352ddff505a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4d33967ef769d756703f0352ddff505a = MAKE_FUNCTION_FRAME(codeobj_4d33967ef769d756703f0352ddff505a, module_sqlalchemy$dialects$postgresql$json, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4d33967ef769d756703f0352ddff505a->m_type_description == NULL);
    frame_4d33967ef769d756703f0352ddff505a = cache_frame_4d33967ef769d756703f0352ddff505a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4d33967ef769d756703f0352ddff505a);
    assert(Py_REFCNT(frame_4d33967ef769d756703f0352ddff505a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[21]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_kw_call_arg_value_0_1 == NULL)) {
            tmp_kw_call_arg_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 343;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_kw_call_arg_value_1_1 = par_other;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 343;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[27]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 343;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_4d33967ef769d756703f0352ddff505a->m_frame.f_lineno = 343;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[23]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
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
        exception_tb = MAKE_TRACEBACK(frame_4d33967ef769d756703f0352ddff505a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4d33967ef769d756703f0352ddff505a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4d33967ef769d756703f0352ddff505a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4d33967ef769d756703f0352ddff505a,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_4d33967ef769d756703f0352ddff505a == cache_frame_4d33967ef769d756703f0352ddff505a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4d33967ef769d756703f0352ddff505a);
        cache_frame_4d33967ef769d756703f0352ddff505a = NULL;
    }

    assertFrameObject(frame_4d33967ef769d756703f0352ddff505a);

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
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$postgresql$json$$$function__7_has_all(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_9ffb51bc95fc6daa1dba698c85dd4052;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9ffb51bc95fc6daa1dba698c85dd4052 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9ffb51bc95fc6daa1dba698c85dd4052)) {
        Py_XDECREF(cache_frame_9ffb51bc95fc6daa1dba698c85dd4052);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9ffb51bc95fc6daa1dba698c85dd4052 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9ffb51bc95fc6daa1dba698c85dd4052 = MAKE_FUNCTION_FRAME(codeobj_9ffb51bc95fc6daa1dba698c85dd4052, module_sqlalchemy$dialects$postgresql$json, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9ffb51bc95fc6daa1dba698c85dd4052->m_type_description == NULL);
    frame_9ffb51bc95fc6daa1dba698c85dd4052 = cache_frame_9ffb51bc95fc6daa1dba698c85dd4052;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9ffb51bc95fc6daa1dba698c85dd4052);
    assert(Py_REFCNT(frame_9ffb51bc95fc6daa1dba698c85dd4052) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[21]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_kw_call_arg_value_0_1 == NULL)) {
            tmp_kw_call_arg_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 347;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_kw_call_arg_value_1_1 = par_other;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 347;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[27]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 347;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_9ffb51bc95fc6daa1dba698c85dd4052->m_frame.f_lineno = 347;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[23]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
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
        exception_tb = MAKE_TRACEBACK(frame_9ffb51bc95fc6daa1dba698c85dd4052, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9ffb51bc95fc6daa1dba698c85dd4052->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9ffb51bc95fc6daa1dba698c85dd4052, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9ffb51bc95fc6daa1dba698c85dd4052,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_9ffb51bc95fc6daa1dba698c85dd4052 == cache_frame_9ffb51bc95fc6daa1dba698c85dd4052) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9ffb51bc95fc6daa1dba698c85dd4052);
        cache_frame_9ffb51bc95fc6daa1dba698c85dd4052 = NULL;
    }

    assertFrameObject(frame_9ffb51bc95fc6daa1dba698c85dd4052);

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
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$postgresql$json$$$function__8_has_any(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_5fff9decc7b7bc13bd8d5d786ec0059f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5fff9decc7b7bc13bd8d5d786ec0059f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5fff9decc7b7bc13bd8d5d786ec0059f)) {
        Py_XDECREF(cache_frame_5fff9decc7b7bc13bd8d5d786ec0059f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5fff9decc7b7bc13bd8d5d786ec0059f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5fff9decc7b7bc13bd8d5d786ec0059f = MAKE_FUNCTION_FRAME(codeobj_5fff9decc7b7bc13bd8d5d786ec0059f, module_sqlalchemy$dialects$postgresql$json, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5fff9decc7b7bc13bd8d5d786ec0059f->m_type_description == NULL);
    frame_5fff9decc7b7bc13bd8d5d786ec0059f = cache_frame_5fff9decc7b7bc13bd8d5d786ec0059f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5fff9decc7b7bc13bd8d5d786ec0059f);
    assert(Py_REFCNT(frame_5fff9decc7b7bc13bd8d5d786ec0059f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[21]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_kw_call_arg_value_0_1 == NULL)) {
            tmp_kw_call_arg_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 351;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_kw_call_arg_value_1_1 = par_other;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 351;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[27]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 351;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5fff9decc7b7bc13bd8d5d786ec0059f->m_frame.f_lineno = 351;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[23]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
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
        exception_tb = MAKE_TRACEBACK(frame_5fff9decc7b7bc13bd8d5d786ec0059f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5fff9decc7b7bc13bd8d5d786ec0059f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5fff9decc7b7bc13bd8d5d786ec0059f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5fff9decc7b7bc13bd8d5d786ec0059f,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_5fff9decc7b7bc13bd8d5d786ec0059f == cache_frame_5fff9decc7b7bc13bd8d5d786ec0059f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5fff9decc7b7bc13bd8d5d786ec0059f);
        cache_frame_5fff9decc7b7bc13bd8d5d786ec0059f = NULL;
    }

    assertFrameObject(frame_5fff9decc7b7bc13bd8d5d786ec0059f);

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
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$postgresql$json$$$function__9_contains(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    struct Nuitka_FrameObject *frame_e2c19e6199ba04adf3151dbee1a86f20;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e2c19e6199ba04adf3151dbee1a86f20 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e2c19e6199ba04adf3151dbee1a86f20)) {
        Py_XDECREF(cache_frame_e2c19e6199ba04adf3151dbee1a86f20);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e2c19e6199ba04adf3151dbee1a86f20 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e2c19e6199ba04adf3151dbee1a86f20 = MAKE_FUNCTION_FRAME(codeobj_e2c19e6199ba04adf3151dbee1a86f20, module_sqlalchemy$dialects$postgresql$json, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e2c19e6199ba04adf3151dbee1a86f20->m_type_description == NULL);
    frame_e2c19e6199ba04adf3151dbee1a86f20 = cache_frame_e2c19e6199ba04adf3151dbee1a86f20;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e2c19e6199ba04adf3151dbee1a86f20);
    assert(Py_REFCNT(frame_e2c19e6199ba04adf3151dbee1a86f20) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[21]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_kw_call_arg_value_0_1 == NULL)) {
            tmp_kw_call_arg_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 360;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_kw_call_arg_value_1_1 = par_other;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 360;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[27]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 360;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_e2c19e6199ba04adf3151dbee1a86f20->m_frame.f_lineno = 360;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[23]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
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
        exception_tb = MAKE_TRACEBACK(frame_e2c19e6199ba04adf3151dbee1a86f20, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e2c19e6199ba04adf3151dbee1a86f20->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e2c19e6199ba04adf3151dbee1a86f20, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e2c19e6199ba04adf3151dbee1a86f20,
        type_description_1,
        par_self,
        par_other,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_e2c19e6199ba04adf3151dbee1a86f20 == cache_frame_e2c19e6199ba04adf3151dbee1a86f20) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e2c19e6199ba04adf3151dbee1a86f20);
        cache_frame_e2c19e6199ba04adf3151dbee1a86f20 = NULL;
    }

    assertFrameObject(frame_e2c19e6199ba04adf3151dbee1a86f20);

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
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$postgresql$json$$$function__10_contained_by(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_2e6b25db259728e09944bd74809e6ca2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2e6b25db259728e09944bd74809e6ca2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2e6b25db259728e09944bd74809e6ca2)) {
        Py_XDECREF(cache_frame_2e6b25db259728e09944bd74809e6ca2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2e6b25db259728e09944bd74809e6ca2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2e6b25db259728e09944bd74809e6ca2 = MAKE_FUNCTION_FRAME(codeobj_2e6b25db259728e09944bd74809e6ca2, module_sqlalchemy$dialects$postgresql$json, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2e6b25db259728e09944bd74809e6ca2->m_type_description == NULL);
    frame_2e6b25db259728e09944bd74809e6ca2 = cache_frame_2e6b25db259728e09944bd74809e6ca2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2e6b25db259728e09944bd74809e6ca2);
    assert(Py_REFCNT(frame_2e6b25db259728e09944bd74809e6ca2) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[21]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_kw_call_arg_value_0_1 == NULL)) {
            tmp_kw_call_arg_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 367;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_kw_call_arg_value_1_1 = par_other;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 367;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[27]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 367;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_2e6b25db259728e09944bd74809e6ca2->m_frame.f_lineno = 366;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[23]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
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
        exception_tb = MAKE_TRACEBACK(frame_2e6b25db259728e09944bd74809e6ca2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2e6b25db259728e09944bd74809e6ca2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2e6b25db259728e09944bd74809e6ca2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2e6b25db259728e09944bd74809e6ca2,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_2e6b25db259728e09944bd74809e6ca2 == cache_frame_2e6b25db259728e09944bd74809e6ca2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2e6b25db259728e09944bd74809e6ca2);
        cache_frame_2e6b25db259728e09944bd74809e6ca2 = NULL;
    }

    assertFrameObject(frame_2e6b25db259728e09944bd74809e6ca2);

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
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$postgresql$json$$$function__11_delete_path(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_array = python_pars[1];
    PyObject *var_right_side = NULL;
    struct Nuitka_FrameObject *frame_6a82e319f346b086440297d086d8d176;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6a82e319f346b086440297d086d8d176 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6a82e319f346b086440297d086d8d176)) {
        Py_XDECREF(cache_frame_6a82e319f346b086440297d086d8d176);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6a82e319f346b086440297d086d8d176 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6a82e319f346b086440297d086d8d176 = MAKE_FUNCTION_FRAME(codeobj_6a82e319f346b086440297d086d8d176, module_sqlalchemy$dialects$postgresql$json, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6a82e319f346b086440297d086d8d176->m_type_description == NULL);
    frame_6a82e319f346b086440297d086d8d176 = cache_frame_6a82e319f346b086440297d086d8d176;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6a82e319f346b086440297d086d8d176);
    assert(Py_REFCNT(frame_6a82e319f346b086440297d086d8d176) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_array);
        tmp_isinstance_inst_1 = par_array;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_array);
        tmp_args_element_value_1 = par_array;
        frame_6a82e319f346b086440297d086d8d176->m_frame.f_lineno = 380;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_array;
            assert(old != NULL);
            par_array = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_array);
        tmp_args_element_value_2 = par_array;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[40]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_6a82e319f346b086440297d086d8d176->m_frame.f_lineno = 381;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_6a82e319f346b086440297d086d8d176->m_frame.f_lineno = 381;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_right_side == NULL);
        var_right_side = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[21]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_kw_call_arg_value_0_1 == NULL)) {
            tmp_kw_call_arg_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 382;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_right_side);
        tmp_kw_call_arg_value_1_1 = var_right_side;
        tmp_kw_call_dict_value_0_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_kw_call_dict_value_0_1 == NULL)) {
            tmp_kw_call_dict_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 382;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_6a82e319f346b086440297d086d8d176->m_frame.f_lineno = 382;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_4, args, kw_values, mod_consts[23]);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
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
        exception_tb = MAKE_TRACEBACK(frame_6a82e319f346b086440297d086d8d176, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6a82e319f346b086440297d086d8d176->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6a82e319f346b086440297d086d8d176, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6a82e319f346b086440297d086d8d176,
        type_description_1,
        par_self,
        par_array,
        var_right_side
    );


    // Release cached frame if used for exception.
    if (frame_6a82e319f346b086440297d086d8d176 == cache_frame_6a82e319f346b086440297d086d8d176) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6a82e319f346b086440297d086d8d176);
        cache_frame_6a82e319f346b086440297d086d8d176 = NULL;
    }

    assertFrameObject(frame_6a82e319f346b086440297d086d8d176);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_array);
    Py_DECREF(par_array);
    par_array = NULL;
    CHECK_OBJECT(var_right_side);
    Py_DECREF(var_right_side);
    var_right_side = NULL;
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

    Py_XDECREF(par_array);
    par_array = NULL;
    Py_XDECREF(var_right_side);
    var_right_side = NULL;
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


static PyObject *impl_sqlalchemy$dialects$postgresql$json$$$function__12_path_exists(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_cb1495773742166d2aaeb1db339b6753;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cb1495773742166d2aaeb1db339b6753 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cb1495773742166d2aaeb1db339b6753)) {
        Py_XDECREF(cache_frame_cb1495773742166d2aaeb1db339b6753);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cb1495773742166d2aaeb1db339b6753 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cb1495773742166d2aaeb1db339b6753 = MAKE_FUNCTION_FRAME(codeobj_cb1495773742166d2aaeb1db339b6753, module_sqlalchemy$dialects$postgresql$json, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cb1495773742166d2aaeb1db339b6753->m_type_description == NULL);
    frame_cb1495773742166d2aaeb1db339b6753 = cache_frame_cb1495773742166d2aaeb1db339b6753;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cb1495773742166d2aaeb1db339b6753);
    assert(Py_REFCNT(frame_cb1495773742166d2aaeb1db339b6753) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[21]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_kw_call_arg_value_0_1 == NULL)) {
            tmp_kw_call_arg_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 391;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_kw_call_arg_value_1_1 = par_other;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 391;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[27]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 391;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_cb1495773742166d2aaeb1db339b6753->m_frame.f_lineno = 390;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[23]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
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
        exception_tb = MAKE_TRACEBACK(frame_cb1495773742166d2aaeb1db339b6753, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cb1495773742166d2aaeb1db339b6753->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cb1495773742166d2aaeb1db339b6753, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cb1495773742166d2aaeb1db339b6753,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_cb1495773742166d2aaeb1db339b6753 == cache_frame_cb1495773742166d2aaeb1db339b6753) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cb1495773742166d2aaeb1db339b6753);
        cache_frame_cb1495773742166d2aaeb1db339b6753 = NULL;
    }

    assertFrameObject(frame_cb1495773742166d2aaeb1db339b6753);

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
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$postgresql$json$$$function__13_path_match(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_0b10ceb4baa7879ac6ee8a77dc9398a4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0b10ceb4baa7879ac6ee8a77dc9398a4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0b10ceb4baa7879ac6ee8a77dc9398a4)) {
        Py_XDECREF(cache_frame_0b10ceb4baa7879ac6ee8a77dc9398a4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0b10ceb4baa7879ac6ee8a77dc9398a4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0b10ceb4baa7879ac6ee8a77dc9398a4 = MAKE_FUNCTION_FRAME(codeobj_0b10ceb4baa7879ac6ee8a77dc9398a4, module_sqlalchemy$dialects$postgresql$json, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0b10ceb4baa7879ac6ee8a77dc9398a4->m_type_description == NULL);
    frame_0b10ceb4baa7879ac6ee8a77dc9398a4 = cache_frame_0b10ceb4baa7879ac6ee8a77dc9398a4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0b10ceb4baa7879ac6ee8a77dc9398a4);
    assert(Py_REFCNT(frame_0b10ceb4baa7879ac6ee8a77dc9398a4) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[21]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_kw_call_arg_value_0_1 == NULL)) {
            tmp_kw_call_arg_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 403;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_kw_call_arg_value_1_1 = par_other;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 403;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[27]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 403;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_0b10ceb4baa7879ac6ee8a77dc9398a4->m_frame.f_lineno = 402;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[23]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
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
        exception_tb = MAKE_TRACEBACK(frame_0b10ceb4baa7879ac6ee8a77dc9398a4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0b10ceb4baa7879ac6ee8a77dc9398a4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0b10ceb4baa7879ac6ee8a77dc9398a4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0b10ceb4baa7879ac6ee8a77dc9398a4,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_0b10ceb4baa7879ac6ee8a77dc9398a4 == cache_frame_0b10ceb4baa7879ac6ee8a77dc9398a4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0b10ceb4baa7879ac6ee8a77dc9398a4);
        cache_frame_0b10ceb4baa7879ac6ee8a77dc9398a4 = NULL;
    }

    assertFrameObject(frame_0b10ceb4baa7879ac6ee8a77dc9398a4);

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
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__10_contained_by() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$postgresql$json$$$function__10_contained_by,
        mod_consts[122],
#if PYTHON_VERSION >= 0x300
        mod_consts[123],
#endif
        codeobj_2e6b25db259728e09944bd74809e6ca2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$postgresql$json,
        mod_consts[36],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__11_delete_path() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$postgresql$json$$$function__11_delete_path,
        mod_consts[124],
#if PYTHON_VERSION >= 0x300
        mod_consts[125],
#endif
        codeobj_6a82e319f346b086440297d086d8d176,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$postgresql$json,
        mod_consts[43],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__12_path_exists() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$postgresql$json$$$function__12_path_exists,
        mod_consts[126],
#if PYTHON_VERSION >= 0x300
        mod_consts[127],
#endif
        codeobj_cb1495773742166d2aaeb1db339b6753,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$postgresql$json,
        mod_consts[45],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__13_path_match() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$postgresql$json$$$function__13_path_match,
        mod_consts[128],
#if PYTHON_VERSION >= 0x300
        mod_consts[129],
#endif
        codeobj_0b10ceb4baa7879ac6ee8a77dc9398a4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$postgresql$json,
        mod_consts[47],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__1__processor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$postgresql$json$$$function__1__processor,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[92],
#endif
        codeobj_c01b98a086741c27375718ac87134fad,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$postgresql$json,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__1__processor$$$function__1_process(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$postgresql$json$$$function__1__processor$$$function__1_process,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        mod_consts[1],
#endif
        codeobj_f457b818437363dd20cad492fa53faa7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$postgresql$json,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__2_bind_processor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$postgresql$json$$$function__2_bind_processor,
        mod_consts[93],
#if PYTHON_VERSION >= 0x300
        mod_consts[94],
#endif
        codeobj_b29f043104c4672e86ec6121154a3d72,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$postgresql$json,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__3_literal_processor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$postgresql$json$$$function__3_literal_processor,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        mod_consts[96],
#endif
        codeobj_762da12e0e2f06056c60b9efae6f7acc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$postgresql$json,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__4___init__(PyObject *defaults, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$postgresql$json$$$function__4___init__,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[104],
#endif
        codeobj_1be88c3e19ab447f0cd68fb1d3618a97,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$postgresql$json,
        mod_consts[13],
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__5_astext() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$postgresql$json$$$function__5_astext,
        mod_consts[109],
#if PYTHON_VERSION >= 0x300
        mod_consts[110],
#endif
        codeobj_a23e592a82f85cb6c956f71805897926,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$postgresql$json,
        mod_consts[25],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__6_has_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$postgresql$json$$$function__6_has_key,
        mod_consts[114],
#if PYTHON_VERSION >= 0x300
        mod_consts[115],
#endif
        codeobj_4d33967ef769d756703f0352ddff505a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$postgresql$json,
        mod_consts[28],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__7_has_all() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$postgresql$json$$$function__7_has_all,
        mod_consts[116],
#if PYTHON_VERSION >= 0x300
        mod_consts[117],
#endif
        codeobj_9ffb51bc95fc6daa1dba698c85dd4052,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$postgresql$json,
        mod_consts[30],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__8_has_any() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$postgresql$json$$$function__8_has_any,
        mod_consts[118],
#if PYTHON_VERSION >= 0x300
        mod_consts[119],
#endif
        codeobj_5fff9decc7b7bc13bd8d5d786ec0059f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$postgresql$json,
        mod_consts[32],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__9_contains() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$postgresql$json$$$function__9_contains,
        mod_consts[120],
#if PYTHON_VERSION >= 0x300
        mod_consts[121],
#endif
        codeobj_e2c19e6199ba04adf3151dbee1a86f20,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$postgresql$json,
        mod_consts[34],
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

function_impl_code functable_sqlalchemy$dialects$postgresql$json[] = {
    impl_sqlalchemy$dialects$postgresql$json$$$function__1__processor$$$function__1_process,
    impl_sqlalchemy$dialects$postgresql$json$$$function__1__processor,
    impl_sqlalchemy$dialects$postgresql$json$$$function__2_bind_processor,
    impl_sqlalchemy$dialects$postgresql$json$$$function__3_literal_processor,
    impl_sqlalchemy$dialects$postgresql$json$$$function__4___init__,
    impl_sqlalchemy$dialects$postgresql$json$$$function__5_astext,
    impl_sqlalchemy$dialects$postgresql$json$$$function__6_has_key,
    impl_sqlalchemy$dialects$postgresql$json$$$function__7_has_all,
    impl_sqlalchemy$dialects$postgresql$json$$$function__8_has_any,
    impl_sqlalchemy$dialects$postgresql$json$$$function__9_contains,
    impl_sqlalchemy$dialects$postgresql$json$$$function__10_contained_by,
    impl_sqlalchemy$dialects$postgresql$json$$$function__11_delete_path,
    impl_sqlalchemy$dialects$postgresql$json$$$function__12_path_exists,
    impl_sqlalchemy$dialects$postgresql$json$$$function__13_path_match,
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

    function_impl_code *current = functable_sqlalchemy$dialects$postgresql$json;
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

    if (offset > sizeof(functable_sqlalchemy$dialects$postgresql$json) || offset < 0) {
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
        functable_sqlalchemy$dialects$postgresql$json[offset],
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
        module_sqlalchemy$dialects$postgresql$json,
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
PyObject *modulecode_sqlalchemy$dialects$postgresql$json(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("sqlalchemy.dialects.postgresql.json");

    // Store the module for future use.
    module_sqlalchemy$dialects$postgresql$json = module;

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
        PRINT_STRING("sqlalchemy.dialects.postgresql.json: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("sqlalchemy.dialects.postgresql.json: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("sqlalchemy.dialects.postgresql.json: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initsqlalchemy$dialects$postgresql$json\n");

    moduledict_sqlalchemy$dialects$postgresql$json = MODULE_DICT(module_sqlalchemy$dialects$postgresql$json);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_sqlalchemy$dialects$postgresql$json,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_sqlalchemy$dialects$postgresql$json,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[59]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_sqlalchemy$dialects$postgresql$json,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_sqlalchemy$dialects$postgresql$json,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_sqlalchemy$dialects$postgresql$json,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_sqlalchemy$dialects$postgresql$json);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_sqlalchemy$dialects$postgresql$json);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    struct Nuitka_CellObject *outline_2_var___class__ = Nuitka_Cell_Empty();
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *tmp_JSON$class_creation_1__bases = NULL;
    PyObject *tmp_JSON$class_creation_1__bases_orig = NULL;
    PyObject *tmp_JSON$class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_JSON$class_creation_1__metaclass = NULL;
    PyObject *tmp_JSON$class_creation_1__prepared = NULL;
    PyObject *tmp_JSONB$class_creation_1__bases = NULL;
    PyObject *tmp_JSONB$class_creation_1__bases_orig = NULL;
    PyObject *tmp_JSONB$class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_JSONB$class_creation_1__metaclass = NULL;
    PyObject *tmp_JSONB$class_creation_1__prepared = NULL;
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
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    struct Nuitka_FrameObject *frame_8e41cfa631a90e3a208d5a7452d49913;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_sqlalchemy$dialects$postgresql$json$$$class__1_JSONPathType_93 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_a1b212ee1b89104a0324bf741cbccf89_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
    PyObject *locals_sqlalchemy$dialects$postgresql$json$$$class__2_JSONPATH_119 = NULL;
    struct Nuitka_FrameObject *frame_23aba0620b0a81179a55b1308bbc37c5_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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
    PyObject *locals_sqlalchemy$dialects$postgresql$json$$$class__3_JSON_137 = NULL;
    struct Nuitka_FrameObject *frame_a430e365fc70d9a789614d598b53c430_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *locals_sqlalchemy$dialects$postgresql$json$$$class__4_Comparator_252 = NULL;
    struct Nuitka_FrameObject *frame_eb6e4522bf7a998707ecb5f7f7e80db9_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
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
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *locals_sqlalchemy$dialects$postgresql$json$$$class__5_JSONB_283 = NULL;
    struct Nuitka_FrameObject *frame_01d8762f21762dc4548d457e3c68ed69_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *locals_sqlalchemy$dialects$postgresql$json$$$class__6_Comparator_336 = NULL;
    struct Nuitka_FrameObject *frame_88b03c98cd79156dc2de421992aaa4ac_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
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
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_2);
    }
    frame_8e41cfa631a90e3a208d5a7452d49913 = MAKE_MODULE_FRAME(codeobj_8e41cfa631a90e3a208d5a7452d49913, module_sqlalchemy$dialects$postgresql$json);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8e41cfa631a90e3a208d5a7452d49913);
    assert(Py_REFCNT(frame_8e41cfa631a90e3a208d5a7452d49913) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[51], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[52], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[54];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_sqlalchemy$dialects$postgresql$json;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[55];
        tmp_level_value_1 = mod_consts[56];
        frame_8e41cfa631a90e3a208d5a7452d49913->m_frame.f_lineno = 10;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_sqlalchemy$dialects$postgresql$json,
                mod_consts[39],
                mod_consts[57]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[39]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[54];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_sqlalchemy$dialects$postgresql$json;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[58];
        tmp_level_value_2 = mod_consts[56];
        frame_8e41cfa631a90e3a208d5a7452d49913->m_frame.f_lineno = 11;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_sqlalchemy$dialects$postgresql$json,
                mod_consts[54],
                mod_consts[57]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[54]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[59];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_sqlalchemy$dialects$postgresql$json;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[60];
        tmp_level_value_3 = mod_consts[61];
        frame_8e41cfa631a90e3a208d5a7452d49913->m_frame.f_lineno = 12;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_sqlalchemy$dialects$postgresql$json,
                mod_consts[62],
                mod_consts[57]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[62]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[63];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_sqlalchemy$dialects$postgresql$json;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[64];
        tmp_level_value_4 = mod_consts[61];
        frame_8e41cfa631a90e3a208d5a7452d49913->m_frame.f_lineno = 13;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_sqlalchemy$dialects$postgresql$json,
                mod_consts[38],
                mod_consts[57]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[38]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[63];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_sqlalchemy$dialects$postgresql$json;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[65];
        tmp_level_value_5 = mod_consts[61];
        frame_8e41cfa631a90e3a208d5a7452d49913->m_frame.f_lineno = 14;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_sqlalchemy$dialects$postgresql$json,
                mod_consts[66],
                mod_consts[57]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[66]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[67];
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[69]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_1);

            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[70]);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_1);

            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[72]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
            tmp_kw_call_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = Py_True;
        tmp_kw_call_value_2_1 = Py_True;
        frame_8e41cfa631a90e3a208d5a7452d49913->m_frame.f_lineno = 21;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};
            tmp_assign_source_11 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_1, mod_consts[73], kw_values, mod_consts[74]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_kw_call_value_2_2;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[72]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_kw_call_value_0_2 == NULL)) {
            tmp_kw_call_value_0_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_2 = Py_True;
        tmp_kw_call_value_2_2 = Py_True;
        frame_8e41cfa631a90e3a208d5a7452d49913->m_frame.f_lineno = 28;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2};
            tmp_assign_source_12 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_2, mod_consts[75], kw_values, mod_consts[74]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_kw_call_value_1_3;
        PyObject *tmp_kw_call_value_2_3;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[72]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_3 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_kw_call_value_0_3 == NULL)) {
            tmp_kw_call_value_0_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_kw_call_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_3 = Py_True;
        tmp_kw_call_value_2_3 = Py_True;
        frame_8e41cfa631a90e3a208d5a7452d49913->m_frame.f_lineno = 36;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3, tmp_kw_call_value_2_3};
            tmp_assign_source_13 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_3, mod_consts[76], kw_values, mod_consts[74]);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_kw_call_value_1_4;
        PyObject *tmp_kw_call_value_2_4;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[72]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_4 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_kw_call_value_0_4 == NULL)) {
            tmp_kw_call_value_0_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_kw_call_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_4 = Py_True;
        tmp_kw_call_value_2_4 = Py_True;
        frame_8e41cfa631a90e3a208d5a7452d49913->m_frame.f_lineno = 43;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_4, tmp_kw_call_value_2_4};
            tmp_assign_source_14 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_4, mod_consts[77], kw_values, mod_consts[74]);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_kw_call_value_1_5;
        PyObject *tmp_kw_call_value_2_5;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[72]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_5 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_kw_call_value_0_5 == NULL)) {
            tmp_kw_call_value_0_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_kw_call_value_0_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_5 = Py_True;
        tmp_kw_call_value_2_5 = Py_True;
        frame_8e41cfa631a90e3a208d5a7452d49913->m_frame.f_lineno = 50;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_5, tmp_kw_call_value_2_5};
            tmp_assign_source_15 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_5, mod_consts[78], kw_values, mod_consts[74]);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_kw_call_value_0_6;
        PyObject *tmp_kw_call_value_1_6;
        PyObject *tmp_kw_call_value_2_6;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[72]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_6 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_kw_call_value_0_6 == NULL)) {
            tmp_kw_call_value_0_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_kw_call_value_0_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_6 = Py_True;
        tmp_kw_call_value_2_6 = Py_True;
        frame_8e41cfa631a90e3a208d5a7452d49913->m_frame.f_lineno = 57;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_6, tmp_kw_call_value_1_6, tmp_kw_call_value_2_6};
            tmp_assign_source_16 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_6, mod_consts[79], kw_values, mod_consts[74]);
        }

        Py_DECREF(tmp_called_value_6);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_kw_call_value_0_7;
        PyObject *tmp_kw_call_value_1_7;
        PyObject *tmp_kw_call_value_2_7;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[72]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_7 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_kw_call_value_0_7 == NULL)) {
            tmp_kw_call_value_0_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_kw_call_value_0_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_7 = Py_True;
        tmp_kw_call_value_2_7 = Py_True;
        frame_8e41cfa631a90e3a208d5a7452d49913->m_frame.f_lineno = 64;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_7, tmp_kw_call_value_1_7, tmp_kw_call_value_2_7};
            tmp_assign_source_17 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_7, mod_consts[80], kw_values, mod_consts[74]);
        }

        Py_DECREF(tmp_called_value_7);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_kw_call_value_0_8;
        PyObject *tmp_kw_call_value_1_8;
        PyObject *tmp_kw_call_value_2_8;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[72]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_8 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_kw_call_value_0_8 == NULL)) {
            tmp_kw_call_value_0_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_kw_call_value_0_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_8 = Py_True;
        tmp_kw_call_value_2_8 = Py_True;
        frame_8e41cfa631a90e3a208d5a7452d49913->m_frame.f_lineno = 71;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_8, tmp_kw_call_value_1_8, tmp_kw_call_value_2_8};
            tmp_assign_source_18 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_8, mod_consts[81], kw_values, mod_consts[74]);
        }

        Py_DECREF(tmp_called_value_8);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_kw_call_value_0_9;
        PyObject *tmp_kw_call_value_1_9;
        PyObject *tmp_kw_call_value_2_9;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[72]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_9 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_kw_call_value_0_9 == NULL)) {
            tmp_kw_call_value_0_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_kw_call_value_0_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_9 = Py_True;
        tmp_kw_call_value_2_9 = Py_True;
        frame_8e41cfa631a90e3a208d5a7452d49913->m_frame.f_lineno = 78;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_9, tmp_kw_call_value_1_9, tmp_kw_call_value_2_9};
            tmp_assign_source_19 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_9, mod_consts[82], kw_values, mod_consts[74]);
        }

        Py_DECREF(tmp_called_value_9);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_kw_call_value_0_10;
        PyObject *tmp_kw_call_value_1_10;
        PyObject *tmp_kw_call_value_2_10;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[72]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_10 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_kw_call_value_0_10 == NULL)) {
            tmp_kw_call_value_0_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_kw_call_value_0_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_10 = Py_True;
        tmp_kw_call_value_2_10 = Py_True;
        frame_8e41cfa631a90e3a208d5a7452d49913->m_frame.f_lineno = 85;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_10, tmp_kw_call_value_1_10, tmp_kw_call_value_2_10};
            tmp_assign_source_20 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_10, mod_consts[83], kw_values, mod_consts[74]);
        }

        Py_DECREF(tmp_called_value_10);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_20);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto try_except_handler_1;
        }
        tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[18]);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto try_except_handler_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[19]);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto try_except_handler_1;
        }
        tmp_assign_source_21 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_21, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_22 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto try_except_handler_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_16 = tmp_class_creation_1__bases;
        tmp_subscript_value_2 = mod_consts[57];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_16, tmp_subscript_value_2, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_24 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_24;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_17 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_17, mod_consts[84]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_18 = tmp_class_creation_1__metaclass;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[84]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto try_except_handler_1;
        }
        tmp_tuple_element_2 = mod_consts[19];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_8e41cfa631a90e3a208d5a7452d49913->m_frame.f_lineno = 93;
        tmp_assign_source_25 = CALL_FUNCTION(tmp_called_value_11, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_25;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_19 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_19, mod_consts[85]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto try_except_handler_1;
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
        tmp_mod_expr_left_1 = mod_consts[86];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[87];
        tmp_getattr_default_1 = mod_consts[88];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto try_except_handler_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_20;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_20 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_20 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[87]);
            Py_DECREF(tmp_expression_value_20);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 93;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_26;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_27;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_sqlalchemy$dialects$postgresql$json$$$class__1_JSONPathType_93 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[89];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__1_JSONPathType_93, mod_consts[90], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[19];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__1_JSONPathType_93, mod_consts[91], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto try_except_handler_3;
        }
        frame_a1b212ee1b89104a0324bf741cbccf89_2 = MAKE_CLASS_FRAME(codeobj_a1b212ee1b89104a0324bf741cbccf89, module_sqlalchemy$dialects$postgresql$json, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_a1b212ee1b89104a0324bf741cbccf89_2);
        assert(Py_REFCNT(frame_a1b212ee1b89104a0324bf741cbccf89_2) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__1__processor();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__1_JSONPathType_93, mod_consts[6], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__2_bind_processor();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__1_JSONPathType_93, mod_consts[93], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__3_literal_processor();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__1_JSONPathType_93, mod_consts[95], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a1b212ee1b89104a0324bf741cbccf89_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a1b212ee1b89104a0324bf741cbccf89_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a1b212ee1b89104a0324bf741cbccf89_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a1b212ee1b89104a0324bf741cbccf89_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_a1b212ee1b89104a0324bf741cbccf89_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
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


                exception_lineno = 93;

                goto try_except_handler_3;
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
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__1_JSONPathType_93, mod_consts[97], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto try_except_handler_3;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_12 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[19];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_sqlalchemy$dialects$postgresql$json$$$class__1_JSONPathType_93;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_8e41cfa631a90e3a208d5a7452d49913->m_frame.f_lineno = 93;
            tmp_assign_source_28 = CALL_FUNCTION(tmp_called_value_12, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_28;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_27 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_27);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_sqlalchemy$dialects$postgresql$json$$$class__1_JSONPathType_93);
        locals_sqlalchemy$dialects$postgresql$json$$$class__1_JSONPathType_93 = NULL;
        goto try_return_handler_2;
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

        Py_DECREF(locals_sqlalchemy$dialects$postgresql$json$$$class__1_JSONPathType_93);
        locals_sqlalchemy$dialects$postgresql$json$$$class__1_JSONPathType_93 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
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
        exception_lineno = 93;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_27);
    }
    goto try_end_1;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
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
        PyObject *tmp_assign_source_29;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_4;
        }
        tmp_assign_source_29 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_29, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_30 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_4;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_21 = tmp_class_creation_2__bases;
        tmp_subscript_value_3 = mod_consts[57];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_21, tmp_subscript_value_3, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_4;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_32 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_32;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_22 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_22, mod_consts[84]);
        tmp_condition_result_6 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_23 = tmp_class_creation_2__metaclass;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[84]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_4;
        }
        tmp_tuple_element_6 = mod_consts[98];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_8e41cfa631a90e3a208d5a7452d49913->m_frame.f_lineno = 119;
        tmp_assign_source_33 = CALL_FUNCTION(tmp_called_value_13, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_33;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_24 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_24, mod_consts[85]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_4;
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
        tmp_mod_expr_left_2 = mod_consts[86];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[87];
        tmp_getattr_default_2 = mod_consts[88];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_25;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_25 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_25 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[87]);
            Py_DECREF(tmp_expression_value_25);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 119;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_34;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_35;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_sqlalchemy$dialects$postgresql$json$$$class__2_JSONPATH_119 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[89];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__2_JSONPATH_119, mod_consts[90], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[99];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__2_JSONPATH_119, mod_consts[48], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[98];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__2_JSONPATH_119, mod_consts[91], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_6;
        }
        frame_23aba0620b0a81179a55b1308bbc37c5_3 = MAKE_CLASS_FRAME(codeobj_23aba0620b0a81179a55b1308bbc37c5, module_sqlalchemy$dialects$postgresql$json, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_23aba0620b0a81179a55b1308bbc37c5_3);
        assert(Py_REFCNT(frame_23aba0620b0a81179a55b1308bbc37c5_3) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[98];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__2_JSONPATH_119, mod_consts[100], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_23aba0620b0a81179a55b1308bbc37c5_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_23aba0620b0a81179a55b1308bbc37c5_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_23aba0620b0a81179a55b1308bbc37c5_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_23aba0620b0a81179a55b1308bbc37c5_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_23aba0620b0a81179a55b1308bbc37c5_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_6;
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


                exception_lineno = 119;

                goto try_except_handler_6;
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
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__2_JSONPATH_119, mod_consts[97], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_6;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_14 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = mod_consts[98];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_sqlalchemy$dialects$postgresql$json$$$class__2_JSONPATH_119;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_8e41cfa631a90e3a208d5a7452d49913->m_frame.f_lineno = 119;
            tmp_assign_source_36 = CALL_FUNCTION(tmp_called_value_14, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_36;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_35 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_35);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_sqlalchemy$dialects$postgresql$json$$$class__2_JSONPATH_119);
        locals_sqlalchemy$dialects$postgresql$json$$$class__2_JSONPATH_119 = NULL;
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

        Py_DECREF(locals_sqlalchemy$dialects$postgresql$json$$$class__2_JSONPATH_119);
        locals_sqlalchemy$dialects$postgresql$json$$$class__2_JSONPATH_119 = NULL;
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
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
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

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 119;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_35);
    }
    goto try_end_2;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_expression_value_26;
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_7;
        }
        tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[18]);
        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_7;
        }
        tmp_assign_source_37 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_37, 0, tmp_tuple_element_9);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_38 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_7;
        }
        tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_27 = tmp_class_creation_3__bases;
        tmp_subscript_value_4 = mod_consts[57];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_27, tmp_subscript_value_4, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_7;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_40 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_40;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_value_28;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_28 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_28, mod_consts[84]);
        tmp_condition_result_10 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_29 = tmp_class_creation_3__metaclass;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[84]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_7;
        }
        tmp_tuple_element_10 = mod_consts[18];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_10 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_8e41cfa631a90e3a208d5a7452d49913->m_frame.f_lineno = 137;
        tmp_assign_source_41 = CALL_FUNCTION(tmp_called_value_15, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_41;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_30;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_30 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_30, mod_consts[85]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_7;
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
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[86];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[87];
        tmp_getattr_default_3 = mod_consts[88];
        tmp_tuple_element_11 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_7;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_31;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_31 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_31 == NULL));
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[87]);
            Py_DECREF(tmp_expression_value_31);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 137;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_42;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_43;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_sqlalchemy$dialects$postgresql$json$$$class__3_JSON_137 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[89];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__3_JSON_137, mod_consts[90], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[101];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__3_JSON_137, mod_consts[48], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[18];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__3_JSON_137, mod_consts[91], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_9;
        }
        frame_a430e365fc70d9a789614d598b53c430_4 = MAKE_CLASS_FRAME(codeobj_a430e365fc70d9a789614d598b53c430, module_sqlalchemy$dialects$postgresql$json, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_a430e365fc70d9a789614d598b53c430_4);
        assert(Py_REFCNT(frame_a430e365fc70d9a789614d598b53c430_4) == 2);

        // Framed code:
        {
            PyObject *tmp_called_instance_1;
            tmp_called_instance_1 = PyObject_GetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__3_JSON_137, mod_consts[17]);

            if (tmp_called_instance_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[17]);

                    if (unlikely(tmp_called_instance_1 == NULL)) {
                        tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                    }

                    if (tmp_called_instance_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 221;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_instance_1);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_a430e365fc70d9a789614d598b53c430_4->m_frame.f_lineno = 221;
            tmp_dictset_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[102]);
            Py_DECREF(tmp_called_instance_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__3_JSON_137, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_defaults_1;
            struct Nuitka_CellObject *tmp_closure_1[1];
            tmp_defaults_1 = mod_consts[103];
            Py_INCREF(tmp_defaults_1);

            tmp_closure_1[0] = outline_2_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__4___init__(tmp_defaults_1, tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__3_JSON_137, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_expression_value_33;
            tmp_expression_value_33 = PyObject_GetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__3_JSON_137, mod_consts[17]);

            if (tmp_expression_value_33 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[17]);

                    if (unlikely(tmp_expression_value_33 == NULL)) {
                        tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                    }

                    if (tmp_expression_value_33 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 252;
                        type_description_2 = "c";
                        goto try_except_handler_10;
                    }
                    Py_INCREF(tmp_expression_value_33);
                } else {
                    goto try_except_handler_10;
                }
            }

            tmp_expression_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[18]);
            Py_DECREF(tmp_expression_value_33);
            if (tmp_expression_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;
                type_description_2 = "c";
                goto try_except_handler_10;
            }
            tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[105]);
            Py_DECREF(tmp_expression_value_32);
            if (tmp_tuple_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;
                type_description_2 = "c";
                goto try_except_handler_10;
            }
            tmp_assign_source_44 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_44, 0, tmp_tuple_element_12);
            assert(tmp_JSON$class_creation_1__bases_orig == NULL);
            tmp_JSON$class_creation_1__bases_orig = tmp_assign_source_44;
        }
        {
            PyObject *tmp_assign_source_45;
            PyObject *tmp_dircall_arg1_4;
            CHECK_OBJECT(tmp_JSON$class_creation_1__bases_orig);
            tmp_dircall_arg1_4 = tmp_JSON$class_creation_1__bases_orig;
            Py_INCREF(tmp_dircall_arg1_4);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
                tmp_assign_source_45 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
            }
            if (tmp_assign_source_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;
                type_description_2 = "c";
                goto try_except_handler_10;
            }
            assert(tmp_JSON$class_creation_1__bases == NULL);
            tmp_JSON$class_creation_1__bases = tmp_assign_source_45;
        }
        {
            PyObject *tmp_assign_source_46;
            tmp_assign_source_46 = MAKE_DICT_EMPTY();
            assert(tmp_JSON$class_creation_1__class_decl_dict == NULL);
            tmp_JSON$class_creation_1__class_decl_dict = tmp_assign_source_46;
        }
        {
            PyObject *tmp_assign_source_47;
            PyObject *tmp_metaclass_value_4;
            nuitka_bool tmp_condition_result_12;
            int tmp_truth_name_4;
            PyObject *tmp_type_arg_7;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_bases_value_4;
            CHECK_OBJECT(tmp_JSON$class_creation_1__bases);
            tmp_truth_name_4 = CHECK_IF_TRUE(tmp_JSON$class_creation_1__bases);
            if (tmp_truth_name_4 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;
                type_description_2 = "c";
                goto try_except_handler_10;
            }
            tmp_condition_result_12 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            CHECK_OBJECT(tmp_JSON$class_creation_1__bases);
            tmp_expression_value_34 = tmp_JSON$class_creation_1__bases;
            tmp_subscript_value_5 = mod_consts[57];
            tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_34, tmp_subscript_value_5, 0);
            if (tmp_type_arg_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;
                type_description_2 = "c";
                goto try_except_handler_10;
            }
            tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
            Py_DECREF(tmp_type_arg_7);
            if (tmp_metaclass_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;
                type_description_2 = "c";
                goto try_except_handler_10;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_4);
            condexpr_end_4:;
            CHECK_OBJECT(tmp_JSON$class_creation_1__bases);
            tmp_bases_value_4 = tmp_JSON$class_creation_1__bases;
            tmp_assign_source_47 = SELECT_METACLASS(tmp_metaclass_value_4, tmp_bases_value_4);
            Py_DECREF(tmp_metaclass_value_4);
            if (tmp_assign_source_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;
                type_description_2 = "c";
                goto try_except_handler_10;
            }
            assert(tmp_JSON$class_creation_1__metaclass == NULL);
            tmp_JSON$class_creation_1__metaclass = tmp_assign_source_47;
        }
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_expression_value_35;
            CHECK_OBJECT(tmp_JSON$class_creation_1__metaclass);
            tmp_expression_value_35 = tmp_JSON$class_creation_1__metaclass;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_35, mod_consts[84]);
            tmp_condition_result_13 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        {
            PyObject *tmp_assign_source_48;
            PyObject *tmp_called_value_16;
            PyObject *tmp_expression_value_36;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_JSON$class_creation_1__metaclass);
            tmp_expression_value_36 = tmp_JSON$class_creation_1__metaclass;
            tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[84]);
            if (tmp_called_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;
                type_description_2 = "c";
                goto try_except_handler_10;
            }
            tmp_tuple_element_13 = mod_consts[105];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_JSON$class_creation_1__bases);
            tmp_tuple_element_13 = tmp_JSON$class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_JSON$class_creation_1__class_decl_dict);
            tmp_kwargs_value_6 = tmp_JSON$class_creation_1__class_decl_dict;
            frame_a430e365fc70d9a789614d598b53c430_4->m_frame.f_lineno = 252;
            tmp_assign_source_48 = CALL_FUNCTION(tmp_called_value_16, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;
                type_description_2 = "c";
                goto try_except_handler_10;
            }
            assert(tmp_JSON$class_creation_1__prepared == NULL);
            tmp_JSON$class_creation_1__prepared = tmp_assign_source_48;
        }
        {
            bool tmp_condition_result_14;
            PyObject *tmp_operand_value_4;
            PyObject *tmp_expression_value_37;
            CHECK_OBJECT(tmp_JSON$class_creation_1__prepared);
            tmp_expression_value_37 = tmp_JSON$class_creation_1__prepared;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_37, mod_consts[85]);
            tmp_operand_value_4 = (tmp_result) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;
                type_description_2 = "c";
                goto try_except_handler_10;
            }
            tmp_condition_result_14 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_14 != false) {
                goto branch_yes_10;
            } else {
                goto branch_no_10;
            }
        }
        branch_yes_10:;
        {
            PyObject *tmp_raise_type_4;
            PyObject *tmp_raise_value_4;
            PyObject *tmp_mod_expr_left_4;
            PyObject *tmp_mod_expr_right_4;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_getattr_target_4;
            PyObject *tmp_getattr_attr_4;
            PyObject *tmp_getattr_default_4;
            tmp_raise_type_4 = PyExc_TypeError;
            tmp_mod_expr_left_4 = mod_consts[86];
            CHECK_OBJECT(tmp_JSON$class_creation_1__metaclass);
            tmp_getattr_target_4 = tmp_JSON$class_creation_1__metaclass;
            tmp_getattr_attr_4 = mod_consts[87];
            tmp_getattr_default_4 = mod_consts[88];
            tmp_tuple_element_14 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;
                type_description_2 = "c";
                goto try_except_handler_10;
            }
            tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_38;
                PyObject *tmp_type_arg_8;
                PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_14);
                CHECK_OBJECT(tmp_JSON$class_creation_1__prepared);
                tmp_type_arg_8 = tmp_JSON$class_creation_1__prepared;
                tmp_expression_value_38 = BUILTIN_TYPE1(tmp_type_arg_8);
                assert(!(tmp_expression_value_38 == NULL));
                tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[87]);
                Py_DECREF(tmp_expression_value_38);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 252;
                    type_description_2 = "c";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_14);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_mod_expr_right_4);
            goto try_except_handler_10;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
            Py_DECREF(tmp_mod_expr_right_4);
            if (tmp_raise_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;
                type_description_2 = "c";
                goto try_except_handler_10;
            }
            exception_type = tmp_raise_type_4;
            Py_INCREF(tmp_raise_type_4);
            exception_value = tmp_raise_value_4;
            exception_lineno = 252;
            RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
            type_description_2 = "c";
            goto try_except_handler_10;
        }
        branch_no_10:;
        goto branch_end_9;
        branch_no_9:;
        {
            PyObject *tmp_assign_source_49;
            tmp_assign_source_49 = MAKE_DICT_EMPTY();
            assert(tmp_JSON$class_creation_1__prepared == NULL);
            tmp_JSON$class_creation_1__prepared = tmp_assign_source_49;
        }
        branch_end_9:;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_JSON$class_creation_1__prepared);
            tmp_set_locals_4 = tmp_JSON$class_creation_1__prepared;
            locals_sqlalchemy$dialects$postgresql$json$$$class__4_Comparator_252 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[89];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__4_Comparator_252, mod_consts[90], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_2 = "c";
            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[106];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__4_Comparator_252, mod_consts[48], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_2 = "c";
            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[107];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__4_Comparator_252, mod_consts[91], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_2 = "c";
            goto try_except_handler_12;
        }
        frame_eb6e4522bf7a998707ecb5f7f7e80db9_5 = MAKE_CLASS_FRAME(codeobj_eb6e4522bf7a998707ecb5f7f7e80db9, module_sqlalchemy$dialects$postgresql$json, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_eb6e4522bf7a998707ecb5f7f7e80db9_5);
        assert(Py_REFCNT(frame_eb6e4522bf7a998707ecb5f7f7e80db9_5) == 2);

        // Framed code:
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_element_value_2;
            tmp_res = MAPPING_HAS_ITEM(locals_sqlalchemy$dialects$postgresql$json$$$class__4_Comparator_252, mod_consts[108]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;
                type_description_3 = "o";
                goto frame_exception_exit_5;
            }
            tmp_condition_result_15 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            tmp_called_value_17 = PyObject_GetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__4_Comparator_252, mod_consts[108]);

            if (unlikely(tmp_called_value_17 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[108]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 255;
                type_description_3 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_called_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;
                type_description_3 = "o";
                goto frame_exception_exit_5;
            }


            tmp_args_element_value_1 = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__5_astext();

            frame_eb6e4522bf7a998707ecb5f7f7e80db9_5->m_frame.f_lineno = 255;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;
                type_description_3 = "o";
                goto frame_exception_exit_5;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_called_value_18 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_2 = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__5_astext();

            frame_eb6e4522bf7a998707ecb5f7f7e80db9_5->m_frame.f_lineno = 255;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;
                type_description_3 = "o";
                goto frame_exception_exit_5;
            }
            condexpr_end_5:;
            tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__4_Comparator_252, mod_consts[109], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;
                type_description_3 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_eb6e4522bf7a998707ecb5f7f7e80db9_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_eb6e4522bf7a998707ecb5f7f7e80db9_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_eb6e4522bf7a998707ecb5f7f7e80db9_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_eb6e4522bf7a998707ecb5f7f7e80db9_5,
            type_description_3,
            outline_3_var___class__
        );



        assertFrameObject(frame_eb6e4522bf7a998707ecb5f7f7e80db9_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_4:;
        type_description_2 = "c";
        goto try_except_handler_12;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_JSON$class_creation_1__bases);
            tmp_cmp_expr_left_3 = tmp_JSON$class_creation_1__bases;
            CHECK_OBJECT(tmp_JSON$class_creation_1__bases_orig);
            tmp_cmp_expr_right_3 = tmp_JSON$class_creation_1__bases_orig;
            tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;
                type_description_2 = "c";
                goto try_except_handler_12;
            }
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto branch_yes_11;
            } else {
                goto branch_no_11;
            }
        }
        branch_yes_11:;
        CHECK_OBJECT(tmp_JSON$class_creation_1__bases_orig);
        tmp_dictset_value = tmp_JSON$class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__4_Comparator_252, mod_consts[97], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_2 = "c";
            goto try_except_handler_12;
        }
        branch_no_11:;
        {
            PyObject *tmp_assign_source_50;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_value_7;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_kwargs_value_7;
            CHECK_OBJECT(tmp_JSON$class_creation_1__metaclass);
            tmp_called_value_19 = tmp_JSON$class_creation_1__metaclass;
            tmp_tuple_element_15 = mod_consts[105];
            tmp_args_value_7 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_JSON$class_creation_1__bases);
            tmp_tuple_element_15 = tmp_JSON$class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_15);
            tmp_tuple_element_15 = locals_sqlalchemy$dialects$postgresql$json$$$class__4_Comparator_252;
            PyTuple_SET_ITEM0(tmp_args_value_7, 2, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_JSON$class_creation_1__class_decl_dict);
            tmp_kwargs_value_7 = tmp_JSON$class_creation_1__class_decl_dict;
            frame_a430e365fc70d9a789614d598b53c430_4->m_frame.f_lineno = 252;
            tmp_assign_source_50 = CALL_FUNCTION(tmp_called_value_19, tmp_args_value_7, tmp_kwargs_value_7);
            Py_DECREF(tmp_args_value_7);
            if (tmp_assign_source_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;
                type_description_2 = "c";
                goto try_except_handler_12;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_50;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_dictset_value = outline_3_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_sqlalchemy$dialects$postgresql$json$$$class__4_Comparator_252);
        locals_sqlalchemy$dialects$postgresql$json$$$class__4_Comparator_252 = NULL;
        goto try_return_handler_11;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_sqlalchemy$dialects$postgresql$json$$$class__4_Comparator_252);
        locals_sqlalchemy$dialects$postgresql$json$$$class__4_Comparator_252 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
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

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 252;
        goto try_except_handler_10;
        outline_result_4:;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__3_JSON_137, mod_consts[105], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_2 = "c";
            goto try_except_handler_10;
        }
        goto try_end_3;
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

        Py_XDECREF(tmp_JSON$class_creation_1__bases_orig);
        tmp_JSON$class_creation_1__bases_orig = NULL;
        Py_XDECREF(tmp_JSON$class_creation_1__bases);
        tmp_JSON$class_creation_1__bases = NULL;
        Py_XDECREF(tmp_JSON$class_creation_1__class_decl_dict);
        tmp_JSON$class_creation_1__class_decl_dict = NULL;
        Py_XDECREF(tmp_JSON$class_creation_1__metaclass);
        tmp_JSON$class_creation_1__metaclass = NULL;
        Py_XDECREF(tmp_JSON$class_creation_1__prepared);
        tmp_JSON$class_creation_1__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto frame_exception_exit_4;
        // End of try:
        try_end_3:;
        CHECK_OBJECT(tmp_JSON$class_creation_1__bases_orig);
        Py_DECREF(tmp_JSON$class_creation_1__bases_orig);
        tmp_JSON$class_creation_1__bases_orig = NULL;
        CHECK_OBJECT(tmp_JSON$class_creation_1__bases);
        Py_DECREF(tmp_JSON$class_creation_1__bases);
        tmp_JSON$class_creation_1__bases = NULL;
        CHECK_OBJECT(tmp_JSON$class_creation_1__class_decl_dict);
        Py_DECREF(tmp_JSON$class_creation_1__class_decl_dict);
        tmp_JSON$class_creation_1__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_JSON$class_creation_1__metaclass);
        Py_DECREF(tmp_JSON$class_creation_1__metaclass);
        tmp_JSON$class_creation_1__metaclass = NULL;
        CHECK_OBJECT(tmp_JSON$class_creation_1__prepared);
        Py_DECREF(tmp_JSON$class_creation_1__prepared);
        tmp_JSON$class_creation_1__prepared = NULL;
        tmp_dictset_value = PyObject_GetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__3_JSON_137, mod_consts[105]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[105]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 280;
            type_description_2 = "c";
            goto frame_exception_exit_4;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_2 = "c";
            goto frame_exception_exit_4;
        }
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__3_JSON_137, mod_consts[111], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_2 = "c";
            goto frame_exception_exit_4;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a430e365fc70d9a789614d598b53c430_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a430e365fc70d9a789614d598b53c430_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a430e365fc70d9a789614d598b53c430_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a430e365fc70d9a789614d598b53c430_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_a430e365fc70d9a789614d598b53c430_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_3:;

        goto try_except_handler_9;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_17 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_17 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto try_except_handler_9;
            }
            if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__3_JSON_137, mod_consts[97], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_9;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_51;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_20 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_16 = mod_consts[18];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_16 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_16);
            tmp_tuple_element_16 = locals_sqlalchemy$dialects$postgresql$json$$$class__3_JSON_137;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_3__class_decl_dict;
            frame_8e41cfa631a90e3a208d5a7452d49913->m_frame.f_lineno = 137;
            tmp_assign_source_51 = CALL_FUNCTION(tmp_called_value_20, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto try_except_handler_9;
            }
            assert(Nuitka_Cell_GET(outline_2_var___class__) == NULL);
            PyCell_SET(outline_2_var___class__, tmp_assign_source_51);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_2_var___class__));
        tmp_assign_source_43 = Nuitka_Cell_GET(outline_2_var___class__);
        Py_INCREF(tmp_assign_source_43);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_sqlalchemy$dialects$postgresql$json$$$class__3_JSON_137);
        locals_sqlalchemy$dialects$postgresql$json$$$class__3_JSON_137 = NULL;
        goto try_return_handler_8;
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

        Py_DECREF(locals_sqlalchemy$dialects$postgresql$json$$$class__3_JSON_137);
        locals_sqlalchemy$dialects$postgresql$json$$$class__3_JSON_137 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 137;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_43);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
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
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_tuple_element_17;
        tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_tuple_element_17 == NULL)) {
            tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_tuple_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto try_except_handler_13;
        }
        tmp_assign_source_52 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_52, 0, tmp_tuple_element_17);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_53 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_metaclass_value_5;
        nuitka_bool tmp_condition_result_18;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_bases_value_5;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto try_except_handler_13;
        }
        tmp_condition_result_18 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_39 = tmp_class_creation_4__bases;
        tmp_subscript_value_6 = mod_consts[57];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_39, tmp_subscript_value_6, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto try_except_handler_13;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto try_except_handler_13;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_5 = tmp_class_creation_4__bases;
        tmp_assign_source_55 = SELECT_METACLASS(tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_55;
    }
    {
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_expression_value_40;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_40 = tmp_class_creation_4__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_40, mod_consts[84]);
        tmp_condition_result_19 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_41 = tmp_class_creation_4__metaclass;
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[84]);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto try_except_handler_13;
        }
        tmp_tuple_element_18 = mod_consts[42];
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_18);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_18 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_18);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_4__class_decl_dict;
        frame_8e41cfa631a90e3a208d5a7452d49913->m_frame.f_lineno = 283;
        tmp_assign_source_56 = CALL_FUNCTION(tmp_called_value_21, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_56;
    }
    {
        bool tmp_condition_result_20;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_42;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_42 = tmp_class_creation_4__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_42, mod_consts[85]);
        tmp_operand_value_5 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto try_except_handler_13;
        }
        tmp_condition_result_20 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_20 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_getattr_target_5;
        PyObject *tmp_getattr_attr_5;
        PyObject *tmp_getattr_default_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[86];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_getattr_target_5 = tmp_class_creation_4__metaclass;
        tmp_getattr_attr_5 = mod_consts[87];
        tmp_getattr_default_5 = mod_consts[88];
        tmp_tuple_element_19 = BUILTIN_GETATTR(tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5);
        if (tmp_tuple_element_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto try_except_handler_13;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_43;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_10 = tmp_class_creation_4__prepared;
            tmp_expression_value_43 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_43 == NULL));
            tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[87]);
            Py_DECREF(tmp_expression_value_43);
            if (tmp_tuple_element_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_19);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto try_except_handler_13;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 283;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_13;
    }
    branch_no_14:;
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_57;
    }
    branch_end_13:;
    {
        PyObject *tmp_assign_source_58;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_5 = tmp_class_creation_4__prepared;
            locals_sqlalchemy$dialects$postgresql$json$$$class__5_JSONB_283 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[89];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__5_JSONB_283, mod_consts[90], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[112];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__5_JSONB_283, mod_consts[48], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[42];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__5_JSONB_283, mod_consts[91], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto try_except_handler_15;
        }
        frame_01d8762f21762dc4548d457e3c68ed69_6 = MAKE_CLASS_FRAME(codeobj_01d8762f21762dc4548d457e3c68ed69, module_sqlalchemy$dialects$postgresql$json, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_01d8762f21762dc4548d457e3c68ed69_6);
        assert(Py_REFCNT(frame_01d8762f21762dc4548d457e3c68ed69_6) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[42];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__5_JSONB_283, mod_consts[100], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_59;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_expression_value_44;
            tmp_expression_value_44 = PyObject_GetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__5_JSONB_283, mod_consts[18]);

            if (tmp_expression_value_44 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_44 == NULL)) {
                        tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
                    }

                    if (tmp_expression_value_44 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 336;
                        type_description_2 = "o";
                        goto try_except_handler_16;
                    }
                    Py_INCREF(tmp_expression_value_44);
                } else {
                    goto try_except_handler_16;
                }
            }

            tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[105]);
            Py_DECREF(tmp_expression_value_44);
            if (tmp_tuple_element_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            tmp_assign_source_59 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_59, 0, tmp_tuple_element_20);
            assert(tmp_JSONB$class_creation_1__bases_orig == NULL);
            tmp_JSONB$class_creation_1__bases_orig = tmp_assign_source_59;
        }
        {
            PyObject *tmp_assign_source_60;
            PyObject *tmp_dircall_arg1_6;
            CHECK_OBJECT(tmp_JSONB$class_creation_1__bases_orig);
            tmp_dircall_arg1_6 = tmp_JSONB$class_creation_1__bases_orig;
            Py_INCREF(tmp_dircall_arg1_6);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
                tmp_assign_source_60 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
            }
            if (tmp_assign_source_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            assert(tmp_JSONB$class_creation_1__bases == NULL);
            tmp_JSONB$class_creation_1__bases = tmp_assign_source_60;
        }
        {
            PyObject *tmp_assign_source_61;
            tmp_assign_source_61 = MAKE_DICT_EMPTY();
            assert(tmp_JSONB$class_creation_1__class_decl_dict == NULL);
            tmp_JSONB$class_creation_1__class_decl_dict = tmp_assign_source_61;
        }
        {
            PyObject *tmp_assign_source_62;
            PyObject *tmp_metaclass_value_6;
            nuitka_bool tmp_condition_result_21;
            int tmp_truth_name_6;
            PyObject *tmp_type_arg_11;
            PyObject *tmp_expression_value_45;
            PyObject *tmp_subscript_value_7;
            PyObject *tmp_bases_value_6;
            CHECK_OBJECT(tmp_JSONB$class_creation_1__bases);
            tmp_truth_name_6 = CHECK_IF_TRUE(tmp_JSONB$class_creation_1__bases);
            if (tmp_truth_name_6 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            tmp_condition_result_21 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_7;
            } else {
                goto condexpr_false_7;
            }
            condexpr_true_7:;
            CHECK_OBJECT(tmp_JSONB$class_creation_1__bases);
            tmp_expression_value_45 = tmp_JSONB$class_creation_1__bases;
            tmp_subscript_value_7 = mod_consts[57];
            tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_45, tmp_subscript_value_7, 0);
            if (tmp_type_arg_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
            Py_DECREF(tmp_type_arg_11);
            if (tmp_metaclass_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_6);
            condexpr_end_7:;
            CHECK_OBJECT(tmp_JSONB$class_creation_1__bases);
            tmp_bases_value_6 = tmp_JSONB$class_creation_1__bases;
            tmp_assign_source_62 = SELECT_METACLASS(tmp_metaclass_value_6, tmp_bases_value_6);
            Py_DECREF(tmp_metaclass_value_6);
            if (tmp_assign_source_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            assert(tmp_JSONB$class_creation_1__metaclass == NULL);
            tmp_JSONB$class_creation_1__metaclass = tmp_assign_source_62;
        }
        {
            nuitka_bool tmp_condition_result_22;
            PyObject *tmp_expression_value_46;
            CHECK_OBJECT(tmp_JSONB$class_creation_1__metaclass);
            tmp_expression_value_46 = tmp_JSONB$class_creation_1__metaclass;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_46, mod_consts[84]);
            tmp_condition_result_22 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
                goto branch_yes_15;
            } else {
                goto branch_no_15;
            }
        }
        branch_yes_15:;
        {
            PyObject *tmp_assign_source_63;
            PyObject *tmp_called_value_22;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_JSONB$class_creation_1__metaclass);
            tmp_expression_value_47 = tmp_JSONB$class_creation_1__metaclass;
            tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[84]);
            if (tmp_called_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            tmp_tuple_element_21 = mod_consts[105];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_JSONB$class_creation_1__bases);
            tmp_tuple_element_21 = tmp_JSONB$class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_JSONB$class_creation_1__class_decl_dict);
            tmp_kwargs_value_10 = tmp_JSONB$class_creation_1__class_decl_dict;
            frame_01d8762f21762dc4548d457e3c68ed69_6->m_frame.f_lineno = 336;
            tmp_assign_source_63 = CALL_FUNCTION(tmp_called_value_22, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            assert(tmp_JSONB$class_creation_1__prepared == NULL);
            tmp_JSONB$class_creation_1__prepared = tmp_assign_source_63;
        }
        {
            bool tmp_condition_result_23;
            PyObject *tmp_operand_value_6;
            PyObject *tmp_expression_value_48;
            CHECK_OBJECT(tmp_JSONB$class_creation_1__prepared);
            tmp_expression_value_48 = tmp_JSONB$class_creation_1__prepared;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_48, mod_consts[85]);
            tmp_operand_value_6 = (tmp_result) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            tmp_condition_result_23 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_23 != false) {
                goto branch_yes_16;
            } else {
                goto branch_no_16;
            }
        }
        branch_yes_16:;
        {
            PyObject *tmp_raise_type_6;
            PyObject *tmp_raise_value_6;
            PyObject *tmp_mod_expr_left_6;
            PyObject *tmp_mod_expr_right_6;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_getattr_target_6;
            PyObject *tmp_getattr_attr_6;
            PyObject *tmp_getattr_default_6;
            tmp_raise_type_6 = PyExc_TypeError;
            tmp_mod_expr_left_6 = mod_consts[86];
            CHECK_OBJECT(tmp_JSONB$class_creation_1__metaclass);
            tmp_getattr_target_6 = tmp_JSONB$class_creation_1__metaclass;
            tmp_getattr_attr_6 = mod_consts[87];
            tmp_getattr_default_6 = mod_consts[88];
            tmp_tuple_element_22 = BUILTIN_GETATTR(tmp_getattr_target_6, tmp_getattr_attr_6, tmp_getattr_default_6);
            if (tmp_tuple_element_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_49;
                PyObject *tmp_type_arg_12;
                PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_22);
                CHECK_OBJECT(tmp_JSONB$class_creation_1__prepared);
                tmp_type_arg_12 = tmp_JSONB$class_creation_1__prepared;
                tmp_expression_value_49 = BUILTIN_TYPE1(tmp_type_arg_12);
                assert(!(tmp_expression_value_49 == NULL));
                tmp_tuple_element_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[87]);
                Py_DECREF(tmp_expression_value_49);
                if (tmp_tuple_element_22 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 336;
                    type_description_2 = "o";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_22);
            }
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_mod_expr_right_6);
            goto try_except_handler_16;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
            Py_DECREF(tmp_mod_expr_right_6);
            if (tmp_raise_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            exception_type = tmp_raise_type_6;
            Py_INCREF(tmp_raise_type_6);
            exception_value = tmp_raise_value_6;
            exception_lineno = 336;
            RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_16;
        }
        branch_no_16:;
        goto branch_end_15;
        branch_no_15:;
        {
            PyObject *tmp_assign_source_64;
            tmp_assign_source_64 = MAKE_DICT_EMPTY();
            assert(tmp_JSONB$class_creation_1__prepared == NULL);
            tmp_JSONB$class_creation_1__prepared = tmp_assign_source_64;
        }
        branch_end_15:;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_JSONB$class_creation_1__prepared);
            tmp_set_locals_6 = tmp_JSONB$class_creation_1__prepared;
            locals_sqlalchemy$dialects$postgresql$json$$$class__6_Comparator_336 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[89];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__6_Comparator_336, mod_consts[90], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_2 = "o";
            goto try_except_handler_18;
        }
        tmp_dictset_value = mod_consts[106];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__6_Comparator_336, mod_consts[48], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_2 = "o";
            goto try_except_handler_18;
        }
        tmp_dictset_value = mod_consts[113];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__6_Comparator_336, mod_consts[91], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_2 = "o";
            goto try_except_handler_18;
        }
        frame_88b03c98cd79156dc2de421992aaa4ac_7 = MAKE_CLASS_FRAME(codeobj_88b03c98cd79156dc2de421992aaa4ac, module_sqlalchemy$dialects$postgresql$json, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_88b03c98cd79156dc2de421992aaa4ac_7);
        assert(Py_REFCNT(frame_88b03c98cd79156dc2de421992aaa4ac_7) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__6_has_key();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__6_Comparator_336, mod_consts[114], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_3 = "o";
            goto frame_exception_exit_7;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__7_has_all();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__6_Comparator_336, mod_consts[116], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_3 = "o";
            goto frame_exception_exit_7;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__8_has_any();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__6_Comparator_336, mod_consts[118], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_3 = "o";
            goto frame_exception_exit_7;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__9_contains();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__6_Comparator_336, mod_consts[120], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_3 = "o";
            goto frame_exception_exit_7;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__10_contained_by();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__6_Comparator_336, mod_consts[122], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_3 = "o";
            goto frame_exception_exit_7;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__11_delete_path();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__6_Comparator_336, mod_consts[124], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_3 = "o";
            goto frame_exception_exit_7;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__12_path_exists();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__6_Comparator_336, mod_consts[126], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_3 = "o";
            goto frame_exception_exit_7;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$json$$$function__13_path_match();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__6_Comparator_336, mod_consts[128], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_3 = "o";
            goto frame_exception_exit_7;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_88b03c98cd79156dc2de421992aaa4ac_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_88b03c98cd79156dc2de421992aaa4ac_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_88b03c98cd79156dc2de421992aaa4ac_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_88b03c98cd79156dc2de421992aaa4ac_7,
            type_description_3,
            outline_5_var___class__
        );



        assertFrameObject(frame_88b03c98cd79156dc2de421992aaa4ac_7);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_6:;
        type_description_2 = "o";
        goto try_except_handler_18;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_JSONB$class_creation_1__bases);
            tmp_cmp_expr_left_5 = tmp_JSONB$class_creation_1__bases;
            CHECK_OBJECT(tmp_JSONB$class_creation_1__bases_orig);
            tmp_cmp_expr_right_5 = tmp_JSONB$class_creation_1__bases_orig;
            tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;
                type_description_2 = "o";
                goto try_except_handler_18;
            }
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto branch_yes_17;
            } else {
                goto branch_no_17;
            }
        }
        branch_yes_17:;
        CHECK_OBJECT(tmp_JSONB$class_creation_1__bases_orig);
        tmp_dictset_value = tmp_JSONB$class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__6_Comparator_336, mod_consts[97], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_2 = "o";
            goto try_except_handler_18;
        }
        branch_no_17:;
        {
            PyObject *tmp_assign_source_65;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_value_11;
            PyObject *tmp_tuple_element_23;
            PyObject *tmp_kwargs_value_11;
            CHECK_OBJECT(tmp_JSONB$class_creation_1__metaclass);
            tmp_called_value_23 = tmp_JSONB$class_creation_1__metaclass;
            tmp_tuple_element_23 = mod_consts[105];
            tmp_args_value_11 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_JSONB$class_creation_1__bases);
            tmp_tuple_element_23 = tmp_JSONB$class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_23);
            tmp_tuple_element_23 = locals_sqlalchemy$dialects$postgresql$json$$$class__6_Comparator_336;
            PyTuple_SET_ITEM0(tmp_args_value_11, 2, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_JSONB$class_creation_1__class_decl_dict);
            tmp_kwargs_value_11 = tmp_JSONB$class_creation_1__class_decl_dict;
            frame_01d8762f21762dc4548d457e3c68ed69_6->m_frame.f_lineno = 336;
            tmp_assign_source_65 = CALL_FUNCTION(tmp_called_value_23, tmp_args_value_11, tmp_kwargs_value_11);
            Py_DECREF(tmp_args_value_11);
            if (tmp_assign_source_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;
                type_description_2 = "o";
                goto try_except_handler_18;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_65;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_dictset_value = outline_5_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_18;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        Py_DECREF(locals_sqlalchemy$dialects$postgresql$json$$$class__6_Comparator_336);
        locals_sqlalchemy$dialects$postgresql$json$$$class__6_Comparator_336 = NULL;
        goto try_return_handler_17;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_sqlalchemy$dialects$postgresql$json$$$class__6_Comparator_336);
        locals_sqlalchemy$dialects$postgresql$json$$$class__6_Comparator_336 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 336;
        goto try_except_handler_16;
        outline_result_6:;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__5_JSONB_283, mod_consts[105], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_2 = "o";
            goto try_except_handler_16;
        }
        goto try_end_5;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_JSONB$class_creation_1__bases_orig);
        tmp_JSONB$class_creation_1__bases_orig = NULL;
        Py_XDECREF(tmp_JSONB$class_creation_1__bases);
        tmp_JSONB$class_creation_1__bases = NULL;
        Py_XDECREF(tmp_JSONB$class_creation_1__class_decl_dict);
        tmp_JSONB$class_creation_1__class_decl_dict = NULL;
        Py_XDECREF(tmp_JSONB$class_creation_1__metaclass);
        tmp_JSONB$class_creation_1__metaclass = NULL;
        Py_XDECREF(tmp_JSONB$class_creation_1__prepared);
        tmp_JSONB$class_creation_1__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto frame_exception_exit_6;
        // End of try:
        try_end_5:;
        CHECK_OBJECT(tmp_JSONB$class_creation_1__bases_orig);
        Py_DECREF(tmp_JSONB$class_creation_1__bases_orig);
        tmp_JSONB$class_creation_1__bases_orig = NULL;
        CHECK_OBJECT(tmp_JSONB$class_creation_1__bases);
        Py_DECREF(tmp_JSONB$class_creation_1__bases);
        tmp_JSONB$class_creation_1__bases = NULL;
        CHECK_OBJECT(tmp_JSONB$class_creation_1__class_decl_dict);
        Py_DECREF(tmp_JSONB$class_creation_1__class_decl_dict);
        tmp_JSONB$class_creation_1__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_JSONB$class_creation_1__metaclass);
        Py_DECREF(tmp_JSONB$class_creation_1__metaclass);
        tmp_JSONB$class_creation_1__metaclass = NULL;
        CHECK_OBJECT(tmp_JSONB$class_creation_1__prepared);
        Py_DECREF(tmp_JSONB$class_creation_1__prepared);
        tmp_JSONB$class_creation_1__prepared = NULL;
        tmp_dictset_value = PyObject_GetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__5_JSONB_283, mod_consts[105]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[105]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 406;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__5_JSONB_283, mod_consts[111], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_01d8762f21762dc4548d457e3c68ed69_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_01d8762f21762dc4548d457e3c68ed69_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_01d8762f21762dc4548d457e3c68ed69_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_01d8762f21762dc4548d457e3c68ed69_6,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_01d8762f21762dc4548d457e3c68ed69_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_5:;

        goto try_except_handler_15;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_25;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_6 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_6 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_25 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_25 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;

                goto try_except_handler_15;
            }
            if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
                goto branch_yes_18;
            } else {
                goto branch_no_18;
            }
        }
        branch_yes_18:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$json$$$class__5_JSONB_283, mod_consts[97], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto try_except_handler_15;
        }
        branch_no_18:;
        {
            PyObject *tmp_assign_source_66;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_kwargs_value_12;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_24 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_24 = mod_consts[42];
            tmp_args_value_12 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_24 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_24);
            tmp_tuple_element_24 = locals_sqlalchemy$dialects$postgresql$json$$$class__5_JSONB_283;
            PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_12 = tmp_class_creation_4__class_decl_dict;
            frame_8e41cfa631a90e3a208d5a7452d49913->m_frame.f_lineno = 283;
            tmp_assign_source_66 = CALL_FUNCTION(tmp_called_value_24, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;

                goto try_except_handler_15;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_66;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_58 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_58);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_sqlalchemy$dialects$postgresql$json$$$class__5_JSONB_283);
        locals_sqlalchemy$dialects$postgresql$json$$$class__5_JSONB_283 = NULL;
        goto try_return_handler_14;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_sqlalchemy$dialects$postgresql$json$$$class__5_JSONB_283);
        locals_sqlalchemy$dialects$postgresql$json$$$class__5_JSONB_283 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto try_except_handler_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 283;
        goto try_except_handler_13;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_58);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_7;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8e41cfa631a90e3a208d5a7452d49913, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8e41cfa631a90e3a208d5a7452d49913->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8e41cfa631a90e3a208d5a7452d49913, exception_lineno);
    }



    assertFrameObject(frame_8e41cfa631a90e3a208d5a7452d49913);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_7:;
    CHECK_OBJECT(tmp_class_creation_4__bases_orig);
    Py_DECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_4__bases);
    Py_DECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__metaclass);
    Py_DECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("sqlalchemy.dialects.postgresql.json", false);

    Py_INCREF(module_sqlalchemy$dialects$postgresql$json);
    return module_sqlalchemy$dialects$postgresql$json;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$json, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("sqlalchemy$dialects$postgresql$json", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
