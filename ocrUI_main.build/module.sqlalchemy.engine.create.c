/* Generated code for Python module 'sqlalchemy.engine.create'
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

/* The "module_sqlalchemy$engine$create" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_sqlalchemy$engine$create;
PyDictObject *moduledict_sqlalchemy$engine$create;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[176];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[176];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("sqlalchemy.engine.create"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 176; i++) {
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
void checkModuleConstants_sqlalchemy$engine$create(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 176; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_c8f765499f1eb19975090187eeae6206;
static PyCodeObject *codeobj_d835ef0e6bf84fec3bfd63652e2b3fb8;
static PyCodeObject *codeobj_f0beff206bd0db405c2275e0b5c17f42;
static PyCodeObject *codeobj_d0959dabfb0983c9f8e11b4d89c0a9e7;
static PyCodeObject *codeobj_1801734aeb2192458315c019108bc2ea;
static PyCodeObject *codeobj_ff10c3a6c0b3b317efee819edd038520;
static PyCodeObject *codeobj_91b814bfa59b6a9a154f32f6814aa9e1;
static PyCodeObject *codeobj_567569cb9a105cc7daf4ef9a7b872dd1;
static PyCodeObject *codeobj_a4cd180836b30c838bf327f70c710167;
static PyCodeObject *codeobj_77c28cd3bdac996c5231316397cecb60;
static PyCodeObject *codeobj_ff431c52098218e67808c4b6a8a00b0b;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[159]); CHECK_OBJECT(module_filename_obj);
    codeobj_c8f765499f1eb19975090187eeae6206 = MAKE_CODE_OBJECT(module_filename_obj, 805, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[160], mod_consts[160], mod_consts[161], NULL, 1, 0, 0);
    codeobj_d835ef0e6bf84fec3bfd63652e2b3fb8 = MAKE_CODE_OBJECT(module_filename_obj, 695, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[98], mod_consts[98], mod_consts[162], NULL, 1, 0, 0);
    codeobj_f0beff206bd0db405c2275e0b5c17f42 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[163], mod_consts[163], NULL, NULL, 0, 0, 0);
    codeobj_d0959dabfb0983c9f8e11b4d89c0a9e7 = MAKE_CODE_OBJECT(module_filename_obj, 624, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[51], mod_consts[51], mod_consts[164], mod_consts[165], 1, 0, 0);
    codeobj_1801734aeb2192458315c019108bc2ea = MAKE_CODE_OBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[115], mod_consts[115], mod_consts[166], NULL, 1, 32, 0);
    codeobj_ff10c3a6c0b3b317efee819edd038520 = MAKE_CODE_OBJECT(module_filename_obj, 88, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[115], mod_consts[115], mod_consts[167], NULL, 1, 0, 0);
    codeobj_91b814bfa59b6a9a154f32f6814aa9e1 = MAKE_CODE_OBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[115], mod_consts[115], mod_consts[168], NULL, 1, 0, 0);
    codeobj_567569cb9a105cc7daf4ef9a7b872dd1 = MAKE_CODE_OBJECT(module_filename_obj, 771, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[158], mod_consts[158], mod_consts[169], NULL, 2, 0, 0);
    codeobj_a4cd180836b30c838bf327f70c710167 = MAKE_CODE_OBJECT(module_filename_obj, 722, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[81], mod_consts[81], mod_consts[170], mod_consts[171], 2, 0, 0);
    codeobj_77c28cd3bdac996c5231316397cecb60 = MAKE_CODE_OBJECT(module_filename_obj, 709, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[76], mod_consts[76], mod_consts[172], mod_consts[173], 2, 0, 0);
    codeobj_ff431c52098218e67808c4b6a8a00b0b = MAKE_CODE_OBJECT(module_filename_obj, 560, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[19], mod_consts[19], mod_consts[174], mod_consts[175], 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_sqlalchemy$engine$create$$$function__3_create_engine$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__7_complex_call_helper_pos_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__8_complex_call_helper_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__5_complex_call_helper_star_list_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$create$$$function__1_create_engine(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$create$$$function__2_create_engine(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$create$$$function__3_create_engine(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$create$$$function__3_create_engine$$$function__1_pop_kwarg(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$create$$$function__3_create_engine$$$function__2_connect(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$create$$$function__3_create_engine$$$function__3_on_connect(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$create$$$function__3_create_engine$$$function__4_first_connect(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$create$$$function__4_engine_from_config(PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_sqlalchemy$engine$create$$$function__3_create_engine(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[0];
    struct Nuitka_CellObject *par_kwargs = Nuitka_Cell_New1(python_pars[1]);
    PyObject *var_strat = NULL;
    PyObject *var_u = NULL;
    PyObject *var_plugins = NULL;
    PyObject *var_entrypoint = NULL;
    PyObject *var__is_async = NULL;
    struct Nuitka_CellObject *var_dialect_cls = Nuitka_Cell_Empty();
    PyObject *var_pop_kwarg = NULL;
    PyObject *var_dialect_args = NULL;
    PyObject *var_k = NULL;
    PyObject *var_dbapi = NULL;
    PyObject *var_dbapi_args = NULL;
    PyObject *var_dbapi_meth = NULL;
    PyObject *var_enable_from_linting = NULL;
    PyObject *var_plugin = NULL;
    struct Nuitka_CellObject *var_dialect = Nuitka_Cell_Empty();
    PyObject *var_cargs_tup = NULL;
    struct Nuitka_CellObject *var_cparams = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_cargs = Nuitka_Cell_Empty();
    PyObject *var_pool = NULL;
    PyObject *var_connect = NULL;
    PyObject *var_creator = NULL;
    PyObject *var_poolclass = NULL;
    PyObject *var_pool_args = NULL;
    PyObject *var_translate = NULL;
    PyObject *var_tk = NULL;
    PyObject *var_engineclass = NULL;
    PyObject *var_engine_args = NULL;
    PyObject *var__initialize = NULL;
    struct Nuitka_CellObject *var_engine = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_do_on_connect = Nuitka_Cell_Empty();
    PyObject *var_on_connect = NULL;
    PyObject *var_builtin_on_connect = NULL;
    PyObject *var_first_connect = NULL;
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
    PyObject *tmp_for_loop_7__for_iterator = NULL;
    PyObject *tmp_for_loop_7__iter_value = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_inplace_assign_subscr_1__value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_91b814bfa59b6a9a154f32f6814aa9e1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
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
    bool tmp_result;
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
    static struct Nuitka_FrameObject *cache_frame_91b814bfa59b6a9a154f32f6814aa9e1 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_91b814bfa59b6a9a154f32f6814aa9e1)) {
        Py_XDECREF(cache_frame_91b814bfa59b6a9a154f32f6814aa9e1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_91b814bfa59b6a9a154f32f6814aa9e1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_91b814bfa59b6a9a154f32f6814aa9e1 = MAKE_FUNCTION_FRAME(codeobj_91b814bfa59b6a9a154f32f6814aa9e1, module_sqlalchemy$engine$create, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_91b814bfa59b6a9a154f32f6814aa9e1->m_type_description == NULL);
    frame_91b814bfa59b6a9a154f32f6814aa9e1 = cache_frame_91b814bfa59b6a9a154f32f6814aa9e1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_91b814bfa59b6a9a154f32f6814aa9e1);
    assert(Py_REFCNT(frame_91b814bfa59b6a9a154f32f6814aa9e1) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        tmp_key_value_1 = mod_consts[0];
        CHECK_OBJECT(Nuitka_Cell_GET(par_kwargs));
        tmp_dict_arg_value_1 = Nuitka_Cell_GET(par_kwargs);
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_1, tmp_key_value_1);
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
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        CHECK_OBJECT(Nuitka_Cell_GET(par_kwargs));
        tmp_dict_arg_value_2 = Nuitka_Cell_GET(par_kwargs);
        tmp_key_value_2 = mod_consts[0];
        tmp_assign_source_1 = DICT_POP2(tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        assert(var_strat == NULL);
        var_strat = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_strat);
        tmp_cmp_expr_left_1 = var_strat;
        tmp_cmp_expr_right_1 = mod_consts[1];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
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
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_url);
        tmp_tuple_element_1 = par_url;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(Nuitka_Cell_GET(par_kwargs));
        tmp_dircall_arg3_1 = Nuitka_Cell_GET(par_kwargs);
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[5];
        CHECK_OBJECT(var_strat);
        tmp_mod_expr_right_1 = var_strat;
        tmp_args_element_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 542;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 542;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 542;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ocooooocoooooooococcooooooooooccooo";
        goto frame_exception_exit_1;
    }
    branch_end_2:;
    branch_no_1:;
    {
        PyObject *tmp_dict_arg_value_3;
        PyObject *tmp_key_value_3;
        PyObject *tmp_default_value_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_kwargs));
        tmp_dict_arg_value_3 = Nuitka_Cell_GET(par_kwargs);
        tmp_key_value_3 = mod_consts[6];
        tmp_default_value_1 = Py_None;
        tmp_capi_result_1 = DICT_POP3(tmp_dict_arg_value_3, tmp_key_value_3, tmp_default_value_1);
        assert(!(tmp_capi_result_1 == NULL));
        Py_DECREF(tmp_capi_result_1);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_url);
        tmp_args_element_value_2 = par_url;
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 547;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[8], tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        assert(var_u == NULL);
        var_u = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(var_u);
        tmp_called_instance_2 = var_u;
        CHECK_OBJECT(Nuitka_Cell_GET(par_kwargs));
        tmp_args_element_value_3 = Nuitka_Cell_GET(par_kwargs);
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 549;
        tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[9], tmp_args_element_value_3);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
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
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            exception_lineno = 549;
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
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            exception_lineno = 549;
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
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            exception_lineno = 549;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_6;
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

                    type_description_1 = "ocooooocoooooooococcooooooooooccooo";
                    exception_lineno = 549;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[10];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            exception_lineno = 549;
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
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_u;
            assert(old != NULL);
            var_u = tmp_assign_source_7;
            Py_INCREF(var_u);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        assert(var_plugins == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_plugins = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = Nuitka_Cell_GET(par_kwargs);
            PyCell_SET(par_kwargs, tmp_assign_source_9);
            Py_INCREF(tmp_assign_source_9);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(var_u);
        tmp_called_instance_3 = var_u;
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 551;
        tmp_assign_source_10 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[11]);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        assert(var_entrypoint == NULL);
        var_entrypoint = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(Nuitka_Cell_GET(par_kwargs));
        tmp_expression_value_2 = Nuitka_Cell_GET(par_kwargs);
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[12]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 552;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[13]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        assert(var__is_async == NULL);
        var__is_async = tmp_assign_source_11;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        CHECK_OBJECT(var__is_async);
        tmp_truth_name_1 = CHECK_IF_TRUE(var__is_async);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
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
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_entrypoint);
        tmp_called_instance_4 = var_entrypoint;
        CHECK_OBJECT(var_u);
        tmp_args_element_value_4 = var_u;
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 554;
        tmp_assign_source_12 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[14], tmp_args_element_value_4);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_dialect_cls) == NULL);
        PyCell_SET(var_dialect_cls, tmp_assign_source_12);

    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(var_entrypoint);
        tmp_called_instance_5 = var_entrypoint;
        CHECK_OBJECT(var_u);
        tmp_args_element_value_5 = var_u;
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 556;
        tmp_assign_source_13 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[15], tmp_args_element_value_5);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_dialect_cls) == NULL);
        PyCell_SET(var_dialect_cls, tmp_assign_source_13);

    }
    branch_end_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(Nuitka_Cell_GET(par_kwargs));
        tmp_expression_value_3 = Nuitka_Cell_GET(par_kwargs);
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[12]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 558;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_3, mod_consts[16]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 558;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_defaults_1;
        PyObject *tmp_annotations_1;
        struct Nuitka_CellObject *tmp_closure_1[2];
        tmp_defaults_1 = mod_consts[17];
        tmp_annotations_1 = DICT_COPY(mod_consts[18]);
        Py_INCREF(tmp_defaults_1);

        tmp_closure_1[0] = var_dialect_cls;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_kwargs;
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_14 = MAKE_FUNCTION_sqlalchemy$engine$create$$$function__3_create_engine$$$function__1_pop_kwarg(tmp_defaults_1, tmp_annotations_1, tmp_closure_1);

        assert(var_pop_kwarg == NULL);
        var_pop_kwarg = tmp_assign_source_14;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(Nuitka_Cell_GET(par_kwargs));
        tmp_expression_value_4 = Nuitka_Cell_GET(par_kwargs);
        tmp_assign_source_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[12]);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 567;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        assert(var_pop_kwarg == NULL);
        var_pop_kwarg = tmp_assign_source_15;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_DICT_EMPTY();
        assert(var_dialect_args == NULL);
        var_dialect_args = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_6;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_dialect_cls));
        tmp_args_element_value_6 = Nuitka_Cell_GET(var_dialect_cls);
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 571;
        tmp_iter_arg_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[22], tmp_args_element_value_6);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
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
                type_description_1 = "ocooooocoooooooococcooooooooooccooo";
                exception_lineno = 571;
                goto try_except_handler_4;
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
            PyObject *old = var_k;
            var_k = tmp_assign_source_19;
            Py_INCREF(var_k);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_k);
        tmp_cmp_expr_left_2 = var_k;
        if (Nuitka_Cell_GET(par_kwargs) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 572;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_4;
        }

        tmp_cmp_expr_right_2 = Nuitka_Cell_GET(par_kwargs);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_5 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        if (var_pop_kwarg == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 573;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_4;
        }

        tmp_called_value_4 = var_pop_kwarg;
        CHECK_OBJECT(var_k);
        tmp_args_element_value_7 = var_k;
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 573;
        tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_7);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 573;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_4;
        }
        if (var_dialect_args == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 573;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_4;
        }

        tmp_ass_subscribed_1 = var_dialect_args;
        CHECK_OBJECT(var_k);
        tmp_ass_subscript_1 = var_k;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 573;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_4;
        }
    }
    branch_no_5:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 571;
        type_description_1 = "ocooooocoooooooococcooooooooooccooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
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
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        if (Nuitka_Cell_GET(par_kwargs) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 575;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = Nuitka_Cell_GET(par_kwargs);
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[12]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 575;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 575;
        tmp_assign_source_20 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_5, mod_consts[25]);

        Py_DECREF(tmp_called_value_5);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 575;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        assert(var_dbapi == NULL);
        var_dbapi = tmp_assign_source_20;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_dbapi);
        tmp_cmp_expr_left_3 = var_dbapi;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_6 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_DICT_EMPTY();
        assert(var_dbapi_args == NULL);
        var_dbapi_args = tmp_assign_source_21;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_6;
        tmp_cmp_expr_left_4 = mod_consts[26];
        CHECK_OBJECT(Nuitka_Cell_GET(var_dialect_cls));
        tmp_expression_value_6 = Nuitka_Cell_GET(var_dialect_cls);
        tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_6);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 579;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 579;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
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
        PyObject *tmp_assign_source_22;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(Nuitka_Cell_GET(var_dialect_cls));
        tmp_expression_value_7 = Nuitka_Cell_GET(var_dialect_cls);
        tmp_assign_source_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[26]);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        assert(var_dbapi_meth == NULL);
        var_dbapi_meth = tmp_assign_source_22;
    }
    goto branch_end_7;
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_attribute_value_1;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_10;
        int tmp_truth_name_3;
        CHECK_OBJECT(Nuitka_Cell_GET(var_dialect_cls));
        tmp_expression_value_8 = Nuitka_Cell_GET(var_dialect_cls);
        tmp_attribute_value_1 = mod_consts[27];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_8, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 582;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 582;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 582;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[29]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 582;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_dialect_cls));
        tmp_expression_value_10 = Nuitka_Cell_GET(var_dialect_cls);
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[27]);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 583;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 582;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 582;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 582;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        tmp_condition_result_8 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_8 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_args_element_value_10;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[30]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = mod_consts[31];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(Nuitka_Cell_GET(var_dialect_cls));
            tmp_format_value_1 = Nuitka_Cell_GET(var_dialect_cls);
            tmp_format_spec_1 = mod_consts[32];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 586;
                type_description_1 = "ocooooocoooooooococcooooooooooccooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[33];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_9 = PyUnicode_Join(mod_consts[32], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 586;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = mod_consts[34];
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 585;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(Nuitka_Cell_GET(var_dialect_cls));
        tmp_expression_value_12 = Nuitka_Cell_GET(var_dialect_cls);
        tmp_assign_source_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[27]);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 593;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        assert(var_dbapi_meth == NULL);
        var_dbapi_meth = tmp_assign_source_23;
    }
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(Nuitka_Cell_GET(var_dialect_cls));
        tmp_expression_value_13 = Nuitka_Cell_GET(var_dialect_cls);
        tmp_assign_source_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[26]);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 595;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        assert(var_dbapi_meth == NULL);
        var_dbapi_meth = tmp_assign_source_24;
    }
    branch_end_8:;
    branch_end_7:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_11;
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dbapi_meth);
        tmp_args_element_value_11 = var_dbapi_meth;
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 597;
        tmp_iter_arg_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_7, mod_consts[35], tmp_args_element_value_11);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_25 = MAKE_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_25;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_26 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_26 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ocooooocoooooooococcooooooooooccooo";
                exception_lineno = 597;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_27 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_27;
            Py_INCREF(var_k);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_k);
        tmp_cmp_expr_left_5 = var_k;
        if (Nuitka_Cell_GET(par_kwargs) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 598;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_5;
        }

        tmp_cmp_expr_right_5 = Nuitka_Cell_GET(par_kwargs);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 598;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_9 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        if (var_pop_kwarg == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 599;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_5;
        }

        tmp_called_value_8 = var_pop_kwarg;
        CHECK_OBJECT(var_k);
        tmp_args_element_value_12 = var_k;
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 599;
        tmp_ass_subvalue_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_12);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 599;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_5;
        }
        if (var_dbapi_args == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[36]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 599;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_5;
        }

        tmp_ass_subscribed_2 = var_dbapi_args;
        CHECK_OBJECT(var_k);
        tmp_ass_subscript_2 = var_k;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 599;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_5;
        }
    }
    branch_no_9:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 597;
        type_description_1 = "ocooooocoooooooococcooooooooooccooo";
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        CHECK_OBJECT(var_dbapi_meth);
        tmp_dircall_arg1_2 = var_dbapi_meth;
        if (var_dbapi_args == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[36]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 600;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg2_2 = var_dbapi_args;
        Py_INCREF(tmp_dircall_arg1_2);
        Py_INCREF(tmp_dircall_arg2_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2};
            tmp_assign_source_28 = impl___main__$$$function__8_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 600;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_dbapi;
            assert(old != NULL);
            var_dbapi = tmp_assign_source_28;
            Py_DECREF(old);
        }

    }
    branch_no_6:;
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT(var_dbapi);
        tmp_ass_subvalue_3 = var_dbapi;
        if (var_dialect_args == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 602;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_3 = var_dialect_args;
        tmp_ass_subscript_3 = mod_consts[27];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 602;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_15;
        if (var_dialect_args == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 604;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_14 = var_dialect_args;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[37]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 604;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = mod_consts[38];
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 604;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[40]);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 604;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 604;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 604;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_16;
        if (Nuitka_Cell_GET(par_kwargs) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 605;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_16 = Nuitka_Cell_GET(par_kwargs);
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[12]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 605;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 605;
        tmp_assign_source_29 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_10, mod_consts[41]);

        Py_DECREF(tmp_called_value_10);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 605;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        assert(var_enable_from_linting == NULL);
        var_enable_from_linting = tmp_assign_source_29;
    }
    {
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_4;
        CHECK_OBJECT(var_enable_from_linting);
        tmp_truth_name_4 = CHECK_IF_TRUE(var_enable_from_linting);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 606;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_30;
        if (var_dialect_args == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 607;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_30 = var_dialect_args;
        assert(tmp_inplace_assign_subscr_1__target == NULL);
        Py_INCREF(tmp_assign_source_30);
        tmp_inplace_assign_subscr_1__target = tmp_assign_source_30;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
        tmp_expression_value_17 = tmp_inplace_assign_subscr_1__target;
        tmp_subscript_value_1 = mod_consts[38];
        tmp_assign_source_31 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_1);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 607;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_6;
        }
        assert(tmp_inplace_assign_subscr_1__value == NULL);
        tmp_inplace_assign_subscr_1__value = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_ibitxor_expr_left_1;
        PyObject *tmp_ibitxor_expr_right_1;
        PyObject *tmp_expression_value_18;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
        tmp_ibitxor_expr_left_1 = tmp_inplace_assign_subscr_1__value;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 607;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_6;
        }
        tmp_ibitxor_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[42]);
        if (tmp_ibitxor_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 607;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_6;
        }
        tmp_result = INPLACE_OPERATION_BITXOR_OBJECT_OBJECT(&tmp_ibitxor_expr_left_1, tmp_ibitxor_expr_right_1);
        Py_DECREF(tmp_ibitxor_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 607;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_32 = tmp_ibitxor_expr_left_1;
        tmp_inplace_assign_subscr_1__value = tmp_assign_source_32;

    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
        tmp_ass_subvalue_4 = tmp_inplace_assign_subscr_1__value;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
        tmp_ass_subscribed_4 = tmp_inplace_assign_subscr_1__target;
        tmp_ass_subscript_4 = mod_consts[38];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 607;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_6;
        }
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
    Py_DECREF(tmp_inplace_assign_subscr_1__target);
    tmp_inplace_assign_subscr_1__target = NULL;
    Py_XDECREF(tmp_inplace_assign_subscr_1__value);
    tmp_inplace_assign_subscr_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
    Py_DECREF(tmp_inplace_assign_subscr_1__target);
    tmp_inplace_assign_subscr_1__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
    Py_DECREF(tmp_inplace_assign_subscr_1__value);
    tmp_inplace_assign_subscr_1__value = NULL;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_iter_arg_4;
        CHECK_OBJECT(var_plugins);
        tmp_iter_arg_4 = var_plugins;
        tmp_assign_source_33 = MAKE_ITERATOR(tmp_iter_arg_4);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 609;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_3__for_iterator == NULL);
        tmp_for_loop_3__for_iterator = tmp_assign_source_33;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_34;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_34 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_34 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ocooooocoooooooococcooooooooooccooo";
                exception_lineno = 609;
                goto try_except_handler_7;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_34;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_35;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_35 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_plugin;
            var_plugin = tmp_assign_source_35;
            Py_INCREF(var_plugin);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        CHECK_OBJECT(var_plugin);
        tmp_expression_value_19 = var_plugin;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[43]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_7;
        }
        if (Nuitka_Cell_GET(var_dialect_cls) == NULL) {
            Py_DECREF(tmp_called_value_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 610;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_7;
        }

        tmp_args_element_value_15 = Nuitka_Cell_GET(var_dialect_cls);
        if (var_dialect_args == NULL) {
            Py_DECREF(tmp_called_value_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 610;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_7;
        }

        tmp_args_element_value_16 = var_dialect_args;
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 610;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_11, call_args);
        }

        Py_DECREF(tmp_called_value_11);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_5);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 609;
        type_description_1 = "ocooooocoooooooococcooooooooooccooo";
        goto try_except_handler_7;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_dircall_arg1_3;
        PyObject *tmp_dircall_arg2_3;
        if (Nuitka_Cell_GET(var_dialect_cls) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 613;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_3 = Nuitka_Cell_GET(var_dialect_cls);
        if (var_dialect_args == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 613;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg2_3 = var_dialect_args;
        Py_INCREF(tmp_dircall_arg1_3);
        Py_INCREF(tmp_dircall_arg2_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3};
            tmp_assign_source_36 = impl___main__$$$function__8_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 613;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_dialect) == NULL);
        PyCell_SET(var_dialect, tmp_assign_source_36);

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_value_17;
        CHECK_OBJECT(Nuitka_Cell_GET(var_dialect));
        tmp_called_instance_8 = Nuitka_Cell_GET(var_dialect);
        CHECK_OBJECT(var_u);
        tmp_args_element_value_17 = var_u;
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 616;
        tmp_iter_arg_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_8, mod_consts[45], tmp_args_element_value_17);
        if (tmp_iter_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 616;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_8;
        }
        tmp_assign_source_37 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 616;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_8;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_37;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_38 = UNPACK_NEXT(tmp_unpack_4, 0, 2);
        if (tmp_assign_source_38 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            exception_lineno = 616;
            goto try_except_handler_9;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_39 = UNPACK_NEXT(tmp_unpack_5, 1, 2);
        if (tmp_assign_source_39 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            exception_lineno = 616;
            goto try_except_handler_9;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_39;
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

                    type_description_1 = "ocooooocoooooooococcooooooooooccooo";
                    exception_lineno = 616;
                    goto try_except_handler_9;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[46];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            exception_lineno = 616;
            goto try_except_handler_9;
        }
    }
    goto try_end_7;
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

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_8;
    // End of try:
    try_end_7:;
    goto try_end_8;
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

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_40;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_40 = tmp_tuple_unpack_2__element_1;
        assert(var_cargs_tup == NULL);
        Py_INCREF(tmp_assign_source_40);
        var_cargs_tup = tmp_assign_source_40;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_41;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_41 = tmp_tuple_unpack_2__element_2;
        assert(Nuitka_Cell_GET(var_cparams) == NULL);
        Py_INCREF(tmp_assign_source_41);
        PyCell_SET(var_cparams, tmp_assign_source_41);

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_called_value_13;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        CHECK_OBJECT(Nuitka_Cell_GET(var_cparams));
        tmp_expression_value_20 = Nuitka_Cell_GET(var_cparams);
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[47]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 617;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        if (var_pop_kwarg == NULL) {
            Py_DECREF(tmp_called_value_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 617;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }

        tmp_called_value_13 = var_pop_kwarg;
        tmp_call_arg_element_1 = mod_consts[48];
        tmp_call_arg_element_2 = MAKE_DICT_EMPTY();
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 617;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
            tmp_args_element_value_18 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_13, call_args);
        }

        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 617;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 617;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_18);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 617;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_list_arg_1;
        CHECK_OBJECT(var_cargs_tup);
        tmp_list_arg_1 = var_cargs_tup;
        tmp_assign_source_42 = MAKE_LIST(tmp_list_arg_1);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 618;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_cargs) == NULL);
        PyCell_SET(var_cargs, tmp_assign_source_42);

    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_14;
        if (var_pop_kwarg == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 621;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }

        tmp_called_value_14 = var_pop_kwarg;
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 621;
        tmp_assign_source_43 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_14, mod_consts[49]);

        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 621;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        assert(var_pool == NULL);
        var_pool = tmp_assign_source_43;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(var_pool);
        tmp_cmp_expr_left_6 = var_pool;
        tmp_cmp_expr_right_6 = Py_None;
        tmp_condition_result_11 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_defaults_2;
        PyObject *tmp_annotations_2;
        struct Nuitka_CellObject *tmp_closure_2[3];
        tmp_defaults_2 = mod_consts[17];
        tmp_annotations_2 = DICT_COPY(mod_consts[50]);
        Py_INCREF(tmp_defaults_2);

        tmp_closure_2[0] = var_cargs;
        Py_INCREF(tmp_closure_2[0]);
        tmp_closure_2[1] = var_cparams;
        Py_INCREF(tmp_closure_2[1]);
        tmp_closure_2[2] = var_dialect;
        Py_INCREF(tmp_closure_2[2]);

        tmp_assign_source_44 = MAKE_FUNCTION_sqlalchemy$engine$create$$$function__3_create_engine$$$function__2_connect(tmp_defaults_2, tmp_annotations_2, tmp_closure_2);

        assert(var_connect == NULL);
        var_connect = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        if (var_pop_kwarg == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 638;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }

        tmp_called_value_15 = var_pop_kwarg;
        tmp_args_element_value_19 = mod_consts[53];
        CHECK_OBJECT(var_connect);
        tmp_args_element_value_20 = var_connect;
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 638;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20};
            tmp_assign_source_45 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_15, call_args);
        }

        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 638;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        assert(var_creator == NULL);
        var_creator = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_value_16;
        if (var_pop_kwarg == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 640;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }

        tmp_called_value_16 = var_pop_kwarg;
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 640;
        tmp_assign_source_46 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_16, mod_consts[54]);

        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 640;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        assert(var_poolclass == NULL);
        var_poolclass = tmp_assign_source_46;
    }
    {
        bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(var_poolclass);
        tmp_cmp_expr_left_7 = var_poolclass;
        tmp_cmp_expr_right_7 = Py_None;
        tmp_condition_result_12 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_args_element_value_21;
        CHECK_OBJECT(Nuitka_Cell_GET(var_dialect));
        tmp_called_instance_9 = Nuitka_Cell_GET(var_dialect);
        CHECK_OBJECT(var_u);
        tmp_args_element_value_21 = var_u;
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 642;
        tmp_assign_source_47 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_9, mod_consts[55], tmp_args_element_value_21);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 642;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_poolclass;
            assert(old != NULL);
            var_poolclass = tmp_assign_source_47;
            Py_DECREF(old);
        }

    }
    branch_no_12:;
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[56];
        CHECK_OBJECT(Nuitka_Cell_GET(var_dialect));
        tmp_dict_value_1 = Nuitka_Cell_GET(var_dialect);
        tmp_assign_source_48 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_48, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        assert(var_pool_args == NULL);
        var_pool_args = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = DICT_COPY(mod_consts[57]);
        assert(var_translate == NULL);
        var_translate = tmp_assign_source_49;
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_iter_arg_6;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_args_element_value_22;
        tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_instance_10 == NULL)) {
            tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 657;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_poolclass);
        tmp_args_element_value_22 = var_poolclass;
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 657;
        tmp_iter_arg_6 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_10, mod_consts[22], tmp_args_element_value_22);
        if (tmp_iter_arg_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 657;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_50 = MAKE_ITERATOR(tmp_iter_arg_6);
        Py_DECREF(tmp_iter_arg_6);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 657;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_4__for_iterator == NULL);
        tmp_for_loop_4__for_iterator = tmp_assign_source_50;
    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_51;
        CHECK_OBJECT(tmp_for_loop_4__for_iterator);
        tmp_next_source_4 = tmp_for_loop_4__for_iterator;
        tmp_assign_source_51 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_51 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ocooooocoooooooococcooooooooooccooo";
                exception_lineno = 657;
                goto try_except_handler_10;
            }
        }

        {
            PyObject *old = tmp_for_loop_4__iter_value;
            tmp_for_loop_4__iter_value = tmp_assign_source_51;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_52;
        CHECK_OBJECT(tmp_for_loop_4__iter_value);
        tmp_assign_source_52 = tmp_for_loop_4__iter_value;
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_52;
            Py_INCREF(var_k);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        if (var_translate == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 658;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_10;
        }

        tmp_expression_value_21 = var_translate;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[59]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 658;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_10;
        }
        CHECK_OBJECT(var_k);
        tmp_args_element_value_23 = var_k;
        CHECK_OBJECT(var_k);
        tmp_args_element_value_24 = var_k;
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 658;
        {
            PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24};
            tmp_assign_source_53 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_17, call_args);
        }

        Py_DECREF(tmp_called_value_17);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 658;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_10;
        }
        {
            PyObject *old = var_tk;
            var_tk = tmp_assign_source_53;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_13;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        CHECK_OBJECT(var_tk);
        tmp_cmp_expr_left_8 = var_tk;
        if (Nuitka_Cell_GET(par_kwargs) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 659;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_10;
        }

        tmp_cmp_expr_right_8 = Nuitka_Cell_GET(par_kwargs);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_8, tmp_cmp_expr_left_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 659;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_10;
        }
        tmp_condition_result_13 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_called_value_18;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        if (var_pop_kwarg == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 660;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_10;
        }

        tmp_called_value_18 = var_pop_kwarg;
        CHECK_OBJECT(var_tk);
        tmp_args_element_value_25 = var_tk;
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 660;
        tmp_ass_subvalue_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_25);
        if (tmp_ass_subvalue_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 660;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_10;
        }
        if (var_pool_args == NULL) {
            Py_DECREF(tmp_ass_subvalue_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 660;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_10;
        }

        tmp_ass_subscribed_5 = var_pool_args;
        CHECK_OBJECT(var_k);
        tmp_ass_subscript_5 = var_k;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
        Py_DECREF(tmp_ass_subvalue_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 660;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_10;
        }
    }
    branch_no_13:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 657;
        type_description_1 = "ocooooocoooooooococcooooooooooccooo";
        goto try_except_handler_10;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_9;
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

    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_iter_arg_7;
        CHECK_OBJECT(var_plugins);
        tmp_iter_arg_7 = var_plugins;
        tmp_assign_source_54 = MAKE_ITERATOR(tmp_iter_arg_7);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 662;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_5__for_iterator == NULL);
        tmp_for_loop_5__for_iterator = tmp_assign_source_54;
    }
    // Tried code:
    loop_start_5:;
    {
        PyObject *tmp_next_source_5;
        PyObject *tmp_assign_source_55;
        CHECK_OBJECT(tmp_for_loop_5__for_iterator);
        tmp_next_source_5 = tmp_for_loop_5__for_iterator;
        tmp_assign_source_55 = ITERATOR_NEXT(tmp_next_source_5);
        if (tmp_assign_source_55 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_5;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ocooooocoooooooococcooooooooooccooo";
                exception_lineno = 662;
                goto try_except_handler_11;
            }
        }

        {
            PyObject *old = tmp_for_loop_5__iter_value;
            tmp_for_loop_5__iter_value = tmp_assign_source_55;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_56;
        CHECK_OBJECT(tmp_for_loop_5__iter_value);
        tmp_assign_source_56 = tmp_for_loop_5__iter_value;
        {
            PyObject *old = var_plugin;
            var_plugin = tmp_assign_source_56;
            Py_INCREF(var_plugin);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        CHECK_OBJECT(var_plugin);
        tmp_expression_value_22 = var_plugin;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[61]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 663;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_11;
        }
        if (var_poolclass == NULL) {
            Py_DECREF(tmp_called_value_19);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 663;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_11;
        }

        tmp_args_element_value_26 = var_poolclass;
        if (var_pool_args == NULL) {
            Py_DECREF(tmp_called_value_19);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 663;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_11;
        }

        tmp_args_element_value_27 = var_pool_args;
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 663;
        {
            PyObject *call_args[] = {tmp_args_element_value_26, tmp_args_element_value_27};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_19, call_args);
        }

        Py_DECREF(tmp_called_value_19);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 663;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_11;
        }
        Py_DECREF(tmp_call_result_7);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 662;
        type_description_1 = "ocooooocoooooooococcooooooooooccooo";
        goto try_except_handler_11;
    }
    goto loop_start_5;
    loop_end_5:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
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
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    Py_XDECREF(tmp_for_loop_5__iter_value);
    tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_5__for_iterator);
    Py_DECREF(tmp_for_loop_5__for_iterator);
    tmp_for_loop_5__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_dircall_arg1_4;
        PyObject *tmp_dircall_arg2_4;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_dircall_arg3_2;
        if (var_poolclass == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 665;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_4 = var_poolclass;
        CHECK_OBJECT(var_creator);
        tmp_tuple_element_3 = var_creator;
        tmp_dircall_arg2_4 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_4, 0, tmp_tuple_element_3);
        if (var_pool_args == NULL) {
            Py_DECREF(tmp_dircall_arg2_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 665;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_2 = var_pool_args;
        Py_INCREF(tmp_dircall_arg1_4);
        Py_INCREF(tmp_dircall_arg3_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4, tmp_dircall_arg2_4, tmp_dircall_arg3_2};
            tmp_assign_source_57 = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 665;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_pool;
            assert(old != NULL);
            var_pool = tmp_assign_source_57;
            Py_DECREF(old);
        }

    }
    goto branch_end_11;
    branch_no_11:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(Nuitka_Cell_GET(var_dialect));
        tmp_assattr_value_1 = Nuitka_Cell_GET(var_dialect);
        CHECK_OBJECT(var_pool);
        tmp_assattr_target_1 = var_pool;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[63], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_11:;
    {
        bool tmp_condition_result_14;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_20;
        if (var_pop_kwarg == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 670;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }

        tmp_called_value_20 = var_pop_kwarg;
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 670;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_20, mod_consts[64]);

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 670;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 670;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_14 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_instance_11;
        tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_11 == NULL)) {
            tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 671;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 671;
        tmp_raise_type_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_11,
            mod_consts[4],
            PyTuple_GET_ITEM(mod_consts[65], 0)
        );

        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 671;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 671;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ocooooocoooooooococcooooooooooccooo";
        goto frame_exception_exit_1;
    }
    branch_no_14:;
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_expression_value_23;
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 676;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[67]);
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 676;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        assert(var_engineclass == NULL);
        var_engineclass = tmp_assign_source_58;
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = MAKE_DICT_EMPTY();
        assert(var_engine_args == NULL);
        var_engine_args = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_iter_arg_8;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_args_element_value_28;
        tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_instance_12 == NULL)) {
            tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_instance_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 679;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_engineclass);
        tmp_args_element_value_28 = var_engineclass;
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 679;
        tmp_iter_arg_8 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_12, mod_consts[22], tmp_args_element_value_28);
        if (tmp_iter_arg_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 679;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_60 = MAKE_ITERATOR(tmp_iter_arg_8);
        Py_DECREF(tmp_iter_arg_8);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 679;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_6__for_iterator == NULL);
        tmp_for_loop_6__for_iterator = tmp_assign_source_60;
    }
    // Tried code:
    loop_start_6:;
    {
        PyObject *tmp_next_source_6;
        PyObject *tmp_assign_source_61;
        CHECK_OBJECT(tmp_for_loop_6__for_iterator);
        tmp_next_source_6 = tmp_for_loop_6__for_iterator;
        tmp_assign_source_61 = ITERATOR_NEXT(tmp_next_source_6);
        if (tmp_assign_source_61 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_6;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ocooooocoooooooococcooooooooooccooo";
                exception_lineno = 679;
                goto try_except_handler_12;
            }
        }

        {
            PyObject *old = tmp_for_loop_6__iter_value;
            tmp_for_loop_6__iter_value = tmp_assign_source_61;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_62;
        CHECK_OBJECT(tmp_for_loop_6__iter_value);
        tmp_assign_source_62 = tmp_for_loop_6__iter_value;
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_62;
            Py_INCREF(var_k);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        CHECK_OBJECT(var_k);
        tmp_cmp_expr_left_9 = var_k;
        if (Nuitka_Cell_GET(par_kwargs) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 680;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_12;
        }

        tmp_cmp_expr_right_9 = Nuitka_Cell_GET(par_kwargs);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_9, tmp_cmp_expr_left_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 680;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_12;
        }
        tmp_condition_result_15 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_called_value_21;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        if (var_pop_kwarg == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 681;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_12;
        }

        tmp_called_value_21 = var_pop_kwarg;
        CHECK_OBJECT(var_k);
        tmp_args_element_value_29 = var_k;
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 681;
        tmp_ass_subvalue_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_29);
        if (tmp_ass_subvalue_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 681;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_12;
        }
        if (var_engine_args == NULL) {
            Py_DECREF(tmp_ass_subvalue_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 681;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_12;
        }

        tmp_ass_subscribed_6 = var_engine_args;
        CHECK_OBJECT(var_k);
        tmp_ass_subscript_6 = var_k;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
        Py_DECREF(tmp_ass_subvalue_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 681;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_12;
        }
    }
    branch_no_15:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 679;
        type_description_1 = "ocooooocoooooooococcooooooooooccooo";
        goto try_except_handler_12;
    }
    goto loop_start_6;
    loop_end_6:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
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
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    Py_XDECREF(tmp_for_loop_6__iter_value);
    tmp_for_loop_6__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_6__for_iterator);
    Py_DECREF(tmp_for_loop_6__for_iterator);
    tmp_for_loop_6__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_24;
        if (Nuitka_Cell_GET(par_kwargs) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 685;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_24 = Nuitka_Cell_GET(par_kwargs);
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[12]);
        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 685;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 685;
        tmp_assign_source_63 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_22, mod_consts[69]);

        Py_DECREF(tmp_called_value_22);
        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 685;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        assert(var__initialize == NULL);
        var__initialize = tmp_assign_source_63;
    }
    {
        nuitka_bool tmp_condition_result_16;
        int tmp_truth_name_5;
        if (Nuitka_Cell_GET(par_kwargs) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 688;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_5 = CHECK_IF_TRUE(Nuitka_Cell_GET(par_kwargs));
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 688;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_16 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        tmp_mod_expr_left_2 = mod_consts[70];
        tmp_str_arg_value_1 = mod_consts[71];
        {
            PyObject *tmp_assign_source_64;
            PyObject *tmp_iter_arg_9;
            if (Nuitka_Cell_GET(par_kwargs) == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 695;
                type_description_1 = "ocooooocoooooooococcooooooooooccooo";
                goto frame_exception_exit_1;
            }

            tmp_iter_arg_9 = Nuitka_Cell_GET(par_kwargs);
            tmp_assign_source_64 = MAKE_ITERATOR(tmp_iter_arg_9);
            if (tmp_assign_source_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 695;
                type_description_1 = "ocooooocoooooooococcooooooooooccooo";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_64;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_3[1];

            tmp_closure_3[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_iterable_value_1 = MAKE_GENERATOR_sqlalchemy$engine$create$$$function__3_create_engine$$$genexpr__1_genexpr(tmp_closure_3);

            goto try_return_handler_13;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_tuple_element_4 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 695;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_expression_value_25;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_expression_value_29;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(Nuitka_Cell_GET(var_dialect));
            tmp_expression_value_26 = Nuitka_Cell_GET(var_dialect);
            tmp_expression_value_25 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_26);
            if (tmp_expression_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 696;
                type_description_1 = "ocooooocoooooooococcooooooooooccooo";
                goto tuple_build_exception_2;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[72]);
            Py_DECREF(tmp_expression_value_25);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 696;
                type_description_1 = "ocooooocoooooooococcooooooooooccooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_4);
            if (var_pool == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[73]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 697;
                type_description_1 = "ocooooocoooooooococcooooooooooccooo";
                goto tuple_build_exception_2;
            }

            tmp_expression_value_28 = var_pool;
            tmp_expression_value_27 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_28);
            if (tmp_expression_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 697;
                type_description_1 = "ocooooocoooooooococcooooooooooccooo";
                goto tuple_build_exception_2;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[72]);
            Py_DECREF(tmp_expression_value_27);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 697;
                type_description_1 = "ocooooocoooooooococcooooooooooccooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(var_engineclass);
            tmp_expression_value_29 = var_engineclass;
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[72]);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 698;
                type_description_1 = "ocooooocoooooooococcooooooooooccooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 3, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 695;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 689;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 689;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ocooooocoooooooococcooooooooooccooo";
        goto frame_exception_exit_1;
    }
    branch_no_16:;
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_dircall_arg1_5;
        PyObject *tmp_dircall_arg2_5;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_dircall_arg3_3;
        CHECK_OBJECT(var_engineclass);
        tmp_dircall_arg1_5 = var_engineclass;
        if (var_pool == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[73]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 702;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_5 = var_pool;
        tmp_dircall_arg2_5 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_5, 0, tmp_tuple_element_5);
        CHECK_OBJECT(Nuitka_Cell_GET(var_dialect));
        tmp_tuple_element_5 = Nuitka_Cell_GET(var_dialect);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_5, 1, tmp_tuple_element_5);
        CHECK_OBJECT(var_u);
        tmp_tuple_element_5 = var_u;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_5, 2, tmp_tuple_element_5);
        if (var_engine_args == NULL) {
            Py_DECREF(tmp_dircall_arg2_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 702;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_3 = var_engine_args;
        Py_INCREF(tmp_dircall_arg1_5);
        Py_INCREF(tmp_dircall_arg3_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5, tmp_dircall_arg2_5, tmp_dircall_arg3_3};
            tmp_assign_source_65 = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 702;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_engine) == NULL);
        PyCell_SET(var_engine, tmp_assign_source_65);

    }
    {
        nuitka_bool tmp_condition_result_17;
        int tmp_truth_name_6;
        CHECK_OBJECT(var__initialize);
        tmp_truth_name_6 = CHECK_IF_TRUE(var__initialize);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 704;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
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
        PyObject *tmp_assign_source_66;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_args_element_value_30;
        CHECK_OBJECT(Nuitka_Cell_GET(var_dialect));
        tmp_called_instance_13 = Nuitka_Cell_GET(var_dialect);
        CHECK_OBJECT(var_u);
        tmp_args_element_value_30 = var_u;
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 706;
        tmp_assign_source_66 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_13, mod_consts[74], tmp_args_element_value_30);
        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 706;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_do_on_connect) == NULL);
        PyCell_SET(var_do_on_connect, tmp_assign_source_66);

    }
    {
        nuitka_bool tmp_condition_result_18;
        int tmp_truth_name_7;
        CHECK_OBJECT(Nuitka_Cell_GET(var_do_on_connect));
        tmp_truth_name_7 = CHECK_IF_TRUE(Nuitka_Cell_GET(var_do_on_connect));
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 707;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
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
        PyObject *tmp_assign_source_67;
        PyObject *tmp_annotations_3;
        struct Nuitka_CellObject *tmp_closure_4[1];
        tmp_annotations_3 = DICT_COPY(mod_consts[75]);

        tmp_closure_4[0] = var_do_on_connect;
        Py_INCREF(tmp_closure_4[0]);

        tmp_assign_source_67 = MAKE_FUNCTION_sqlalchemy$engine$create$$$function__3_create_engine$$$function__3_on_connect(tmp_annotations_3, tmp_closure_4);

        assert(var_on_connect == NULL);
        var_on_connect = tmp_assign_source_67;
    }
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_args_element_value_33;
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 716;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[79]);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 716;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        if (var_pool == NULL) {
            Py_DECREF(tmp_called_value_23);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[73]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 716;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_31 = var_pool;
        tmp_args_element_value_32 = mod_consts[51];
        CHECK_OBJECT(var_on_connect);
        tmp_args_element_value_33 = var_on_connect;
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 716;
        {
            PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32, tmp_args_element_value_33};
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_23, call_args);
        }

        Py_DECREF(tmp_called_value_23);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 716;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    branch_no_18:;
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_called_instance_14;
        CHECK_OBJECT(Nuitka_Cell_GET(var_dialect));
        tmp_called_instance_14 = Nuitka_Cell_GET(var_dialect);
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 718;
        tmp_assign_source_68 = CALL_METHOD_NO_ARGS(tmp_called_instance_14, mod_consts[80]);
        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 718;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        assert(var_builtin_on_connect == NULL);
        var_builtin_on_connect = tmp_assign_source_68;
    }
    {
        nuitka_bool tmp_condition_result_19;
        int tmp_truth_name_8;
        CHECK_OBJECT(var_builtin_on_connect);
        tmp_truth_name_8 = CHECK_IF_TRUE(var_builtin_on_connect);
        if (tmp_truth_name_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 719;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_19 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_args_element_value_36;
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 720;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[79]);
        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 720;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        if (var_pool == NULL) {
            Py_DECREF(tmp_called_value_24);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[73]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 720;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_34 = var_pool;
        tmp_args_element_value_35 = mod_consts[51];
        CHECK_OBJECT(var_builtin_on_connect);
        tmp_args_element_value_36 = var_builtin_on_connect;
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 720;
        {
            PyObject *call_args[] = {tmp_args_element_value_34, tmp_args_element_value_35, tmp_args_element_value_36};
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_24, call_args);
        }

        Py_DECREF(tmp_called_value_24);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 720;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    branch_no_19:;
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_annotations_4;
        struct Nuitka_CellObject *tmp_closure_5[2];
        tmp_annotations_4 = DICT_COPY(mod_consts[75]);

        tmp_closure_5[0] = var_dialect;
        Py_INCREF(tmp_closure_5[0]);
        tmp_closure_5[1] = var_engine;
        Py_INCREF(tmp_closure_5[1]);

        tmp_assign_source_69 = MAKE_FUNCTION_sqlalchemy$engine$create$$$function__3_create_engine$$$function__4_first_connect(tmp_annotations_4, tmp_closure_5);

        assert(var_first_connect == NULL);
        var_first_connect = tmp_assign_source_69;
    }
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 757;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[79]);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 757;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        if (var_pool == NULL) {
            Py_DECREF(tmp_called_value_25);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[73]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 758;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_6 = var_pool;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_6);
        tmp_tuple_element_6 = mod_consts[51];
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_6);
        CHECK_OBJECT(var_first_connect);
        tmp_tuple_element_6 = var_first_connect;
        PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_6);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[83]);
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 757;
        tmp_call_result_10 = CALL_FUNCTION(tmp_called_value_25, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 757;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    branch_no_17:;
    {
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_37;
        if (Nuitka_Cell_GET(var_dialect_cls) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 761;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_33 = Nuitka_Cell_GET(var_dialect_cls);
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[84]);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 761;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(var_engine) == NULL) {
            Py_DECREF(tmp_called_value_26);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[85]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 761;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_37 = Nuitka_Cell_GET(var_engine);
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 761;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_args_element_value_37);
        Py_DECREF(tmp_called_value_26);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 761;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        bool tmp_condition_result_20;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        if (var_entrypoint == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 762;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_10 = var_entrypoint;
        if (Nuitka_Cell_GET(var_dialect_cls) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 762;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_10 = Nuitka_Cell_GET(var_dialect_cls);
        tmp_condition_result_20 = (tmp_cmp_expr_left_10 != tmp_cmp_expr_right_10) ? true : false;
        if (tmp_condition_result_20 != false) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_38;
        if (var_entrypoint == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 763;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_34 = var_entrypoint;
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[84]);
        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 763;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(var_engine) == NULL) {
            Py_DECREF(tmp_called_value_27);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[85]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 763;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_38 = Nuitka_Cell_GET(var_engine);
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 763;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_38);
        Py_DECREF(tmp_called_value_27);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 763;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    branch_no_20:;
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_iter_arg_10;
        CHECK_OBJECT(var_plugins);
        tmp_iter_arg_10 = var_plugins;
        tmp_assign_source_70 = MAKE_ITERATOR(tmp_iter_arg_10);
        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 765;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_7__for_iterator == NULL);
        tmp_for_loop_7__for_iterator = tmp_assign_source_70;
    }
    // Tried code:
    loop_start_7:;
    {
        PyObject *tmp_next_source_7;
        PyObject *tmp_assign_source_71;
        CHECK_OBJECT(tmp_for_loop_7__for_iterator);
        tmp_next_source_7 = tmp_for_loop_7__for_iterator;
        tmp_assign_source_71 = ITERATOR_NEXT(tmp_next_source_7);
        if (tmp_assign_source_71 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_7;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ocooooocoooooooococcooooooooooccooo";
                exception_lineno = 765;
                goto try_except_handler_14;
            }
        }

        {
            PyObject *old = tmp_for_loop_7__iter_value;
            tmp_for_loop_7__iter_value = tmp_assign_source_71;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_72;
        CHECK_OBJECT(tmp_for_loop_7__iter_value);
        tmp_assign_source_72 = tmp_for_loop_7__iter_value;
        {
            PyObject *old = var_plugin;
            var_plugin = tmp_assign_source_72;
            Py_INCREF(var_plugin);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_39;
        CHECK_OBJECT(var_plugin);
        tmp_expression_value_35 = var_plugin;
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[84]);
        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 766;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_14;
        }
        if (Nuitka_Cell_GET(var_engine) == NULL) {
            Py_DECREF(tmp_called_value_28);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[85]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 766;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_14;
        }

        tmp_args_element_value_39 = Nuitka_Cell_GET(var_engine);
        frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame.f_lineno = 766;
        tmp_call_result_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_39);
        Py_DECREF(tmp_called_value_28);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 766;
            type_description_1 = "ocooooocoooooooococcooooooooooccooo";
            goto try_except_handler_14;
        }
        Py_DECREF(tmp_call_result_13);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 765;
        type_description_1 = "ocooooocoooooooococcooooooooooccooo";
        goto try_except_handler_14;
    }
    goto loop_start_7;
    loop_end_7:;
    goto try_end_12;
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

    Py_XDECREF(tmp_for_loop_7__iter_value);
    tmp_for_loop_7__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_7__for_iterator);
    Py_DECREF(tmp_for_loop_7__for_iterator);
    tmp_for_loop_7__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    Py_XDECREF(tmp_for_loop_7__iter_value);
    tmp_for_loop_7__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_7__for_iterator);
    Py_DECREF(tmp_for_loop_7__for_iterator);
    tmp_for_loop_7__for_iterator = NULL;
    if (Nuitka_Cell_GET(var_engine) == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[85]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 768;
        type_description_1 = "ocooooocoooooooococcooooooooooccooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = Nuitka_Cell_GET(var_engine);
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
        exception_tb = MAKE_TRACEBACK(frame_91b814bfa59b6a9a154f32f6814aa9e1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_91b814bfa59b6a9a154f32f6814aa9e1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_91b814bfa59b6a9a154f32f6814aa9e1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_91b814bfa59b6a9a154f32f6814aa9e1,
        type_description_1,
        par_url,
        par_kwargs,
        var_strat,
        var_u,
        var_plugins,
        var_entrypoint,
        var__is_async,
        var_dialect_cls,
        var_pop_kwarg,
        var_dialect_args,
        var_k,
        var_dbapi,
        var_dbapi_args,
        var_dbapi_meth,
        var_enable_from_linting,
        var_plugin,
        var_dialect,
        var_cargs_tup,
        var_cparams,
        var_cargs,
        var_pool,
        var_connect,
        var_creator,
        var_poolclass,
        var_pool_args,
        var_translate,
        var_tk,
        var_engineclass,
        var_engine_args,
        var__initialize,
        var_engine,
        var_do_on_connect,
        var_on_connect,
        var_builtin_on_connect,
        var_first_connect
    );


    // Release cached frame if used for exception.
    if (frame_91b814bfa59b6a9a154f32f6814aa9e1 == cache_frame_91b814bfa59b6a9a154f32f6814aa9e1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_91b814bfa59b6a9a154f32f6814aa9e1);
        cache_frame_91b814bfa59b6a9a154f32f6814aa9e1 = NULL;
    }

    assertFrameObject(frame_91b814bfa59b6a9a154f32f6814aa9e1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;
    Py_XDECREF(var_strat);
    var_strat = NULL;
    Py_XDECREF(var_u);
    var_u = NULL;
    Py_XDECREF(var_plugins);
    var_plugins = NULL;
    Py_XDECREF(var_entrypoint);
    var_entrypoint = NULL;
    Py_XDECREF(var__is_async);
    var__is_async = NULL;
    CHECK_OBJECT(var_dialect_cls);
    Py_DECREF(var_dialect_cls);
    var_dialect_cls = NULL;
    Py_XDECREF(var_pop_kwarg);
    var_pop_kwarg = NULL;
    Py_XDECREF(var_dialect_args);
    var_dialect_args = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_dbapi);
    var_dbapi = NULL;
    Py_XDECREF(var_dbapi_args);
    var_dbapi_args = NULL;
    Py_XDECREF(var_dbapi_meth);
    var_dbapi_meth = NULL;
    Py_XDECREF(var_enable_from_linting);
    var_enable_from_linting = NULL;
    Py_XDECREF(var_plugin);
    var_plugin = NULL;
    CHECK_OBJECT(var_dialect);
    Py_DECREF(var_dialect);
    var_dialect = NULL;
    Py_XDECREF(var_cargs_tup);
    var_cargs_tup = NULL;
    CHECK_OBJECT(var_cparams);
    Py_DECREF(var_cparams);
    var_cparams = NULL;
    CHECK_OBJECT(var_cargs);
    Py_DECREF(var_cargs);
    var_cargs = NULL;
    Py_XDECREF(var_pool);
    var_pool = NULL;
    Py_XDECREF(var_connect);
    var_connect = NULL;
    Py_XDECREF(var_creator);
    var_creator = NULL;
    Py_XDECREF(var_poolclass);
    var_poolclass = NULL;
    Py_XDECREF(var_pool_args);
    var_pool_args = NULL;
    Py_XDECREF(var_translate);
    var_translate = NULL;
    Py_XDECREF(var_tk);
    var_tk = NULL;
    Py_XDECREF(var_engineclass);
    var_engineclass = NULL;
    Py_XDECREF(var_engine_args);
    var_engine_args = NULL;
    Py_XDECREF(var__initialize);
    var__initialize = NULL;
    CHECK_OBJECT(var_engine);
    Py_DECREF(var_engine);
    var_engine = NULL;
    CHECK_OBJECT(var_do_on_connect);
    Py_DECREF(var_do_on_connect);
    var_do_on_connect = NULL;
    Py_XDECREF(var_on_connect);
    var_on_connect = NULL;
    Py_XDECREF(var_builtin_on_connect);
    var_builtin_on_connect = NULL;
    Py_XDECREF(var_first_connect);
    var_first_connect = NULL;
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

    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;
    Py_XDECREF(var_strat);
    var_strat = NULL;
    Py_XDECREF(var_u);
    var_u = NULL;
    Py_XDECREF(var_plugins);
    var_plugins = NULL;
    Py_XDECREF(var_entrypoint);
    var_entrypoint = NULL;
    Py_XDECREF(var__is_async);
    var__is_async = NULL;
    CHECK_OBJECT(var_dialect_cls);
    Py_DECREF(var_dialect_cls);
    var_dialect_cls = NULL;
    Py_XDECREF(var_pop_kwarg);
    var_pop_kwarg = NULL;
    Py_XDECREF(var_dialect_args);
    var_dialect_args = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_dbapi);
    var_dbapi = NULL;
    Py_XDECREF(var_dbapi_args);
    var_dbapi_args = NULL;
    Py_XDECREF(var_dbapi_meth);
    var_dbapi_meth = NULL;
    Py_XDECREF(var_enable_from_linting);
    var_enable_from_linting = NULL;
    Py_XDECREF(var_plugin);
    var_plugin = NULL;
    CHECK_OBJECT(var_dialect);
    Py_DECREF(var_dialect);
    var_dialect = NULL;
    Py_XDECREF(var_cargs_tup);
    var_cargs_tup = NULL;
    CHECK_OBJECT(var_cparams);
    Py_DECREF(var_cparams);
    var_cparams = NULL;
    CHECK_OBJECT(var_cargs);
    Py_DECREF(var_cargs);
    var_cargs = NULL;
    Py_XDECREF(var_pool);
    var_pool = NULL;
    Py_XDECREF(var_connect);
    var_connect = NULL;
    Py_XDECREF(var_creator);
    var_creator = NULL;
    Py_XDECREF(var_poolclass);
    var_poolclass = NULL;
    Py_XDECREF(var_pool_args);
    var_pool_args = NULL;
    Py_XDECREF(var_translate);
    var_translate = NULL;
    Py_XDECREF(var_tk);
    var_tk = NULL;
    Py_XDECREF(var_engineclass);
    var_engineclass = NULL;
    Py_XDECREF(var_engine_args);
    var_engine_args = NULL;
    Py_XDECREF(var__initialize);
    var__initialize = NULL;
    CHECK_OBJECT(var_engine);
    Py_DECREF(var_engine);
    var_engine = NULL;
    CHECK_OBJECT(var_do_on_connect);
    Py_DECREF(var_do_on_connect);
    var_do_on_connect = NULL;
    Py_XDECREF(var_on_connect);
    var_on_connect = NULL;
    Py_XDECREF(var_builtin_on_connect);
    var_builtin_on_connect = NULL;
    Py_XDECREF(var_first_connect);
    var_first_connect = NULL;
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
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$engine$create$$$function__3_create_engine$$$function__1_pop_kwarg(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    PyObject *par_default = python_pars[1];
    PyObject *var_value = NULL;
    struct Nuitka_FrameObject *frame_ff431c52098218e67808c4b6a8a00b0b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_ff431c52098218e67808c4b6a8a00b0b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ff431c52098218e67808c4b6a8a00b0b)) {
        Py_XDECREF(cache_frame_ff431c52098218e67808c4b6a8a00b0b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ff431c52098218e67808c4b6a8a00b0b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ff431c52098218e67808c4b6a8a00b0b = MAKE_FUNCTION_FRAME(codeobj_ff431c52098218e67808c4b6a8a00b0b, module_sqlalchemy$engine$create, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ff431c52098218e67808c4b6a8a00b0b->m_type_description == NULL);
    frame_ff431c52098218e67808c4b6a8a00b0b = cache_frame_ff431c52098218e67808c4b6a8a00b0b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ff431c52098218e67808c4b6a8a00b0b);
    assert(Py_REFCNT(frame_ff431c52098218e67808c4b6a8a00b0b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 561;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[12]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_value_1 = par_key;
        CHECK_OBJECT(par_default);
        tmp_args_element_value_2 = par_default;
        frame_ff431c52098218e67808c4b6a8a00b0b->m_frame.f_lineno = 561;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        assert(var_value == NULL);
        var_value = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_key);
        tmp_cmp_expr_left_1 = par_key;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 562;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[88]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_3;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 563;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[88]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_subscript_value_1 = par_key;
        tmp_called_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_value);
        tmp_args_element_value_3 = var_value;
        frame_ff431c52098218e67808c4b6a8a00b0b->m_frame.f_lineno = 563;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_value;
            assert(old != NULL);
            var_value = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ff431c52098218e67808c4b6a8a00b0b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ff431c52098218e67808c4b6a8a00b0b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ff431c52098218e67808c4b6a8a00b0b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ff431c52098218e67808c4b6a8a00b0b,
        type_description_1,
        par_key,
        par_default,
        var_value,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_ff431c52098218e67808c4b6a8a00b0b == cache_frame_ff431c52098218e67808c4b6a8a00b0b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ff431c52098218e67808c4b6a8a00b0b);
        cache_frame_ff431c52098218e67808c4b6a8a00b0b = NULL;
    }

    assertFrameObject(frame_ff431c52098218e67808c4b6a8a00b0b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_value);
    tmp_return_value = var_value;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_value);
    Py_DECREF(var_value);
    var_value = NULL;
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

    Py_XDECREF(var_value);
    var_value = NULL;
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
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$engine$create$$$function__3_create_engine$$$function__2_connect(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_connection_record = python_pars[0];
    PyObject *var_fn = NULL;
    PyObject *var_connection = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_d0959dabfb0983c9f8e11b4d89c0a9e7;
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
    static struct Nuitka_FrameObject *cache_frame_d0959dabfb0983c9f8e11b4d89c0a9e7 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d0959dabfb0983c9f8e11b4d89c0a9e7)) {
        Py_XDECREF(cache_frame_d0959dabfb0983c9f8e11b4d89c0a9e7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d0959dabfb0983c9f8e11b4d89c0a9e7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d0959dabfb0983c9f8e11b4d89c0a9e7 = MAKE_FUNCTION_FRAME(codeobj_d0959dabfb0983c9f8e11b4d89c0a9e7, module_sqlalchemy$engine$create, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d0959dabfb0983c9f8e11b4d89c0a9e7->m_type_description == NULL);
    frame_d0959dabfb0983c9f8e11b4d89c0a9e7 = cache_frame_d0959dabfb0983c9f8e11b4d89c0a9e7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d0959dabfb0983c9f8e11b4d89c0a9e7);
    assert(Py_REFCNT(frame_d0959dabfb0983c9f8e11b4d89c0a9e7) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 627;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[89]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 627;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 627;
            type_description_1 = "oooccc";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 628;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[90]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 628;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[91]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 628;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 628;
            type_description_1 = "oooccc";
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
                type_description_1 = "oooccc";
                exception_lineno = 628;
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
            PyObject *old = var_fn;
            var_fn = tmp_assign_source_3;
            Py_INCREF(var_fn);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 629;
            type_description_1 = "oooccc";
            goto try_except_handler_2;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 630;
            type_description_1 = "oooccc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_fn);
        tmp_called_value_2 = var_fn;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 631;
            type_description_1 = "oooccc";
            goto try_except_handler_2;
        }

        tmp_args_element_value_3 = Nuitka_Cell_GET(self->m_closure[2]);
        if (par_connection_record == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[94]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 631;
            type_description_1 = "oooccc";
            goto try_except_handler_2;
        }

        tmp_args_element_value_4 = par_connection_record;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[95]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 631;
            type_description_1 = "oooccc";
            goto try_except_handler_2;
        }

        tmp_args_element_value_5 = Nuitka_Cell_GET(self->m_closure[0]);
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[96]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 631;
            type_description_1 = "oooccc";
            goto try_except_handler_2;
        }

        tmp_args_element_value_6 = Nuitka_Cell_GET(self->m_closure[1]);
        frame_d0959dabfb0983c9f8e11b4d89c0a9e7->m_frame.f_lineno = 631;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_2, call_args);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 631;
            type_description_1 = "oooccc";
            goto try_except_handler_2;
        }
        frame_d0959dabfb0983c9f8e11b4d89c0a9e7->m_frame.f_lineno = 629;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 629;
            type_description_1 = "oooccc";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_connection;
            var_connection = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_connection);
        tmp_cmp_expr_left_1 = var_connection;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    CHECK_OBJECT(var_connection);
    tmp_return_value = var_connection;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    branch_no_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 628;
        type_description_1 = "oooccc";
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
    branch_no_1:;
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 636;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[51]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 636;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[95]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 636;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg2_1 = Nuitka_Cell_GET(self->m_closure[0]);
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[96]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 636;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_1 = Nuitka_Cell_GET(self->m_closure[1]);
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__5_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 636;
            type_description_1 = "oooccc";
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
        exception_tb = MAKE_TRACEBACK(frame_d0959dabfb0983c9f8e11b4d89c0a9e7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d0959dabfb0983c9f8e11b4d89c0a9e7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d0959dabfb0983c9f8e11b4d89c0a9e7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d0959dabfb0983c9f8e11b4d89c0a9e7,
        type_description_1,
        par_connection_record,
        var_fn,
        var_connection,
        self->m_closure[2],
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_d0959dabfb0983c9f8e11b4d89c0a9e7 == cache_frame_d0959dabfb0983c9f8e11b4d89c0a9e7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d0959dabfb0983c9f8e11b4d89c0a9e7);
        cache_frame_d0959dabfb0983c9f8e11b4d89c0a9e7 = NULL;
    }

    assertFrameObject(frame_d0959dabfb0983c9f8e11b4d89c0a9e7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_fn);
    var_fn = NULL;
    Py_XDECREF(var_connection);
    var_connection = NULL;
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

    Py_XDECREF(var_fn);
    var_fn = NULL;
    Py_XDECREF(var_connection);
    var_connection = NULL;
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
    CHECK_OBJECT(par_connection_record);
    Py_DECREF(par_connection_record);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_connection_record);
    Py_DECREF(par_connection_record);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct sqlalchemy$engine$create$$$function__3_create_engine$$$genexpr__1_genexpr_locals {
    PyObject *var_k;
    PyObject *tmp_iter_value_0;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *sqlalchemy$engine$create$$$function__3_create_engine$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct sqlalchemy$engine$create$$$function__3_create_engine$$$genexpr__1_genexpr_locals *generator_heap = (struct sqlalchemy$engine$create$$$function__3_create_engine$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_k = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_d835ef0e6bf84fec3bfd63652e2b3fb8, module_sqlalchemy$engine$create, sizeof(void *)+sizeof(void *));
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
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 695;
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
            PyObject *old = generator_heap->var_k;
            generator_heap->var_k = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_k);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_mod_expr_left_1 = mod_consts[97];
        CHECK_OBJECT(generator_heap->var_k);
        tmp_mod_expr_right_1 = generator_heap->var_k;
        tmp_expression_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 695;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_mod_expr_left_1, sizeof(PyObject *), &tmp_mod_expr_right_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_mod_expr_left_1, sizeof(PyObject *), &tmp_mod_expr_right_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 695;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 695;
        generator_heap->type_description_1 = "No";
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
            generator_heap->var_k
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

    Py_XDECREF(generator_heap->var_k);
    generator_heap->var_k = NULL;
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
    Py_XDECREF(generator_heap->var_k);
    generator_heap->var_k = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_sqlalchemy$engine$create$$$function__3_create_engine$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        sqlalchemy$engine$create$$$function__3_create_engine$$$genexpr__1_genexpr_context,
        module_sqlalchemy$engine$create,
        mod_consts[98],
#if PYTHON_VERSION >= 0x350
        mod_consts[99],
#endif
        codeobj_d835ef0e6bf84fec3bfd63652e2b3fb8,
        closure,
        1,
        sizeof(struct sqlalchemy$engine$create$$$function__3_create_engine$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_sqlalchemy$engine$create$$$function__3_create_engine$$$function__3_on_connect(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dbapi_connection = python_pars[0];
    PyObject *par_connection_record = python_pars[1];
    struct Nuitka_FrameObject *frame_77c28cd3bdac996c5231316397cecb60;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_77c28cd3bdac996c5231316397cecb60 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_77c28cd3bdac996c5231316397cecb60)) {
        Py_XDECREF(cache_frame_77c28cd3bdac996c5231316397cecb60);

#if _DEBUG_REFCOUNTS
        if (cache_frame_77c28cd3bdac996c5231316397cecb60 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_77c28cd3bdac996c5231316397cecb60 = MAKE_FUNCTION_FRAME(codeobj_77c28cd3bdac996c5231316397cecb60, module_sqlalchemy$engine$create, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_77c28cd3bdac996c5231316397cecb60->m_type_description == NULL);
    frame_77c28cd3bdac996c5231316397cecb60 = cache_frame_77c28cd3bdac996c5231316397cecb60;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_77c28cd3bdac996c5231316397cecb60);
    assert(Py_REFCNT(frame_77c28cd3bdac996c5231316397cecb60) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[100]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 713;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_1 = Nuitka_Cell_GET(self->m_closure[0]);
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
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 713;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooc";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[100]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 714;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_dbapi_connection);
        tmp_args_element_value_1 = par_dbapi_connection;
        frame_77c28cd3bdac996c5231316397cecb60->m_frame.f_lineno = 714;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 714;
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
        exception_tb = MAKE_TRACEBACK(frame_77c28cd3bdac996c5231316397cecb60, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_77c28cd3bdac996c5231316397cecb60->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_77c28cd3bdac996c5231316397cecb60, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_77c28cd3bdac996c5231316397cecb60,
        type_description_1,
        par_dbapi_connection,
        par_connection_record,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_77c28cd3bdac996c5231316397cecb60 == cache_frame_77c28cd3bdac996c5231316397cecb60) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_77c28cd3bdac996c5231316397cecb60);
        cache_frame_77c28cd3bdac996c5231316397cecb60 = NULL;
    }

    assertFrameObject(frame_77c28cd3bdac996c5231316397cecb60);

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
    CHECK_OBJECT(par_dbapi_connection);
    Py_DECREF(par_dbapi_connection);
    CHECK_OBJECT(par_connection_record);
    Py_DECREF(par_connection_record);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_dbapi_connection);
    Py_DECREF(par_dbapi_connection);
    CHECK_OBJECT(par_connection_record);
    Py_DECREF(par_connection_record);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$engine$create$$$function__3_create_engine$$$function__4_first_connect(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dbapi_connection = python_pars[0];
    PyObject *par_connection_record = python_pars[1];
    PyObject *var_c = NULL;
    struct Nuitka_FrameObject *frame_a4cd180836b30c838bf327f70c710167;
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
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_a4cd180836b30c838bf327f70c710167 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a4cd180836b30c838bf327f70c710167)) {
        Py_XDECREF(cache_frame_a4cd180836b30c838bf327f70c710167);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a4cd180836b30c838bf327f70c710167 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a4cd180836b30c838bf327f70c710167 = MAKE_FUNCTION_FRAME(codeobj_a4cd180836b30c838bf327f70c710167, module_sqlalchemy$engine$create, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a4cd180836b30c838bf327f70c710167->m_type_description == NULL);
    frame_a4cd180836b30c838bf327f70c710167 = cache_frame_a4cd180836b30c838bf327f70c710167;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a4cd180836b30c838bf327f70c710167);
    assert(Py_REFCNT(frame_a4cd180836b30c838bf327f70c710167) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 726;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[101]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 726;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[85]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 727;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 728;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dbapi_connection);
        tmp_args_element_value_1 = par_dbapi_connection;
        CHECK_OBJECT(par_connection_record);
        tmp_args_element_value_2 = par_connection_record;
        frame_a4cd180836b30c838bf327f70c710167->m_frame.f_lineno = 728;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_kw_call_dict_value_0_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 728;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_1 = Py_False;
        tmp_kw_call_dict_value_2_1 = Py_False;
        tmp_kw_call_dict_value_3_1 = Py_False;
        frame_a4cd180836b30c838bf327f70c710167->m_frame.f_lineno = 726;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[103]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 726;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        assert(var_c == NULL);
        var_c = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_assattr_target_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 739;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[104]);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 739;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_c);
        tmp_assattr_target_1 = var_c;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[105], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 739;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 742;
            type_description_1 = "ooocc";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(var_c);
        tmp_args_element_value_3 = var_c;
        frame_a4cd180836b30c838bf327f70c710167->m_frame.f_lineno = 742;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[106], tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 742;
            type_description_1 = "ooocc";
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_a4cd180836b30c838bf327f70c710167, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_a4cd180836b30c838bf327f70c710167, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_c);
        tmp_expression_value_3 = var_c;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[107]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 746;
            type_description_1 = "ooocc";
            goto try_except_handler_3;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 746;
            type_description_1 = "ooocc";
            goto try_except_handler_3;
        }
        tmp_and_left_value_1 = (tmp_res == 0) ? true : false;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_c);
        tmp_expression_value_4 = var_c;
        tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[108]);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 746;
            type_description_1 = "ooocc";
            goto try_except_handler_3;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 746;
            type_description_1 = "ooocc";
            goto try_except_handler_3;
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
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_6;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 750;
            type_description_1 = "ooocc";
            goto try_except_handler_3;
        }

        tmp_expression_value_5 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[109]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 750;
            type_description_1 = "ooocc";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_c);
        tmp_expression_value_6 = var_c;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[110]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 750;
            type_description_1 = "ooocc";
            goto try_except_handler_3;
        }
        frame_a4cd180836b30c838bf327f70c710167->m_frame.f_lineno = 750;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 750;
            type_description_1 = "ooocc";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 741;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a4cd180836b30c838bf327f70c710167->m_frame) frame_a4cd180836b30c838bf327f70c710167->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooocc";
    goto try_except_handler_3;
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
        bool tmp_condition_result_2;
        int tmp_and_left_truth_2;
        bool tmp_and_left_value_2;
        bool tmp_and_right_value_2;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(var_c);
        tmp_expression_value_7 = var_c;
        tmp_operand_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[107]);
        if (tmp_operand_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 746;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 746;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = (tmp_res == 0) ? true : false;
        tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(var_c);
        tmp_expression_value_8 = var_c;
        tmp_operand_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[108]);
        if (tmp_operand_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 746;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        Py_DECREF(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 746;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = (tmp_res == 0) ? true : false;
        tmp_condition_result_2 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_2 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_10;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 750;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[109]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 750;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_c);
        tmp_expression_value_10 = var_c;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[110]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 750;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        frame_a4cd180836b30c838bf327f70c710167->m_frame.f_lineno = 750;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 750;
            type_description_1 = "ooocc";
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
        exception_tb = MAKE_TRACEBACK(frame_a4cd180836b30c838bf327f70c710167, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a4cd180836b30c838bf327f70c710167->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a4cd180836b30c838bf327f70c710167, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a4cd180836b30c838bf327f70c710167,
        type_description_1,
        par_dbapi_connection,
        par_connection_record,
        var_c,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_a4cd180836b30c838bf327f70c710167 == cache_frame_a4cd180836b30c838bf327f70c710167) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a4cd180836b30c838bf327f70c710167);
        cache_frame_a4cd180836b30c838bf327f70c710167 = NULL;
    }

    assertFrameObject(frame_a4cd180836b30c838bf327f70c710167);

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
    CHECK_OBJECT(var_c);
    Py_DECREF(var_c);
    var_c = NULL;
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

    Py_XDECREF(var_c);
    var_c = NULL;
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
    CHECK_OBJECT(par_dbapi_connection);
    Py_DECREF(par_dbapi_connection);
    CHECK_OBJECT(par_connection_record);
    Py_DECREF(par_connection_record);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_dbapi_connection);
    Py_DECREF(par_dbapi_connection);
    CHECK_OBJECT(par_connection_record);
    Py_DECREF(par_connection_record);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$engine$create$$$function__4_engine_from_config(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_configuration = python_pars[0];
    PyObject *par_prefix = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_options = NULL;
    PyObject *var_url = NULL;
    PyObject *outline_0_var_key = NULL;
    PyObject *tmp_dictcontraction_1__$0 = NULL;
    PyObject *tmp_dictcontraction_1__contraction = NULL;
    PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_567569cb9a105cc7daf4ef9a7b872dd1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_c8f765499f1eb19975090187eeae6206_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_c8f765499f1eb19975090187eeae6206_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_567569cb9a105cc7daf4ef9a7b872dd1 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_567569cb9a105cc7daf4ef9a7b872dd1)) {
        Py_XDECREF(cache_frame_567569cb9a105cc7daf4ef9a7b872dd1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_567569cb9a105cc7daf4ef9a7b872dd1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_567569cb9a105cc7daf4ef9a7b872dd1 = MAKE_FUNCTION_FRAME(codeobj_567569cb9a105cc7daf4ef9a7b872dd1, module_sqlalchemy$engine$create, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_567569cb9a105cc7daf4ef9a7b872dd1->m_type_description == NULL);
    frame_567569cb9a105cc7daf4ef9a7b872dd1 = cache_frame_567569cb9a105cc7daf4ef9a7b872dd1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_567569cb9a105cc7daf4ef9a7b872dd1);
    assert(Py_REFCNT(frame_567569cb9a105cc7daf4ef9a7b872dd1) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_configuration);
            tmp_iter_arg_1 = par_configuration;
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 805;
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
        if (isFrameUnusable(cache_frame_c8f765499f1eb19975090187eeae6206_2)) {
            Py_XDECREF(cache_frame_c8f765499f1eb19975090187eeae6206_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_c8f765499f1eb19975090187eeae6206_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_c8f765499f1eb19975090187eeae6206_2 = MAKE_FUNCTION_FRAME(codeobj_c8f765499f1eb19975090187eeae6206, module_sqlalchemy$engine$create, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_c8f765499f1eb19975090187eeae6206_2->m_type_description == NULL);
        frame_c8f765499f1eb19975090187eeae6206_2 = cache_frame_c8f765499f1eb19975090187eeae6206_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_c8f765499f1eb19975090187eeae6206_2);
        assert(Py_REFCNT(frame_c8f765499f1eb19975090187eeae6206_2) == 2);

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
                    type_description_2 = "ooo";
                    exception_lineno = 805;
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
                PyObject *old = outline_0_var_key;
                outline_0_var_key = tmp_assign_source_5;
                Py_INCREF(outline_0_var_key);
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_value_1;
            int tmp_truth_name_1;
            CHECK_OBJECT(outline_0_var_key);
            tmp_expression_value_1 = outline_0_var_key;
            tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[111]);
            if (tmp_called_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 808;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            if (par_prefix == NULL) {
                Py_DECREF(tmp_called_value_1);
                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[112]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 808;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }

            tmp_args_element_value_1 = par_prefix;
            frame_c8f765499f1eb19975090187eeae6206_2->m_frame.f_lineno = 808;
            tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_1);
            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 808;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
            if (tmp_truth_name_1 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_call_result_1);

                exception_lineno = 808;
                type_description_2 = "ooo";
                goto try_except_handler_3;
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
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_start_value_1;
            PyObject *tmp_len_arg_1;
            PyObject *tmp_stop_value_1;
            CHECK_OBJECT(par_configuration);
            tmp_expression_value_2 = par_configuration;
            CHECK_OBJECT(outline_0_var_key);
            tmp_subscript_value_1 = outline_0_var_key;
            tmp_dictset_value = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 806;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT(tmp_dictcontraction_1__contraction);
            tmp_dictset_dict = tmp_dictcontraction_1__contraction;
            CHECK_OBJECT(outline_0_var_key);
            tmp_expression_value_3 = outline_0_var_key;
            if (par_prefix == NULL) {
                Py_DECREF(tmp_dictset_value);
                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[112]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 806;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }

            tmp_len_arg_1 = par_prefix;
            tmp_start_value_1 = BUILTIN_LEN(tmp_len_arg_1);
            if (tmp_start_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dictset_value);

                exception_lineno = 806;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            tmp_stop_value_1 = Py_None;
            tmp_subscript_value_2 = MAKE_SLICE_OBJECT2(tmp_start_value_1, tmp_stop_value_1);
            Py_DECREF(tmp_start_value_1);
            assert(!(tmp_subscript_value_2 == NULL));
            tmp_dictset_key = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
            Py_DECREF(tmp_subscript_value_2);
            if (tmp_dictset_key == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dictset_value);

                exception_lineno = 806;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            assert(PyDict_CheckExact(tmp_dictset_dict));
            tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

            Py_DECREF(tmp_dictset_value);
            Py_DECREF(tmp_dictset_key);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 805;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
        }
        branch_no_1:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 805;
            type_description_2 = "ooo";
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
            exception_tb = MAKE_TRACEBACK(frame_c8f765499f1eb19975090187eeae6206_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c8f765499f1eb19975090187eeae6206_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c8f765499f1eb19975090187eeae6206_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c8f765499f1eb19975090187eeae6206_2,
            type_description_2,
            outline_0_var_key,
            par_prefix,
            par_configuration
        );


        // Release cached frame if used for exception.
        if (frame_c8f765499f1eb19975090187eeae6206_2 == cache_frame_c8f765499f1eb19975090187eeae6206_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_c8f765499f1eb19975090187eeae6206_2);
            cache_frame_c8f765499f1eb19975090187eeae6206_2 = NULL;
        }

        assertFrameObject(frame_c8f765499f1eb19975090187eeae6206_2);

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
        Py_XDECREF(outline_0_var_key);
        outline_0_var_key = NULL;
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

        Py_XDECREF(outline_0_var_key);
        outline_0_var_key = NULL;
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
        exception_lineno = 805;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_options == NULL);
        var_options = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = Py_True;
        CHECK_OBJECT(var_options);
        tmp_ass_subscribed_1 = var_options;
        tmp_ass_subscript_1 = mod_consts[113];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 810;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_options);
        tmp_expression_value_4 = var_options;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[47]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 811;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_kwargs);
        tmp_args_element_value_2 = par_kwargs;
        frame_567569cb9a105cc7daf4ef9a7b872dd1->m_frame.f_lineno = 811;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 811;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_options);
        tmp_expression_value_5 = var_options;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[12]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 812;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_567569cb9a105cc7daf4ef9a7b872dd1->m_frame.f_lineno = 812;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[114]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 812;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_url == NULL);
        var_url = tmp_assign_source_6;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 813;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_url);
        tmp_tuple_element_1 = var_url;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_options);
        tmp_dircall_arg3_1 = var_options;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 813;
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
        exception_tb = MAKE_TRACEBACK(frame_567569cb9a105cc7daf4ef9a7b872dd1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_567569cb9a105cc7daf4ef9a7b872dd1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_567569cb9a105cc7daf4ef9a7b872dd1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_567569cb9a105cc7daf4ef9a7b872dd1,
        type_description_1,
        par_configuration,
        par_prefix,
        par_kwargs,
        var_options,
        var_url
    );


    // Release cached frame if used for exception.
    if (frame_567569cb9a105cc7daf4ef9a7b872dd1 == cache_frame_567569cb9a105cc7daf4ef9a7b872dd1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_567569cb9a105cc7daf4ef9a7b872dd1);
        cache_frame_567569cb9a105cc7daf4ef9a7b872dd1 = NULL;
    }

    assertFrameObject(frame_567569cb9a105cc7daf4ef9a7b872dd1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_options);
    Py_DECREF(var_options);
    var_options = NULL;
    CHECK_OBJECT(var_url);
    Py_DECREF(var_url);
    var_url = NULL;
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

    Py_XDECREF(var_options);
    var_options = NULL;
    Py_XDECREF(var_url);
    var_url = NULL;
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
    CHECK_OBJECT(par_configuration);
    Py_DECREF(par_configuration);
    CHECK_OBJECT(par_prefix);
    Py_DECREF(par_prefix);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_configuration);
    Py_DECREF(par_configuration);
    CHECK_OBJECT(par_prefix);
    Py_DECREF(par_prefix);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$create$$$function__1_create_engine(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[115],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1801734aeb2192458315c019108bc2ea,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_sqlalchemy$engine$create,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$create$$$function__2_create_engine(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[115],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ff10c3a6c0b3b317efee819edd038520,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$create,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$create$$$function__3_create_engine(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$create$$$function__3_create_engine,
        mod_consts[115],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_91b814bfa59b6a9a154f32f6814aa9e1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$create,
        mod_consts[87],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$create$$$function__3_create_engine$$$function__1_pop_kwarg(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$create$$$function__3_create_engine$$$function__1_pop_kwarg,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[20],
#endif
        codeobj_ff431c52098218e67808c4b6a8a00b0b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$create,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$create$$$function__3_create_engine$$$function__2_connect(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$create$$$function__3_create_engine$$$function__2_connect,
        mod_consts[51],
#if PYTHON_VERSION >= 0x300
        mod_consts[52],
#endif
        codeobj_d0959dabfb0983c9f8e11b4d89c0a9e7,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$create,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$create$$$function__3_create_engine$$$function__3_on_connect(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$create$$$function__3_create_engine$$$function__3_on_connect,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        mod_consts[77],
#endif
        codeobj_77c28cd3bdac996c5231316397cecb60,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$create,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$create$$$function__3_create_engine$$$function__4_first_connect(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$create$$$function__3_create_engine$$$function__4_first_connect,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        mod_consts[82],
#endif
        codeobj_a4cd180836b30c838bf327f70c710167,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$create,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$create$$$function__4_engine_from_config(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$create$$$function__4_engine_from_config,
        mod_consts[158],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_567569cb9a105cc7daf4ef9a7b872dd1,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$create,
        mod_consts[116],
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

function_impl_code functable_sqlalchemy$engine$create[] = {
    impl_sqlalchemy$engine$create$$$function__3_create_engine$$$function__1_pop_kwarg,
    impl_sqlalchemy$engine$create$$$function__3_create_engine$$$function__2_connect,
    impl_sqlalchemy$engine$create$$$function__3_create_engine$$$function__3_on_connect,
    impl_sqlalchemy$engine$create$$$function__3_create_engine$$$function__4_first_connect,
    NULL,
    NULL,
    impl_sqlalchemy$engine$create$$$function__3_create_engine,
    impl_sqlalchemy$engine$create$$$function__4_engine_from_config,
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

    function_impl_code *current = functable_sqlalchemy$engine$create;
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

    if (offset > sizeof(functable_sqlalchemy$engine$create) || offset < 0) {
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
        functable_sqlalchemy$engine$create[offset],
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
        module_sqlalchemy$engine$create,
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
PyObject *modulecode_sqlalchemy$engine$create(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("sqlalchemy.engine.create");

    // Store the module for future use.
    module_sqlalchemy$engine$create = module;

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
        PRINT_STRING("sqlalchemy.engine.create: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("sqlalchemy.engine.create: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("sqlalchemy.engine.create: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initsqlalchemy$engine$create\n");

    moduledict_sqlalchemy$engine$create = MODULE_DICT(module_sqlalchemy$engine$create);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_sqlalchemy$engine$create,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_sqlalchemy$engine$create,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[32]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_sqlalchemy$engine$create,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_sqlalchemy$engine$create,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_sqlalchemy$engine$create,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_sqlalchemy$engine$create);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_sqlalchemy$engine$create);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_f0beff206bd0db405c2275e0b5c17f42;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_2);
    }
    frame_f0beff206bd0db405c2275e0b5c17f42 = MAKE_MODULE_FRAME(codeobj_f0beff206bd0db405c2275e0b5c17f42, module_sqlalchemy$engine$create);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f0beff206bd0db405c2275e0b5c17f42);
    assert(Py_REFCNT(frame_f0beff206bd0db405c2275e0b5c17f42) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[120], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[121], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[123]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[28];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_sqlalchemy$engine$create;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[124];
        frame_f0beff206bd0db405c2275e0b5c17f42->m_frame.f_lineno = 10;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        tmp_import_name_from_1 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_sqlalchemy$engine$create,
                mod_consts[126],
                mod_consts[124]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[126]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        tmp_import_name_from_2 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_2 == NULL));
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_sqlalchemy$engine$create,
                mod_consts[127],
                mod_consts[124]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[127]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        tmp_import_name_from_3 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_3 == NULL));
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_sqlalchemy$engine$create,
                mod_consts[92],
                mod_consts[124]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[92]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        tmp_import_name_from_4 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_4 == NULL));
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_sqlalchemy$engine$create,
                mod_consts[128],
                mod_consts[124]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[128]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        tmp_import_name_from_5 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_5 == NULL));
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_sqlalchemy$engine$create,
                mod_consts[129],
                mod_consts[124]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[129]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        tmp_import_name_from_6 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_6 == NULL));
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_sqlalchemy$engine$create,
                mod_consts[130],
                mod_consts[124]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[130]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        tmp_import_name_from_7 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_7 == NULL));
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_sqlalchemy$engine$create,
                mod_consts[131],
                mod_consts[124]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[131]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        tmp_import_name_from_8 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_8 == NULL));
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_sqlalchemy$engine$create,
                mod_consts[132],
                mod_consts[124]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[132]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        tmp_import_name_from_9 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_9 == NULL));
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_sqlalchemy$engine$create,
                mod_consts[133],
                mod_consts[124]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[133]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[32];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_sqlalchemy$engine$create;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[134];
        tmp_level_value_2 = mod_consts[135];
        frame_f0beff206bd0db405c2275e0b5c17f42->m_frame.f_lineno = 22;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_sqlalchemy$engine$create,
                mod_consts[66],
                mod_consts[124]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[66]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[32];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_sqlalchemy$engine$create;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[114];
        tmp_level_value_3 = mod_consts[135];
        frame_f0beff206bd0db405c2275e0b5c17f42->m_frame.f_lineno = 23;
        tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_sqlalchemy$engine$create,
                mod_consts[136],
                mod_consts[124]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[136]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[137];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_sqlalchemy$engine$create;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[138];
        tmp_level_value_4 = mod_consts[135];
        frame_f0beff206bd0db405c2275e0b5c17f42->m_frame.f_lineno = 24;
        tmp_import_name_from_12 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_sqlalchemy$engine$create,
                mod_consts[93],
                mod_consts[124]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[93]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[1];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_sqlalchemy$engine$create;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[139];
        tmp_level_value_5 = mod_consts[135];
        frame_f0beff206bd0db405c2275e0b5c17f42->m_frame.f_lineno = 25;
        tmp_import_name_from_13 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_sqlalchemy$engine$create,
                mod_consts[2],
                mod_consts[124]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[2]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[32];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_sqlalchemy$engine$create;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[140];
        tmp_level_value_6 = mod_consts[141];
        frame_f0beff206bd0db405c2275e0b5c17f42->m_frame.f_lineno = 26;
        tmp_import_name_from_14 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_sqlalchemy$engine$create,
                mod_consts[78],
                mod_consts[124]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[78]);
        }

        Py_DECREF(tmp_import_name_from_14);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[32];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_sqlalchemy$engine$create;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[142];
        tmp_level_value_7 = mod_consts[141];
        frame_f0beff206bd0db405c2275e0b5c17f42->m_frame.f_lineno = 27;
        tmp_import_name_from_15 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_sqlalchemy$engine$create,
                mod_consts[3],
                mod_consts[124]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[3]);
        }

        Py_DECREF(tmp_import_name_from_15);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[32];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_sqlalchemy$engine$create;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[143];
        tmp_level_value_8 = mod_consts[141];
        frame_f0beff206bd0db405c2275e0b5c17f42->m_frame.f_lineno = 28;
        tmp_import_name_from_16 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_sqlalchemy$engine$create,
                mod_consts[21],
                mod_consts[124]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_16, mod_consts[21]);
        }

        Py_DECREF(tmp_import_name_from_16);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[73];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_sqlalchemy$engine$create;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[144];
        tmp_level_value_9 = mod_consts[141];
        frame_f0beff206bd0db405c2275e0b5c17f42->m_frame.f_lineno = 29;
        tmp_import_name_from_17 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_sqlalchemy$engine$create,
                mod_consts[102],
                mod_consts[124]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_17, mod_consts[102]);
        }

        Py_DECREF(tmp_import_name_from_17);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_18;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[73];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_sqlalchemy$engine$create;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[145];
        tmp_level_value_10 = mod_consts[141];
        frame_f0beff206bd0db405c2275e0b5c17f42->m_frame.f_lineno = 30;
        tmp_import_name_from_18 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_import_name_from_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_sqlalchemy$engine$create,
                mod_consts[146],
                mod_consts[124]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_18, mod_consts[146]);
        }

        Py_DECREF(tmp_import_name_from_18);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_19;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[147];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_sqlalchemy$engine$create;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[148];
        tmp_level_value_11 = mod_consts[141];
        frame_f0beff206bd0db405c2275e0b5c17f42->m_frame.f_lineno = 31;
        tmp_import_name_from_19 = IMPORT_MODULE5(tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_import_name_from_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_sqlalchemy$engine$create,
                mod_consts[39],
                mod_consts[124]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME(tmp_import_name_from_19, mod_consts[39]);
        }

        Py_DECREF(tmp_import_name_from_19);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kw_defaults_1;
        PyObject *tmp_annotations_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        tmp_kw_defaults_1 = DICT_COPY(mod_consts[149]);
        tmp_annotations_1 = DICT_COPY(mod_consts[150]);


        tmp_args_element_value_1 = MAKE_FUNCTION_sqlalchemy$engine$create$$$function__1_create_engine(tmp_kw_defaults_1, tmp_annotations_1);

        frame_f0beff206bd0db405c2275e0b5c17f42->m_frame.f_lineno = 47;
        tmp_assign_source_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_annotations_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = DICT_COPY(mod_consts[151]);


        tmp_args_element_value_2 = MAKE_FUNCTION_sqlalchemy$engine$create$$$function__2_create_engine(tmp_annotations_2);

        frame_f0beff206bd0db405c2275e0b5c17f42->m_frame.f_lineno = 88;
        tmp_assign_source_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_annotations_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[152]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        frame_f0beff206bd0db405c2275e0b5c17f42->m_frame.f_lineno = 93;
        tmp_called_value_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts[153], 0), mod_consts[154]);
        Py_DECREF(tmp_called_value_4);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = DICT_COPY(mod_consts[155]);


        tmp_args_element_value_3 = MAKE_FUNCTION_sqlalchemy$engine$create$$$function__3_create_engine(tmp_annotations_3);

        frame_f0beff206bd0db405c2275e0b5c17f42->m_frame.f_lineno = 93;
        tmp_assign_source_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_28);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f0beff206bd0db405c2275e0b5c17f42, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f0beff206bd0db405c2275e0b5c17f42->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f0beff206bd0db405c2275e0b5c17f42, exception_lineno);
    }



    assertFrameObject(frame_f0beff206bd0db405c2275e0b5c17f42);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_defaults_1;
        PyObject *tmp_annotations_4;
        tmp_defaults_1 = mod_consts[156];
        tmp_annotations_4 = DICT_COPY(mod_consts[157]);
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_29 = MAKE_FUNCTION_sqlalchemy$engine$create$$$function__4_engine_from_config(tmp_defaults_1, tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_29);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("sqlalchemy.engine.create", false);

    Py_INCREF(module_sqlalchemy$engine$create);
    return module_sqlalchemy$engine$create;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$create, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("sqlalchemy$engine$create", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
