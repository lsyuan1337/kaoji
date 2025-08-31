/* Generated code for Python module 'torch.distributions.constraint_registry'
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

/* The "module_torch$distributions$constraint_registry" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torch$distributions$constraint_registry;
PyDictObject *moduledict_torch$distributions$constraint_registry;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[110];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[110];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torch.distributions.constraint_registry"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 110; i++) {
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
void checkModuleConstants_torch$distributions$constraint_registry(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 110; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_04afb8092128556ab8ea04ab5f6ef4c5;
static PyCodeObject *codeobj_46fcd6cad71564106c18ad502922b0da;
static PyCodeObject *codeobj_09faaca5dc5947230ff92567378a2587;
static PyCodeObject *codeobj_e23b272ea8511b526f713b80fcdc0664;
static PyCodeObject *codeobj_b415ac519306f8b9c02f53d1bff08268;
static PyCodeObject *codeobj_73aa7dd26466d4af11fc1b6922385d54;
static PyCodeObject *codeobj_c20f02d2a82176128b420b8a7bdbf7c0;
static PyCodeObject *codeobj_d9b384de5739076df061d714fc11cb8c;
static PyCodeObject *codeobj_81c6461786d89253b06892749fa76a0e;
static PyCodeObject *codeobj_f05179953264599e8577c26c8b111fb3;
static PyCodeObject *codeobj_ceee2147fbe4ec3462545549927c578c;
static PyCodeObject *codeobj_6cd44cf7c98ac1108977dcfcca250742;
static PyCodeObject *codeobj_c202d9de88c91d013a141417f4311a84;
static PyCodeObject *codeobj_f54552b0e5fa1eb274e9ac56b92f5943;
static PyCodeObject *codeobj_a5550781696602d4a385f199f4c42c4c;
static PyCodeObject *codeobj_e575fda2e616d3ddfbb68e522c83ad6a;
static PyCodeObject *codeobj_12ee9a53e61746737e89d0b3d07a558a;
static PyCodeObject *codeobj_009fb36ce44e7c690675e75f12c1b69d;
static PyCodeObject *codeobj_d7347598f99d61a3da220da8d5e5f11d;
static PyCodeObject *codeobj_ad86c8468226846fcd94b8eedc606a15;
static PyCodeObject *codeobj_2479d9ff06b423184ae145338df275ef;
static PyCodeObject *codeobj_86dd50c39972bcaa028941a715fecf4b;
static PyCodeObject *codeobj_e9109e708bc9a1ae847b6e689b8e4f11;
static PyCodeObject *codeobj_72e868920090f1968265627ddf81b365;
static PyCodeObject *codeobj_c02e9dec2d0f93eb5095a41e98e90781;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[98]); CHECK_OBJECT(module_filename_obj);
    codeobj_04afb8092128556ab8ea04ab5f6ef4c5 = MAKE_CODE_OBJECT(module_filename_obj, 106, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[3], mod_consts[3], mod_consts[99], mod_consts[100], 1, 0, 0);
    codeobj_46fcd6cad71564106c18ad502922b0da = MAKE_CODE_OBJECT(module_filename_obj, 240, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[101], mod_consts[101], mod_consts[102], NULL, 1, 0, 0);
    codeobj_09faaca5dc5947230ff92567378a2587 = MAKE_CODE_OBJECT(module_filename_obj, 248, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[101], mod_consts[101], mod_consts[102], NULL, 1, 0, 0);
    codeobj_e23b272ea8511b526f713b80fcdc0664 = MAKE_CODE_OBJECT(module_filename_obj, 257, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[101], mod_consts[101], mod_consts[102], NULL, 1, 0, 0);
    codeobj_b415ac519306f8b9c02f53d1bff08268 = MAKE_CODE_OBJECT(module_filename_obj, 264, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[101], mod_consts[101], mod_consts[102], NULL, 1, 0, 0);
    codeobj_73aa7dd26466d4af11fc1b6922385d54 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[103], mod_consts[103], NULL, NULL, 0, 0, 0);
    codeobj_c20f02d2a82176128b420b8a7bdbf7c0 = MAKE_CODE_OBJECT(module_filename_obj, 79, CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[104], NULL, 0, 0, 0);
    codeobj_d9b384de5739076df061d714fc11cb8c = MAKE_CODE_OBJECT(module_filename_obj, 119, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[66], mod_consts[66], mod_consts[105], NULL, 2, 0, 0);
    codeobj_81c6461786d89253b06892749fa76a0e = MAKE_CODE_OBJECT(module_filename_obj, 83, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[2], mod_consts[2], mod_consts[106], NULL, 1, 0, 0);
    codeobj_f05179953264599e8577c26c8b111fb3 = MAKE_CODE_OBJECT(module_filename_obj, 238, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[93], mod_consts[93], mod_consts[107], NULL, 1, 0, 0);
    codeobj_ceee2147fbe4ec3462545549927c578c = MAKE_CODE_OBJECT(module_filename_obj, 161, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[72], mod_consts[72], mod_consts[108], NULL, 1, 0, 0);
    codeobj_6cd44cf7c98ac1108977dcfcca250742 = MAKE_CODE_OBJECT(module_filename_obj, 216, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[86], mod_consts[86], mod_consts[107], NULL, 1, 0, 0);
    codeobj_c202d9de88c91d013a141417f4311a84 = MAKE_CODE_OBJECT(module_filename_obj, 254, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[96], mod_consts[96], mod_consts[107], NULL, 1, 0, 0);
    codeobj_f54552b0e5fa1eb274e9ac56b92f5943 = MAKE_CODE_OBJECT(module_filename_obj, 246, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[94], mod_consts[94], mod_consts[107], NULL, 1, 0, 0);
    codeobj_a5550781696602d4a385f199f4c42c4c = MAKE_CODE_OBJECT(module_filename_obj, 232, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[91], mod_consts[91], mod_consts[107], NULL, 1, 0, 0);
    codeobj_e575fda2e616d3ddfbb68e522c83ad6a = MAKE_CODE_OBJECT(module_filename_obj, 183, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[79], mod_consts[79], mod_consts[107], NULL, 1, 0, 0);
    codeobj_12ee9a53e61746737e89d0b3d07a558a = MAKE_CODE_OBJECT(module_filename_obj, 168, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[73], mod_consts[73], mod_consts[108], NULL, 1, 0, 0);
    codeobj_009fb36ce44e7c690675e75f12c1b69d = MAKE_CODE_OBJECT(module_filename_obj, 199, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[84], mod_consts[84], mod_consts[109], NULL, 1, 0, 0);
    codeobj_d7347598f99d61a3da220da8d5e5f11d = MAKE_CODE_OBJECT(module_filename_obj, 192, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[81], mod_consts[81], mod_consts[107], NULL, 1, 0, 0);
    codeobj_ad86c8468226846fcd94b8eedc606a15 = MAKE_CODE_OBJECT(module_filename_obj, 227, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[89], mod_consts[89], mod_consts[107], NULL, 1, 0, 0);
    codeobj_2479d9ff06b423184ae145338df275ef = MAKE_CODE_OBJECT(module_filename_obj, 175, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[76], mod_consts[107], NULL, 1, 0, 0);
    codeobj_86dd50c39972bcaa028941a715fecf4b = MAKE_CODE_OBJECT(module_filename_obj, 155, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[70], mod_consts[70], mod_consts[107], NULL, 1, 0, 0);
    codeobj_e9109e708bc9a1ae847b6e689b8e4f11 = MAKE_CODE_OBJECT(module_filename_obj, 221, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[87], mod_consts[87], mod_consts[107], NULL, 1, 0, 0);
    codeobj_72e868920090f1968265627ddf81b365 = MAKE_CODE_OBJECT(module_filename_obj, 261, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[97], mod_consts[97], mod_consts[107], NULL, 1, 0, 0);
    codeobj_c02e9dec2d0f93eb5095a41e98e90781 = MAKE_CODE_OBJECT(module_filename_obj, 87, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[11], mod_consts[11], mod_consts[105], NULL, 3, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__10__transform_to_interval();


static PyObject *MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__11__biject_to_simplex();


static PyObject *MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__12__transform_to_simplex();


static PyObject *MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__13__transform_to_lower_cholesky();


static PyObject *MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__14__transform_to_corr_cholesky();


static PyObject *MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__15__biject_to_cat();


static PyObject *MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__16__transform_to_cat();


static PyObject *MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__17__biject_to_stack();


static PyObject *MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__18__transform_to_stack();


static PyObject *MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__1___init__();


static PyObject *MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__2_register(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__2_register$$$function__1_lambda(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__3___call__();


static PyObject *MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__4__transform_to_real();


static PyObject *MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__5__biject_to_independent();


static PyObject *MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__6__transform_to_independent();


static PyObject *MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__7__transform_to_positive();


static PyObject *MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__8__transform_to_greater_than();


static PyObject *MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__9__transform_to_less_than();


// The module function definitions.
static PyObject *impl_torch$distributions$constraint_registry$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_81c6461786d89253b06892749fa76a0e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_81c6461786d89253b06892749fa76a0e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_81c6461786d89253b06892749fa76a0e)) {
        Py_XDECREF(cache_frame_81c6461786d89253b06892749fa76a0e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_81c6461786d89253b06892749fa76a0e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_81c6461786d89253b06892749fa76a0e = MAKE_FUNCTION_FRAME(codeobj_81c6461786d89253b06892749fa76a0e, module_torch$distributions$constraint_registry, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_81c6461786d89253b06892749fa76a0e->m_type_description == NULL);
    frame_81c6461786d89253b06892749fa76a0e = cache_frame_81c6461786d89253b06892749fa76a0e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_81c6461786d89253b06892749fa76a0e);
    assert(Py_REFCNT(frame_81c6461786d89253b06892749fa76a0e) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = MAKE_DICT_EMPTY();
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER2(moduledict_torch$distributions$constraint_registry, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        frame_81c6461786d89253b06892749fa76a0e->m_frame.f_lineno = 85;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[2]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_81c6461786d89253b06892749fa76a0e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_81c6461786d89253b06892749fa76a0e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_81c6461786d89253b06892749fa76a0e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_81c6461786d89253b06892749fa76a0e,
        type_description_1,
        par_self,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_81c6461786d89253b06892749fa76a0e == cache_frame_81c6461786d89253b06892749fa76a0e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_81c6461786d89253b06892749fa76a0e);
        cache_frame_81c6461786d89253b06892749fa76a0e = NULL;
    }

    assertFrameObject(frame_81c6461786d89253b06892749fa76a0e);

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


static PyObject *impl_torch$distributions$constraint_registry$$$function__2_register(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_constraint = Nuitka_Cell_New1(python_pars[1]);
    PyObject *par_factory = python_pars[2];
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_c02e9dec2d0f93eb5095a41e98e90781;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_c02e9dec2d0f93eb5095a41e98e90781 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_factory);
        tmp_cmp_expr_left_1 = par_factory;
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
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_constraint;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_self;
        Py_INCREF(tmp_closure_1[1]);

        tmp_return_value = MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__2_register$$$function__1_lambda(tmp_closure_1);

        goto try_return_handler_1;
    }
    branch_no_1:;
    if (isFrameUnusable(cache_frame_c02e9dec2d0f93eb5095a41e98e90781)) {
        Py_XDECREF(cache_frame_c02e9dec2d0f93eb5095a41e98e90781);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c02e9dec2d0f93eb5095a41e98e90781 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c02e9dec2d0f93eb5095a41e98e90781 = MAKE_FUNCTION_FRAME(codeobj_c02e9dec2d0f93eb5095a41e98e90781, module_torch$distributions$constraint_registry, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c02e9dec2d0f93eb5095a41e98e90781->m_type_description == NULL);
    frame_c02e9dec2d0f93eb5095a41e98e90781 = cache_frame_c02e9dec2d0f93eb5095a41e98e90781;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c02e9dec2d0f93eb5095a41e98e90781);
    assert(Py_REFCNT(frame_c02e9dec2d0f93eb5095a41e98e90781) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_constraint));
        tmp_isinstance_inst_1 = Nuitka_Cell_GET(par_constraint);
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "cco";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "cco";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "cco";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_constraint));
        tmp_type_arg_1 = Nuitka_Cell_GET(par_constraint);
        tmp_assign_source_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_assign_source_1 == NULL));
        {
            PyObject *old = Nuitka_Cell_GET(par_constraint);
            PyCell_SET(par_constraint, tmp_assign_source_1);
            Py_XDECREF(old);
        }

    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        int tmp_or_left_truth_1;
        bool tmp_or_left_value_1;
        bool tmp_or_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_issubclass_cls_1;
        PyObject *tmp_issubclass_classes_1;
        PyObject *tmp_expression_value_2;
        if (Nuitka_Cell_GET(par_constraint) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 112;
            type_description_1 = "cco";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_inst_2 = Nuitka_Cell_GET(par_constraint);
        tmp_isinstance_cls_2 = (PyObject *)&PyType_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "cco";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "cco";
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
        if (Nuitka_Cell_GET(par_constraint) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 112;
            type_description_1 = "cco";
            goto frame_exception_exit_1;
        }

        tmp_issubclass_cls_1 = Nuitka_Cell_GET(par_constraint);
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "cco";
            goto frame_exception_exit_1;
        }
        tmp_issubclass_classes_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[6]);
        if (tmp_issubclass_classes_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "cco";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_1, tmp_issubclass_classes_1);
        Py_DECREF(tmp_issubclass_classes_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "cco";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "cco";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = (tmp_res == 0) ? true : false;
        tmp_condition_result_3 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_3 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[8];
        if (Nuitka_Cell_GET(par_constraint) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 114;
            type_description_1 = "cco";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_1_1 = Nuitka_Cell_GET(par_constraint);
        frame_c02e9dec2d0f93eb5095a41e98e90781->m_frame.f_lineno = 113;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "cco";
            goto frame_exception_exit_1;
        }
        frame_c02e9dec2d0f93eb5095a41e98e90781->m_frame.f_lineno = 113;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 113;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "cco";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_factory);
        tmp_ass_subvalue_1 = par_factory;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_3 = Nuitka_Cell_GET(par_self);
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[0]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "cco";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(par_constraint) == NULL) {
            Py_DECREF(tmp_ass_subscribed_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 116;
            type_description_1 = "cco";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_1 = Nuitka_Cell_GET(par_constraint);
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "cco";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c02e9dec2d0f93eb5095a41e98e90781, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c02e9dec2d0f93eb5095a41e98e90781->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c02e9dec2d0f93eb5095a41e98e90781, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c02e9dec2d0f93eb5095a41e98e90781,
        type_description_1,
        par_self,
        par_constraint,
        par_factory
    );


    // Release cached frame if used for exception.
    if (frame_c02e9dec2d0f93eb5095a41e98e90781 == cache_frame_c02e9dec2d0f93eb5095a41e98e90781) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c02e9dec2d0f93eb5095a41e98e90781);
        cache_frame_c02e9dec2d0f93eb5095a41e98e90781 = NULL;
    }

    assertFrameObject(frame_c02e9dec2d0f93eb5095a41e98e90781);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(par_factory);
    tmp_return_value = par_factory;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_constraint);
    Py_DECREF(par_constraint);
    par_constraint = NULL;
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

    CHECK_OBJECT(par_constraint);
    Py_DECREF(par_constraint);
    par_constraint = NULL;
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
    CHECK_OBJECT(par_factory);
    Py_DECREF(par_factory);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_factory);
    Py_DECREF(par_factory);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributions$constraint_registry$$$function__2_register$$$function__1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_factory = python_pars[0];
    struct Nuitka_FrameObject *frame_04afb8092128556ab8ea04ab5f6ef4c5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_04afb8092128556ab8ea04ab5f6ef4c5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_04afb8092128556ab8ea04ab5f6ef4c5)) {
        Py_XDECREF(cache_frame_04afb8092128556ab8ea04ab5f6ef4c5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_04afb8092128556ab8ea04ab5f6ef4c5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_04afb8092128556ab8ea04ab5f6ef4c5 = MAKE_FUNCTION_FRAME(codeobj_04afb8092128556ab8ea04ab5f6ef4c5, module_torch$distributions$constraint_registry, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_04afb8092128556ab8ea04ab5f6ef4c5->m_type_description == NULL);
    frame_04afb8092128556ab8ea04ab5f6ef4c5 = cache_frame_04afb8092128556ab8ea04ab5f6ef4c5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_04afb8092128556ab8ea04ab5f6ef4c5);
    assert(Py_REFCNT(frame_04afb8092128556ab8ea04ab5f6ef4c5) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 106;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 106;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_factory);
        tmp_args_element_value_2 = par_factory;
        frame_04afb8092128556ab8ea04ab5f6ef4c5->m_frame.f_lineno = 106;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
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
        exception_tb = MAKE_TRACEBACK(frame_04afb8092128556ab8ea04ab5f6ef4c5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_04afb8092128556ab8ea04ab5f6ef4c5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_04afb8092128556ab8ea04ab5f6ef4c5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_04afb8092128556ab8ea04ab5f6ef4c5,
        type_description_1,
        par_factory,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_04afb8092128556ab8ea04ab5f6ef4c5 == cache_frame_04afb8092128556ab8ea04ab5f6ef4c5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_04afb8092128556ab8ea04ab5f6ef4c5);
        cache_frame_04afb8092128556ab8ea04ab5f6ef4c5 = NULL;
    }

    assertFrameObject(frame_04afb8092128556ab8ea04ab5f6ef4c5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_factory);
    Py_DECREF(par_factory);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_factory);
    Py_DECREF(par_factory);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributions$constraint_registry$$$function__3___call__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_constraint = python_pars[1];
    PyObject *var_factory = NULL;
    struct Nuitka_FrameObject *frame_d9b384de5739076df061d714fc11cb8c;
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
    static struct Nuitka_FrameObject *cache_frame_d9b384de5739076df061d714fc11cb8c = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d9b384de5739076df061d714fc11cb8c)) {
        Py_XDECREF(cache_frame_d9b384de5739076df061d714fc11cb8c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d9b384de5739076df061d714fc11cb8c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d9b384de5739076df061d714fc11cb8c = MAKE_FUNCTION_FRAME(codeobj_d9b384de5739076df061d714fc11cb8c, module_torch$distributions$constraint_registry, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d9b384de5739076df061d714fc11cb8c->m_type_description == NULL);
    frame_d9b384de5739076df061d714fc11cb8c = cache_frame_d9b384de5739076df061d714fc11cb8c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d9b384de5739076df061d714fc11cb8c);
    assert(Py_REFCNT(frame_d9b384de5739076df061d714fc11cb8c) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_constraint);
        tmp_type_arg_1 = par_constraint;
        tmp_subscript_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_subscript_value_1 == NULL));
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(var_factory == NULL);
        var_factory = tmp_assign_source_1;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_d9b384de5739076df061d714fc11cb8c, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_d9b384de5739076df061d714fc11cb8c, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_KeyError;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_raise_cause_1;
        tmp_tuple_element_1 = mod_consts[12];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_type_arg_2;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_constraint);
            tmp_type_arg_2 = par_constraint;
            tmp_expression_value_3 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_3 == NULL));
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[13]);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[14];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[15];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        frame_d9b384de5739076df061d714fc11cb8c->m_frame.f_lineno = 142;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        tmp_raise_cause_1 = Py_None;
        exception_type = tmp_raise_type_1;
        exception_value = NULL;
        Py_INCREF(tmp_raise_cause_1);
        exception_lineno = 143;
        RAISE_EXCEPTION_WITH_CAUSE(&exception_type, &exception_value, &exception_tb, tmp_raise_cause_1);
        type_description_1 = "ooo";
        goto try_except_handler_3;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 139;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_d9b384de5739076df061d714fc11cb8c->m_frame) frame_d9b384de5739076df061d714fc11cb8c->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_3;
    branch_end_1:;
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
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_factory);
        tmp_called_value_1 = var_factory;
        CHECK_OBJECT(par_constraint);
        tmp_args_element_value_1 = par_constraint;
        frame_d9b384de5739076df061d714fc11cb8c->m_frame.f_lineno = 144;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
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
        exception_tb = MAKE_TRACEBACK(frame_d9b384de5739076df061d714fc11cb8c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d9b384de5739076df061d714fc11cb8c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d9b384de5739076df061d714fc11cb8c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d9b384de5739076df061d714fc11cb8c,
        type_description_1,
        par_self,
        par_constraint,
        var_factory
    );


    // Release cached frame if used for exception.
    if (frame_d9b384de5739076df061d714fc11cb8c == cache_frame_d9b384de5739076df061d714fc11cb8c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d9b384de5739076df061d714fc11cb8c);
        cache_frame_d9b384de5739076df061d714fc11cb8c = NULL;
    }

    assertFrameObject(frame_d9b384de5739076df061d714fc11cb8c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_factory);
    Py_DECREF(var_factory);
    var_factory = NULL;
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

    Py_XDECREF(var_factory);
    var_factory = NULL;
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
    CHECK_OBJECT(par_constraint);
    Py_DECREF(par_constraint);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_constraint);
    Py_DECREF(par_constraint);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributions$constraint_registry$$$function__4__transform_to_real(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_constraint = python_pars[0];
    struct Nuitka_FrameObject *frame_86dd50c39972bcaa028941a715fecf4b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_86dd50c39972bcaa028941a715fecf4b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_86dd50c39972bcaa028941a715fecf4b)) {
        Py_XDECREF(cache_frame_86dd50c39972bcaa028941a715fecf4b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_86dd50c39972bcaa028941a715fecf4b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_86dd50c39972bcaa028941a715fecf4b = MAKE_FUNCTION_FRAME(codeobj_86dd50c39972bcaa028941a715fecf4b, module_torch$distributions$constraint_registry, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_86dd50c39972bcaa028941a715fecf4b->m_type_description == NULL);
    frame_86dd50c39972bcaa028941a715fecf4b = cache_frame_86dd50c39972bcaa028941a715fecf4b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_86dd50c39972bcaa028941a715fecf4b);
    assert(Py_REFCNT(frame_86dd50c39972bcaa028941a715fecf4b) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
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
        exception_tb = MAKE_TRACEBACK(frame_86dd50c39972bcaa028941a715fecf4b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_86dd50c39972bcaa028941a715fecf4b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_86dd50c39972bcaa028941a715fecf4b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_86dd50c39972bcaa028941a715fecf4b,
        type_description_1,
        par_constraint
    );


    // Release cached frame if used for exception.
    if (frame_86dd50c39972bcaa028941a715fecf4b == cache_frame_86dd50c39972bcaa028941a715fecf4b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_86dd50c39972bcaa028941a715fecf4b);
        cache_frame_86dd50c39972bcaa028941a715fecf4b = NULL;
    }

    assertFrameObject(frame_86dd50c39972bcaa028941a715fecf4b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_constraint);
    Py_DECREF(par_constraint);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_constraint);
    Py_DECREF(par_constraint);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributions$constraint_registry$$$function__5__biject_to_independent(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_constraint = python_pars[0];
    PyObject *var_base_transform = NULL;
    struct Nuitka_FrameObject *frame_ceee2147fbe4ec3462545549927c578c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ceee2147fbe4ec3462545549927c578c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ceee2147fbe4ec3462545549927c578c)) {
        Py_XDECREF(cache_frame_ceee2147fbe4ec3462545549927c578c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ceee2147fbe4ec3462545549927c578c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ceee2147fbe4ec3462545549927c578c = MAKE_FUNCTION_FRAME(codeobj_ceee2147fbe4ec3462545549927c578c, module_torch$distributions$constraint_registry, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ceee2147fbe4ec3462545549927c578c->m_type_description == NULL);
    frame_ceee2147fbe4ec3462545549927c578c = cache_frame_ceee2147fbe4ec3462545549927c578c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ceee2147fbe4ec3462545549927c578c);
    assert(Py_REFCNT(frame_ceee2147fbe4ec3462545549927c578c) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_constraint);
        tmp_expression_value_1 = par_constraint;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[20]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_ceee2147fbe4ec3462545549927c578c->m_frame.f_lineno = 163;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_base_transform == NULL);
        var_base_transform = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[21]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_base_transform);
        tmp_args_element_value_2 = var_base_transform;
        CHECK_OBJECT(par_constraint);
        tmp_expression_value_3 = par_constraint;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[22]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 165;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_ceee2147fbe4ec3462545549927c578c->m_frame.f_lineno = 164;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
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
        exception_tb = MAKE_TRACEBACK(frame_ceee2147fbe4ec3462545549927c578c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ceee2147fbe4ec3462545549927c578c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ceee2147fbe4ec3462545549927c578c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ceee2147fbe4ec3462545549927c578c,
        type_description_1,
        par_constraint,
        var_base_transform
    );


    // Release cached frame if used for exception.
    if (frame_ceee2147fbe4ec3462545549927c578c == cache_frame_ceee2147fbe4ec3462545549927c578c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ceee2147fbe4ec3462545549927c578c);
        cache_frame_ceee2147fbe4ec3462545549927c578c = NULL;
    }

    assertFrameObject(frame_ceee2147fbe4ec3462545549927c578c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_base_transform);
    Py_DECREF(var_base_transform);
    var_base_transform = NULL;
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

    Py_XDECREF(var_base_transform);
    var_base_transform = NULL;
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
    CHECK_OBJECT(par_constraint);
    Py_DECREF(par_constraint);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_constraint);
    Py_DECREF(par_constraint);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributions$constraint_registry$$$function__6__transform_to_independent(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_constraint = python_pars[0];
    PyObject *var_base_transform = NULL;
    struct Nuitka_FrameObject *frame_12ee9a53e61746737e89d0b3d07a558a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_12ee9a53e61746737e89d0b3d07a558a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_12ee9a53e61746737e89d0b3d07a558a)) {
        Py_XDECREF(cache_frame_12ee9a53e61746737e89d0b3d07a558a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_12ee9a53e61746737e89d0b3d07a558a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_12ee9a53e61746737e89d0b3d07a558a = MAKE_FUNCTION_FRAME(codeobj_12ee9a53e61746737e89d0b3d07a558a, module_torch$distributions$constraint_registry, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_12ee9a53e61746737e89d0b3d07a558a->m_type_description == NULL);
    frame_12ee9a53e61746737e89d0b3d07a558a = cache_frame_12ee9a53e61746737e89d0b3d07a558a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_12ee9a53e61746737e89d0b3d07a558a);
    assert(Py_REFCNT(frame_12ee9a53e61746737e89d0b3d07a558a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_constraint);
        tmp_expression_value_1 = par_constraint;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[20]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_12ee9a53e61746737e89d0b3d07a558a->m_frame.f_lineno = 170;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_base_transform == NULL);
        var_base_transform = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[21]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_base_transform);
        tmp_args_element_value_2 = var_base_transform;
        CHECK_OBJECT(par_constraint);
        tmp_expression_value_3 = par_constraint;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[22]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 172;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_12ee9a53e61746737e89d0b3d07a558a->m_frame.f_lineno = 171;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
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
        exception_tb = MAKE_TRACEBACK(frame_12ee9a53e61746737e89d0b3d07a558a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_12ee9a53e61746737e89d0b3d07a558a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_12ee9a53e61746737e89d0b3d07a558a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_12ee9a53e61746737e89d0b3d07a558a,
        type_description_1,
        par_constraint,
        var_base_transform
    );


    // Release cached frame if used for exception.
    if (frame_12ee9a53e61746737e89d0b3d07a558a == cache_frame_12ee9a53e61746737e89d0b3d07a558a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_12ee9a53e61746737e89d0b3d07a558a);
        cache_frame_12ee9a53e61746737e89d0b3d07a558a = NULL;
    }

    assertFrameObject(frame_12ee9a53e61746737e89d0b3d07a558a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_base_transform);
    Py_DECREF(var_base_transform);
    var_base_transform = NULL;
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

    Py_XDECREF(var_base_transform);
    var_base_transform = NULL;
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
    CHECK_OBJECT(par_constraint);
    Py_DECREF(par_constraint);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_constraint);
    Py_DECREF(par_constraint);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributions$constraint_registry$$$function__7__transform_to_positive(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_constraint = python_pars[0];
    struct Nuitka_FrameObject *frame_2479d9ff06b423184ae145338df275ef;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2479d9ff06b423184ae145338df275ef = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2479d9ff06b423184ae145338df275ef)) {
        Py_XDECREF(cache_frame_2479d9ff06b423184ae145338df275ef);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2479d9ff06b423184ae145338df275ef == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2479d9ff06b423184ae145338df275ef = MAKE_FUNCTION_FRAME(codeobj_2479d9ff06b423184ae145338df275ef, module_torch$distributions$constraint_registry, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2479d9ff06b423184ae145338df275ef->m_type_description == NULL);
    frame_2479d9ff06b423184ae145338df275ef = cache_frame_2479d9ff06b423184ae145338df275ef;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2479d9ff06b423184ae145338df275ef);
    assert(Py_REFCNT(frame_2479d9ff06b423184ae145338df275ef) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_2479d9ff06b423184ae145338df275ef->m_frame.f_lineno = 180;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[24]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
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
        exception_tb = MAKE_TRACEBACK(frame_2479d9ff06b423184ae145338df275ef, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2479d9ff06b423184ae145338df275ef->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2479d9ff06b423184ae145338df275ef, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2479d9ff06b423184ae145338df275ef,
        type_description_1,
        par_constraint
    );


    // Release cached frame if used for exception.
    if (frame_2479d9ff06b423184ae145338df275ef == cache_frame_2479d9ff06b423184ae145338df275ef) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2479d9ff06b423184ae145338df275ef);
        cache_frame_2479d9ff06b423184ae145338df275ef = NULL;
    }

    assertFrameObject(frame_2479d9ff06b423184ae145338df275ef);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_constraint);
    Py_DECREF(par_constraint);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_constraint);
    Py_DECREF(par_constraint);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributions$constraint_registry$$$function__8__transform_to_greater_than(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_constraint = python_pars[0];
    struct Nuitka_FrameObject *frame_e575fda2e616d3ddfbb68e522c83ad6a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e575fda2e616d3ddfbb68e522c83ad6a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e575fda2e616d3ddfbb68e522c83ad6a)) {
        Py_XDECREF(cache_frame_e575fda2e616d3ddfbb68e522c83ad6a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e575fda2e616d3ddfbb68e522c83ad6a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e575fda2e616d3ddfbb68e522c83ad6a = MAKE_FUNCTION_FRAME(codeobj_e575fda2e616d3ddfbb68e522c83ad6a, module_torch$distributions$constraint_registry, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e575fda2e616d3ddfbb68e522c83ad6a->m_type_description == NULL);
    frame_e575fda2e616d3ddfbb68e522c83ad6a = cache_frame_e575fda2e616d3ddfbb68e522c83ad6a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e575fda2e616d3ddfbb68e522c83ad6a);
    assert(Py_REFCNT(frame_e575fda2e616d3ddfbb68e522c83ad6a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_instance_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 188;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e575fda2e616d3ddfbb68e522c83ad6a->m_frame.f_lineno = 188;
        tmp_list_element_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[24]);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 188;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_args_element_value_3;
            PyList_SET_ITEM(tmp_args_element_value_1, 0, tmp_list_element_1);
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[26]);
            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(par_constraint);
            tmp_expression_value_3 = par_constraint;
            tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[27]);
            if (tmp_args_element_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 189;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            tmp_args_element_value_3 = mod_consts[28];
            frame_e575fda2e616d3ddfbb68e522c83ad6a->m_frame.f_lineno = 189;
            {
                PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
                tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
            }

            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_1, 1, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        frame_e575fda2e616d3ddfbb68e522c83ad6a->m_frame.f_lineno = 188;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
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
        exception_tb = MAKE_TRACEBACK(frame_e575fda2e616d3ddfbb68e522c83ad6a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e575fda2e616d3ddfbb68e522c83ad6a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e575fda2e616d3ddfbb68e522c83ad6a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e575fda2e616d3ddfbb68e522c83ad6a,
        type_description_1,
        par_constraint
    );


    // Release cached frame if used for exception.
    if (frame_e575fda2e616d3ddfbb68e522c83ad6a == cache_frame_e575fda2e616d3ddfbb68e522c83ad6a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e575fda2e616d3ddfbb68e522c83ad6a);
        cache_frame_e575fda2e616d3ddfbb68e522c83ad6a = NULL;
    }

    assertFrameObject(frame_e575fda2e616d3ddfbb68e522c83ad6a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_constraint);
    Py_DECREF(par_constraint);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_constraint);
    Py_DECREF(par_constraint);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributions$constraint_registry$$$function__9__transform_to_less_than(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_constraint = python_pars[0];
    struct Nuitka_FrameObject *frame_d7347598f99d61a3da220da8d5e5f11d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d7347598f99d61a3da220da8d5e5f11d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d7347598f99d61a3da220da8d5e5f11d)) {
        Py_XDECREF(cache_frame_d7347598f99d61a3da220da8d5e5f11d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d7347598f99d61a3da220da8d5e5f11d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d7347598f99d61a3da220da8d5e5f11d = MAKE_FUNCTION_FRAME(codeobj_d7347598f99d61a3da220da8d5e5f11d, module_torch$distributions$constraint_registry, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d7347598f99d61a3da220da8d5e5f11d->m_type_description == NULL);
    frame_d7347598f99d61a3da220da8d5e5f11d = cache_frame_d7347598f99d61a3da220da8d5e5f11d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d7347598f99d61a3da220da8d5e5f11d);
    assert(Py_REFCNT(frame_d7347598f99d61a3da220da8d5e5f11d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_instance_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 195;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_d7347598f99d61a3da220da8d5e5f11d->m_frame.f_lineno = 195;
        tmp_list_element_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[24]);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 195;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_args_element_value_3;
            PyList_SET_ITEM(tmp_args_element_value_1, 0, tmp_list_element_1);
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[26]);
            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(par_constraint);
            tmp_expression_value_3 = par_constraint;
            tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[29]);
            if (tmp_args_element_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 196;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            tmp_args_element_value_3 = mod_consts[30];
            frame_d7347598f99d61a3da220da8d5e5f11d->m_frame.f_lineno = 196;
            {
                PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
                tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
            }

            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_1, 1, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        frame_d7347598f99d61a3da220da8d5e5f11d->m_frame.f_lineno = 195;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
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
        exception_tb = MAKE_TRACEBACK(frame_d7347598f99d61a3da220da8d5e5f11d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d7347598f99d61a3da220da8d5e5f11d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d7347598f99d61a3da220da8d5e5f11d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d7347598f99d61a3da220da8d5e5f11d,
        type_description_1,
        par_constraint
    );


    // Release cached frame if used for exception.
    if (frame_d7347598f99d61a3da220da8d5e5f11d == cache_frame_d7347598f99d61a3da220da8d5e5f11d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d7347598f99d61a3da220da8d5e5f11d);
        cache_frame_d7347598f99d61a3da220da8d5e5f11d = NULL;
    }

    assertFrameObject(frame_d7347598f99d61a3da220da8d5e5f11d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_constraint);
    Py_DECREF(par_constraint);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_constraint);
    Py_DECREF(par_constraint);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributions$constraint_registry$$$function__10__transform_to_interval(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_constraint = python_pars[0];
    PyObject *var_lower_is_0 = NULL;
    PyObject *var_upper_is_1 = NULL;
    PyObject *var_loc = NULL;
    PyObject *var_scale = NULL;
    struct Nuitka_FrameObject *frame_009fb36ce44e7c690675e75f12c1b69d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_009fb36ce44e7c690675e75f12c1b69d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_009fb36ce44e7c690675e75f12c1b69d)) {
        Py_XDECREF(cache_frame_009fb36ce44e7c690675e75f12c1b69d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_009fb36ce44e7c690675e75f12c1b69d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_009fb36ce44e7c690675e75f12c1b69d = MAKE_FUNCTION_FRAME(codeobj_009fb36ce44e7c690675e75f12c1b69d, module_torch$distributions$constraint_registry, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_009fb36ce44e7c690675e75f12c1b69d->m_type_description == NULL);
    frame_009fb36ce44e7c690675e75f12c1b69d = cache_frame_009fb36ce44e7c690675e75f12c1b69d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_009fb36ce44e7c690675e75f12c1b69d);
    assert(Py_REFCNT(frame_009fb36ce44e7c690675e75f12c1b69d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_constraint);
        tmp_expression_value_1 = par_constraint;
        tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[27]);
        if (tmp_isinstance_inst_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_1);

            exception_lineno = 205;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[32]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_1);

            exception_lineno = 205;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_inst_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_constraint);
        tmp_expression_value_3 = par_constraint;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[27]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[33];
        tmp_and_right_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_and_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        Py_INCREF(tmp_and_left_value_1);
        tmp_assign_source_1 = tmp_and_left_value_1;
        and_end_1:;
        assert(var_lower_is_0 == NULL);
        var_lower_is_0 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_constraint);
        tmp_expression_value_4 = par_constraint;
        tmp_isinstance_inst_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[29]);
        if (tmp_isinstance_inst_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_2);

            exception_lineno = 206;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[32]);
        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_2);

            exception_lineno = 206;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        Py_DECREF(tmp_isinstance_inst_2);
        Py_DECREF(tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(par_constraint);
        tmp_expression_value_6 = par_constraint;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[29]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[28];
        tmp_and_right_value_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_and_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        Py_INCREF(tmp_and_left_value_2);
        tmp_assign_source_2 = tmp_and_left_value_2;
        and_end_2:;
        assert(var_upper_is_1 == NULL);
        var_upper_is_1 = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        int tmp_truth_name_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_lower_is_0);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_lower_is_0);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        CHECK_OBJECT(var_upper_is_1);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_upper_is_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_condition_result_1 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_1 = tmp_and_left_value_3;
        and_end_3:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_009fb36ce44e7c690675e75f12c1b69d->m_frame.f_lineno = 208;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[34]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_constraint);
        tmp_expression_value_7 = par_constraint;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[27]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_loc == NULL);
        var_loc = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(par_constraint);
        tmp_expression_value_8 = par_constraint;
        tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[29]);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_constraint);
        tmp_expression_value_9 = par_constraint;
        tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[27]);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 211;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_scale == NULL);
        var_scale = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_instance_2;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[25]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 212;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_009fb36ce44e7c690675e75f12c1b69d->m_frame.f_lineno = 212;
        tmp_list_element_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[34]);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 212;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_args_element_value_3;
            PyList_SET_ITEM(tmp_args_element_value_1, 0, tmp_list_element_1);
            tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_instance_3 == NULL)) {
                tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;
                type_description_1 = "ooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_loc);
            tmp_args_element_value_2 = var_loc;
            CHECK_OBJECT(var_scale);
            tmp_args_element_value_3 = var_scale;
            frame_009fb36ce44e7c690675e75f12c1b69d->m_frame.f_lineno = 213;
            {
                PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
                tmp_list_element_1 = CALL_METHOD_WITH_ARGS2(
                    tmp_called_instance_3,
                    mod_consts[26],
                    call_args
                );
            }

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;
                type_description_1 = "ooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_1, 1, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        frame_009fb36ce44e7c690675e75f12c1b69d->m_frame.f_lineno = 212;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
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
        exception_tb = MAKE_TRACEBACK(frame_009fb36ce44e7c690675e75f12c1b69d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_009fb36ce44e7c690675e75f12c1b69d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_009fb36ce44e7c690675e75f12c1b69d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_009fb36ce44e7c690675e75f12c1b69d,
        type_description_1,
        par_constraint,
        var_lower_is_0,
        var_upper_is_1,
        var_loc,
        var_scale
    );


    // Release cached frame if used for exception.
    if (frame_009fb36ce44e7c690675e75f12c1b69d == cache_frame_009fb36ce44e7c690675e75f12c1b69d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_009fb36ce44e7c690675e75f12c1b69d);
        cache_frame_009fb36ce44e7c690675e75f12c1b69d = NULL;
    }

    assertFrameObject(frame_009fb36ce44e7c690675e75f12c1b69d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_lower_is_0);
    Py_DECREF(var_lower_is_0);
    var_lower_is_0 = NULL;
    CHECK_OBJECT(var_upper_is_1);
    Py_DECREF(var_upper_is_1);
    var_upper_is_1 = NULL;
    Py_XDECREF(var_loc);
    var_loc = NULL;
    Py_XDECREF(var_scale);
    var_scale = NULL;
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

    Py_XDECREF(var_lower_is_0);
    var_lower_is_0 = NULL;
    Py_XDECREF(var_upper_is_1);
    var_upper_is_1 = NULL;
    Py_XDECREF(var_loc);
    var_loc = NULL;
    Py_XDECREF(var_scale);
    var_scale = NULL;
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
    CHECK_OBJECT(par_constraint);
    Py_DECREF(par_constraint);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_constraint);
    Py_DECREF(par_constraint);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributions$constraint_registry$$$function__11__biject_to_simplex(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_constraint = python_pars[0];
    struct Nuitka_FrameObject *frame_6cd44cf7c98ac1108977dcfcca250742;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6cd44cf7c98ac1108977dcfcca250742 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6cd44cf7c98ac1108977dcfcca250742)) {
        Py_XDECREF(cache_frame_6cd44cf7c98ac1108977dcfcca250742);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6cd44cf7c98ac1108977dcfcca250742 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6cd44cf7c98ac1108977dcfcca250742 = MAKE_FUNCTION_FRAME(codeobj_6cd44cf7c98ac1108977dcfcca250742, module_torch$distributions$constraint_registry, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6cd44cf7c98ac1108977dcfcca250742->m_type_description == NULL);
    frame_6cd44cf7c98ac1108977dcfcca250742 = cache_frame_6cd44cf7c98ac1108977dcfcca250742;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6cd44cf7c98ac1108977dcfcca250742);
    assert(Py_REFCNT(frame_6cd44cf7c98ac1108977dcfcca250742) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_6cd44cf7c98ac1108977dcfcca250742->m_frame.f_lineno = 218;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[35]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
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
        exception_tb = MAKE_TRACEBACK(frame_6cd44cf7c98ac1108977dcfcca250742, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6cd44cf7c98ac1108977dcfcca250742->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6cd44cf7c98ac1108977dcfcca250742, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6cd44cf7c98ac1108977dcfcca250742,
        type_description_1,
        par_constraint
    );


    // Release cached frame if used for exception.
    if (frame_6cd44cf7c98ac1108977dcfcca250742 == cache_frame_6cd44cf7c98ac1108977dcfcca250742) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6cd44cf7c98ac1108977dcfcca250742);
        cache_frame_6cd44cf7c98ac1108977dcfcca250742 = NULL;
    }

    assertFrameObject(frame_6cd44cf7c98ac1108977dcfcca250742);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_constraint);
    Py_DECREF(par_constraint);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_constraint);
    Py_DECREF(par_constraint);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributions$constraint_registry$$$function__12__transform_to_simplex(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_constraint = python_pars[0];
    struct Nuitka_FrameObject *frame_e9109e708bc9a1ae847b6e689b8e4f11;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e9109e708bc9a1ae847b6e689b8e4f11 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e9109e708bc9a1ae847b6e689b8e4f11)) {
        Py_XDECREF(cache_frame_e9109e708bc9a1ae847b6e689b8e4f11);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e9109e708bc9a1ae847b6e689b8e4f11 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e9109e708bc9a1ae847b6e689b8e4f11 = MAKE_FUNCTION_FRAME(codeobj_e9109e708bc9a1ae847b6e689b8e4f11, module_torch$distributions$constraint_registry, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e9109e708bc9a1ae847b6e689b8e4f11->m_type_description == NULL);
    frame_e9109e708bc9a1ae847b6e689b8e4f11 = cache_frame_e9109e708bc9a1ae847b6e689b8e4f11;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e9109e708bc9a1ae847b6e689b8e4f11);
    assert(Py_REFCNT(frame_e9109e708bc9a1ae847b6e689b8e4f11) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e9109e708bc9a1ae847b6e689b8e4f11->m_frame.f_lineno = 223;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[36]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
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
        exception_tb = MAKE_TRACEBACK(frame_e9109e708bc9a1ae847b6e689b8e4f11, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e9109e708bc9a1ae847b6e689b8e4f11->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e9109e708bc9a1ae847b6e689b8e4f11, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e9109e708bc9a1ae847b6e689b8e4f11,
        type_description_1,
        par_constraint
    );


    // Release cached frame if used for exception.
    if (frame_e9109e708bc9a1ae847b6e689b8e4f11 == cache_frame_e9109e708bc9a1ae847b6e689b8e4f11) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e9109e708bc9a1ae847b6e689b8e4f11);
        cache_frame_e9109e708bc9a1ae847b6e689b8e4f11 = NULL;
    }

    assertFrameObject(frame_e9109e708bc9a1ae847b6e689b8e4f11);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_constraint);
    Py_DECREF(par_constraint);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_constraint);
    Py_DECREF(par_constraint);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributions$constraint_registry$$$function__13__transform_to_lower_cholesky(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_constraint = python_pars[0];
    struct Nuitka_FrameObject *frame_ad86c8468226846fcd94b8eedc606a15;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ad86c8468226846fcd94b8eedc606a15 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ad86c8468226846fcd94b8eedc606a15)) {
        Py_XDECREF(cache_frame_ad86c8468226846fcd94b8eedc606a15);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ad86c8468226846fcd94b8eedc606a15 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ad86c8468226846fcd94b8eedc606a15 = MAKE_FUNCTION_FRAME(codeobj_ad86c8468226846fcd94b8eedc606a15, module_torch$distributions$constraint_registry, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ad86c8468226846fcd94b8eedc606a15->m_type_description == NULL);
    frame_ad86c8468226846fcd94b8eedc606a15 = cache_frame_ad86c8468226846fcd94b8eedc606a15;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ad86c8468226846fcd94b8eedc606a15);
    assert(Py_REFCNT(frame_ad86c8468226846fcd94b8eedc606a15) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_ad86c8468226846fcd94b8eedc606a15->m_frame.f_lineno = 229;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[37]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
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
        exception_tb = MAKE_TRACEBACK(frame_ad86c8468226846fcd94b8eedc606a15, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ad86c8468226846fcd94b8eedc606a15->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ad86c8468226846fcd94b8eedc606a15, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ad86c8468226846fcd94b8eedc606a15,
        type_description_1,
        par_constraint
    );


    // Release cached frame if used for exception.
    if (frame_ad86c8468226846fcd94b8eedc606a15 == cache_frame_ad86c8468226846fcd94b8eedc606a15) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ad86c8468226846fcd94b8eedc606a15);
        cache_frame_ad86c8468226846fcd94b8eedc606a15 = NULL;
    }

    assertFrameObject(frame_ad86c8468226846fcd94b8eedc606a15);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_constraint);
    Py_DECREF(par_constraint);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_constraint);
    Py_DECREF(par_constraint);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributions$constraint_registry$$$function__14__transform_to_corr_cholesky(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_constraint = python_pars[0];
    struct Nuitka_FrameObject *frame_a5550781696602d4a385f199f4c42c4c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a5550781696602d4a385f199f4c42c4c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a5550781696602d4a385f199f4c42c4c)) {
        Py_XDECREF(cache_frame_a5550781696602d4a385f199f4c42c4c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a5550781696602d4a385f199f4c42c4c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a5550781696602d4a385f199f4c42c4c = MAKE_FUNCTION_FRAME(codeobj_a5550781696602d4a385f199f4c42c4c, module_torch$distributions$constraint_registry, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a5550781696602d4a385f199f4c42c4c->m_type_description == NULL);
    frame_a5550781696602d4a385f199f4c42c4c = cache_frame_a5550781696602d4a385f199f4c42c4c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a5550781696602d4a385f199f4c42c4c);
    assert(Py_REFCNT(frame_a5550781696602d4a385f199f4c42c4c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_a5550781696602d4a385f199f4c42c4c->m_frame.f_lineno = 235;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[38]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
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
        exception_tb = MAKE_TRACEBACK(frame_a5550781696602d4a385f199f4c42c4c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a5550781696602d4a385f199f4c42c4c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a5550781696602d4a385f199f4c42c4c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a5550781696602d4a385f199f4c42c4c,
        type_description_1,
        par_constraint
    );


    // Release cached frame if used for exception.
    if (frame_a5550781696602d4a385f199f4c42c4c == cache_frame_a5550781696602d4a385f199f4c42c4c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a5550781696602d4a385f199f4c42c4c);
        cache_frame_a5550781696602d4a385f199f4c42c4c = NULL;
    }

    assertFrameObject(frame_a5550781696602d4a385f199f4c42c4c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_constraint);
    Py_DECREF(par_constraint);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_constraint);
    Py_DECREF(par_constraint);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributions$constraint_registry$$$function__15__biject_to_cat(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_constraint = python_pars[0];
    PyObject *outline_0_var_c = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_f05179953264599e8577c26c8b111fb3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_46fcd6cad71564106c18ad502922b0da_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_46fcd6cad71564106c18ad502922b0da_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_f05179953264599e8577c26c8b111fb3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f05179953264599e8577c26c8b111fb3)) {
        Py_XDECREF(cache_frame_f05179953264599e8577c26c8b111fb3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f05179953264599e8577c26c8b111fb3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f05179953264599e8577c26c8b111fb3 = MAKE_FUNCTION_FRAME(codeobj_f05179953264599e8577c26c8b111fb3, module_torch$distributions$constraint_registry, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f05179953264599e8577c26c8b111fb3->m_type_description == NULL);
    frame_f05179953264599e8577c26c8b111fb3 = cache_frame_f05179953264599e8577c26c8b111fb3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f05179953264599e8577c26c8b111fb3);
    assert(Py_REFCNT(frame_f05179953264599e8577c26c8b111fb3) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[39]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_expression_value_2;
            CHECK_OBJECT(par_constraint);
            tmp_expression_value_2 = par_constraint;
            tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[40]);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;
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
        if (isFrameUnusable(cache_frame_46fcd6cad71564106c18ad502922b0da_2)) {
            Py_XDECREF(cache_frame_46fcd6cad71564106c18ad502922b0da_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_46fcd6cad71564106c18ad502922b0da_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_46fcd6cad71564106c18ad502922b0da_2 = MAKE_FUNCTION_FRAME(codeobj_46fcd6cad71564106c18ad502922b0da, module_torch$distributions$constraint_registry, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_46fcd6cad71564106c18ad502922b0da_2->m_type_description == NULL);
        frame_46fcd6cad71564106c18ad502922b0da_2 = cache_frame_46fcd6cad71564106c18ad502922b0da_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_46fcd6cad71564106c18ad502922b0da_2);
        assert(Py_REFCNT(frame_46fcd6cad71564106c18ad502922b0da_2) == 2);

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
                    exception_lineno = 240;
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
                PyObject *old = outline_0_var_c;
                outline_0_var_c = tmp_assign_source_4;
                Py_INCREF(outline_0_var_c);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_2;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;
                type_description_2 = "o";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(outline_0_var_c);
            tmp_args_element_value_2 = outline_0_var_c;
            frame_46fcd6cad71564106c18ad502922b0da_2->m_frame.f_lineno = 240;
            tmp_append_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;
                type_description_2 = "o";
                goto try_except_handler_2;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;
                type_description_2 = "o";
                goto try_except_handler_2;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_args_element_value_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_args_element_value_1);
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
            exception_tb = MAKE_TRACEBACK(frame_46fcd6cad71564106c18ad502922b0da_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_46fcd6cad71564106c18ad502922b0da_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_46fcd6cad71564106c18ad502922b0da_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_46fcd6cad71564106c18ad502922b0da_2,
            type_description_2,
            outline_0_var_c
        );


        // Release cached frame if used for exception.
        if (frame_46fcd6cad71564106c18ad502922b0da_2 == cache_frame_46fcd6cad71564106c18ad502922b0da_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_46fcd6cad71564106c18ad502922b0da_2);
            cache_frame_46fcd6cad71564106c18ad502922b0da_2 = NULL;
        }

        assertFrameObject(frame_46fcd6cad71564106c18ad502922b0da_2);

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
        Py_XDECREF(outline_0_var_c);
        outline_0_var_c = NULL;
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

        Py_XDECREF(outline_0_var_c);
        outline_0_var_c = NULL;
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
        exception_lineno = 240;
        goto frame_exception_exit_1;
        outline_result_1:;
        CHECK_OBJECT(par_constraint);
        tmp_expression_value_3 = par_constraint;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[41]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 242;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_constraint);
        tmp_expression_value_4 = par_constraint;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[42]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 243;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_f05179953264599e8577c26c8b111fb3->m_frame.f_lineno = 240;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f05179953264599e8577c26c8b111fb3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f05179953264599e8577c26c8b111fb3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f05179953264599e8577c26c8b111fb3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f05179953264599e8577c26c8b111fb3,
        type_description_1,
        par_constraint
    );


    // Release cached frame if used for exception.
    if (frame_f05179953264599e8577c26c8b111fb3 == cache_frame_f05179953264599e8577c26c8b111fb3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f05179953264599e8577c26c8b111fb3);
        cache_frame_f05179953264599e8577c26c8b111fb3 = NULL;
    }

    assertFrameObject(frame_f05179953264599e8577c26c8b111fb3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_2:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_constraint);
    Py_DECREF(par_constraint);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_constraint);
    Py_DECREF(par_constraint);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributions$constraint_registry$$$function__16__transform_to_cat(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_constraint = python_pars[0];
    PyObject *outline_0_var_c = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_f54552b0e5fa1eb274e9ac56b92f5943;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_09faaca5dc5947230ff92567378a2587_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_09faaca5dc5947230ff92567378a2587_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_f54552b0e5fa1eb274e9ac56b92f5943 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f54552b0e5fa1eb274e9ac56b92f5943)) {
        Py_XDECREF(cache_frame_f54552b0e5fa1eb274e9ac56b92f5943);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f54552b0e5fa1eb274e9ac56b92f5943 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f54552b0e5fa1eb274e9ac56b92f5943 = MAKE_FUNCTION_FRAME(codeobj_f54552b0e5fa1eb274e9ac56b92f5943, module_torch$distributions$constraint_registry, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f54552b0e5fa1eb274e9ac56b92f5943->m_type_description == NULL);
    frame_f54552b0e5fa1eb274e9ac56b92f5943 = cache_frame_f54552b0e5fa1eb274e9ac56b92f5943;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f54552b0e5fa1eb274e9ac56b92f5943);
    assert(Py_REFCNT(frame_f54552b0e5fa1eb274e9ac56b92f5943) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[39]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_expression_value_2;
            CHECK_OBJECT(par_constraint);
            tmp_expression_value_2 = par_constraint;
            tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[40]);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
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
        if (isFrameUnusable(cache_frame_09faaca5dc5947230ff92567378a2587_2)) {
            Py_XDECREF(cache_frame_09faaca5dc5947230ff92567378a2587_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_09faaca5dc5947230ff92567378a2587_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_09faaca5dc5947230ff92567378a2587_2 = MAKE_FUNCTION_FRAME(codeobj_09faaca5dc5947230ff92567378a2587, module_torch$distributions$constraint_registry, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_09faaca5dc5947230ff92567378a2587_2->m_type_description == NULL);
        frame_09faaca5dc5947230ff92567378a2587_2 = cache_frame_09faaca5dc5947230ff92567378a2587_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_09faaca5dc5947230ff92567378a2587_2);
        assert(Py_REFCNT(frame_09faaca5dc5947230ff92567378a2587_2) == 2);

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
                    exception_lineno = 248;
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
                PyObject *old = outline_0_var_c;
                outline_0_var_c = tmp_assign_source_4;
                Py_INCREF(outline_0_var_c);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_2;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_2 = "o";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(outline_0_var_c);
            tmp_args_element_value_2 = outline_0_var_c;
            frame_09faaca5dc5947230ff92567378a2587_2->m_frame.f_lineno = 248;
            tmp_append_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_2 = "o";
                goto try_except_handler_2;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_2 = "o";
                goto try_except_handler_2;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_args_element_value_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_args_element_value_1);
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
            exception_tb = MAKE_TRACEBACK(frame_09faaca5dc5947230ff92567378a2587_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_09faaca5dc5947230ff92567378a2587_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_09faaca5dc5947230ff92567378a2587_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_09faaca5dc5947230ff92567378a2587_2,
            type_description_2,
            outline_0_var_c
        );


        // Release cached frame if used for exception.
        if (frame_09faaca5dc5947230ff92567378a2587_2 == cache_frame_09faaca5dc5947230ff92567378a2587_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_09faaca5dc5947230ff92567378a2587_2);
            cache_frame_09faaca5dc5947230ff92567378a2587_2 = NULL;
        }

        assertFrameObject(frame_09faaca5dc5947230ff92567378a2587_2);

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
        Py_XDECREF(outline_0_var_c);
        outline_0_var_c = NULL;
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

        Py_XDECREF(outline_0_var_c);
        outline_0_var_c = NULL;
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
        exception_lineno = 248;
        goto frame_exception_exit_1;
        outline_result_1:;
        CHECK_OBJECT(par_constraint);
        tmp_expression_value_3 = par_constraint;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[41]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 250;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_constraint);
        tmp_expression_value_4 = par_constraint;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[42]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 251;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_f54552b0e5fa1eb274e9ac56b92f5943->m_frame.f_lineno = 248;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f54552b0e5fa1eb274e9ac56b92f5943, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f54552b0e5fa1eb274e9ac56b92f5943->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f54552b0e5fa1eb274e9ac56b92f5943, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f54552b0e5fa1eb274e9ac56b92f5943,
        type_description_1,
        par_constraint
    );


    // Release cached frame if used for exception.
    if (frame_f54552b0e5fa1eb274e9ac56b92f5943 == cache_frame_f54552b0e5fa1eb274e9ac56b92f5943) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f54552b0e5fa1eb274e9ac56b92f5943);
        cache_frame_f54552b0e5fa1eb274e9ac56b92f5943 = NULL;
    }

    assertFrameObject(frame_f54552b0e5fa1eb274e9ac56b92f5943);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_2:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_constraint);
    Py_DECREF(par_constraint);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_constraint);
    Py_DECREF(par_constraint);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributions$constraint_registry$$$function__17__biject_to_stack(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_constraint = python_pars[0];
    PyObject *outline_0_var_c = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_c202d9de88c91d013a141417f4311a84;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_e23b272ea8511b526f713b80fcdc0664_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_e23b272ea8511b526f713b80fcdc0664_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_c202d9de88c91d013a141417f4311a84 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c202d9de88c91d013a141417f4311a84)) {
        Py_XDECREF(cache_frame_c202d9de88c91d013a141417f4311a84);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c202d9de88c91d013a141417f4311a84 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c202d9de88c91d013a141417f4311a84 = MAKE_FUNCTION_FRAME(codeobj_c202d9de88c91d013a141417f4311a84, module_torch$distributions$constraint_registry, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c202d9de88c91d013a141417f4311a84->m_type_description == NULL);
    frame_c202d9de88c91d013a141417f4311a84 = cache_frame_c202d9de88c91d013a141417f4311a84;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c202d9de88c91d013a141417f4311a84);
    assert(Py_REFCNT(frame_c202d9de88c91d013a141417f4311a84) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[43]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_expression_value_2;
            CHECK_OBJECT(par_constraint);
            tmp_expression_value_2 = par_constraint;
            tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[40]);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
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
        if (isFrameUnusable(cache_frame_e23b272ea8511b526f713b80fcdc0664_2)) {
            Py_XDECREF(cache_frame_e23b272ea8511b526f713b80fcdc0664_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_e23b272ea8511b526f713b80fcdc0664_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_e23b272ea8511b526f713b80fcdc0664_2 = MAKE_FUNCTION_FRAME(codeobj_e23b272ea8511b526f713b80fcdc0664, module_torch$distributions$constraint_registry, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_e23b272ea8511b526f713b80fcdc0664_2->m_type_description == NULL);
        frame_e23b272ea8511b526f713b80fcdc0664_2 = cache_frame_e23b272ea8511b526f713b80fcdc0664_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_e23b272ea8511b526f713b80fcdc0664_2);
        assert(Py_REFCNT(frame_e23b272ea8511b526f713b80fcdc0664_2) == 2);

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
                    exception_lineno = 257;
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
                PyObject *old = outline_0_var_c;
                outline_0_var_c = tmp_assign_source_4;
                Py_INCREF(outline_0_var_c);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_2;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "o";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(outline_0_var_c);
            tmp_args_element_value_2 = outline_0_var_c;
            frame_e23b272ea8511b526f713b80fcdc0664_2->m_frame.f_lineno = 257;
            tmp_append_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "o";
                goto try_except_handler_2;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "o";
                goto try_except_handler_2;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_args_element_value_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_args_element_value_1);
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
            exception_tb = MAKE_TRACEBACK(frame_e23b272ea8511b526f713b80fcdc0664_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_e23b272ea8511b526f713b80fcdc0664_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_e23b272ea8511b526f713b80fcdc0664_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_e23b272ea8511b526f713b80fcdc0664_2,
            type_description_2,
            outline_0_var_c
        );


        // Release cached frame if used for exception.
        if (frame_e23b272ea8511b526f713b80fcdc0664_2 == cache_frame_e23b272ea8511b526f713b80fcdc0664_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_e23b272ea8511b526f713b80fcdc0664_2);
            cache_frame_e23b272ea8511b526f713b80fcdc0664_2 = NULL;
        }

        assertFrameObject(frame_e23b272ea8511b526f713b80fcdc0664_2);

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
        Py_XDECREF(outline_0_var_c);
        outline_0_var_c = NULL;
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

        Py_XDECREF(outline_0_var_c);
        outline_0_var_c = NULL;
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
        exception_lineno = 257;
        goto frame_exception_exit_1;
        outline_result_1:;
        CHECK_OBJECT(par_constraint);
        tmp_expression_value_3 = par_constraint;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[41]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 258;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_c202d9de88c91d013a141417f4311a84->m_frame.f_lineno = 256;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c202d9de88c91d013a141417f4311a84, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c202d9de88c91d013a141417f4311a84->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c202d9de88c91d013a141417f4311a84, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c202d9de88c91d013a141417f4311a84,
        type_description_1,
        par_constraint
    );


    // Release cached frame if used for exception.
    if (frame_c202d9de88c91d013a141417f4311a84 == cache_frame_c202d9de88c91d013a141417f4311a84) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c202d9de88c91d013a141417f4311a84);
        cache_frame_c202d9de88c91d013a141417f4311a84 = NULL;
    }

    assertFrameObject(frame_c202d9de88c91d013a141417f4311a84);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_2:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_constraint);
    Py_DECREF(par_constraint);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_constraint);
    Py_DECREF(par_constraint);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributions$constraint_registry$$$function__18__transform_to_stack(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_constraint = python_pars[0];
    PyObject *outline_0_var_c = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_72e868920090f1968265627ddf81b365;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_b415ac519306f8b9c02f53d1bff08268_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_b415ac519306f8b9c02f53d1bff08268_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_72e868920090f1968265627ddf81b365 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_72e868920090f1968265627ddf81b365)) {
        Py_XDECREF(cache_frame_72e868920090f1968265627ddf81b365);

#if _DEBUG_REFCOUNTS
        if (cache_frame_72e868920090f1968265627ddf81b365 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_72e868920090f1968265627ddf81b365 = MAKE_FUNCTION_FRAME(codeobj_72e868920090f1968265627ddf81b365, module_torch$distributions$constraint_registry, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_72e868920090f1968265627ddf81b365->m_type_description == NULL);
    frame_72e868920090f1968265627ddf81b365 = cache_frame_72e868920090f1968265627ddf81b365;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_72e868920090f1968265627ddf81b365);
    assert(Py_REFCNT(frame_72e868920090f1968265627ddf81b365) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[43]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_expression_value_2;
            CHECK_OBJECT(par_constraint);
            tmp_expression_value_2 = par_constraint;
            tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[40]);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;
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
        if (isFrameUnusable(cache_frame_b415ac519306f8b9c02f53d1bff08268_2)) {
            Py_XDECREF(cache_frame_b415ac519306f8b9c02f53d1bff08268_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_b415ac519306f8b9c02f53d1bff08268_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_b415ac519306f8b9c02f53d1bff08268_2 = MAKE_FUNCTION_FRAME(codeobj_b415ac519306f8b9c02f53d1bff08268, module_torch$distributions$constraint_registry, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_b415ac519306f8b9c02f53d1bff08268_2->m_type_description == NULL);
        frame_b415ac519306f8b9c02f53d1bff08268_2 = cache_frame_b415ac519306f8b9c02f53d1bff08268_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_b415ac519306f8b9c02f53d1bff08268_2);
        assert(Py_REFCNT(frame_b415ac519306f8b9c02f53d1bff08268_2) == 2);

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
                    exception_lineno = 264;
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
                PyObject *old = outline_0_var_c;
                outline_0_var_c = tmp_assign_source_4;
                Py_INCREF(outline_0_var_c);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_2;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;
                type_description_2 = "o";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(outline_0_var_c);
            tmp_args_element_value_2 = outline_0_var_c;
            frame_b415ac519306f8b9c02f53d1bff08268_2->m_frame.f_lineno = 264;
            tmp_append_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;
                type_description_2 = "o";
                goto try_except_handler_2;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;
                type_description_2 = "o";
                goto try_except_handler_2;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_args_element_value_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_args_element_value_1);
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
            exception_tb = MAKE_TRACEBACK(frame_b415ac519306f8b9c02f53d1bff08268_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b415ac519306f8b9c02f53d1bff08268_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b415ac519306f8b9c02f53d1bff08268_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b415ac519306f8b9c02f53d1bff08268_2,
            type_description_2,
            outline_0_var_c
        );


        // Release cached frame if used for exception.
        if (frame_b415ac519306f8b9c02f53d1bff08268_2 == cache_frame_b415ac519306f8b9c02f53d1bff08268_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_b415ac519306f8b9c02f53d1bff08268_2);
            cache_frame_b415ac519306f8b9c02f53d1bff08268_2 = NULL;
        }

        assertFrameObject(frame_b415ac519306f8b9c02f53d1bff08268_2);

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
        Py_XDECREF(outline_0_var_c);
        outline_0_var_c = NULL;
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

        Py_XDECREF(outline_0_var_c);
        outline_0_var_c = NULL;
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
        exception_lineno = 264;
        goto frame_exception_exit_1;
        outline_result_1:;
        CHECK_OBJECT(par_constraint);
        tmp_expression_value_3 = par_constraint;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[41]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 265;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_72e868920090f1968265627ddf81b365->m_frame.f_lineno = 263;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_72e868920090f1968265627ddf81b365, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_72e868920090f1968265627ddf81b365->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_72e868920090f1968265627ddf81b365, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_72e868920090f1968265627ddf81b365,
        type_description_1,
        par_constraint
    );


    // Release cached frame if used for exception.
    if (frame_72e868920090f1968265627ddf81b365 == cache_frame_72e868920090f1968265627ddf81b365) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_72e868920090f1968265627ddf81b365);
        cache_frame_72e868920090f1968265627ddf81b365 = NULL;
    }

    assertFrameObject(frame_72e868920090f1968265627ddf81b365);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_2:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_constraint);
    Py_DECREF(par_constraint);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_constraint);
    Py_DECREF(par_constraint);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__10__transform_to_interval() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributions$constraint_registry$$$function__10__transform_to_interval,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_009fb36ce44e7c690675e75f12c1b69d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributions$constraint_registry,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__11__biject_to_simplex() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributions$constraint_registry$$$function__11__biject_to_simplex,
        mod_consts[86],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6cd44cf7c98ac1108977dcfcca250742,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributions$constraint_registry,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__12__transform_to_simplex() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributions$constraint_registry$$$function__12__transform_to_simplex,
        mod_consts[87],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e9109e708bc9a1ae847b6e689b8e4f11,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributions$constraint_registry,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__13__transform_to_lower_cholesky() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributions$constraint_registry$$$function__13__transform_to_lower_cholesky,
        mod_consts[89],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ad86c8468226846fcd94b8eedc606a15,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributions$constraint_registry,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__14__transform_to_corr_cholesky() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributions$constraint_registry$$$function__14__transform_to_corr_cholesky,
        mod_consts[91],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a5550781696602d4a385f199f4c42c4c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributions$constraint_registry,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__15__biject_to_cat() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributions$constraint_registry$$$function__15__biject_to_cat,
        mod_consts[93],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f05179953264599e8577c26c8b111fb3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributions$constraint_registry,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__16__transform_to_cat() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributions$constraint_registry$$$function__16__transform_to_cat,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f54552b0e5fa1eb274e9ac56b92f5943,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributions$constraint_registry,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__17__biject_to_stack() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributions$constraint_registry$$$function__17__biject_to_stack,
        mod_consts[96],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c202d9de88c91d013a141417f4311a84,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributions$constraint_registry,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__18__transform_to_stack() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributions$constraint_registry$$$function__18__transform_to_stack,
        mod_consts[97],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_72e868920090f1968265627ddf81b365,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributions$constraint_registry,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__1___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributions$constraint_registry$$$function__1___init__,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[63],
#endif
        codeobj_81c6461786d89253b06892749fa76a0e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributions$constraint_registry,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__2_register(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributions$constraint_registry$$$function__2_register,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[65],
#endif
        codeobj_c02e9dec2d0f93eb5095a41e98e90781,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributions$constraint_registry,
        mod_consts[9],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__2_register$$$function__1_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributions$constraint_registry$$$function__2_register$$$function__1_lambda,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[4],
#endif
        codeobj_04afb8092128556ab8ea04ab5f6ef4c5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributions$constraint_registry,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__3___call__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributions$constraint_registry$$$function__3___call__,
        mod_consts[66],
#if PYTHON_VERSION >= 0x300
        mod_consts[67],
#endif
        codeobj_d9b384de5739076df061d714fc11cb8c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributions$constraint_registry,
        mod_consts[16],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__4__transform_to_real() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributions$constraint_registry$$$function__4__transform_to_real,
        mod_consts[70],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_86dd50c39972bcaa028941a715fecf4b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributions$constraint_registry,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__5__biject_to_independent() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributions$constraint_registry$$$function__5__biject_to_independent,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ceee2147fbe4ec3462545549927c578c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributions$constraint_registry,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__6__transform_to_independent() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributions$constraint_registry$$$function__6__transform_to_independent,
        mod_consts[73],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_12ee9a53e61746737e89d0b3d07a558a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributions$constraint_registry,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__7__transform_to_positive() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributions$constraint_registry$$$function__7__transform_to_positive,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2479d9ff06b423184ae145338df275ef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributions$constraint_registry,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__8__transform_to_greater_than() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributions$constraint_registry$$$function__8__transform_to_greater_than,
        mod_consts[79],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e575fda2e616d3ddfbb68e522c83ad6a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributions$constraint_registry,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__9__transform_to_less_than() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributions$constraint_registry$$$function__9__transform_to_less_than,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d7347598f99d61a3da220da8d5e5f11d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributions$constraint_registry,
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

function_impl_code functable_torch$distributions$constraint_registry[] = {
    impl_torch$distributions$constraint_registry$$$function__2_register$$$function__1_lambda,
    impl_torch$distributions$constraint_registry$$$function__1___init__,
    impl_torch$distributions$constraint_registry$$$function__2_register,
    impl_torch$distributions$constraint_registry$$$function__3___call__,
    impl_torch$distributions$constraint_registry$$$function__4__transform_to_real,
    impl_torch$distributions$constraint_registry$$$function__5__biject_to_independent,
    impl_torch$distributions$constraint_registry$$$function__6__transform_to_independent,
    impl_torch$distributions$constraint_registry$$$function__7__transform_to_positive,
    impl_torch$distributions$constraint_registry$$$function__8__transform_to_greater_than,
    impl_torch$distributions$constraint_registry$$$function__9__transform_to_less_than,
    impl_torch$distributions$constraint_registry$$$function__10__transform_to_interval,
    impl_torch$distributions$constraint_registry$$$function__11__biject_to_simplex,
    impl_torch$distributions$constraint_registry$$$function__12__transform_to_simplex,
    impl_torch$distributions$constraint_registry$$$function__13__transform_to_lower_cholesky,
    impl_torch$distributions$constraint_registry$$$function__14__transform_to_corr_cholesky,
    impl_torch$distributions$constraint_registry$$$function__15__biject_to_cat,
    impl_torch$distributions$constraint_registry$$$function__16__transform_to_cat,
    impl_torch$distributions$constraint_registry$$$function__17__biject_to_stack,
    impl_torch$distributions$constraint_registry$$$function__18__transform_to_stack,
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

    function_impl_code *current = functable_torch$distributions$constraint_registry;
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

    if (offset > sizeof(functable_torch$distributions$constraint_registry) || offset < 0) {
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
        functable_torch$distributions$constraint_registry[offset],
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
        module_torch$distributions$constraint_registry,
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
PyObject *modulecode_torch$distributions$constraint_registry(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torch.distributions.constraint_registry");

    // Store the module for future use.
    module_torch$distributions$constraint_registry = module;

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
        PRINT_STRING("torch.distributions.constraint_registry: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.distributions.constraint_registry: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.distributions.constraint_registry: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorch$distributions$constraint_registry\n");

    moduledict_torch$distributions$constraint_registry = MODULE_DICT(module_torch$distributions$constraint_registry);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torch$distributions$constraint_registry,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torch$distributions$constraint_registry,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[14]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torch$distributions$constraint_registry,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torch$distributions$constraint_registry,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torch$distributions$constraint_registry,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torch$distributions$constraint_registry);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torch$distributions$constraint_registry);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_73aa7dd26466d4af11fc1b6922385d54;
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
    PyObject *locals_torch$distributions$constraint_registry$$$class__1_ConstraintRegistry_79 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_c20f02d2a82176128b420b8a7bdbf7c0_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
        tmp_assign_source_1 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_2);
    }
    frame_73aa7dd26466d4af11fc1b6922385d54 = MAKE_MODULE_FRAME(codeobj_73aa7dd26466d4af11fc1b6922385d54, module_torch$distributions$constraint_registry);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_73aa7dd26466d4af11fc1b6922385d54);
    assert(Py_REFCNT(frame_73aa7dd26466d4af11fc1b6922385d54) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[48], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[49], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[31];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$distributions$constraint_registry;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[33];
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 68;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[51];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torch$distributions$constraint_registry;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[52];
        tmp_level_value_2 = mod_consts[33];
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 70;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$distributions$constraint_registry,
                mod_consts[5],
                mod_consts[33]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[5]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_torch$distributions$constraint_registry,
                mod_consts[17],
                mod_consts[33]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[17]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_7);
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
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_LIST3(mod_consts[1],mod_consts[19],mod_consts[23]);
        UPDATE_STRING_DICT1(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_8);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[54];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_9 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
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


            exception_lineno = 79;

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
        tmp_subscript_value_1 = mod_consts[33];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_11 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_11;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[55]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[55]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_2;
        }
        tmp_tuple_element_1 = mod_consts[1];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_1 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 79;
        tmp_assign_source_12 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_12;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[56]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

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
        tmp_mod_expr_left_1 = mod_consts[57];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[13];
        tmp_getattr_default_1 = mod_consts[58];
        tmp_tuple_element_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

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
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[13]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

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


            exception_lineno = 79;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 79;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_13;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_14;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_torch$distributions$constraint_registry$$$class__1_ConstraintRegistry_79 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[59];
        tmp_res = PyObject_SetItem(locals_torch$distributions$constraint_registry$$$class__1_ConstraintRegistry_79, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[61];
        tmp_res = PyObject_SetItem(locals_torch$distributions$constraint_registry$$$class__1_ConstraintRegistry_79, mod_consts[45], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[1];
        tmp_res = PyObject_SetItem(locals_torch$distributions$constraint_registry$$$class__1_ConstraintRegistry_79, mod_consts[62], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_4;
        }
        frame_c20f02d2a82176128b420b8a7bdbf7c0_2 = MAKE_CLASS_FRAME(codeobj_c20f02d2a82176128b420b8a7bdbf7c0, module_torch$distributions$constraint_registry, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_c20f02d2a82176128b420b8a7bdbf7c0_2);
        assert(Py_REFCNT(frame_c20f02d2a82176128b420b8a7bdbf7c0_2) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__1___init__();

        tmp_res = PyObject_SetItem(locals_torch$distributions$constraint_registry$$$class__1_ConstraintRegistry_79, mod_consts[2], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[64];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__2_register(tmp_defaults_1);

            tmp_res = PyObject_SetItem(locals_torch$distributions$constraint_registry$$$class__1_ConstraintRegistry_79, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__3___call__();

        tmp_res = PyObject_SetItem(locals_torch$distributions$constraint_registry$$$class__1_ConstraintRegistry_79, mod_consts[66], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c20f02d2a82176128b420b8a7bdbf7c0_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c20f02d2a82176128b420b8a7bdbf7c0_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c20f02d2a82176128b420b8a7bdbf7c0_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c20f02d2a82176128b420b8a7bdbf7c0_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_c20f02d2a82176128b420b8a7bdbf7c0_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            tmp_cmp_expr_right_1 = mod_consts[54];
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto try_except_handler_4;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        tmp_dictset_value = mod_consts[54];
        tmp_res = PyObject_SetItem(locals_torch$distributions$constraint_registry$$$class__1_ConstraintRegistry_79, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_4;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = mod_consts[1];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_torch$distributions$constraint_registry$$$class__1_ConstraintRegistry_79;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 79;
            tmp_assign_source_15 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_15;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_14 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_14);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_torch$distributions$constraint_registry$$$class__1_ConstraintRegistry_79);
        locals_torch$distributions$constraint_registry$$$class__1_ConstraintRegistry_79 = NULL;
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

        Py_DECREF(locals_torch$distributions$constraint_registry$$$class__1_ConstraintRegistry_79);
        locals_torch$distributions$constraint_registry$$$class__1_ConstraintRegistry_79 = NULL;
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
        exception_lineno = 79;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_14);
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
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 147;
        tmp_assign_source_16 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 148;
        tmp_assign_source_17 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_7;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[11]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[69]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 155;
        tmp_called_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[11]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[69]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 156;
        tmp_called_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 156;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_4 = MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__4__transform_to_real();

        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 156;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 155;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_9;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_6;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[11]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[71]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 161;
        tmp_called_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_6 = MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__5__biject_to_independent();

        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 161;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_11;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_8;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[11]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[71]);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 168;
        tmp_called_value_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_8 = MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__6__transform_to_independent();

        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 168;
        tmp_assign_source_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_13;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_called_value_15;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_called_value_17;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_called_value_19;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_element_value_16;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[11]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[74]);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 175;
        tmp_called_value_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[11]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[75]);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 176;
        tmp_called_value_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[11]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[74]);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 177;
        tmp_called_value_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[11]);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[75]);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 178;
        tmp_called_value_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_16 = MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__7__transform_to_positive();

        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 178;
        tmp_args_element_value_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 177;
        tmp_args_element_value_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 176;
        tmp_args_element_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 175;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_21;
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_called_value_23;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_called_value_25;
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_called_value_27;
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_args_element_value_24;
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[11]);
        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[77]);
        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 183;
        tmp_called_value_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_17);
        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[11]);
        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[78]);
        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 184;
        tmp_called_value_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_19);
        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[11]);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[77]);
        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 185;
        tmp_called_value_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_args_element_value_21);
        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[11]);
        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[78]);
        if (tmp_args_element_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 186;
        tmp_called_value_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_23);
        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_args_element_value_23);
        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_24 = MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__8__transform_to_greater_than();

        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 186;
        tmp_args_element_value_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_24);
        Py_DECREF(tmp_called_value_27);
        Py_DECREF(tmp_args_element_value_24);
        if (tmp_args_element_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 185;
        tmp_args_element_value_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_22);
        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 184;
        tmp_args_element_value_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_20);
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 183;
        tmp_assign_source_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_18);
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_29;
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_called_value_31;
        PyObject *tmp_called_value_32;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_args_element_value_28;
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[11]);
        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[80]);
        if (tmp_args_element_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 192;
        tmp_called_value_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_25);
        Py_DECREF(tmp_called_value_30);
        Py_DECREF(tmp_args_element_value_25);
        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        tmp_called_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[11]);
        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[80]);
        if (tmp_args_element_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 193;
        tmp_called_value_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_27);
        Py_DECREF(tmp_called_value_32);
        Py_DECREF(tmp_args_element_value_27);
        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 193;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_28 = MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__9__transform_to_less_than();

        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 193;
        tmp_args_element_value_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_31, tmp_args_element_value_28);
        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_args_element_value_28);
        if (tmp_args_element_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 192;
        tmp_assign_source_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_29, tmp_args_element_value_26);
        Py_DECREF(tmp_called_value_29);
        Py_DECREF(tmp_args_element_value_26);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_33;
        PyObject *tmp_called_value_34;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_called_value_35;
        PyObject *tmp_called_value_36;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_called_value_37;
        PyObject *tmp_called_value_38;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_called_value_39;
        PyObject *tmp_called_value_40;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_args_element_value_36;
        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_34 == NULL)) {
            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_called_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[11]);
        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[82]);
        if (tmp_args_element_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 199;
        tmp_called_value_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_34, tmp_args_element_value_29);
        Py_DECREF(tmp_called_value_34);
        Py_DECREF(tmp_args_element_value_29);
        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_36 == NULL)) {
            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);

            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_called_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[11]);
        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);

            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_37 == NULL)) {
            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_36);

            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[83]);
        if (tmp_args_element_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_36);

            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 200;
        tmp_called_value_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_36, tmp_args_element_value_31);
        Py_DECREF(tmp_called_value_36);
        Py_DECREF(tmp_args_element_value_31);
        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);

            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_38 == NULL)) {
            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);

            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_called_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[11]);
        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);

            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_39 == NULL)) {
            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[82]);
        if (tmp_args_element_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 201;
        tmp_called_value_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_38, tmp_args_element_value_33);
        Py_DECREF(tmp_called_value_38);
        Py_DECREF(tmp_args_element_value_33);
        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);

            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_40 == NULL)) {
            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        tmp_called_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[11]);
        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[83]);
        if (tmp_args_element_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 202;
        tmp_called_value_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_40, tmp_args_element_value_35);
        Py_DECREF(tmp_called_value_40);
        Py_DECREF(tmp_args_element_value_35);
        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 202;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_36 = MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__10__transform_to_interval();

        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 202;
        tmp_args_element_value_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_39, tmp_args_element_value_36);
        Py_DECREF(tmp_called_value_39);
        Py_DECREF(tmp_args_element_value_36);
        if (tmp_args_element_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 201;
        tmp_args_element_value_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_37, tmp_args_element_value_34);
        Py_DECREF(tmp_called_value_37);
        Py_DECREF(tmp_args_element_value_34);
        if (tmp_args_element_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);

            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 200;
        tmp_args_element_value_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_35, tmp_args_element_value_32);
        Py_DECREF(tmp_called_value_35);
        Py_DECREF(tmp_args_element_value_32);
        if (tmp_args_element_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);

            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 199;
        tmp_assign_source_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_33, tmp_args_element_value_30);
        Py_DECREF(tmp_called_value_33);
        Py_DECREF(tmp_args_element_value_30);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_41;
        PyObject *tmp_called_value_42;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_args_element_value_38;
        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_42 == NULL)) {
            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_called_value_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[11]);
        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_43 == NULL)) {
            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[85]);
        if (tmp_args_element_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 216;
        tmp_called_value_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_42, tmp_args_element_value_37);
        Py_DECREF(tmp_called_value_42);
        Py_DECREF(tmp_args_element_value_37);
        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_38 = MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__11__biject_to_simplex();

        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 216;
        tmp_assign_source_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_41, tmp_args_element_value_38);
        Py_DECREF(tmp_called_value_41);
        Py_DECREF(tmp_args_element_value_38);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_43;
        PyObject *tmp_called_value_44;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_args_element_value_40;
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        tmp_called_value_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[11]);
        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_45 == NULL)) {
            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[85]);
        if (tmp_args_element_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 221;
        tmp_called_value_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_44, tmp_args_element_value_39);
        Py_DECREF(tmp_called_value_44);
        Py_DECREF(tmp_args_element_value_39);
        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_40 = MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__12__transform_to_simplex();

        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 221;
        tmp_assign_source_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_43, tmp_args_element_value_40);
        Py_DECREF(tmp_called_value_43);
        Py_DECREF(tmp_args_element_value_40);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_45;
        PyObject *tmp_called_value_46;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_args_element_value_42;
        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_46 == NULL)) {
            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        tmp_called_value_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[11]);
        if (tmp_called_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_47 == NULL)) {
            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_46);

            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[88]);
        if (tmp_args_element_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_46);

            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 227;
        tmp_called_value_45 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_46, tmp_args_element_value_41);
        Py_DECREF(tmp_called_value_46);
        Py_DECREF(tmp_args_element_value_41);
        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_42 = MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__13__transform_to_lower_cholesky();

        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 227;
        tmp_assign_source_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_45, tmp_args_element_value_42);
        Py_DECREF(tmp_called_value_45);
        Py_DECREF(tmp_args_element_value_42);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_47;
        PyObject *tmp_called_value_48;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_called_value_49;
        PyObject *tmp_called_value_50;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_args_element_value_46;
        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_48 == NULL)) {
            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        tmp_called_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[11]);
        if (tmp_called_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_49 == NULL)) {
            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[90]);
        if (tmp_args_element_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 232;
        tmp_called_value_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_48, tmp_args_element_value_43);
        Py_DECREF(tmp_called_value_48);
        Py_DECREF(tmp_args_element_value_43);
        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        tmp_called_value_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[11]);
        if (tmp_called_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_51 == NULL)) {
            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_called_value_50);

            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[90]);
        if (tmp_args_element_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_called_value_50);

            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 233;
        tmp_called_value_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_50, tmp_args_element_value_45);
        Py_DECREF(tmp_called_value_50);
        Py_DECREF(tmp_args_element_value_45);
        if (tmp_called_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 233;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_46 = MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__14__transform_to_corr_cholesky();

        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 233;
        tmp_args_element_value_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_49, tmp_args_element_value_46);
        Py_DECREF(tmp_called_value_49);
        Py_DECREF(tmp_args_element_value_46);
        if (tmp_args_element_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 232;
        tmp_assign_source_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_47, tmp_args_element_value_44);
        Py_DECREF(tmp_called_value_47);
        Py_DECREF(tmp_args_element_value_44);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_51;
        PyObject *tmp_called_value_52;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_args_element_value_48;
        tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_52 == NULL)) {
            tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        tmp_called_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[11]);
        if (tmp_called_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_53 == NULL)) {
            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[92]);
        if (tmp_args_element_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 238;
        tmp_called_value_51 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_52, tmp_args_element_value_47);
        Py_DECREF(tmp_called_value_52);
        Py_DECREF(tmp_args_element_value_47);
        if (tmp_called_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_48 = MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__15__biject_to_cat();

        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 238;
        tmp_assign_source_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_51, tmp_args_element_value_48);
        Py_DECREF(tmp_called_value_51);
        Py_DECREF(tmp_args_element_value_48);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_53;
        PyObject *tmp_called_value_54;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_args_element_value_50;
        tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_54 == NULL)) {
            tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        tmp_called_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[11]);
        if (tmp_called_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_55 == NULL)) {
            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_54);

            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[92]);
        if (tmp_args_element_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_54);

            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 246;
        tmp_called_value_53 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_54, tmp_args_element_value_49);
        Py_DECREF(tmp_called_value_54);
        Py_DECREF(tmp_args_element_value_49);
        if (tmp_called_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_50 = MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__16__transform_to_cat();

        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 246;
        tmp_assign_source_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_53, tmp_args_element_value_50);
        Py_DECREF(tmp_called_value_53);
        Py_DECREF(tmp_args_element_value_50);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_55;
        PyObject *tmp_called_value_56;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_args_element_value_52;
        tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_56 == NULL)) {
            tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        tmp_called_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[11]);
        if (tmp_called_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_57 == NULL)) {
            tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_56);

            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[95]);
        if (tmp_args_element_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_56);

            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 254;
        tmp_called_value_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_56, tmp_args_element_value_51);
        Py_DECREF(tmp_called_value_56);
        Py_DECREF(tmp_args_element_value_51);
        if (tmp_called_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_52 = MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__17__biject_to_stack();

        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 254;
        tmp_assign_source_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_55, tmp_args_element_value_52);
        Py_DECREF(tmp_called_value_55);
        Py_DECREF(tmp_args_element_value_52);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_57;
        PyObject *tmp_called_value_58;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_args_element_value_54;
        tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_58 == NULL)) {
            tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto frame_exception_exit_1;
        }
        tmp_called_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[11]);
        if (tmp_called_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_59 == NULL)) {
            tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_58);

            exception_lineno = 261;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[95]);
        if (tmp_args_element_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_58);

            exception_lineno = 261;

            goto frame_exception_exit_1;
        }
        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 261;
        tmp_called_value_57 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_58, tmp_args_element_value_53);
        Py_DECREF(tmp_called_value_58);
        Py_DECREF(tmp_args_element_value_53);
        if (tmp_called_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_54 = MAKE_FUNCTION_torch$distributions$constraint_registry$$$function__18__transform_to_stack();

        frame_73aa7dd26466d4af11fc1b6922385d54->m_frame.f_lineno = 261;
        tmp_assign_source_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_57, tmp_args_element_value_54);
        Py_DECREF(tmp_called_value_57);
        Py_DECREF(tmp_args_element_value_54);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_32);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_73aa7dd26466d4af11fc1b6922385d54, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_73aa7dd26466d4af11fc1b6922385d54->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_73aa7dd26466d4af11fc1b6922385d54, exception_lineno);
    }



    assertFrameObject(frame_73aa7dd26466d4af11fc1b6922385d54);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torch.distributions.constraint_registry", false);

    Py_INCREF(module_torch$distributions$constraint_registry);
    return module_torch$distributions$constraint_registry;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$distributions$constraint_registry, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torch$distributions$constraint_registry", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
