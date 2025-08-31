/* Generated code for Python module 'torch.nn.quantized.modules.linear'
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

/* The "module_torch$nn$quantized$modules$linear" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torch$nn$quantized$modules$linear;
PyDictObject *moduledict_torch$nn$quantized$modules$linear;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[166];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[166];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torch.nn.quantized.modules.linear"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 166; i++) {
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
void checkModuleConstants_torch$nn$quantized$modules$linear(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 166; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_9fb617cdaf3dfa83d1da6481970502d8;
static PyCodeObject *codeobj_134c11b43ad3d2af42c0483b3da6d66f;
static PyCodeObject *codeobj_290b4011140a8bd946f18955e148a48a;
static PyCodeObject *codeobj_d8e08f8f39c301a034e129c654fec710;
static PyCodeObject *codeobj_967361602f8cd04e5f45be889adc4190;
static PyCodeObject *codeobj_132c5564fa10f58db3c422e75b41b1cc;
static PyCodeObject *codeobj_6b7c2ae7350481d3ab182f21f9ecb226;
static PyCodeObject *codeobj_312682fb87df98a796bfe02a478cd055;
static PyCodeObject *codeobj_c7a3339c29628cf07b9ed104b6959d97;
static PyCodeObject *codeobj_0bbac115b8d6256760c836ccfc0509de;
static PyCodeObject *codeobj_4a3d6d3c6cb6321c25aec97a83617ecc;
static PyCodeObject *codeobj_26ecd74944b0b04e2b565c0839dd8ac0;
static PyCodeObject *codeobj_b7921d38d9bcc638879f3e4de687fe6a;
static PyCodeObject *codeobj_4217923bd56c0e23f3bfa4977cf16cf0;
static PyCodeObject *codeobj_1693452dce2f6901818a3901f8e0f2e5;
static PyCodeObject *codeobj_156c2f8cd373aed526d381e5b28dd38a;
static PyCodeObject *codeobj_826a4c0aed48777a9ac7d483f9282f73;
static PyCodeObject *codeobj_66d1c8382fc0b1c7f96abeb747e9f7d7;
static PyCodeObject *codeobj_76f81f3cb750bb10e99c8abdab64cb37;
static PyCodeObject *codeobj_fe9975c4054c09aaca5da932e334adef;
static PyCodeObject *codeobj_d315c8ba5f37ee590de9a19658935750;
static PyCodeObject *codeobj_9df17238d98f80d0d2db5e5ac1b39e9c;
static PyCodeObject *codeobj_cd0e9564b098863bcc96a4acc1a6bde8;
static PyCodeObject *codeobj_559c291bc7db2f9f92955c0e0c4c4ea7;
static PyCodeObject *codeobj_49e023d182a2a75d4518f58d176c5244;
static PyCodeObject *codeobj_d15c4fd92727d671017f822cc91d9a3a;
static PyCodeObject *codeobj_d6c1d5a1f1c84538cad800ff787abb2a;
static PyCodeObject *codeobj_96905fde659c3190a2bb846e2a0bbe5c;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[147]); CHECK_OBJECT(module_filename_obj);
    codeobj_9fb617cdaf3dfa83d1da6481970502d8 = MAKE_CODE_OBJECT(module_filename_obj, 271, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[148], mod_consts[148], mod_consts[149], NULL, 1, 0, 0);
    codeobj_134c11b43ad3d2af42c0483b3da6d66f = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[150], mod_consts[150], NULL, NULL, 0, 0, 0);
    codeobj_290b4011140a8bd946f18955e148a48a = MAKE_CODE_OBJECT(module_filename_obj, 111, CO_NOFREE, mod_consts[121], mod_consts[121], mod_consts[151], NULL, 0, 0, 0);
    codeobj_d8e08f8f39c301a034e129c654fec710 = MAKE_CODE_OBJECT(module_filename_obj, 9, CO_NOFREE, mod_consts[24], mod_consts[24], mod_consts[151], NULL, 0, 0, 0);
    codeobj_967361602f8cd04e5f45be889adc4190 = MAKE_CODE_OBJECT(module_filename_obj, 104, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[117], mod_consts[117], mod_consts[152], NULL, 1, 0, 0);
    codeobj_132c5564fa10f58db3c422e75b41b1cc = MAKE_CODE_OBJECT(module_filename_obj, 97, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[46], mod_consts[46], mod_consts[153], NULL, 2, 0, 0);
    codeobj_6b7c2ae7350481d3ab182f21f9ecb226 = MAKE_CODE_OBJECT(module_filename_obj, 86, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[44], mod_consts[44], mod_consts[154], NULL, 1, 0, 0);
    codeobj_312682fb87df98a796bfe02a478cd055 = MAKE_CODE_OBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[1], mod_consts[155], mod_consts[151], 2, 0, 0);
    codeobj_c7a3339c29628cf07b9ed104b6959d97 = MAKE_CODE_OBJECT(module_filename_obj, 140, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[1], mod_consts[156], mod_consts[151], 5, 0, 0);
    codeobj_0bbac115b8d6256760c836ccfc0509de = MAKE_CODE_OBJECT(module_filename_obj, 107, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[47], mod_consts[47], mod_consts[152], NULL, 1, 0, 0);
    codeobj_4a3d6d3c6cb6321c25aec97a83617ecc = MAKE_CODE_OBJECT(module_filename_obj, 174, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[47], mod_consts[47], mod_consts[152], NULL, 1, 0, 0);
    codeobj_26ecd74944b0b04e2b565c0839dd8ac0 = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[45], mod_consts[45], mod_consts[157], NULL, 2, 0, 0);
    codeobj_b7921d38d9bcc638879f3e4de687fe6a = MAKE_CODE_OBJECT(module_filename_obj, 166, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[127], mod_consts[127], mod_consts[152], NULL, 1, 0, 0);
    codeobj_4217923bd56c0e23f3bfa4977cf16cf0 = MAKE_CODE_OBJECT(module_filename_obj, 64, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[38], mod_consts[38], mod_consts[158], NULL, 8, 0, 0);
    codeobj_1693452dce2f6901818a3901f8e0f2e5 = MAKE_CODE_OBJECT(module_filename_obj, 218, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[38], mod_consts[38], mod_consts[158], mod_consts[151], 8, 0, 0);
    codeobj_156c2f8cd373aed526d381e5b28dd38a = MAKE_CODE_OBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[25], mod_consts[25], mod_consts[159], NULL, 4, 0, 0);
    codeobj_826a4c0aed48777a9ac7d483f9282f73 = MAKE_CODE_OBJECT(module_filename_obj, 210, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[25], mod_consts[25], mod_consts[159], mod_consts[151], 4, 0, 0);
    codeobj_66d1c8382fc0b1c7f96abeb747e9f7d7 = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[26], mod_consts[26], mod_consts[152], NULL, 1, 0, 0);
    codeobj_76f81f3cb750bb10e99c8abdab64cb37 = MAKE_CODE_OBJECT(module_filename_obj, 241, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[26], mod_consts[26], mod_consts[152], NULL, 1, 0, 0);
    codeobj_fe9975c4054c09aaca5da932e334adef = MAKE_CODE_OBJECT(module_filename_obj, 247, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[36], mod_consts[36], mod_consts[152], NULL, 1, 0, 0);
    codeobj_d315c8ba5f37ee590de9a19658935750 = MAKE_CODE_OBJECT(module_filename_obj, 169, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[129], mod_consts[129], mod_consts[152], NULL, 1, 0, 0);
    codeobj_9df17238d98f80d0d2db5e5ac1b39e9c = MAKE_CODE_OBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[110], mod_consts[110], mod_consts[160], NULL, 2, 0, 0);
    codeobj_cd0e9564b098863bcc96a4acc1a6bde8 = MAKE_CODE_OBJECT(module_filename_obj, 177, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[110], mod_consts[110], mod_consts[160], NULL, 2, 0, 0);
    codeobj_559c291bc7db2f9f92955c0e0c4c4ea7 = MAKE_CODE_OBJECT(module_filename_obj, 253, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[143], mod_consts[143], mod_consts[161], NULL, 2, 0, 0);
    codeobj_49e023d182a2a75d4518f58d176c5244 = MAKE_CODE_OBJECT(module_filename_obj, 292, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[145], mod_consts[145], mod_consts[162], NULL, 4, 0, 0);
    codeobj_d15c4fd92727d671017f822cc91d9a3a = MAKE_CODE_OBJECT(module_filename_obj, 250, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[163], NULL, 3, 0, 0);
    codeobj_d6c1d5a1f1c84538cad800ff787abb2a = MAKE_CODE_OBJECT(module_filename_obj, 21, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[164], NULL, 3, 0, 0);
    codeobj_96905fde659c3190a2bb846e2a0bbe5c = MAKE_CODE_OBJECT(module_filename_obj, 244, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], mod_consts[35], mod_consts[152], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__10___copy__();


static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__11___repr__();


static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__12___init__(PyObject *defaults, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__13__get_name();


static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__14_extra_repr();


static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__15___repr__();


static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__16_forward(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__17__save_to_state_dict(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__18__load_from_state_dict(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__19__weight_bias();


static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__1___init__(PyObject *defaults, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__20_weight();


static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__21_bias();


static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__22_set_weight_bias(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__23_from_float();


static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__24_from_reference();


static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__2_set_weight_bias(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__3__weight_bias();


static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__4_forward();


static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__5__save_to_state_dict();


static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__6__load_from_state_dict();


static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__7___getstate__();


static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__8___setstate__();


static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__9___deepcopy__();


// The module function definitions.
static PyObject *impl_torch$nn$quantized$modules$linear$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dtype = python_pars[1];
    PyObject *var_wq = NULL;
    struct Nuitka_FrameObject *frame_312682fb87df98a796bfe02a478cd055;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_312682fb87df98a796bfe02a478cd055 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_312682fb87df98a796bfe02a478cd055)) {
        Py_XDECREF(cache_frame_312682fb87df98a796bfe02a478cd055);

#if _DEBUG_REFCOUNTS
        if (cache_frame_312682fb87df98a796bfe02a478cd055 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_312682fb87df98a796bfe02a478cd055 = MAKE_FUNCTION_FRAME(codeobj_312682fb87df98a796bfe02a478cd055, module_torch$nn$quantized$modules$linear, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_312682fb87df98a796bfe02a478cd055->m_type_description == NULL);
    frame_312682fb87df98a796bfe02a478cd055 = cache_frame_312682fb87df98a796bfe02a478cd055;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_312682fb87df98a796bfe02a478cd055);
    assert(Py_REFCNT(frame_312682fb87df98a796bfe02a478cd055) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 13;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_torch$nn$quantized$modules$linear, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        frame_312682fb87df98a796bfe02a478cd055->m_frame.f_lineno = 13;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[1]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_dtype);
        tmp_assattr_value_1 = par_dtype;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[2], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 15;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[4]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 15;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "oooc";
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_posargs_values_1;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[5]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = mod_consts[6];
        tmp_kw_call_value_1_1 = mod_consts[7];
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 16;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[4]);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 16;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_call_posargs_values_1 = DEEP_COPY_TUPLE_GUIDED(mod_consts[8], "l");
        frame_312682fb87df98a796bfe02a478cd055->m_frame.f_lineno = 16;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_1, tmp_call_posargs_values_1, kw_values, mod_consts[9]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_call_posargs_values_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        assert(var_wq == NULL);
        var_wq = tmp_assign_source_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[2]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 17;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[10]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 17;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "oooc";
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
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_posargs_values_2;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[11]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 18;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[12]);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 18;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_call_posargs_values_2 = DEEP_COPY_TUPLE_GUIDED(mod_consts[8], "l");
        frame_312682fb87df98a796bfe02a478cd055->m_frame.f_lineno = 18;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_2, tmp_call_posargs_values_2, kw_values, mod_consts[13]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_call_posargs_values_2);
        Py_DECREF(tmp_kw_call_value_0_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        assert(var_wq == NULL);
        var_wq = tmp_assign_source_2;
    }
    branch_no_2:;
    branch_end_1:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[14]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        if (var_wq == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 19;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = var_wq;
        tmp_args_element_value_2 = Py_None;
        frame_312682fb87df98a796bfe02a478cd055->m_frame.f_lineno = 19;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_312682fb87df98a796bfe02a478cd055, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_312682fb87df98a796bfe02a478cd055->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_312682fb87df98a796bfe02a478cd055, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_312682fb87df98a796bfe02a478cd055,
        type_description_1,
        par_self,
        par_dtype,
        var_wq,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_312682fb87df98a796bfe02a478cd055 == cache_frame_312682fb87df98a796bfe02a478cd055) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_312682fb87df98a796bfe02a478cd055);
        cache_frame_312682fb87df98a796bfe02a478cd055 = NULL;
    }

    assertFrameObject(frame_312682fb87df98a796bfe02a478cd055);

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
    Py_XDECREF(var_wq);
    var_wq = NULL;
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

    Py_XDECREF(var_wq);
    var_wq = NULL;
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
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$nn$quantized$modules$linear$$$function__2_set_weight_bias(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_weight = python_pars[1];
    PyObject *par_bias = python_pars[2];
    struct Nuitka_FrameObject *frame_d6c1d5a1f1c84538cad800ff787abb2a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_d6c1d5a1f1c84538cad800ff787abb2a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d6c1d5a1f1c84538cad800ff787abb2a)) {
        Py_XDECREF(cache_frame_d6c1d5a1f1c84538cad800ff787abb2a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d6c1d5a1f1c84538cad800ff787abb2a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d6c1d5a1f1c84538cad800ff787abb2a = MAKE_FUNCTION_FRAME(codeobj_d6c1d5a1f1c84538cad800ff787abb2a, module_torch$nn$quantized$modules$linear, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d6c1d5a1f1c84538cad800ff787abb2a->m_type_description == NULL);
    frame_d6c1d5a1f1c84538cad800ff787abb2a = cache_frame_d6c1d5a1f1c84538cad800ff787abb2a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d6c1d5a1f1c84538cad800ff787abb2a);
    assert(Py_REFCNT(frame_d6c1d5a1f1c84538cad800ff787abb2a) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 23;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[4]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 23;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooo";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_assattr_target_1;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[16]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[17]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_weight);
        tmp_args_element_value_1 = par_weight;
        CHECK_OBJECT(par_bias);
        tmp_args_element_value_2 = par_bias;
        frame_d6c1d5a1f1c84538cad800ff787abb2a->m_frame.f_lineno = 24;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assattr_value_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[18],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[19], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[2]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 25;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[10]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 25;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooo";
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
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_assattr_target_2;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[16]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[17]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_weight);
        tmp_args_element_value_3 = par_weight;
        CHECK_OBJECT(par_bias);
        tmp_args_element_value_4 = par_bias;
        frame_d6c1d5a1f1c84538cad800ff787abb2a->m_frame.f_lineno = 26;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assattr_value_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[20],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_2);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[19], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[21];
        frame_d6c1d5a1f1c84538cad800ff787abb2a->m_frame.f_lineno = 28;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 28;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_end_2:;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d6c1d5a1f1c84538cad800ff787abb2a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d6c1d5a1f1c84538cad800ff787abb2a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d6c1d5a1f1c84538cad800ff787abb2a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d6c1d5a1f1c84538cad800ff787abb2a,
        type_description_1,
        par_self,
        par_weight,
        par_bias
    );


    // Release cached frame if used for exception.
    if (frame_d6c1d5a1f1c84538cad800ff787abb2a == cache_frame_d6c1d5a1f1c84538cad800ff787abb2a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d6c1d5a1f1c84538cad800ff787abb2a);
        cache_frame_d6c1d5a1f1c84538cad800ff787abb2a = NULL;
    }

    assertFrameObject(frame_d6c1d5a1f1c84538cad800ff787abb2a);

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
    CHECK_OBJECT(par_weight);
    Py_DECREF(par_weight);
    CHECK_OBJECT(par_bias);
    Py_DECREF(par_bias);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_weight);
    Py_DECREF(par_weight);
    CHECK_OBJECT(par_bias);
    Py_DECREF(par_bias);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$nn$quantized$modules$linear$$$function__3__weight_bias(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_66d1c8382fc0b1c7f96abeb747e9f7d7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_66d1c8382fc0b1c7f96abeb747e9f7d7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_66d1c8382fc0b1c7f96abeb747e9f7d7)) {
        Py_XDECREF(cache_frame_66d1c8382fc0b1c7f96abeb747e9f7d7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_66d1c8382fc0b1c7f96abeb747e9f7d7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_66d1c8382fc0b1c7f96abeb747e9f7d7 = MAKE_FUNCTION_FRAME(codeobj_66d1c8382fc0b1c7f96abeb747e9f7d7, module_torch$nn$quantized$modules$linear, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_66d1c8382fc0b1c7f96abeb747e9f7d7->m_type_description == NULL);
    frame_66d1c8382fc0b1c7f96abeb747e9f7d7 = cache_frame_66d1c8382fc0b1c7f96abeb747e9f7d7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_66d1c8382fc0b1c7f96abeb747e9f7d7);
    assert(Py_REFCNT(frame_66d1c8382fc0b1c7f96abeb747e9f7d7) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 33;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[4]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 33;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_6;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[16]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[17]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[22]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[19]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 34;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_66d1c8382fc0b1c7f96abeb747e9f7d7->m_frame.f_lineno = 34;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[2]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 35;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[10]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 35;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "o";
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
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_12;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[16]);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[17]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[23]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[19]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 36;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_66d1c8382fc0b1c7f96abeb747e9f7d7->m_frame.f_lineno = 36;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[21];
        frame_66d1c8382fc0b1c7f96abeb747e9f7d7->m_frame.f_lineno = 38;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 38;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_end_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_66d1c8382fc0b1c7f96abeb747e9f7d7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_66d1c8382fc0b1c7f96abeb747e9f7d7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_66d1c8382fc0b1c7f96abeb747e9f7d7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_66d1c8382fc0b1c7f96abeb747e9f7d7,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_66d1c8382fc0b1c7f96abeb747e9f7d7 == cache_frame_66d1c8382fc0b1c7f96abeb747e9f7d7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_66d1c8382fc0b1c7f96abeb747e9f7d7);
        cache_frame_66d1c8382fc0b1c7f96abeb747e9f7d7 = NULL;
    }

    assertFrameObject(frame_66d1c8382fc0b1c7f96abeb747e9f7d7);

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


static PyObject *impl_torch$nn$quantized$modules$linear$$$function__4_forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_x);
    tmp_return_value = par_x;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$nn$quantized$modules$linear$$$function__5__save_to_state_dict(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_destination = python_pars[1];
    PyObject *par_prefix = python_pars[2];
    PyObject *par_keep_vars = python_pars[3];
    struct Nuitka_FrameObject *frame_156c2f8cd373aed526d381e5b28dd38a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_156c2f8cd373aed526d381e5b28dd38a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_156c2f8cd373aed526d381e5b28dd38a)) {
        Py_XDECREF(cache_frame_156c2f8cd373aed526d381e5b28dd38a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_156c2f8cd373aed526d381e5b28dd38a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_156c2f8cd373aed526d381e5b28dd38a = MAKE_FUNCTION_FRAME(codeobj_156c2f8cd373aed526d381e5b28dd38a, module_torch$nn$quantized$modules$linear, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_156c2f8cd373aed526d381e5b28dd38a->m_type_description == NULL);
    frame_156c2f8cd373aed526d381e5b28dd38a = cache_frame_156c2f8cd373aed526d381e5b28dd38a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_156c2f8cd373aed526d381e5b28dd38a);
    assert(Py_REFCNT(frame_156c2f8cd373aed526d381e5b28dd38a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER2(moduledict_torch$nn$quantized$modules$linear, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_destination);
        tmp_args_element_value_1 = par_destination;
        CHECK_OBJECT(par_prefix);
        tmp_args_element_value_2 = par_prefix;
        CHECK_OBJECT(par_keep_vars);
        tmp_args_element_value_3 = par_keep_vars;
        frame_156c2f8cd373aed526d381e5b28dd38a->m_frame.f_lineno = 60;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[25],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_destination);
        tmp_ass_subscribed_1 = par_destination;
        CHECK_OBJECT(par_prefix);
        tmp_add_expr_left_1 = par_prefix;
        tmp_add_expr_right_1 = mod_consts[2];
        tmp_ass_subscript_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_ass_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 61;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_156c2f8cd373aed526d381e5b28dd38a->m_frame.f_lineno = 62;
        tmp_ass_subvalue_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[26]);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_destination);
        tmp_ass_subscribed_2 = par_destination;
        CHECK_OBJECT(par_prefix);
        tmp_add_expr_left_2 = par_prefix;
        tmp_add_expr_right_2 = mod_consts[19];
        tmp_ass_subscript_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_ass_subscript_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 62;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscript_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_156c2f8cd373aed526d381e5b28dd38a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_156c2f8cd373aed526d381e5b28dd38a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_156c2f8cd373aed526d381e5b28dd38a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_156c2f8cd373aed526d381e5b28dd38a,
        type_description_1,
        par_self,
        par_destination,
        par_prefix,
        par_keep_vars,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_156c2f8cd373aed526d381e5b28dd38a == cache_frame_156c2f8cd373aed526d381e5b28dd38a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_156c2f8cd373aed526d381e5b28dd38a);
        cache_frame_156c2f8cd373aed526d381e5b28dd38a = NULL;
    }

    assertFrameObject(frame_156c2f8cd373aed526d381e5b28dd38a);

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
    CHECK_OBJECT(par_destination);
    Py_DECREF(par_destination);
    CHECK_OBJECT(par_prefix);
    Py_DECREF(par_prefix);
    CHECK_OBJECT(par_keep_vars);
    Py_DECREF(par_keep_vars);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_destination);
    Py_DECREF(par_destination);
    CHECK_OBJECT(par_prefix);
    Py_DECREF(par_prefix);
    CHECK_OBJECT(par_keep_vars);
    Py_DECREF(par_keep_vars);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$nn$quantized$modules$linear$$$function__6__load_from_state_dict(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_state_dict = python_pars[1];
    PyObject *par_prefix = python_pars[2];
    PyObject *par_local_metadata = python_pars[3];
    PyObject *par_strict = python_pars[4];
    PyObject *par_missing_keys = python_pars[5];
    PyObject *par_unexpected_keys = python_pars[6];
    PyObject *par_error_msgs = python_pars[7];
    PyObject *var_version = NULL;
    PyObject *var_weight = NULL;
    PyObject *var_bias = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_4217923bd56c0e23f3bfa4977cf16cf0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
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
    static struct Nuitka_FrameObject *cache_frame_4217923bd56c0e23f3bfa4977cf16cf0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4217923bd56c0e23f3bfa4977cf16cf0)) {
        Py_XDECREF(cache_frame_4217923bd56c0e23f3bfa4977cf16cf0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4217923bd56c0e23f3bfa4977cf16cf0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4217923bd56c0e23f3bfa4977cf16cf0 = MAKE_FUNCTION_FRAME(codeobj_4217923bd56c0e23f3bfa4977cf16cf0, module_torch$nn$quantized$modules$linear, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4217923bd56c0e23f3bfa4977cf16cf0->m_type_description == NULL);
    frame_4217923bd56c0e23f3bfa4977cf16cf0 = cache_frame_4217923bd56c0e23f3bfa4977cf16cf0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4217923bd56c0e23f3bfa4977cf16cf0);
    assert(Py_REFCNT(frame_4217923bd56c0e23f3bfa4977cf16cf0) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_local_metadata);
        tmp_expression_value_1 = par_local_metadata;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[27]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        frame_4217923bd56c0e23f3bfa4977cf16cf0->m_frame.f_lineno = 66;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[28]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        assert(var_version == NULL);
        var_version = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_version);
        tmp_cmp_expr_left_1 = var_version;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_version);
        tmp_cmp_expr_left_2 = var_version;
        tmp_cmp_expr_right_2 = mod_consts[29];
        tmp_or_right_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_assattr_target_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[4]);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[2], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_state_dict);
        tmp_expression_value_3 = par_state_dict;
        CHECK_OBJECT(par_prefix);
        tmp_add_expr_left_1 = par_prefix;
        tmp_add_expr_right_1 = mod_consts[2];
        tmp_subscript_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[2], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        CHECK_OBJECT(par_state_dict);
        tmp_expression_value_4 = par_state_dict;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[30]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prefix);
        tmp_add_expr_left_2 = par_prefix;
        tmp_add_expr_right_2 = mod_consts[2];
        tmp_args_element_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 71;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        frame_4217923bd56c0e23f3bfa4977cf16cf0->m_frame.f_lineno = 71;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_end_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_version);
        tmp_cmp_expr_left_3 = var_version;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_or_left_value_2 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT(var_version);
        tmp_cmp_expr_left_4 = var_version;
        tmp_cmp_expr_right_4 = mod_consts[31];
        tmp_or_right_value_2 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_or_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_condition_result_2 = tmp_or_left_value_2;
        or_end_2:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 74;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[14]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        if (par_state_dict == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 74;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = par_state_dict;
        if (par_prefix == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 74;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_left_3 = par_prefix;
        tmp_add_expr_right_3 = mod_consts[35];
        tmp_subscript_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_3, tmp_add_expr_right_3);
        if (tmp_subscript_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 74;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 74;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        if (par_state_dict == NULL) {
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 74;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = par_state_dict;
        if (par_prefix == NULL) {
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 74;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_left_4 = par_prefix;
        tmp_add_expr_right_4 = mod_consts[36];
        tmp_subscript_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_4, tmp_add_expr_right_4);
        if (tmp_subscript_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 74;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_3);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 74;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        frame_4217923bd56c0e23f3bfa4977cf16cf0->m_frame.f_lineno = 74;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        if (par_state_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 75;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = par_state_dict;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[30]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        if (par_prefix == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 75;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_left_5 = par_prefix;
        tmp_add_expr_right_5 = mod_consts[35];
        tmp_args_element_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_5, tmp_add_expr_right_5);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 75;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        frame_4217923bd56c0e23f3bfa4977cf16cf0->m_frame.f_lineno = 75;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        if (par_state_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 76;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = par_state_dict;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[30]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        if (par_prefix == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 76;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_left_6 = par_prefix;
        tmp_add_expr_right_6 = mod_consts[36];
        tmp_args_element_value_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_6, tmp_add_expr_right_6);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 76;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        frame_4217923bd56c0e23f3bfa4977cf16cf0->m_frame.f_lineno = 76;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_version);
        tmp_cmp_expr_left_5 = var_version;
        tmp_cmp_expr_right_5 = mod_consts[31];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_add_expr_left_7;
        PyObject *tmp_add_expr_right_7;
        if (par_state_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 79;
            type_description_1 = "oooooooooooN";
            goto try_except_handler_2;
        }

        tmp_expression_value_10 = par_state_dict;
        if (par_prefix == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 79;
            type_description_1 = "oooooooooooN";
            goto try_except_handler_2;
        }

        tmp_add_expr_left_7 = par_prefix;
        tmp_add_expr_right_7 = mod_consts[19];
        tmp_subscript_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_7, tmp_add_expr_right_7);
        if (tmp_subscript_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooooooooooN";
            goto try_except_handler_2;
        }
        tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_4);
        Py_DECREF(tmp_subscript_value_4);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooooooooooN";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooooooooooN";
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


            type_description_1 = "oooooooooooN";
            exception_lineno = 79;
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


            type_description_1 = "oooooooooooN";
            exception_lineno = 79;
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

                    type_description_1 = "oooooooooooN";
                    exception_lineno = 79;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[37];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooN";
            exception_lineno = 79;
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
        assert(var_weight == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_weight = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var_bias == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_bias = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_add_expr_left_8;
        PyObject *tmp_add_expr_right_8;
        if (par_state_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 80;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_11 = par_state_dict;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[30]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        if (par_prefix == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 80;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_left_8 = par_prefix;
        tmp_add_expr_right_8 = mod_consts[19];
        tmp_args_element_value_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_8, tmp_add_expr_right_8);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 80;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        frame_4217923bd56c0e23f3bfa4977cf16cf0->m_frame.f_lineno = 80;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 81;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(var_weight);
        tmp_args_element_value_7 = var_weight;
        CHECK_OBJECT(var_bias);
        tmp_args_element_value_8 = var_bias;
        frame_4217923bd56c0e23f3bfa4977cf16cf0->m_frame.f_lineno = 81;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_6 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[14],
                call_args
            );
        }

        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_3:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 83;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_12 = BUILTIN_SUPER2(moduledict_torch$nn$quantized$modules$linear, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[38]);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        if (par_state_dict == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 83;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_9 = par_state_dict;
        if (par_prefix == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 83;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_10 = par_prefix;
        CHECK_OBJECT(par_local_metadata);
        tmp_args_element_value_11 = par_local_metadata;
        tmp_args_element_value_12 = Py_False;
        CHECK_OBJECT(par_missing_keys);
        tmp_args_element_value_13 = par_missing_keys;
        CHECK_OBJECT(par_unexpected_keys);
        tmp_args_element_value_14 = par_unexpected_keys;
        CHECK_OBJECT(par_error_msgs);
        tmp_args_element_value_15 = par_error_msgs;
        frame_4217923bd56c0e23f3bfa4977cf16cf0->m_frame.f_lineno = 83;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS7(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4217923bd56c0e23f3bfa4977cf16cf0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4217923bd56c0e23f3bfa4977cf16cf0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4217923bd56c0e23f3bfa4977cf16cf0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4217923bd56c0e23f3bfa4977cf16cf0,
        type_description_1,
        par_self,
        par_state_dict,
        par_prefix,
        par_local_metadata,
        par_strict,
        par_missing_keys,
        par_unexpected_keys,
        par_error_msgs,
        var_version,
        var_weight,
        var_bias,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_4217923bd56c0e23f3bfa4977cf16cf0 == cache_frame_4217923bd56c0e23f3bfa4977cf16cf0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4217923bd56c0e23f3bfa4977cf16cf0);
        cache_frame_4217923bd56c0e23f3bfa4977cf16cf0 = NULL;
    }

    assertFrameObject(frame_4217923bd56c0e23f3bfa4977cf16cf0);

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
    CHECK_OBJECT(var_version);
    Py_DECREF(var_version);
    var_version = NULL;
    Py_XDECREF(var_weight);
    var_weight = NULL;
    Py_XDECREF(var_bias);
    var_bias = NULL;
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

    Py_XDECREF(var_version);
    var_version = NULL;
    Py_XDECREF(var_weight);
    var_weight = NULL;
    Py_XDECREF(var_bias);
    var_bias = NULL;
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
    CHECK_OBJECT(par_state_dict);
    Py_DECREF(par_state_dict);
    CHECK_OBJECT(par_prefix);
    Py_DECREF(par_prefix);
    CHECK_OBJECT(par_local_metadata);
    Py_DECREF(par_local_metadata);
    CHECK_OBJECT(par_strict);
    Py_DECREF(par_strict);
    CHECK_OBJECT(par_missing_keys);
    Py_DECREF(par_missing_keys);
    CHECK_OBJECT(par_unexpected_keys);
    Py_DECREF(par_unexpected_keys);
    CHECK_OBJECT(par_error_msgs);
    Py_DECREF(par_error_msgs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_state_dict);
    Py_DECREF(par_state_dict);
    CHECK_OBJECT(par_prefix);
    Py_DECREF(par_prefix);
    CHECK_OBJECT(par_local_metadata);
    Py_DECREF(par_local_metadata);
    CHECK_OBJECT(par_strict);
    Py_DECREF(par_strict);
    CHECK_OBJECT(par_missing_keys);
    Py_DECREF(par_missing_keys);
    CHECK_OBJECT(par_unexpected_keys);
    Py_DECREF(par_unexpected_keys);
    CHECK_OBJECT(par_error_msgs);
    Py_DECREF(par_error_msgs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$nn$quantized$modules$linear$$$function__7___getstate__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_qweight = NULL;
    PyObject *var_bias = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_6b7c2ae7350481d3ab182f21f9ecb226;
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
    static struct Nuitka_FrameObject *cache_frame_6b7c2ae7350481d3ab182f21f9ecb226 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6b7c2ae7350481d3ab182f21f9ecb226)) {
        Py_XDECREF(cache_frame_6b7c2ae7350481d3ab182f21f9ecb226);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6b7c2ae7350481d3ab182f21f9ecb226 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6b7c2ae7350481d3ab182f21f9ecb226 = MAKE_FUNCTION_FRAME(codeobj_6b7c2ae7350481d3ab182f21f9ecb226, module_torch$nn$quantized$modules$linear, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6b7c2ae7350481d3ab182f21f9ecb226->m_type_description == NULL);
    frame_6b7c2ae7350481d3ab182f21f9ecb226 = cache_frame_6b7c2ae7350481d3ab182f21f9ecb226;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6b7c2ae7350481d3ab182f21f9ecb226);
    assert(Py_REFCNT(frame_6b7c2ae7350481d3ab182f21f9ecb226) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_6b7c2ae7350481d3ab182f21f9ecb226->m_frame.f_lineno = 88;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[26]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooo";
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


            type_description_1 = "ooo";
            exception_lineno = 88;
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


            type_description_1 = "ooo";
            exception_lineno = 88;
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

                    type_description_1 = "ooo";
                    exception_lineno = 88;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[37];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooo";
            exception_lineno = 88;
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
        assert(var_qweight == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_qweight = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_bias == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_bias = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_qweight);
        tmp_tuple_element_1 = var_qweight;
        tmp_return_value = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_expression_value_1;
            PyObject *tmp_expression_value_2;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_bias);
            tmp_tuple_element_1 = var_bias;
            PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_1 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[39]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 3, tmp_tuple_element_1);
        }
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
        exception_tb = MAKE_TRACEBACK(frame_6b7c2ae7350481d3ab182f21f9ecb226, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6b7c2ae7350481d3ab182f21f9ecb226->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6b7c2ae7350481d3ab182f21f9ecb226, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6b7c2ae7350481d3ab182f21f9ecb226,
        type_description_1,
        par_self,
        var_qweight,
        var_bias
    );


    // Release cached frame if used for exception.
    if (frame_6b7c2ae7350481d3ab182f21f9ecb226 == cache_frame_6b7c2ae7350481d3ab182f21f9ecb226) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6b7c2ae7350481d3ab182f21f9ecb226);
        cache_frame_6b7c2ae7350481d3ab182f21f9ecb226 = NULL;
    }

    assertFrameObject(frame_6b7c2ae7350481d3ab182f21f9ecb226);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_qweight);
    Py_DECREF(var_qweight);
    var_qweight = NULL;
    CHECK_OBJECT(var_bias);
    Py_DECREF(var_bias);
    var_bias = NULL;
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

    Py_XDECREF(var_qweight);
    var_qweight = NULL;
    Py_XDECREF(var_bias);
    var_bias = NULL;
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


static PyObject *impl_torch$nn$quantized$modules$linear$$$function__8___setstate__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_state = python_pars[1];
    struct Nuitka_FrameObject *frame_26ecd74944b0b04e2b565c0839dd8ac0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_26ecd74944b0b04e2b565c0839dd8ac0 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_26ecd74944b0b04e2b565c0839dd8ac0)) {
        Py_XDECREF(cache_frame_26ecd74944b0b04e2b565c0839dd8ac0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_26ecd74944b0b04e2b565c0839dd8ac0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_26ecd74944b0b04e2b565c0839dd8ac0 = MAKE_FUNCTION_FRAME(codeobj_26ecd74944b0b04e2b565c0839dd8ac0, module_torch$nn$quantized$modules$linear, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_26ecd74944b0b04e2b565c0839dd8ac0->m_type_description == NULL);
    frame_26ecd74944b0b04e2b565c0839dd8ac0 = cache_frame_26ecd74944b0b04e2b565c0839dd8ac0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_26ecd74944b0b04e2b565c0839dd8ac0);
    assert(Py_REFCNT(frame_26ecd74944b0b04e2b565c0839dd8ac0) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_state);
        tmp_expression_value_1 = par_state;
        tmp_subscript_value_1 = mod_consts[31];
        tmp_assattr_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 3);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[2], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[14]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_expression_value_3 = par_state;
        tmp_subscript_value_2 = mod_consts[7];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_2, 0);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 94;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_expression_value_4 = par_state;
        tmp_subscript_value_3 = mod_consts[40];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_3, 1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 94;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_26ecd74944b0b04e2b565c0839dd8ac0->m_frame.f_lineno = 94;
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


            exception_lineno = 94;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_state);
        tmp_expression_value_5 = par_state;
        tmp_subscript_value_4 = mod_consts[29];
        tmp_assattr_value_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_4, 2);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[39], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_26ecd74944b0b04e2b565c0839dd8ac0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_26ecd74944b0b04e2b565c0839dd8ac0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_26ecd74944b0b04e2b565c0839dd8ac0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_26ecd74944b0b04e2b565c0839dd8ac0,
        type_description_1,
        par_self,
        par_state
    );


    // Release cached frame if used for exception.
    if (frame_26ecd74944b0b04e2b565c0839dd8ac0 == cache_frame_26ecd74944b0b04e2b565c0839dd8ac0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_26ecd74944b0b04e2b565c0839dd8ac0);
        cache_frame_26ecd74944b0b04e2b565c0839dd8ac0 = NULL;
    }

    assertFrameObject(frame_26ecd74944b0b04e2b565c0839dd8ac0);

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
    CHECK_OBJECT(par_state);
    Py_DECREF(par_state);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_state);
    Py_DECREF(par_state);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$nn$quantized$modules$linear$$$function__9___deepcopy__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_memo = python_pars[1];
    PyObject *var_new_instance = NULL;
    PyObject *var_state = NULL;
    struct Nuitka_FrameObject *frame_132c5564fa10f58db3c422e75b41b1cc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_132c5564fa10f58db3c422e75b41b1cc = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_132c5564fa10f58db3c422e75b41b1cc)) {
        Py_XDECREF(cache_frame_132c5564fa10f58db3c422e75b41b1cc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_132c5564fa10f58db3c422e75b41b1cc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_132c5564fa10f58db3c422e75b41b1cc = MAKE_FUNCTION_FRAME(codeobj_132c5564fa10f58db3c422e75b41b1cc, module_torch$nn$quantized$modules$linear, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_132c5564fa10f58db3c422e75b41b1cc->m_type_description == NULL);
    frame_132c5564fa10f58db3c422e75b41b1cc = cache_frame_132c5564fa10f58db3c422e75b41b1cc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_132c5564fa10f58db3c422e75b41b1cc);
    assert(Py_REFCNT(frame_132c5564fa10f58db3c422e75b41b1cc) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_type_arg_2;
        CHECK_OBJECT(par_self);
        tmp_type_arg_1 = par_self;
        tmp_called_instance_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_called_instance_1 == NULL));
        CHECK_OBJECT(par_self);
        tmp_type_arg_2 = par_self;
        tmp_args_element_value_1 = BUILTIN_TYPE1(tmp_type_arg_2);
        assert(!(tmp_args_element_value_1 == NULL));
        frame_132c5564fa10f58db3c422e75b41b1cc->m_frame.f_lineno = 98;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[41], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_new_instance == NULL);
        var_new_instance = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[42]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[43]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_new_instance);
        tmp_args_element_value_2 = var_new_instance;
        frame_132c5564fa10f58db3c422e75b41b1cc->m_frame.f_lineno = 99;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[1], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        frame_132c5564fa10f58db3c422e75b41b1cc->m_frame.f_lineno = 100;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[44]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_state == NULL);
        var_state = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(var_new_instance);
        tmp_called_instance_4 = var_new_instance;
        CHECK_OBJECT(var_state);
        tmp_args_element_value_3 = var_state;
        frame_132c5564fa10f58db3c422e75b41b1cc->m_frame.f_lineno = 101;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[45], tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_132c5564fa10f58db3c422e75b41b1cc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_132c5564fa10f58db3c422e75b41b1cc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_132c5564fa10f58db3c422e75b41b1cc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_132c5564fa10f58db3c422e75b41b1cc,
        type_description_1,
        par_self,
        par_memo,
        var_new_instance,
        var_state
    );


    // Release cached frame if used for exception.
    if (frame_132c5564fa10f58db3c422e75b41b1cc == cache_frame_132c5564fa10f58db3c422e75b41b1cc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_132c5564fa10f58db3c422e75b41b1cc);
        cache_frame_132c5564fa10f58db3c422e75b41b1cc = NULL;
    }

    assertFrameObject(frame_132c5564fa10f58db3c422e75b41b1cc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_new_instance);
    tmp_return_value = var_new_instance;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_new_instance);
    Py_DECREF(var_new_instance);
    var_new_instance = NULL;
    CHECK_OBJECT(var_state);
    Py_DECREF(var_state);
    var_state = NULL;
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

    Py_XDECREF(var_new_instance);
    var_new_instance = NULL;
    Py_XDECREF(var_state);
    var_state = NULL;
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
    CHECK_OBJECT(par_memo);
    Py_DECREF(par_memo);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_memo);
    Py_DECREF(par_memo);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$nn$quantized$modules$linear$$$function__10___copy__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_967361602f8cd04e5f45be889adc4190;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_967361602f8cd04e5f45be889adc4190 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_967361602f8cd04e5f45be889adc4190)) {
        Py_XDECREF(cache_frame_967361602f8cd04e5f45be889adc4190);

#if _DEBUG_REFCOUNTS
        if (cache_frame_967361602f8cd04e5f45be889adc4190 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_967361602f8cd04e5f45be889adc4190 = MAKE_FUNCTION_FRAME(codeobj_967361602f8cd04e5f45be889adc4190, module_torch$nn$quantized$modules$linear, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_967361602f8cd04e5f45be889adc4190->m_type_description == NULL);
    frame_967361602f8cd04e5f45be889adc4190 = cache_frame_967361602f8cd04e5f45be889adc4190;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_967361602f8cd04e5f45be889adc4190);
    assert(Py_REFCNT(frame_967361602f8cd04e5f45be889adc4190) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_arg_element_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_call_arg_element_1 = MAKE_DICT_EMPTY();
        frame_967361602f8cd04e5f45be889adc4190->m_frame.f_lineno = 105;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[46], tmp_call_arg_element_1);
        Py_DECREF(tmp_call_arg_element_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
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
        exception_tb = MAKE_TRACEBACK(frame_967361602f8cd04e5f45be889adc4190, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_967361602f8cd04e5f45be889adc4190->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_967361602f8cd04e5f45be889adc4190, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_967361602f8cd04e5f45be889adc4190,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_967361602f8cd04e5f45be889adc4190 == cache_frame_967361602f8cd04e5f45be889adc4190) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_967361602f8cd04e5f45be889adc4190);
        cache_frame_967361602f8cd04e5f45be889adc4190 = NULL;
    }

    assertFrameObject(frame_967361602f8cd04e5f45be889adc4190);

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


static PyObject *impl_torch$nn$quantized$modules$linear$$$function__11___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_0bbac115b8d6256760c836ccfc0509de;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0bbac115b8d6256760c836ccfc0509de = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0bbac115b8d6256760c836ccfc0509de)) {
        Py_XDECREF(cache_frame_0bbac115b8d6256760c836ccfc0509de);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0bbac115b8d6256760c836ccfc0509de == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0bbac115b8d6256760c836ccfc0509de = MAKE_FUNCTION_FRAME(codeobj_0bbac115b8d6256760c836ccfc0509de, module_torch$nn$quantized$modules$linear, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0bbac115b8d6256760c836ccfc0509de->m_type_description == NULL);
    frame_0bbac115b8d6256760c836ccfc0509de = cache_frame_0bbac115b8d6256760c836ccfc0509de;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0bbac115b8d6256760c836ccfc0509de);
    assert(Py_REFCNT(frame_0bbac115b8d6256760c836ccfc0509de) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_0bbac115b8d6256760c836ccfc0509de->m_frame.f_lineno = 108;
        tmp_called_instance_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[26]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_0bbac115b8d6256760c836ccfc0509de->m_frame.f_lineno = 108;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[47]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
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
        exception_tb = MAKE_TRACEBACK(frame_0bbac115b8d6256760c836ccfc0509de, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0bbac115b8d6256760c836ccfc0509de->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0bbac115b8d6256760c836ccfc0509de, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0bbac115b8d6256760c836ccfc0509de,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_0bbac115b8d6256760c836ccfc0509de == cache_frame_0bbac115b8d6256760c836ccfc0509de) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0bbac115b8d6256760c836ccfc0509de);
        cache_frame_0bbac115b8d6256760c836ccfc0509de = NULL;
    }

    assertFrameObject(frame_0bbac115b8d6256760c836ccfc0509de);

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


static PyObject *impl_torch$nn$quantized$modules$linear$$$function__12___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_in_features = python_pars[1];
    PyObject *par_out_features = python_pars[2];
    PyObject *par_bias_ = python_pars[3];
    PyObject *par_dtype = python_pars[4];
    PyObject *var_bias = NULL;
    PyObject *var_qweight = NULL;
    struct Nuitka_FrameObject *frame_c7a3339c29628cf07b9ed104b6959d97;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_c7a3339c29628cf07b9ed104b6959d97 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c7a3339c29628cf07b9ed104b6959d97)) {
        Py_XDECREF(cache_frame_c7a3339c29628cf07b9ed104b6959d97);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c7a3339c29628cf07b9ed104b6959d97 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c7a3339c29628cf07b9ed104b6959d97 = MAKE_FUNCTION_FRAME(codeobj_c7a3339c29628cf07b9ed104b6959d97, module_torch$nn$quantized$modules$linear, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c7a3339c29628cf07b9ed104b6959d97->m_type_description == NULL);
    frame_c7a3339c29628cf07b9ed104b6959d97 = cache_frame_c7a3339c29628cf07b9ed104b6959d97;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c7a3339c29628cf07b9ed104b6959d97);
    assert(Py_REFCNT(frame_c7a3339c29628cf07b9ed104b6959d97) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 142;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_torch$nn$quantized$modules$linear, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        frame_c7a3339c29628cf07b9ed104b6959d97->m_frame.f_lineno = 142;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[1]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_in_features);
        tmp_assattr_value_1 = par_in_features;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[48], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_out_features);
        tmp_assattr_value_2 = par_out_features;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[49], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        assert(var_bias == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_bias = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_bias_);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_bias_);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooooooc";
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_out_features);
        tmp_kw_call_arg_value_0_1 = par_out_features;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 151;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[12]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 151;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        frame_c7a3339c29628cf07b9ed104b6959d97->m_frame.f_lineno = 151;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[13]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_bias;
            assert(old != NULL);
            var_bias = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_dtype);
        tmp_cmp_expr_left_1 = par_dtype;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[4]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooooooc";
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
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_list_element_1;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_expression_value_5;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[5]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_out_features);
        tmp_list_element_1 = par_out_features;
        tmp_kw_call_arg_value_0_2 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_kw_call_arg_value_0_2, 0, tmp_list_element_1);
        CHECK_OBJECT(par_in_features);
        tmp_list_element_1 = par_in_features;
        PyList_SET_ITEM0(tmp_kw_call_arg_value_0_2, 1, tmp_list_element_1);
        tmp_kw_call_dict_value_0_2 = mod_consts[40];
        tmp_kw_call_dict_value_1_1 = mod_consts[7];
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_0_2);

            exception_lineno = 155;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_2_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[4]);
        if (tmp_kw_call_dict_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_0_2);

            exception_lineno = 155;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        frame_c7a3339c29628cf07b9ed104b6959d97->m_frame.f_lineno = 154;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[9]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_arg_value_0_2);
        Py_DECREF(tmp_kw_call_dict_value_2_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_qweight == NULL);
        var_qweight = tmp_assign_source_3;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_dtype);
        tmp_cmp_expr_left_2 = par_dtype;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[10]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooooooc";
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
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_list_element_2;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_expression_value_8;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[11]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_out_features);
        tmp_list_element_2 = par_out_features;
        tmp_kw_call_arg_value_0_3 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_kw_call_arg_value_0_3, 0, tmp_list_element_2);
        CHECK_OBJECT(par_in_features);
        tmp_list_element_2 = par_in_features;
        PyList_SET_ITEM0(tmp_kw_call_arg_value_0_3, 1, tmp_list_element_2);
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_arg_value_0_3);

            exception_lineno = 157;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[12]);
        if (tmp_kw_call_dict_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_arg_value_0_3);

            exception_lineno = 157;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        frame_c7a3339c29628cf07b9ed104b6959d97->m_frame.f_lineno = 157;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[13]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_arg_value_0_3);
        Py_DECREF(tmp_kw_call_dict_value_0_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_qweight == NULL);
        var_qweight = tmp_assign_source_4;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[50];
        frame_c7a3339c29628cf07b9ed104b6959d97->m_frame.f_lineno = 159;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 159;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooc";
        goto frame_exception_exit_1;
    }
    branch_end_3:;
    branch_end_2:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_assattr_target_3;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dtype);
        tmp_args_element_value_1 = par_dtype;
        frame_c7a3339c29628cf07b9ed104b6959d97->m_frame.f_lineno = 161;
        tmp_assattr_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_1);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[19], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[19]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_qweight);
        tmp_args_element_value_2 = var_qweight;
        CHECK_OBJECT(var_bias);
        tmp_args_element_value_3 = var_bias;
        frame_c7a3339c29628cf07b9ed104b6959d97->m_frame.f_lineno = 162;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[14],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = mod_consts[6];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[51], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_value_5 = mod_consts[7];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[52], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c7a3339c29628cf07b9ed104b6959d97, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c7a3339c29628cf07b9ed104b6959d97->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c7a3339c29628cf07b9ed104b6959d97, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c7a3339c29628cf07b9ed104b6959d97,
        type_description_1,
        par_self,
        par_in_features,
        par_out_features,
        par_bias_,
        par_dtype,
        var_bias,
        var_qweight,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_c7a3339c29628cf07b9ed104b6959d97 == cache_frame_c7a3339c29628cf07b9ed104b6959d97) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c7a3339c29628cf07b9ed104b6959d97);
        cache_frame_c7a3339c29628cf07b9ed104b6959d97 = NULL;
    }

    assertFrameObject(frame_c7a3339c29628cf07b9ed104b6959d97);

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
    CHECK_OBJECT(var_bias);
    Py_DECREF(var_bias);
    var_bias = NULL;
    CHECK_OBJECT(var_qweight);
    Py_DECREF(var_qweight);
    var_qweight = NULL;
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

    Py_XDECREF(var_bias);
    var_bias = NULL;
    Py_XDECREF(var_qweight);
    var_qweight = NULL;
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
    CHECK_OBJECT(par_in_features);
    Py_DECREF(par_in_features);
    CHECK_OBJECT(par_out_features);
    Py_DECREF(par_out_features);
    CHECK_OBJECT(par_bias_);
    Py_DECREF(par_bias_);
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_in_features);
    Py_DECREF(par_in_features);
    CHECK_OBJECT(par_out_features);
    Py_DECREF(par_out_features);
    CHECK_OBJECT(par_bias_);
    Py_DECREF(par_bias_);
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$nn$quantized$modules$linear$$$function__14_extra_repr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_d315c8ba5f37ee590de9a19658935750;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d315c8ba5f37ee590de9a19658935750 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d315c8ba5f37ee590de9a19658935750)) {
        Py_XDECREF(cache_frame_d315c8ba5f37ee590de9a19658935750);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d315c8ba5f37ee590de9a19658935750 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d315c8ba5f37ee590de9a19658935750 = MAKE_FUNCTION_FRAME(codeobj_d315c8ba5f37ee590de9a19658935750, module_torch$nn$quantized$modules$linear, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d315c8ba5f37ee590de9a19658935750->m_type_description == NULL);
    frame_d315c8ba5f37ee590de9a19658935750 = cache_frame_d315c8ba5f37ee590de9a19658935750;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d315c8ba5f37ee590de9a19658935750);
    assert(Py_REFCNT(frame_d315c8ba5f37ee590de9a19658935750) == 2);

    // Framed code:
    {
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_arg_value_4_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_arg_value_5_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        tmp_kw_call_arg_value_0_1 = mod_consts[53];
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[48]);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_kw_call_arg_value_2_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[49]);
        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 171;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_kw_call_arg_value_3_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[51]);
        if (tmp_kw_call_arg_value_3_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);

            exception_lineno = 171;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_kw_call_arg_value_4_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[52]);
        if (tmp_kw_call_arg_value_4_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);

            exception_lineno = 171;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_d315c8ba5f37ee590de9a19658935750->m_frame.f_lineno = 171;
        tmp_called_instance_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[35]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);

            exception_lineno = 171;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_d315c8ba5f37ee590de9a19658935750->m_frame.f_lineno = 171;
        tmp_kw_call_arg_value_5_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[54]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_kw_call_arg_value_5_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);

            exception_lineno = 171;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_d315c8ba5f37ee590de9a19658935750->m_frame.f_lineno = 170;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1, tmp_kw_call_arg_value_5_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS6(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        Py_DECREF(tmp_kw_call_arg_value_2_1);
        Py_DECREF(tmp_kw_call_arg_value_3_1);
        Py_DECREF(tmp_kw_call_arg_value_4_1);
        Py_DECREF(tmp_kw_call_arg_value_5_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
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
        exception_tb = MAKE_TRACEBACK(frame_d315c8ba5f37ee590de9a19658935750, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d315c8ba5f37ee590de9a19658935750->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d315c8ba5f37ee590de9a19658935750, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d315c8ba5f37ee590de9a19658935750,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_d315c8ba5f37ee590de9a19658935750 == cache_frame_d315c8ba5f37ee590de9a19658935750) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d315c8ba5f37ee590de9a19658935750);
        cache_frame_d315c8ba5f37ee590de9a19658935750 = NULL;
    }

    assertFrameObject(frame_d315c8ba5f37ee590de9a19658935750);

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


static PyObject *impl_torch$nn$quantized$modules$linear$$$function__15___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_4a3d6d3c6cb6321c25aec97a83617ecc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4a3d6d3c6cb6321c25aec97a83617ecc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4a3d6d3c6cb6321c25aec97a83617ecc)) {
        Py_XDECREF(cache_frame_4a3d6d3c6cb6321c25aec97a83617ecc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4a3d6d3c6cb6321c25aec97a83617ecc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4a3d6d3c6cb6321c25aec97a83617ecc = MAKE_FUNCTION_FRAME(codeobj_4a3d6d3c6cb6321c25aec97a83617ecc, module_torch$nn$quantized$modules$linear, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4a3d6d3c6cb6321c25aec97a83617ecc->m_type_description == NULL);
    frame_4a3d6d3c6cb6321c25aec97a83617ecc = cache_frame_4a3d6d3c6cb6321c25aec97a83617ecc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4a3d6d3c6cb6321c25aec97a83617ecc);
    assert(Py_REFCNT(frame_4a3d6d3c6cb6321c25aec97a83617ecc) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_4a3d6d3c6cb6321c25aec97a83617ecc->m_frame.f_lineno = 175;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
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
        exception_tb = MAKE_TRACEBACK(frame_4a3d6d3c6cb6321c25aec97a83617ecc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4a3d6d3c6cb6321c25aec97a83617ecc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4a3d6d3c6cb6321c25aec97a83617ecc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4a3d6d3c6cb6321c25aec97a83617ecc,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_4a3d6d3c6cb6321c25aec97a83617ecc == cache_frame_4a3d6d3c6cb6321c25aec97a83617ecc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4a3d6d3c6cb6321c25aec97a83617ecc);
        cache_frame_4a3d6d3c6cb6321c25aec97a83617ecc = NULL;
    }

    assertFrameObject(frame_4a3d6d3c6cb6321c25aec97a83617ecc);

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


static PyObject *impl_torch$nn$quantized$modules$linear$$$function__16_forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    struct Nuitka_FrameObject *frame_cd0e9564b098863bcc96a4acc1a6bde8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cd0e9564b098863bcc96a4acc1a6bde8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cd0e9564b098863bcc96a4acc1a6bde8)) {
        Py_XDECREF(cache_frame_cd0e9564b098863bcc96a4acc1a6bde8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cd0e9564b098863bcc96a4acc1a6bde8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cd0e9564b098863bcc96a4acc1a6bde8 = MAKE_FUNCTION_FRAME(codeobj_cd0e9564b098863bcc96a4acc1a6bde8, module_torch$nn$quantized$modules$linear, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cd0e9564b098863bcc96a4acc1a6bde8->m_type_description == NULL);
    frame_cd0e9564b098863bcc96a4acc1a6bde8 = cache_frame_cd0e9564b098863bcc96a4acc1a6bde8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cd0e9564b098863bcc96a4acc1a6bde8);
    assert(Py_REFCNT(frame_cd0e9564b098863bcc96a4acc1a6bde8) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_7;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[16]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[17]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[56]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[19]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 179;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[19]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 179;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[51]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 179;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[52]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 179;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_cd0e9564b098863bcc96a4acc1a6bde8->m_frame.f_lineno = 178;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
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
        exception_tb = MAKE_TRACEBACK(frame_cd0e9564b098863bcc96a4acc1a6bde8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cd0e9564b098863bcc96a4acc1a6bde8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cd0e9564b098863bcc96a4acc1a6bde8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cd0e9564b098863bcc96a4acc1a6bde8,
        type_description_1,
        par_self,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_cd0e9564b098863bcc96a4acc1a6bde8 == cache_frame_cd0e9564b098863bcc96a4acc1a6bde8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cd0e9564b098863bcc96a4acc1a6bde8);
        cache_frame_cd0e9564b098863bcc96a4acc1a6bde8 = NULL;
    }

    assertFrameObject(frame_cd0e9564b098863bcc96a4acc1a6bde8);

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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$nn$quantized$modules$linear$$$function__17__save_to_state_dict(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_destination = python_pars[1];
    PyObject *par_prefix = python_pars[2];
    PyObject *par_keep_vars = python_pars[3];
    struct Nuitka_FrameObject *frame_826a4c0aed48777a9ac7d483f9282f73;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_826a4c0aed48777a9ac7d483f9282f73 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_826a4c0aed48777a9ac7d483f9282f73)) {
        Py_XDECREF(cache_frame_826a4c0aed48777a9ac7d483f9282f73);

#if _DEBUG_REFCOUNTS
        if (cache_frame_826a4c0aed48777a9ac7d483f9282f73 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_826a4c0aed48777a9ac7d483f9282f73 = MAKE_FUNCTION_FRAME(codeobj_826a4c0aed48777a9ac7d483f9282f73, module_torch$nn$quantized$modules$linear, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_826a4c0aed48777a9ac7d483f9282f73->m_type_description == NULL);
    frame_826a4c0aed48777a9ac7d483f9282f73 = cache_frame_826a4c0aed48777a9ac7d483f9282f73;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_826a4c0aed48777a9ac7d483f9282f73);
    assert(Py_REFCNT(frame_826a4c0aed48777a9ac7d483f9282f73) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 211;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_torch$nn$quantized$modules$linear, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_destination);
        tmp_args_element_value_1 = par_destination;
        CHECK_OBJECT(par_prefix);
        tmp_args_element_value_2 = par_prefix;
        CHECK_OBJECT(par_keep_vars);
        tmp_args_element_value_3 = par_keep_vars;
        frame_826a4c0aed48777a9ac7d483f9282f73->m_frame.f_lineno = 211;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[25],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[57]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[51]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 212;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_826a4c0aed48777a9ac7d483f9282f73->m_frame.f_lineno = 212;
        tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_destination);
        tmp_ass_subscribed_1 = par_destination;
        CHECK_OBJECT(par_prefix);
        tmp_add_expr_left_1 = par_prefix;
        tmp_add_expr_right_1 = mod_consts[51];
        tmp_ass_subscript_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_ass_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 212;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[57]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[52]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 213;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_826a4c0aed48777a9ac7d483f9282f73->m_frame.f_lineno = 213;
        tmp_ass_subvalue_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_destination);
        tmp_ass_subscribed_2 = par_destination;
        CHECK_OBJECT(par_prefix);
        tmp_add_expr_left_2 = par_prefix;
        tmp_add_expr_right_2 = mod_consts[52];
        tmp_ass_subscript_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_ass_subscript_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 213;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscript_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_826a4c0aed48777a9ac7d483f9282f73, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_826a4c0aed48777a9ac7d483f9282f73->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_826a4c0aed48777a9ac7d483f9282f73, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_826a4c0aed48777a9ac7d483f9282f73,
        type_description_1,
        par_self,
        par_destination,
        par_prefix,
        par_keep_vars,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_826a4c0aed48777a9ac7d483f9282f73 == cache_frame_826a4c0aed48777a9ac7d483f9282f73) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_826a4c0aed48777a9ac7d483f9282f73);
        cache_frame_826a4c0aed48777a9ac7d483f9282f73 = NULL;
    }

    assertFrameObject(frame_826a4c0aed48777a9ac7d483f9282f73);

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
    CHECK_OBJECT(par_destination);
    Py_DECREF(par_destination);
    CHECK_OBJECT(par_prefix);
    Py_DECREF(par_prefix);
    CHECK_OBJECT(par_keep_vars);
    Py_DECREF(par_keep_vars);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_destination);
    Py_DECREF(par_destination);
    CHECK_OBJECT(par_prefix);
    Py_DECREF(par_prefix);
    CHECK_OBJECT(par_keep_vars);
    Py_DECREF(par_keep_vars);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$nn$quantized$modules$linear$$$function__18__load_from_state_dict(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_state_dict = python_pars[1];
    PyObject *par_prefix = python_pars[2];
    PyObject *par_local_metadata = python_pars[3];
    PyObject *par_strict = python_pars[4];
    PyObject *par_missing_keys = python_pars[5];
    PyObject *par_unexpected_keys = python_pars[6];
    PyObject *par_error_msgs = python_pars[7];
    PyObject *var_version = NULL;
    PyObject *var_weight = NULL;
    PyObject *var_bias = NULL;
    struct Nuitka_FrameObject *frame_1693452dce2f6901818a3901f8e0f2e5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_1693452dce2f6901818a3901f8e0f2e5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1693452dce2f6901818a3901f8e0f2e5)) {
        Py_XDECREF(cache_frame_1693452dce2f6901818a3901f8e0f2e5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1693452dce2f6901818a3901f8e0f2e5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1693452dce2f6901818a3901f8e0f2e5 = MAKE_FUNCTION_FRAME(codeobj_1693452dce2f6901818a3901f8e0f2e5, module_torch$nn$quantized$modules$linear, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1693452dce2f6901818a3901f8e0f2e5->m_type_description == NULL);
    frame_1693452dce2f6901818a3901f8e0f2e5 = cache_frame_1693452dce2f6901818a3901f8e0f2e5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1693452dce2f6901818a3901f8e0f2e5);
    assert(Py_REFCNT(frame_1693452dce2f6901818a3901f8e0f2e5) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_float_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_state_dict);
        tmp_expression_value_1 = par_state_dict;
        CHECK_OBJECT(par_prefix);
        tmp_add_expr_left_1 = par_prefix;
        tmp_add_expr_right_1 = mod_consts[51];
        tmp_subscript_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_float_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_float_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_1 = TO_FLOAT(tmp_float_arg_1);
        Py_DECREF(tmp_float_arg_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[51], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        CHECK_OBJECT(par_state_dict);
        tmp_expression_value_2 = par_state_dict;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[30]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prefix);
        tmp_add_expr_left_2 = par_prefix;
        tmp_add_expr_right_2 = mod_consts[51];
        tmp_args_element_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 221;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        frame_1693452dce2f6901818a3901f8e0f2e5->m_frame.f_lineno = 221;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_state_dict);
        tmp_expression_value_3 = par_state_dict;
        CHECK_OBJECT(par_prefix);
        tmp_add_expr_left_3 = par_prefix;
        tmp_add_expr_right_3 = mod_consts[52];
        tmp_subscript_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_3, tmp_add_expr_right_3);
        if (tmp_subscript_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_int_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_2 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[52], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        CHECK_OBJECT(par_state_dict);
        tmp_expression_value_4 = par_state_dict;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[30]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prefix);
        tmp_add_expr_left_4 = par_prefix;
        tmp_add_expr_right_4 = mod_consts[52];
        tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_4, tmp_add_expr_right_4);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 224;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        frame_1693452dce2f6901818a3901f8e0f2e5->m_frame.f_lineno = 224;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_local_metadata);
        tmp_expression_value_5 = par_local_metadata;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[27]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        frame_1693452dce2f6901818a3901f8e0f2e5->m_frame.f_lineno = 226;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_3, mod_consts[28]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_version == NULL);
        var_version = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_version);
        tmp_cmp_expr_left_1 = var_version;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_version);
        tmp_cmp_expr_left_2 = var_version;
        tmp_cmp_expr_right_2 = mod_consts[40];
        tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        CHECK_OBJECT(par_state_dict);
        tmp_expression_value_6 = par_state_dict;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[30]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prefix);
        tmp_add_expr_left_5 = par_prefix;
        tmp_add_expr_right_5 = mod_consts[35];
        tmp_args_element_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_5, tmp_add_expr_right_5);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 230;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        frame_1693452dce2f6901818a3901f8e0f2e5->m_frame.f_lineno = 230;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_weight == NULL);
        var_weight = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        CHECK_OBJECT(par_state_dict);
        tmp_expression_value_7 = par_state_dict;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[30]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prefix);
        tmp_add_expr_left_6 = par_prefix;
        tmp_add_expr_right_6 = mod_consts[36];
        tmp_args_element_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_6, tmp_add_expr_right_6);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 231;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        frame_1693452dce2f6901818a3901f8e0f2e5->m_frame.f_lineno = 231;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_bias == NULL);
        var_bias = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_add_expr_left_7;
        PyObject *tmp_add_expr_right_7;
        CHECK_OBJECT(par_state_dict);
        tmp_expression_value_8 = par_state_dict;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[58]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prefix);
        tmp_add_expr_left_7 = par_prefix;
        tmp_add_expr_right_7 = mod_consts[59];
        tmp_dict_key_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_7, tmp_add_expr_right_7);
        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 232;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_weight);
        tmp_dict_value_1 = var_weight;
        tmp_args_element_value_5 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_add_expr_left_8;
            PyObject *tmp_add_expr_right_8;
            tmp_res = PyDict_SetItem(tmp_args_element_value_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(par_prefix);
            tmp_add_expr_left_8 = par_prefix;
            tmp_add_expr_right_8 = mod_consts[60];
            tmp_dict_key_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_8, tmp_add_expr_right_8);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(var_bias);
            tmp_dict_value_1 = var_bias;
            tmp_res = PyDict_SetItem(tmp_args_element_value_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;
                type_description_1 = "oooooooooooc";
                goto dict_build_exception_1;
            }
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_5);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        frame_1693452dce2f6901818a3901f8e0f2e5->m_frame.f_lineno = 232;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 235;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_torch$nn$quantized$modules$linear, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state_dict);
        tmp_args_element_value_6 = par_state_dict;
        CHECK_OBJECT(par_prefix);
        tmp_args_element_value_7 = par_prefix;
        CHECK_OBJECT(par_local_metadata);
        tmp_args_element_value_8 = par_local_metadata;
        tmp_args_element_value_9 = Py_False;
        CHECK_OBJECT(par_missing_keys);
        tmp_args_element_value_10 = par_missing_keys;
        CHECK_OBJECT(par_unexpected_keys);
        tmp_args_element_value_11 = par_unexpected_keys;
        CHECK_OBJECT(par_error_msgs);
        tmp_args_element_value_12 = par_error_msgs;
        frame_1693452dce2f6901818a3901f8e0f2e5->m_frame.f_lineno = 235;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_4 = CALL_METHOD_WITH_ARGS7(
                tmp_called_instance_1,
                mod_consts[38],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1693452dce2f6901818a3901f8e0f2e5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1693452dce2f6901818a3901f8e0f2e5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1693452dce2f6901818a3901f8e0f2e5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1693452dce2f6901818a3901f8e0f2e5,
        type_description_1,
        par_self,
        par_state_dict,
        par_prefix,
        par_local_metadata,
        par_strict,
        par_missing_keys,
        par_unexpected_keys,
        par_error_msgs,
        var_version,
        var_weight,
        var_bias,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_1693452dce2f6901818a3901f8e0f2e5 == cache_frame_1693452dce2f6901818a3901f8e0f2e5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1693452dce2f6901818a3901f8e0f2e5);
        cache_frame_1693452dce2f6901818a3901f8e0f2e5 = NULL;
    }

    assertFrameObject(frame_1693452dce2f6901818a3901f8e0f2e5);

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
    CHECK_OBJECT(var_version);
    Py_DECREF(var_version);
    var_version = NULL;
    Py_XDECREF(var_weight);
    var_weight = NULL;
    Py_XDECREF(var_bias);
    var_bias = NULL;
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

    Py_XDECREF(var_version);
    var_version = NULL;
    Py_XDECREF(var_weight);
    var_weight = NULL;
    Py_XDECREF(var_bias);
    var_bias = NULL;
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
    CHECK_OBJECT(par_state_dict);
    Py_DECREF(par_state_dict);
    CHECK_OBJECT(par_prefix);
    Py_DECREF(par_prefix);
    CHECK_OBJECT(par_local_metadata);
    Py_DECREF(par_local_metadata);
    CHECK_OBJECT(par_strict);
    Py_DECREF(par_strict);
    CHECK_OBJECT(par_missing_keys);
    Py_DECREF(par_missing_keys);
    CHECK_OBJECT(par_unexpected_keys);
    Py_DECREF(par_unexpected_keys);
    CHECK_OBJECT(par_error_msgs);
    Py_DECREF(par_error_msgs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_state_dict);
    Py_DECREF(par_state_dict);
    CHECK_OBJECT(par_prefix);
    Py_DECREF(par_prefix);
    CHECK_OBJECT(par_local_metadata);
    Py_DECREF(par_local_metadata);
    CHECK_OBJECT(par_strict);
    Py_DECREF(par_strict);
    CHECK_OBJECT(par_missing_keys);
    Py_DECREF(par_missing_keys);
    CHECK_OBJECT(par_unexpected_keys);
    Py_DECREF(par_unexpected_keys);
    CHECK_OBJECT(par_error_msgs);
    Py_DECREF(par_error_msgs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$nn$quantized$modules$linear$$$function__19__weight_bias(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_76f81f3cb750bb10e99c8abdab64cb37;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_76f81f3cb750bb10e99c8abdab64cb37 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_76f81f3cb750bb10e99c8abdab64cb37)) {
        Py_XDECREF(cache_frame_76f81f3cb750bb10e99c8abdab64cb37);

#if _DEBUG_REFCOUNTS
        if (cache_frame_76f81f3cb750bb10e99c8abdab64cb37 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_76f81f3cb750bb10e99c8abdab64cb37 = MAKE_FUNCTION_FRAME(codeobj_76f81f3cb750bb10e99c8abdab64cb37, module_torch$nn$quantized$modules$linear, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_76f81f3cb750bb10e99c8abdab64cb37->m_type_description == NULL);
    frame_76f81f3cb750bb10e99c8abdab64cb37 = cache_frame_76f81f3cb750bb10e99c8abdab64cb37;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_76f81f3cb750bb10e99c8abdab64cb37);
    assert(Py_REFCNT(frame_76f81f3cb750bb10e99c8abdab64cb37) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_76f81f3cb750bb10e99c8abdab64cb37->m_frame.f_lineno = 242;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[26]);
        Py_DECREF(tmp_called_instance_1);
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
        exception_tb = MAKE_TRACEBACK(frame_76f81f3cb750bb10e99c8abdab64cb37, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_76f81f3cb750bb10e99c8abdab64cb37->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_76f81f3cb750bb10e99c8abdab64cb37, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_76f81f3cb750bb10e99c8abdab64cb37,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_76f81f3cb750bb10e99c8abdab64cb37 == cache_frame_76f81f3cb750bb10e99c8abdab64cb37) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_76f81f3cb750bb10e99c8abdab64cb37);
        cache_frame_76f81f3cb750bb10e99c8abdab64cb37 = NULL;
    }

    assertFrameObject(frame_76f81f3cb750bb10e99c8abdab64cb37);

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


static PyObject *impl_torch$nn$quantized$modules$linear$$$function__20_weight(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_96905fde659c3190a2bb846e2a0bbe5c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_96905fde659c3190a2bb846e2a0bbe5c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_96905fde659c3190a2bb846e2a0bbe5c)) {
        Py_XDECREF(cache_frame_96905fde659c3190a2bb846e2a0bbe5c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_96905fde659c3190a2bb846e2a0bbe5c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_96905fde659c3190a2bb846e2a0bbe5c = MAKE_FUNCTION_FRAME(codeobj_96905fde659c3190a2bb846e2a0bbe5c, module_torch$nn$quantized$modules$linear, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_96905fde659c3190a2bb846e2a0bbe5c->m_type_description == NULL);
    frame_96905fde659c3190a2bb846e2a0bbe5c = cache_frame_96905fde659c3190a2bb846e2a0bbe5c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_96905fde659c3190a2bb846e2a0bbe5c);
    assert(Py_REFCNT(frame_96905fde659c3190a2bb846e2a0bbe5c) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_96905fde659c3190a2bb846e2a0bbe5c->m_frame.f_lineno = 245;
        tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[26]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[7];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
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
        exception_tb = MAKE_TRACEBACK(frame_96905fde659c3190a2bb846e2a0bbe5c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_96905fde659c3190a2bb846e2a0bbe5c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_96905fde659c3190a2bb846e2a0bbe5c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_96905fde659c3190a2bb846e2a0bbe5c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_96905fde659c3190a2bb846e2a0bbe5c == cache_frame_96905fde659c3190a2bb846e2a0bbe5c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_96905fde659c3190a2bb846e2a0bbe5c);
        cache_frame_96905fde659c3190a2bb846e2a0bbe5c = NULL;
    }

    assertFrameObject(frame_96905fde659c3190a2bb846e2a0bbe5c);

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


static PyObject *impl_torch$nn$quantized$modules$linear$$$function__21_bias(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_fe9975c4054c09aaca5da932e334adef;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fe9975c4054c09aaca5da932e334adef = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fe9975c4054c09aaca5da932e334adef)) {
        Py_XDECREF(cache_frame_fe9975c4054c09aaca5da932e334adef);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fe9975c4054c09aaca5da932e334adef == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fe9975c4054c09aaca5da932e334adef = MAKE_FUNCTION_FRAME(codeobj_fe9975c4054c09aaca5da932e334adef, module_torch$nn$quantized$modules$linear, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fe9975c4054c09aaca5da932e334adef->m_type_description == NULL);
    frame_fe9975c4054c09aaca5da932e334adef = cache_frame_fe9975c4054c09aaca5da932e334adef;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fe9975c4054c09aaca5da932e334adef);
    assert(Py_REFCNT(frame_fe9975c4054c09aaca5da932e334adef) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_fe9975c4054c09aaca5da932e334adef->m_frame.f_lineno = 248;
        tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[26]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[40];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 1);
        Py_DECREF(tmp_expression_value_1);
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

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fe9975c4054c09aaca5da932e334adef, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fe9975c4054c09aaca5da932e334adef->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fe9975c4054c09aaca5da932e334adef, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fe9975c4054c09aaca5da932e334adef,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_fe9975c4054c09aaca5da932e334adef == cache_frame_fe9975c4054c09aaca5da932e334adef) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fe9975c4054c09aaca5da932e334adef);
        cache_frame_fe9975c4054c09aaca5da932e334adef = NULL;
    }

    assertFrameObject(frame_fe9975c4054c09aaca5da932e334adef);

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


static PyObject *impl_torch$nn$quantized$modules$linear$$$function__22_set_weight_bias(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_w = python_pars[1];
    PyObject *par_b = python_pars[2];
    struct Nuitka_FrameObject *frame_d15c4fd92727d671017f822cc91d9a3a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d15c4fd92727d671017f822cc91d9a3a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d15c4fd92727d671017f822cc91d9a3a)) {
        Py_XDECREF(cache_frame_d15c4fd92727d671017f822cc91d9a3a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d15c4fd92727d671017f822cc91d9a3a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d15c4fd92727d671017f822cc91d9a3a = MAKE_FUNCTION_FRAME(codeobj_d15c4fd92727d671017f822cc91d9a3a, module_torch$nn$quantized$modules$linear, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d15c4fd92727d671017f822cc91d9a3a->m_type_description == NULL);
    frame_d15c4fd92727d671017f822cc91d9a3a = cache_frame_d15c4fd92727d671017f822cc91d9a3a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d15c4fd92727d671017f822cc91d9a3a);
    assert(Py_REFCNT(frame_d15c4fd92727d671017f822cc91d9a3a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_w);
        tmp_args_element_value_1 = par_w;
        CHECK_OBJECT(par_b);
        tmp_args_element_value_2 = par_b;
        frame_d15c4fd92727d671017f822cc91d9a3a->m_frame.f_lineno = 251;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[14],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
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
        exception_tb = MAKE_TRACEBACK(frame_d15c4fd92727d671017f822cc91d9a3a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d15c4fd92727d671017f822cc91d9a3a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d15c4fd92727d671017f822cc91d9a3a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d15c4fd92727d671017f822cc91d9a3a,
        type_description_1,
        par_self,
        par_w,
        par_b
    );


    // Release cached frame if used for exception.
    if (frame_d15c4fd92727d671017f822cc91d9a3a == cache_frame_d15c4fd92727d671017f822cc91d9a3a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d15c4fd92727d671017f822cc91d9a3a);
        cache_frame_d15c4fd92727d671017f822cc91d9a3a = NULL;
    }

    assertFrameObject(frame_d15c4fd92727d671017f822cc91d9a3a);

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
    CHECK_OBJECT(par_w);
    Py_DECREF(par_w);
    CHECK_OBJECT(par_b);
    Py_DECREF(par_b);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_w);
    Py_DECREF(par_w);
    CHECK_OBJECT(par_b);
    Py_DECREF(par_b);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$nn$quantized$modules$linear$$$function__23_from_float(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_mod = python_pars[1];
    PyObject *var_weight_post_process = NULL;
    PyObject *var_activation_post_process = NULL;
    PyObject *var_supported_modules = NULL;
    PyObject *var_error_msg = NULL;
    PyObject *var_dtype = NULL;
    PyObject *var_act_scale = NULL;
    PyObject *var_act_zp = NULL;
    PyObject *var_qweight = NULL;
    PyObject *var_qlinear = NULL;
    PyObject *outline_0_var_float_mod = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_559c291bc7db2f9f92955c0e0c4c4ea7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    struct Nuitka_FrameObject *frame_9fb617cdaf3dfa83d1da6481970502d8_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_9fb617cdaf3dfa83d1da6481970502d8_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_559c291bc7db2f9f92955c0e0c4c4ea7 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_559c291bc7db2f9f92955c0e0c4c4ea7)) {
        Py_XDECREF(cache_frame_559c291bc7db2f9f92955c0e0c4c4ea7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_559c291bc7db2f9f92955c0e0c4c4ea7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_559c291bc7db2f9f92955c0e0c4c4ea7 = MAKE_FUNCTION_FRAME(codeobj_559c291bc7db2f9f92955c0e0c4c4ea7, module_torch$nn$quantized$modules$linear, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_559c291bc7db2f9f92955c0e0c4c4ea7->m_type_description == NULL);
    frame_559c291bc7db2f9f92955c0e0c4c4ea7 = cache_frame_559c291bc7db2f9f92955c0e0c4c4ea7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_559c291bc7db2f9f92955c0e0c4c4ea7);
    assert(Py_REFCNT(frame_559c291bc7db2f9f92955c0e0c4c4ea7) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        CHECK_OBJECT(par_mod);
        tmp_expression_value_1 = par_mod;
        tmp_attribute_value_1 = mod_consts[61];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_1, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooooooooooo";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_mod);
        tmp_expression_value_2 = par_mod;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[61]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_weight_post_process == NULL);
        var_weight_post_process = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_mod);
        tmp_expression_value_3 = par_mod;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[62]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_activation_post_process == NULL);
        var_activation_post_process = tmp_assign_source_2;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_4 = par_cls;
        tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[63]);
        if (tmp_isinstance_inst_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_1);

            exception_lineno = 269;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_inst_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooooooooooo";
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
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_5 = par_cls;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[63]);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assattr_value_1, 0, tmp_list_element_1);
        CHECK_OBJECT(par_cls);
        tmp_assattr_target_1 = par_cls;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[63], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        tmp_str_arg_value_1 = mod_consts[65];
        // Tried code:
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_expression_value_6;
            CHECK_OBJECT(par_cls);
            tmp_expression_value_6 = par_cls;
            tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[63]);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_4;
        }
        {
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_5;
        }
        if (isFrameUnusable(cache_frame_9fb617cdaf3dfa83d1da6481970502d8_2)) {
            Py_XDECREF(cache_frame_9fb617cdaf3dfa83d1da6481970502d8_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_9fb617cdaf3dfa83d1da6481970502d8_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_9fb617cdaf3dfa83d1da6481970502d8_2 = MAKE_FUNCTION_FRAME(codeobj_9fb617cdaf3dfa83d1da6481970502d8, module_torch$nn$quantized$modules$linear, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_9fb617cdaf3dfa83d1da6481970502d8_2->m_type_description == NULL);
        frame_9fb617cdaf3dfa83d1da6481970502d8_2 = cache_frame_9fb617cdaf3dfa83d1da6481970502d8_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_9fb617cdaf3dfa83d1da6481970502d8_2);
        assert(Py_REFCNT(frame_9fb617cdaf3dfa83d1da6481970502d8_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_6 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 271;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_6;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_7 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_float_mod;
                outline_0_var_float_mod = tmp_assign_source_7;
                Py_INCREF(outline_0_var_float_mod);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_expression_value_7;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_float_mod);
            tmp_expression_value_7 = outline_0_var_float_mod;
            tmp_append_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[66]);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_iterable_value_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_iterable_value_1);
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
            exception_tb = MAKE_TRACEBACK(frame_9fb617cdaf3dfa83d1da6481970502d8_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_9fb617cdaf3dfa83d1da6481970502d8_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_9fb617cdaf3dfa83d1da6481970502d8_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_9fb617cdaf3dfa83d1da6481970502d8_2,
            type_description_2,
            outline_0_var_float_mod
        );


        // Release cached frame if used for exception.
        if (frame_9fb617cdaf3dfa83d1da6481970502d8_2 == cache_frame_9fb617cdaf3dfa83d1da6481970502d8_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_9fb617cdaf3dfa83d1da6481970502d8_2);
            cache_frame_9fb617cdaf3dfa83d1da6481970502d8_2 = NULL;
        }

        assertFrameObject(frame_9fb617cdaf3dfa83d1da6481970502d8_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_float_mod);
        outline_0_var_float_mod = NULL;
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

        Py_XDECREF(outline_0_var_float_mod);
        outline_0_var_float_mod = NULL;
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
        exception_lineno = 271;
        goto frame_exception_exit_1;
        outline_result_1:;
        tmp_assign_source_3 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_supported_modules == NULL);
        var_supported_modules = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_type_arg_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[67];
        CHECK_OBJECT(par_cls);
        tmp_expression_value_8 = par_cls;
        tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[66]);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_supported_modules);
        tmp_kw_call_arg_value_2_1 = var_supported_modules;
        CHECK_OBJECT(par_mod);
        tmp_type_arg_1 = par_mod;
        tmp_kw_call_arg_value_3_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_kw_call_arg_value_3_1 == NULL));
        frame_559c291bc7db2f9f92955c0e0c4c4ea7->m_frame.f_lineno = 272;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1};
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS4(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        Py_DECREF(tmp_kw_call_arg_value_3_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_error_msg == NULL);
        var_error_msg = tmp_assign_source_8;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_type_arg_2;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(par_mod);
        tmp_type_arg_2 = par_mod;
        tmp_cmp_expr_left_1 = BUILTIN_TYPE1(tmp_type_arg_2);
        assert(!(tmp_cmp_expr_left_1 == NULL));
        CHECK_OBJECT(par_cls);
        tmp_expression_value_9 = par_cls;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[63]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 273;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooooooooo";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_call_arg_value_0_2;
        tmp_raise_type_1 = PyExc_AssertionError;
        CHECK_OBJECT(var_error_msg);
        tmp_kw_call_arg_value_0_2 = var_error_msg;
        frame_559c291bc7db2f9f92955c0e0c4c4ea7->m_frame.f_lineno = 273;
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(unicode_builtin_format, tmp_kw_call_arg_value_0_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_raise_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_raise_value_1, 0, tmp_tuple_element_1);
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 273;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_attribute_value_2;
        CHECK_OBJECT(par_mod);
        tmp_expression_value_10 = par_mod;
        tmp_attribute_value_2 = mod_consts[68];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_10, tmp_attribute_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        tmp_raise_type_2 = PyExc_AssertionError;
        tmp_raise_value_2 = mod_consts[69];
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        Py_INCREF(tmp_raise_value_2);
        exception_lineno = 274;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(par_mod);
        tmp_expression_value_11 = par_mod;
        tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[62]);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_activation_post_process == NULL);
        var_activation_post_process = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(par_mod);
        tmp_type_arg_3 = par_mod;
        tmp_cmp_expr_left_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        assert(!(tmp_cmp_expr_left_2 == NULL));
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 276;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[71]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 276;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooooooooo";
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
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_mod);
        tmp_expression_value_13 = par_mod;
        tmp_subscript_value_1 = mod_consts[7];
        tmp_assign_source_10 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_13, tmp_subscript_value_1, 0);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_mod;
            assert(old != NULL);
            par_mod = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    branch_no_5:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_14;
        if (par_mod == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 278;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_14 = par_mod;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[68]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_559c291bc7db2f9f92955c0e0c4c4ea7->m_frame.f_lineno = 278;
        tmp_assign_source_11 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[35]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_weight_post_process == NULL);
        var_weight_post_process = tmp_assign_source_11;
    }
    branch_end_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(var_weight_post_process);
        tmp_called_value_1 = var_weight_post_process;
        if (par_mod == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 279;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_15 = par_mod;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[35]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_559c291bc7db2f9f92955c0e0c4c4ea7->m_frame.f_lineno = 279;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(var_weight_post_process);
        tmp_expression_value_16 = var_weight_post_process;
        tmp_assign_source_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[2]);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dtype == NULL);
        var_dtype = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_activation_post_process);
        tmp_called_instance_2 = var_activation_post_process;
        frame_559c291bc7db2f9f92955c0e0c4c4ea7->m_frame.f_lineno = 281;
        tmp_iter_arg_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[73]);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_13 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_14 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooo";
            exception_lineno = 281;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_15 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooo";
            exception_lineno = 281;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_15;
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

                    type_description_1 = "ooooooooooo";
                    exception_lineno = 281;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[37];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooo";
            exception_lineno = 281;
            goto try_except_handler_5;
        }
    }
    goto try_end_1;
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_16 = tmp_tuple_unpack_1__element_1;
        assert(var_act_scale == NULL);
        Py_INCREF(tmp_assign_source_16);
        var_act_scale = tmp_assign_source_16;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_17 = tmp_tuple_unpack_1__element_2;
        assert(var_act_zp == NULL);
        Py_INCREF(tmp_assign_source_17);
        var_act_zp = tmp_assign_source_17;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(var_dtype);
        tmp_cmp_expr_left_3 = var_dtype;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[4]);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_3 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_operand_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
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
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        tmp_raise_type_3 = PyExc_AssertionError;
        tmp_raise_value_3 = mod_consts[74];
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        Py_INCREF(tmp_raise_value_3);
        exception_lineno = 282;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_6:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_mod == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 283;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_18 = par_mod;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[35]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_559c291bc7db2f9f92955c0e0c4c4ea7->m_frame.f_lineno = 283;
        tmp_args_element_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[12]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_weight_post_process);
        tmp_args_element_value_3 = var_weight_post_process;
        frame_559c291bc7db2f9f92955c0e0c4c4ea7->m_frame.f_lineno = 283;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_qweight == NULL);
        var_qweight = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_kw_call_dict_value_0_1;
        if (par_cls == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 284;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_value_3 = par_cls;
        if (par_mod == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 284;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_19 = par_mod;
        tmp_kw_call_arg_value_0_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[48]);
        if (tmp_kw_call_arg_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_mod == NULL) {
            Py_DECREF(tmp_kw_call_arg_value_0_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 285;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_20 = par_mod;
        tmp_kw_call_arg_value_1_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[49]);
        if (tmp_kw_call_arg_value_1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_3);

            exception_lineno = 285;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dtype);
        tmp_kw_call_dict_value_0_1 = var_dtype;
        frame_559c291bc7db2f9f92955c0e0c4c4ea7->m_frame.f_lineno = 284;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[13]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_3);
        Py_DECREF(tmp_kw_call_arg_value_1_2);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_qlinear == NULL);
        var_qlinear = tmp_assign_source_19;
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(var_qlinear);
        tmp_expression_value_21 = var_qlinear;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[14]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_qweight);
        tmp_args_element_value_4 = var_qweight;
        if (par_mod == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 287;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_22 = par_mod;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[36]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 287;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_559c291bc7db2f9f92955c0e0c4c4ea7->m_frame.f_lineno = 287;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_float_arg_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(var_act_scale);
        tmp_float_arg_1 = var_act_scale;
        tmp_assattr_value_2 = TO_FLOAT(tmp_float_arg_1);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_qlinear);
        tmp_assattr_target_2 = var_qlinear;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[51], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(var_act_zp);
        tmp_int_arg_1 = var_act_zp;
        tmp_assattr_value_3 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_qlinear);
        tmp_assattr_target_3 = var_qlinear;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[52], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_559c291bc7db2f9f92955c0e0c4c4ea7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_559c291bc7db2f9f92955c0e0c4c4ea7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_559c291bc7db2f9f92955c0e0c4c4ea7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_559c291bc7db2f9f92955c0e0c4c4ea7,
        type_description_1,
        par_cls,
        par_mod,
        var_weight_post_process,
        var_activation_post_process,
        var_supported_modules,
        var_error_msg,
        var_dtype,
        var_act_scale,
        var_act_zp,
        var_qweight,
        var_qlinear
    );


    // Release cached frame if used for exception.
    if (frame_559c291bc7db2f9f92955c0e0c4c4ea7 == cache_frame_559c291bc7db2f9f92955c0e0c4c4ea7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_559c291bc7db2f9f92955c0e0c4c4ea7);
        cache_frame_559c291bc7db2f9f92955c0e0c4c4ea7 = NULL;
    }

    assertFrameObject(frame_559c291bc7db2f9f92955c0e0c4c4ea7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    CHECK_OBJECT(var_qlinear);
    tmp_return_value = var_qlinear;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_mod);
    par_mod = NULL;
    CHECK_OBJECT(var_weight_post_process);
    Py_DECREF(var_weight_post_process);
    var_weight_post_process = NULL;
    CHECK_OBJECT(var_activation_post_process);
    Py_DECREF(var_activation_post_process);
    var_activation_post_process = NULL;
    Py_XDECREF(var_supported_modules);
    var_supported_modules = NULL;
    Py_XDECREF(var_error_msg);
    var_error_msg = NULL;
    CHECK_OBJECT(var_dtype);
    Py_DECREF(var_dtype);
    var_dtype = NULL;
    CHECK_OBJECT(var_act_scale);
    Py_DECREF(var_act_scale);
    var_act_scale = NULL;
    CHECK_OBJECT(var_act_zp);
    Py_DECREF(var_act_zp);
    var_act_zp = NULL;
    CHECK_OBJECT(var_qweight);
    Py_DECREF(var_qweight);
    var_qweight = NULL;
    CHECK_OBJECT(var_qlinear);
    Py_DECREF(var_qlinear);
    var_qlinear = NULL;
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

    Py_XDECREF(par_mod);
    par_mod = NULL;
    Py_XDECREF(var_weight_post_process);
    var_weight_post_process = NULL;
    Py_XDECREF(var_activation_post_process);
    var_activation_post_process = NULL;
    Py_XDECREF(var_supported_modules);
    var_supported_modules = NULL;
    Py_XDECREF(var_error_msg);
    var_error_msg = NULL;
    Py_XDECREF(var_dtype);
    var_dtype = NULL;
    Py_XDECREF(var_act_scale);
    var_act_scale = NULL;
    Py_XDECREF(var_act_zp);
    var_act_zp = NULL;
    Py_XDECREF(var_qweight);
    var_qweight = NULL;
    Py_XDECREF(var_qlinear);
    var_qlinear = NULL;
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
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$nn$quantized$modules$linear$$$function__24_from_reference(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_ref_qlinear = python_pars[1];
    PyObject *par_output_scale = python_pars[2];
    PyObject *par_output_zero_point = python_pars[3];
    PyObject *var_qlinear = NULL;
    PyObject *var_qweight = NULL;
    struct Nuitka_FrameObject *frame_49e023d182a2a75d4518f58d176c5244;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_49e023d182a2a75d4518f58d176c5244 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_49e023d182a2a75d4518f58d176c5244)) {
        Py_XDECREF(cache_frame_49e023d182a2a75d4518f58d176c5244);

#if _DEBUG_REFCOUNTS
        if (cache_frame_49e023d182a2a75d4518f58d176c5244 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_49e023d182a2a75d4518f58d176c5244 = MAKE_FUNCTION_FRAME(codeobj_49e023d182a2a75d4518f58d176c5244, module_torch$nn$quantized$modules$linear, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_49e023d182a2a75d4518f58d176c5244->m_type_description == NULL);
    frame_49e023d182a2a75d4518f58d176c5244 = cache_frame_49e023d182a2a75d4518f58d176c5244;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_49e023d182a2a75d4518f58d176c5244);
    assert(Py_REFCNT(frame_49e023d182a2a75d4518f58d176c5244) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_cls);
        tmp_called_value_1 = par_cls;
        CHECK_OBJECT(par_ref_qlinear);
        tmp_expression_value_1 = par_ref_qlinear;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[48]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ref_qlinear);
        tmp_expression_value_2 = par_ref_qlinear;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[49]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 304;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_49e023d182a2a75d4518f58d176c5244->m_frame.f_lineno = 302;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_qlinear == NULL);
        var_qlinear = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_ref_qlinear);
        tmp_called_instance_1 = par_ref_qlinear;
        frame_49e023d182a2a75d4518f58d176c5244->m_frame.f_lineno = 305;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[78]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_qweight == NULL);
        var_qweight = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_qlinear);
        tmp_expression_value_3 = var_qlinear;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[14]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_qweight);
        tmp_args_element_value_3 = var_qweight;
        CHECK_OBJECT(par_ref_qlinear);
        tmp_expression_value_4 = par_ref_qlinear;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[36]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 306;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_49e023d182a2a75d4518f58d176c5244->m_frame.f_lineno = 306;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_float_arg_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_output_scale);
        tmp_float_arg_1 = par_output_scale;
        tmp_assattr_value_1 = TO_FLOAT(tmp_float_arg_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_qlinear);
        tmp_assattr_target_1 = var_qlinear;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[51], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_output_zero_point);
        tmp_int_arg_1 = par_output_zero_point;
        tmp_assattr_value_2 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_qlinear);
        tmp_assattr_target_2 = var_qlinear;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[52], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_49e023d182a2a75d4518f58d176c5244, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_49e023d182a2a75d4518f58d176c5244->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_49e023d182a2a75d4518f58d176c5244, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_49e023d182a2a75d4518f58d176c5244,
        type_description_1,
        par_cls,
        par_ref_qlinear,
        par_output_scale,
        par_output_zero_point,
        var_qlinear,
        var_qweight
    );


    // Release cached frame if used for exception.
    if (frame_49e023d182a2a75d4518f58d176c5244 == cache_frame_49e023d182a2a75d4518f58d176c5244) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_49e023d182a2a75d4518f58d176c5244);
        cache_frame_49e023d182a2a75d4518f58d176c5244 = NULL;
    }

    assertFrameObject(frame_49e023d182a2a75d4518f58d176c5244);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_qlinear);
    tmp_return_value = var_qlinear;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_qlinear);
    Py_DECREF(var_qlinear);
    var_qlinear = NULL;
    CHECK_OBJECT(var_qweight);
    Py_DECREF(var_qweight);
    var_qweight = NULL;
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

    Py_XDECREF(var_qlinear);
    var_qlinear = NULL;
    Py_XDECREF(var_qweight);
    var_qweight = NULL;
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
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_ref_qlinear);
    Py_DECREF(par_ref_qlinear);
    CHECK_OBJECT(par_output_scale);
    Py_DECREF(par_output_scale);
    CHECK_OBJECT(par_output_zero_point);
    Py_DECREF(par_output_zero_point);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_ref_qlinear);
    Py_DECREF(par_ref_qlinear);
    CHECK_OBJECT(par_output_scale);
    Py_DECREF(par_output_scale);
    CHECK_OBJECT(par_output_zero_point);
    Py_DECREF(par_output_zero_point);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__10___copy__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$quantized$modules$linear$$$function__10___copy__,
        mod_consts[117],
#if PYTHON_VERSION >= 0x300
        mod_consts[118],
#endif
        codeobj_967361602f8cd04e5f45be889adc4190,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$quantized$modules$linear,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__11___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$quantized$modules$linear$$$function__11___repr__,
        mod_consts[47],
#if PYTHON_VERSION >= 0x300
        mod_consts[119],
#endif
        codeobj_0bbac115b8d6256760c836ccfc0509de,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$quantized$modules$linear,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__12___init__(PyObject *defaults, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$quantized$modules$linear$$$function__12___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[125],
#endif
        codeobj_c7a3339c29628cf07b9ed104b6959d97,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$quantized$modules$linear,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__13__get_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[127],
#if PYTHON_VERSION >= 0x300
        mod_consts[128],
#endif
        codeobj_b7921d38d9bcc638879f3e4de687fe6a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$quantized$modules$linear,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[126]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__14_extra_repr() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$quantized$modules$linear$$$function__14_extra_repr,
        mod_consts[129],
#if PYTHON_VERSION >= 0x300
        mod_consts[130],
#endif
        codeobj_d315c8ba5f37ee590de9a19658935750,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$quantized$modules$linear,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__15___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$quantized$modules$linear$$$function__15___repr__,
        mod_consts[47],
#if PYTHON_VERSION >= 0x300
        mod_consts[131],
#endif
        codeobj_4a3d6d3c6cb6321c25aec97a83617ecc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$quantized$modules$linear,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__16_forward(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$quantized$modules$linear$$$function__16_forward,
        mod_consts[110],
#if PYTHON_VERSION >= 0x300
        mod_consts[133],
#endif
        codeobj_cd0e9564b098863bcc96a4acc1a6bde8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$nn$quantized$modules$linear,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__17__save_to_state_dict(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$quantized$modules$linear$$$function__17__save_to_state_dict,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[134],
#endif
        codeobj_826a4c0aed48777a9ac7d483f9282f73,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$quantized$modules$linear,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__18__load_from_state_dict(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$quantized$modules$linear$$$function__18__load_from_state_dict,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        mod_consts[135],
#endif
        codeobj_1693452dce2f6901818a3901f8e0f2e5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$quantized$modules$linear,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__19__weight_bias() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$quantized$modules$linear$$$function__19__weight_bias,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        mod_consts[136],
#endif
        codeobj_76f81f3cb750bb10e99c8abdab64cb37,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$quantized$modules$linear,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__1___init__(PyObject *defaults, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$quantized$modules$linear$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[103],
#endif
        codeobj_312682fb87df98a796bfe02a478cd055,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$quantized$modules$linear,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__20_weight() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$quantized$modules$linear$$$function__20_weight,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        mod_consts[137],
#endif
        codeobj_96905fde659c3190a2bb846e2a0bbe5c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$quantized$modules$linear,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__21_bias() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$quantized$modules$linear$$$function__21_bias,
        mod_consts[36],
#if PYTHON_VERSION >= 0x300
        mod_consts[138],
#endif
        codeobj_fe9975c4054c09aaca5da932e334adef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$quantized$modules$linear,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__22_set_weight_bias(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$quantized$modules$linear$$$function__22_set_weight_bias,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[141],
#endif
        codeobj_d15c4fd92727d671017f822cc91d9a3a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$nn$quantized$modules$linear,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__23_from_float() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$quantized$modules$linear$$$function__23_from_float,
        mod_consts[143],
#if PYTHON_VERSION >= 0x300
        mod_consts[144],
#endif
        codeobj_559c291bc7db2f9f92955c0e0c4c4ea7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$quantized$modules$linear,
        mod_consts[77],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__24_from_reference() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$quantized$modules$linear$$$function__24_from_reference,
        mod_consts[145],
#if PYTHON_VERSION >= 0x300
        mod_consts[146],
#endif
        codeobj_49e023d182a2a75d4518f58d176c5244,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$quantized$modules$linear,
        mod_consts[79],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__2_set_weight_bias(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$quantized$modules$linear$$$function__2_set_weight_bias,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[108],
#endif
        codeobj_d6c1d5a1f1c84538cad800ff787abb2a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$nn$quantized$modules$linear,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__3__weight_bias() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$quantized$modules$linear$$$function__3__weight_bias,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        mod_consts[109],
#endif
        codeobj_66d1c8382fc0b1c7f96abeb747e9f7d7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$quantized$modules$linear,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__4_forward() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$quantized$modules$linear$$$function__4_forward,
        mod_consts[110],
#if PYTHON_VERSION >= 0x300
        mod_consts[111],
#endif
        codeobj_9df17238d98f80d0d2db5e5ac1b39e9c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$quantized$modules$linear,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__5__save_to_state_dict() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$quantized$modules$linear$$$function__5__save_to_state_dict,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[112],
#endif
        codeobj_156c2f8cd373aed526d381e5b28dd38a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$quantized$modules$linear,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__6__load_from_state_dict() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$quantized$modules$linear$$$function__6__load_from_state_dict,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        mod_consts[113],
#endif
        codeobj_4217923bd56c0e23f3bfa4977cf16cf0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$quantized$modules$linear,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__7___getstate__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$quantized$modules$linear$$$function__7___getstate__,
        mod_consts[44],
#if PYTHON_VERSION >= 0x300
        mod_consts[114],
#endif
        codeobj_6b7c2ae7350481d3ab182f21f9ecb226,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$quantized$modules$linear,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__8___setstate__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$quantized$modules$linear$$$function__8___setstate__,
        mod_consts[45],
#if PYTHON_VERSION >= 0x300
        mod_consts[115],
#endif
        codeobj_26ecd74944b0b04e2b565c0839dd8ac0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$quantized$modules$linear,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__9___deepcopy__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$quantized$modules$linear$$$function__9___deepcopy__,
        mod_consts[46],
#if PYTHON_VERSION >= 0x300
        mod_consts[116],
#endif
        codeobj_132c5564fa10f58db3c422e75b41b1cc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$quantized$modules$linear,
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

function_impl_code functable_torch$nn$quantized$modules$linear[] = {
    impl_torch$nn$quantized$modules$linear$$$function__1___init__,
    impl_torch$nn$quantized$modules$linear$$$function__2_set_weight_bias,
    impl_torch$nn$quantized$modules$linear$$$function__3__weight_bias,
    impl_torch$nn$quantized$modules$linear$$$function__4_forward,
    impl_torch$nn$quantized$modules$linear$$$function__5__save_to_state_dict,
    impl_torch$nn$quantized$modules$linear$$$function__6__load_from_state_dict,
    impl_torch$nn$quantized$modules$linear$$$function__7___getstate__,
    impl_torch$nn$quantized$modules$linear$$$function__8___setstate__,
    impl_torch$nn$quantized$modules$linear$$$function__9___deepcopy__,
    impl_torch$nn$quantized$modules$linear$$$function__10___copy__,
    impl_torch$nn$quantized$modules$linear$$$function__11___repr__,
    impl_torch$nn$quantized$modules$linear$$$function__12___init__,
    NULL,
    impl_torch$nn$quantized$modules$linear$$$function__14_extra_repr,
    impl_torch$nn$quantized$modules$linear$$$function__15___repr__,
    impl_torch$nn$quantized$modules$linear$$$function__16_forward,
    impl_torch$nn$quantized$modules$linear$$$function__17__save_to_state_dict,
    impl_torch$nn$quantized$modules$linear$$$function__18__load_from_state_dict,
    impl_torch$nn$quantized$modules$linear$$$function__19__weight_bias,
    impl_torch$nn$quantized$modules$linear$$$function__20_weight,
    impl_torch$nn$quantized$modules$linear$$$function__21_bias,
    impl_torch$nn$quantized$modules$linear$$$function__22_set_weight_bias,
    impl_torch$nn$quantized$modules$linear$$$function__23_from_float,
    impl_torch$nn$quantized$modules$linear$$$function__24_from_reference,
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

    function_impl_code *current = functable_torch$nn$quantized$modules$linear;
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

    if (offset > sizeof(functable_torch$nn$quantized$modules$linear) || offset < 0) {
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
        functable_torch$nn$quantized$modules$linear[offset],
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
        module_torch$nn$quantized$modules$linear,
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
PyObject *modulecode_torch$nn$quantized$modules$linear(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torch.nn.quantized.modules.linear");

    // Store the module for future use.
    module_torch$nn$quantized$modules$linear = module;

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
        PRINT_STRING("torch.nn.quantized.modules.linear: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.nn.quantized.modules.linear: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.nn.quantized.modules.linear: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorch$nn$quantized$modules$linear\n");

    moduledict_torch$nn$quantized$modules$linear = MODULE_DICT(module_torch$nn$quantized$modules$linear);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torch$nn$quantized$modules$linear,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torch$nn$quantized$modules$linear,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[165]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torch$nn$quantized$modules$linear,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torch$nn$quantized$modules$linear,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torch$nn$quantized$modules$linear,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torch$nn$quantized$modules$linear);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torch$nn$quantized$modules$linear);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_CellObject *outline_0_var___class__ = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *outline_1_var___class__ = Nuitka_Cell_Empty();
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
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_134c11b43ad3d2af42c0483b3da6d66f;
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
    PyObject *locals_torch$nn$quantized$modules$linear$$$class__1_LinearPackedParams_9 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_d8e08f8f39c301a034e129c654fec710_2;
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
    PyObject *locals_torch$nn$quantized$modules$linear$$$class__2_Linear_111 = NULL;
    struct Nuitka_FrameObject *frame_290b4011140a8bd946f18955e148a48a_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_2);
    }
    frame_134c11b43ad3d2af42c0483b3da6d66f = MAKE_MODULE_FRAME(codeobj_134c11b43ad3d2af42c0483b3da6d66f, module_torch$nn$quantized$modules$linear);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_134c11b43ad3d2af42c0483b3da6d66f);
    assert(Py_REFCNT(frame_134c11b43ad3d2af42c0483b3da6d66f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[83], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[84], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[86];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$nn$quantized$modules$linear;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[87];
        tmp_level_value_1 = mod_consts[7];
        frame_134c11b43ad3d2af42c0483b3da6d66f->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$nn$quantized$modules$linear,
                mod_consts[64],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[64]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[3];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torch$nn$quantized$modules$linear;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[7];
        frame_134c11b43ad3d2af42c0483b3da6d66f->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[88];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_torch$nn$quantized$modules$linear;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[7];
        frame_134c11b43ad3d2af42c0483b3da6d66f->m_frame.f_lineno = 4;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_torch$nn$quantized$modules$linear,
                mod_consts[42],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[42]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[89];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_torch$nn$quantized$modules$linear;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[7];
        frame_134c11b43ad3d2af42c0483b3da6d66f->m_frame.f_lineno = 5;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_import_name_from_3 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_torch$nn$quantized$modules$linear,
                mod_consts[42],
                mod_consts[7]
            );
        } else {
            tmp_import_name_from_3 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[42]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_torch$nn$quantized$modules$linear,
                mod_consts[90],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[90]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[91];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_torch$nn$quantized$modules$linear;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[92];
        tmp_level_value_5 = mod_consts[7];
        frame_134c11b43ad3d2af42c0483b3da6d66f->m_frame.f_lineno = 6;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_torch$nn$quantized$modules$linear,
                mod_consts[75],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[75]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_torch$nn$quantized$modules$linear,
                mod_consts[55],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[55]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_torch$nn$quantized$modules$linear,
                mod_consts[93],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[93]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_11);
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
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_8;
        tmp_import_name_from_8 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_8 == NULL));
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_torch$nn$quantized$modules$linear,
                mod_consts[94],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[94]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_12);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[42]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[43]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        tmp_assign_source_13 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_13, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_14 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

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
        tmp_expression_value_3 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[7];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_16 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_16;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[95]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[95]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = mod_consts[24];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_134c11b43ad3d2af42c0483b3da6d66f->m_frame.f_lineno = 9;
        tmp_assign_source_17 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_17;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_6 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_6, mod_consts[96]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

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
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[97];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[66];
        tmp_getattr_default_1 = mod_consts[98];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_7;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_7 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[66]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
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


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 9;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_18;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_19;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_torch$nn$quantized$modules$linear$$$class__1_LinearPackedParams_9 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[99];
        tmp_res = PyObject_SetItem(locals_torch$nn$quantized$modules$linear$$$class__1_LinearPackedParams_9, mod_consts[100], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[24];
        tmp_res = PyObject_SetItem(locals_torch$nn$quantized$modules$linear$$$class__1_LinearPackedParams_9, mod_consts[101], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        frame_d8e08f8f39c301a034e129c654fec710_2 = MAKE_CLASS_FRAME(codeobj_d8e08f8f39c301a034e129c654fec710, module_torch$nn$quantized$modules$linear, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_d8e08f8f39c301a034e129c654fec710_2);
        assert(Py_REFCNT(frame_d8e08f8f39c301a034e129c654fec710_2) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_torch$nn$quantized$modules$linear$$$class__1_LinearPackedParams_9, mod_consts[102], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_expression_value_8;
            struct Nuitka_CellObject *tmp_closure_1[1];
            tmp_expression_value_8 = PyObject_GetItem(locals_torch$nn$quantized$modules$linear$$$class__1_LinearPackedParams_9, mod_consts[3]);

            if (tmp_expression_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

                    if (unlikely(tmp_expression_value_8 == NULL)) {
                        tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
                    }

                    if (tmp_expression_value_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 12;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_8);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[4]);
            Py_DECREF(tmp_expression_value_8);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_1 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_defaults_1, 0, tmp_tuple_element_4);

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__1___init__(tmp_defaults_1, tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_torch$nn$quantized$modules$linear$$$class__1_LinearPackedParams_9, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_expression_value_11;
            tmp_expression_value_10 = PyObject_GetItem(locals_torch$nn$quantized$modules$linear$$$class__1_LinearPackedParams_9, mod_consts[3]);

            if (tmp_expression_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

                    if (unlikely(tmp_expression_value_10 == NULL)) {
                        tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
                    }

                    if (tmp_expression_value_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 21;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_10);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[104]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[105]);
            Py_DECREF(tmp_expression_value_9);
            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_1 = mod_consts[35];
            tmp_expression_value_11 = PyObject_GetItem(locals_torch$nn$quantized$modules$linear$$$class__1_LinearPackedParams_9, mod_consts[3]);

            if (tmp_expression_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

                    if (unlikely(tmp_expression_value_11 == NULL)) {
                        tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
                    }

                    if (tmp_expression_value_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_2);

                        exception_lineno = 22;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_11);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[106]);
            Py_DECREF(tmp_expression_value_11);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 22;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_1 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_12;
                PyObject *tmp_subscript_value_2;
                PyObject *tmp_expression_value_13;
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[36];
                tmp_expression_value_12 = PyObject_GetItem(locals_torch$nn$quantized$modules$linear$$$class__1_LinearPackedParams_9, mod_consts[94]);

                if (tmp_expression_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[94]);

                        if (unlikely(tmp_expression_value_12 == NULL)) {
                            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
                        }

                        if (tmp_expression_value_12 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 22;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_12);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_expression_value_13 = PyObject_GetItem(locals_torch$nn$quantized$modules$linear$$$class__1_LinearPackedParams_9, mod_consts[3]);

                if (tmp_expression_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

                        if (unlikely(tmp_expression_value_13 == NULL)) {
                            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
                        }

                        if (tmp_expression_value_13 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_12);

                            exception_lineno = 22;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_13);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[106]);
                Py_DECREF(tmp_expression_value_13);
                if (tmp_subscript_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_12);

                    exception_lineno = 22;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_2);
                Py_DECREF(tmp_expression_value_12);
                Py_DECREF(tmp_subscript_value_2);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 22;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[107];
                tmp_dict_value_1 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_annotations_1);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;


            tmp_args_element_value_1 = MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__2_set_weight_bias(tmp_annotations_1);

            frame_d8e08f8f39c301a034e129c654fec710_2->m_frame.f_lineno = 21;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_torch$nn$quantized$modules$linear$$$class__1_LinearPackedParams_9, mod_consts[14], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_args_element_value_2;
            tmp_expression_value_14 = PyObject_GetItem(locals_torch$nn$quantized$modules$linear$$$class__1_LinearPackedParams_9, mod_consts[3]);

            if (tmp_expression_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

                    if (unlikely(tmp_expression_value_14 == NULL)) {
                        tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
                    }

                    if (tmp_expression_value_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 31;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_14);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[104]);
            Py_DECREF(tmp_expression_value_14);
            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_2 = MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__3__weight_bias();

            frame_d8e08f8f39c301a034e129c654fec710_2->m_frame.f_lineno = 31;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[105], tmp_args_element_value_2);
            Py_DECREF(tmp_called_instance_1);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_torch$nn$quantized$modules$linear$$$class__1_LinearPackedParams_9, mod_consts[26], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__4_forward();

        tmp_res = PyObject_SetItem(locals_torch$nn$quantized$modules$linear$$$class__1_LinearPackedParams_9, mod_consts[110], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__5__save_to_state_dict();

        tmp_res = PyObject_SetItem(locals_torch$nn$quantized$modules$linear$$$class__1_LinearPackedParams_9, mod_consts[25], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__6__load_from_state_dict();

        tmp_res = PyObject_SetItem(locals_torch$nn$quantized$modules$linear$$$class__1_LinearPackedParams_9, mod_consts[38], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_args_element_value_3;
            tmp_expression_value_15 = PyObject_GetItem(locals_torch$nn$quantized$modules$linear$$$class__1_LinearPackedParams_9, mod_consts[3]);

            if (tmp_expression_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

                    if (unlikely(tmp_expression_value_15 == NULL)) {
                        tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
                    }

                    if (tmp_expression_value_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 86;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_15);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[104]);
            Py_DECREF(tmp_expression_value_15);
            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_3 = MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__7___getstate__();

            frame_d8e08f8f39c301a034e129c654fec710_2->m_frame.f_lineno = 86;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[105], tmp_args_element_value_3);
            Py_DECREF(tmp_called_instance_2);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_torch$nn$quantized$modules$linear$$$class__1_LinearPackedParams_9, mod_consts[44], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_args_element_value_4;
            tmp_expression_value_16 = PyObject_GetItem(locals_torch$nn$quantized$modules$linear$$$class__1_LinearPackedParams_9, mod_consts[3]);

            if (tmp_expression_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

                    if (unlikely(tmp_expression_value_16 == NULL)) {
                        tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
                    }

                    if (tmp_expression_value_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 91;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_16);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[104]);
            Py_DECREF(tmp_expression_value_16);
            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_4 = MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__8___setstate__();

            frame_d8e08f8f39c301a034e129c654fec710_2->m_frame.f_lineno = 91;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[105], tmp_args_element_value_4);
            Py_DECREF(tmp_called_instance_3);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_torch$nn$quantized$modules$linear$$$class__1_LinearPackedParams_9, mod_consts[45], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__9___deepcopy__();

        tmp_res = PyObject_SetItem(locals_torch$nn$quantized$modules$linear$$$class__1_LinearPackedParams_9, mod_consts[46], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__10___copy__();

        tmp_res = PyObject_SetItem(locals_torch$nn$quantized$modules$linear$$$class__1_LinearPackedParams_9, mod_consts[117], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__11___repr__();

        tmp_res = PyObject_SetItem(locals_torch$nn$quantized$modules$linear$$$class__1_LinearPackedParams_9, mod_consts[47], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d8e08f8f39c301a034e129c654fec710_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d8e08f8f39c301a034e129c654fec710_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d8e08f8f39c301a034e129c654fec710_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d8e08f8f39c301a034e129c654fec710_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_d8e08f8f39c301a034e129c654fec710_2);

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
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;

                goto try_except_handler_4;
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
        tmp_res = PyObject_SetItem(locals_torch$nn$quantized$modules$linear$$$class__1_LinearPackedParams_9, mod_consts[120], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_3 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_5 = mod_consts[24];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_5 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_torch$nn$quantized$modules$linear$$$class__1_LinearPackedParams_9;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_134c11b43ad3d2af42c0483b3da6d66f->m_frame.f_lineno = 9;
            tmp_assign_source_20 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;

                goto try_except_handler_4;
            }
            assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
            PyCell_SET(outline_0_var___class__, tmp_assign_source_20);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
        tmp_assign_source_19 = Nuitka_Cell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_19);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_torch$nn$quantized$modules$linear$$$class__1_LinearPackedParams_9);
        locals_torch$nn$quantized$modules$linear$$$class__1_LinearPackedParams_9 = NULL;
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

        Py_DECREF(locals_torch$nn$quantized$modules$linear$$$class__1_LinearPackedParams_9);
        locals_torch$nn$quantized$modules$linear$$$class__1_LinearPackedParams_9 = NULL;
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
        exception_lineno = 9;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_19);
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
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
        PyObject *tmp_assign_source_21;
        PyObject *tmp_tuple_element_6;
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_5;
        }
        tmp_assign_source_21 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_21, 0, tmp_tuple_element_6);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_22 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_5;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_17 = tmp_class_creation_2__bases;
        tmp_subscript_value_3 = mod_consts[7];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_17, tmp_subscript_value_3, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_5;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_5;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_24 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_24;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_18;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_18 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_18, mod_consts[95]);
        tmp_condition_result_6 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_19 = tmp_class_creation_2__metaclass;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[95]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_5;
        }
        tmp_tuple_element_7 = mod_consts[121];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_7 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_134c11b43ad3d2af42c0483b3da6d66f->m_frame.f_lineno = 111;
        tmp_assign_source_25 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_25;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_20 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_20, mod_consts[96]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_5;
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
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[97];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[66];
        tmp_getattr_default_2 = mod_consts[98];
        tmp_tuple_element_8 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_5;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_21;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_21 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_21 == NULL));
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[66]);
            Py_DECREF(tmp_expression_value_21);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 111;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_5;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_26;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_27;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_torch$nn$quantized$modules$linear$$$class__2_Linear_111 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[99];
        tmp_res = PyObject_SetItem(locals_torch$nn$quantized$modules$linear$$$class__2_Linear_111, mod_consts[100], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[122];
        tmp_res = PyObject_SetItem(locals_torch$nn$quantized$modules$linear$$$class__2_Linear_111, mod_consts[80], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[121];
        tmp_res = PyObject_SetItem(locals_torch$nn$quantized$modules$linear$$$class__2_Linear_111, mod_consts[101], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_7;
        }
        frame_290b4011140a8bd946f18955e148a48a_3 = MAKE_CLASS_FRAME(codeobj_290b4011140a8bd946f18955e148a48a, module_torch$nn$quantized$modules$linear, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_290b4011140a8bd946f18955e148a48a_3);
        assert(Py_REFCNT(frame_290b4011140a8bd946f18955e148a48a_3) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_torch$nn$quantized$modules$linear$$$class__2_Linear_111, mod_consts[102], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_2 = "c";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_expression_value_22;
            tmp_expression_value_22 = PyObject_GetItem(locals_torch$nn$quantized$modules$linear$$$class__2_Linear_111, mod_consts[42]);

            if (tmp_expression_value_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[42]);

                    if (unlikely(tmp_expression_value_22 == NULL)) {
                        tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
                    }

                    if (tmp_expression_value_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 138;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_22);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[121]);
            Py_DECREF(tmp_expression_value_22);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dictset_value = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_23;
                PyObject *tmp_expression_value_24;
                PyObject *tmp_expression_value_25;
                PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_9);
                tmp_expression_value_25 = PyObject_GetItem(locals_torch$nn$quantized$modules$linear$$$class__2_Linear_111, mod_consts[42]);

                if (tmp_expression_value_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[42]);

                        if (unlikely(tmp_expression_value_25 == NULL)) {
                            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
                        }

                        if (tmp_expression_value_25 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 138;
                            type_description_2 = "c";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_25);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[123]);
                Py_DECREF(tmp_expression_value_25);
                if (tmp_expression_value_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 138;
                    type_description_2 = "c";
                    goto tuple_build_exception_3;
                }
                tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[56]);
                Py_DECREF(tmp_expression_value_24);
                if (tmp_expression_value_23 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 138;
                    type_description_2 = "c";
                    goto tuple_build_exception_3;
                }
                tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[124]);
                Py_DECREF(tmp_expression_value_23);
                if (tmp_tuple_element_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 138;
                    type_description_2 = "c";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_9);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_res = PyObject_SetItem(locals_torch$nn$quantized$modules$linear$$$class__2_Linear_111, mod_consts[63], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_tuple_element_10;
            struct Nuitka_CellObject *tmp_closure_2[1];
            tmp_tuple_element_10 = Py_True;
            tmp_defaults_2 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_26;
                PyTuple_SET_ITEM0(tmp_defaults_2, 0, tmp_tuple_element_10);
                tmp_expression_value_26 = PyObject_GetItem(locals_torch$nn$quantized$modules$linear$$$class__2_Linear_111, mod_consts[3]);

                if (tmp_expression_value_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

                        if (unlikely(tmp_expression_value_26 == NULL)) {
                            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
                        }

                        if (tmp_expression_value_26 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 141;
                            type_description_2 = "c";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_26);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[4]);
                Py_DECREF(tmp_expression_value_26);
                if (tmp_tuple_element_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 141;
                    type_description_2 = "c";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_defaults_2, 1, tmp_tuple_element_10);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_defaults_2);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;

            tmp_closure_2[0] = outline_1_var___class__;
            Py_INCREF(tmp_closure_2[0]);

            tmp_dictset_value = MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__12___init__(tmp_defaults_2, tmp_closure_2);

            tmp_res = PyObject_SetItem(locals_torch$nn$quantized$modules$linear$$$class__2_Linear_111, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__13__get_name();

        tmp_res = PyObject_SetItem(locals_torch$nn$quantized$modules$linear$$$class__2_Linear_111, mod_consts[127], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_2 = "c";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__14_extra_repr();

        tmp_res = PyObject_SetItem(locals_torch$nn$quantized$modules$linear$$$class__2_Linear_111, mod_consts[129], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_2 = "c";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__15___repr__();

        tmp_res = PyObject_SetItem(locals_torch$nn$quantized$modules$linear$$$class__2_Linear_111, mod_consts[47], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_2 = "c";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_expression_value_27;
            tmp_dict_key_2 = mod_consts[132];
            tmp_expression_value_27 = PyObject_GetItem(locals_torch$nn$quantized$modules$linear$$$class__2_Linear_111, mod_consts[3]);

            if (tmp_expression_value_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

                    if (unlikely(tmp_expression_value_27 == NULL)) {
                        tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
                    }

                    if (tmp_expression_value_27 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 177;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_27);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[106]);
            Py_DECREF(tmp_expression_value_27);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_2 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_28;
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[107];
                tmp_expression_value_28 = PyObject_GetItem(locals_torch$nn$quantized$modules$linear$$$class__2_Linear_111, mod_consts[3]);

                if (tmp_expression_value_28 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

                        if (unlikely(tmp_expression_value_28 == NULL)) {
                            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
                        }

                        if (tmp_expression_value_28 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 177;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_28);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[106]);
                Py_DECREF(tmp_expression_value_28);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 177;
                    type_description_2 = "c";
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
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;


            tmp_dictset_value = MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__16_forward(tmp_annotations_2);

            tmp_res = PyObject_SetItem(locals_torch$nn$quantized$modules$linear$$$class__2_Linear_111, mod_consts[110], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            struct Nuitka_CellObject *tmp_closure_3[1];

            tmp_closure_3[0] = outline_1_var___class__;
            Py_INCREF(tmp_closure_3[0]);

            tmp_dictset_value = MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__17__save_to_state_dict(tmp_closure_3);

            tmp_res = PyObject_SetItem(locals_torch$nn$quantized$modules$linear$$$class__2_Linear_111, mod_consts[25], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            struct Nuitka_CellObject *tmp_closure_4[1];

            tmp_closure_4[0] = outline_1_var___class__;
            Py_INCREF(tmp_closure_4[0]);

            tmp_dictset_value = MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__18__load_from_state_dict(tmp_closure_4);

            tmp_res = PyObject_SetItem(locals_torch$nn$quantized$modules$linear$$$class__2_Linear_111, mod_consts[38], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__19__weight_bias();

        tmp_res = PyObject_SetItem(locals_torch$nn$quantized$modules$linear$$$class__2_Linear_111, mod_consts[26], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_2 = "c";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__20_weight();

        tmp_res = PyObject_SetItem(locals_torch$nn$quantized$modules$linear$$$class__2_Linear_111, mod_consts[35], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_2 = "c";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__21_bias();

        tmp_res = PyObject_SetItem(locals_torch$nn$quantized$modules$linear$$$class__2_Linear_111, mod_consts[36], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_2 = "c";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_expression_value_29;
            tmp_dict_key_3 = mod_consts[139];
            tmp_expression_value_29 = PyObject_GetItem(locals_torch$nn$quantized$modules$linear$$$class__2_Linear_111, mod_consts[3]);

            if (tmp_expression_value_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

                    if (unlikely(tmp_expression_value_29 == NULL)) {
                        tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
                    }

                    if (tmp_expression_value_29 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 250;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_29);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[106]);
            Py_DECREF(tmp_expression_value_29);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_3 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_30;
                PyObject *tmp_subscript_value_4;
                PyObject *tmp_expression_value_31;
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[140];
                tmp_expression_value_30 = PyObject_GetItem(locals_torch$nn$quantized$modules$linear$$$class__2_Linear_111, mod_consts[94]);

                if (tmp_expression_value_30 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[94]);

                        if (unlikely(tmp_expression_value_30 == NULL)) {
                            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
                        }

                        if (tmp_expression_value_30 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 250;
                            type_description_2 = "c";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_30);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_expression_value_31 = PyObject_GetItem(locals_torch$nn$quantized$modules$linear$$$class__2_Linear_111, mod_consts[3]);

                if (tmp_expression_value_31 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[3]);

                        if (unlikely(tmp_expression_value_31 == NULL)) {
                            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
                        }

                        if (tmp_expression_value_31 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_30);

                            exception_lineno = 250;
                            type_description_2 = "c";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_31);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_subscript_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[106]);
                Py_DECREF(tmp_expression_value_31);
                if (tmp_subscript_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_30);

                    exception_lineno = 250;
                    type_description_2 = "c";
                    goto dict_build_exception_3;
                }
                tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_30, tmp_subscript_value_4);
                Py_DECREF(tmp_expression_value_30);
                Py_DECREF(tmp_subscript_value_4);
                if (tmp_dict_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 250;
                    type_description_2 = "c";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[107];
                tmp_dict_value_3 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_3;
            // Exception handling pass through code for dict_build:
            dict_build_exception_3:;
            Py_DECREF(tmp_annotations_3);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_3:;


            tmp_dictset_value = MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__22_set_weight_bias(tmp_annotations_3);

            tmp_res = PyObject_SetItem(locals_torch$nn$quantized$modules$linear$$$class__2_Linear_111, mod_consts[14], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_classmethod_arg_1;
            tmp_res = MAPPING_HAS_ITEM(locals_torch$nn$quantized$modules$linear$$$class__2_Linear_111, mod_consts[142]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_8 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_value_5 = PyObject_GetItem(locals_torch$nn$quantized$modules$linear$$$class__2_Linear_111, mod_consts[142]);

            if (unlikely(tmp_called_value_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[142]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 253;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_5 = MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__23_from_float();

            frame_290b4011140a8bd946f18955e148a48a_3->m_frame.f_lineno = 253;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_3;
            condexpr_false_3:;


            tmp_classmethod_arg_1 = MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__23_from_float();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_1);
            Py_DECREF(tmp_classmethod_arg_1);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_torch$nn$quantized$modules$linear$$$class__2_Linear_111, mod_consts[143], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_classmethod_arg_2;
            tmp_res = MAPPING_HAS_ITEM(locals_torch$nn$quantized$modules$linear$$$class__2_Linear_111, mod_consts[142]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_9 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_value_6 = PyObject_GetItem(locals_torch$nn$quantized$modules$linear$$$class__2_Linear_111, mod_consts[142]);

            if (unlikely(tmp_called_value_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[142]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 292;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_6 = MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__24_from_reference();

            frame_290b4011140a8bd946f18955e148a48a_3->m_frame.f_lineno = 292;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_4;
            condexpr_false_4:;


            tmp_classmethod_arg_2 = MAKE_FUNCTION_torch$nn$quantized$modules$linear$$$function__24_from_reference();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_2);
            Py_DECREF(tmp_classmethod_arg_2);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_torch$nn$quantized$modules$linear$$$class__2_Linear_111, mod_consts[145], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_290b4011140a8bd946f18955e148a48a_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_290b4011140a8bd946f18955e148a48a_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_290b4011140a8bd946f18955e148a48a_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_290b4011140a8bd946f18955e148a48a_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_290b4011140a8bd946f18955e148a48a_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_7;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_10 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto try_except_handler_7;
            }
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_torch$nn$quantized$modules$linear$$$class__2_Linear_111, mod_consts[120], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_7;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_7 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_11 = mod_consts[121];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_11 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = locals_torch$nn$quantized$modules$linear$$$class__2_Linear_111;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_134c11b43ad3d2af42c0483b3da6d66f->m_frame.f_lineno = 111;
            tmp_assign_source_28 = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto try_except_handler_7;
            }
            assert(Nuitka_Cell_GET(outline_1_var___class__) == NULL);
            PyCell_SET(outline_1_var___class__, tmp_assign_source_28);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_1_var___class__));
        tmp_assign_source_27 = Nuitka_Cell_GET(outline_1_var___class__);
        Py_INCREF(tmp_assign_source_27);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_torch$nn$quantized$modules$linear$$$class__2_Linear_111);
        locals_torch$nn$quantized$modules$linear$$$class__2_Linear_111 = NULL;
        goto try_return_handler_6;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_torch$nn$quantized$modules$linear$$$class__2_Linear_111);
        locals_torch$nn$quantized$modules$linear$$$class__2_Linear_111 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

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
        exception_lineno = 111;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_27);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_134c11b43ad3d2af42c0483b3da6d66f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_134c11b43ad3d2af42c0483b3da6d66f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_134c11b43ad3d2af42c0483b3da6d66f, exception_lineno);
    }



    assertFrameObject(frame_134c11b43ad3d2af42c0483b3da6d66f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_3:;
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

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torch.nn.quantized.modules.linear", false);

    Py_INCREF(module_torch$nn$quantized$modules$linear);
    return module_torch$nn$quantized$modules$linear;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$nn$quantized$modules$linear, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torch$nn$quantized$modules$linear", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
