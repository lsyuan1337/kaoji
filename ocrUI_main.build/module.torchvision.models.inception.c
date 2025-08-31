/* Generated code for Python module 'torchvision.models.inception'
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

/* The "module_torchvision$models$inception" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torchvision$models$inception;
PyDictObject *moduledict_torchvision$models$inception;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[289];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[289];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torchvision.models.inception"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 289; i++) {
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
void checkModuleConstants_torchvision$models$inception(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 289; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_fee381e33065d2681a1f143869d41738;
static PyCodeObject *codeobj_f5e284857cba51a86df7665aec7ef801;
static PyCodeObject *codeobj_f4f673a757f1f08e5cfc517ecb003a52;
static PyCodeObject *codeobj_6b7bad589c81bc6a27d20b1b0aebecab;
static PyCodeObject *codeobj_7e3d01339c9819bf663f1c6e46c8b305;
static PyCodeObject *codeobj_516cc1ed38f6ad4acbc558d77811787f;
static PyCodeObject *codeobj_2b4a3cbeb62244025f83fac37095f924;
static PyCodeObject *codeobj_4590b8c0f74707764fde967db07945d3;
static PyCodeObject *codeobj_e45c297178d6a0bc5e2cf78ae0404705;
static PyCodeObject *codeobj_5044b72a05234ef62c39b0e3ca53ff1f;
static PyCodeObject *codeobj_272f4ece8c8aa64d4e680dbce11a1280;
static PyCodeObject *codeobj_89ac6f06141c632f880de453f1fba131;
static PyCodeObject *codeobj_0d7af840ffd856c9bbecc6750bac508a;
static PyCodeObject *codeobj_900f15f635b6c10516397ed16adb4af5;
static PyCodeObject *codeobj_5ae4f23350c855e00040ac04d02799e1;
static PyCodeObject *codeobj_71d980698cf4b471ecf541df72490d16;
static PyCodeObject *codeobj_c1673366f2c6299dcc9660a6fdfcf143;
static PyCodeObject *codeobj_3d0012afc66d970c7b510fb96cdfb323;
static PyCodeObject *codeobj_59910062d1f43dfac39d9b31f528d8a8;
static PyCodeObject *codeobj_042801bf6c7d2918e4ab8b4fcecc4417;
static PyCodeObject *codeobj_3c9e45f6aa3e4ea787956a854855703d;
static PyCodeObject *codeobj_f9c3a83a3bcd90994d11047f398b57bb;
static PyCodeObject *codeobj_e7541fefd0e0257fd444e859de5002e4;
static PyCodeObject *codeobj_823c7bb672e2dae299b58d1c85ebc2f5;
static PyCodeObject *codeobj_e84ca4afd02ba8140ddda3ed1c875bad;
static PyCodeObject *codeobj_3e5258482fb48fbd5b9dfe8a1e42bc98;
static PyCodeObject *codeobj_2e9ab3cd45f1f17350168ab66b2b17dd;
static PyCodeObject *codeobj_1b41efc51456b4f0c1e851ef6588c86f;
static PyCodeObject *codeobj_1dc57db91ee907281213a6bf3f505532;
static PyCodeObject *codeobj_1b64eb5d295bd3a5b5b94403bda14a3a;
static PyCodeObject *codeobj_d3d51a57ef42b68973e0dc480ea8df15;
static PyCodeObject *codeobj_8807bb515bd822f7139ea517afd9a9d3;
static PyCodeObject *codeobj_175f31c0c423b1a8e102d44be7f34500;
static PyCodeObject *codeobj_d8fc263dc74f9957b98c56720e114ed5;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[268]); CHECK_OBJECT(module_filename_obj);
    codeobj_fee381e33065d2681a1f143869d41738 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[269], mod_consts[269], NULL, NULL, 0, 0, 0);
    codeobj_f5e284857cba51a86df7665aec7ef801 = MAKE_CODE_OBJECT(module_filename_obj, 398, CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[270], NULL, 0, 0, 0);
    codeobj_f4f673a757f1f08e5cfc517ecb003a52 = MAKE_CODE_OBJECT(module_filename_obj, 29, CO_NOFREE, mod_consts[180], mod_consts[180], mod_consts[270], NULL, 0, 0, 0);
    codeobj_6b7bad589c81bc6a27d20b1b0aebecab = MAKE_CODE_OBJECT(module_filename_obj, 176, CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[270], NULL, 0, 0, 0);
    codeobj_7e3d01339c9819bf663f1c6e46c8b305 = MAKE_CODE_OBJECT(module_filename_obj, 367, CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[270], NULL, 0, 0, 0);
    codeobj_516cc1ed38f6ad4acbc558d77811787f = MAKE_CODE_OBJECT(module_filename_obj, 215, CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[270], NULL, 0, 0, 0);
    codeobj_2b4a3cbeb62244025f83fac37095f924 = MAKE_CODE_OBJECT(module_filename_obj, 243, CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[270], NULL, 0, 0, 0);
    codeobj_4590b8c0f74707764fde967db07945d3 = MAKE_CODE_OBJECT(module_filename_obj, 289, CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[270], NULL, 0, 0, 0);
    codeobj_e45c297178d6a0bc5e2cf78ae0404705 = MAKE_CODE_OBJECT(module_filename_obj, 320, CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[270], NULL, 0, 0, 0);
    codeobj_5044b72a05234ef62c39b0e3ca53ff1f = MAKE_CODE_OBJECT(module_filename_obj, 244, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[1], mod_consts[271], mod_consts[270], 4, 0, 0);
    codeobj_272f4ece8c8aa64d4e680dbce11a1280 = MAKE_CODE_OBJECT(module_filename_obj, 216, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[1], mod_consts[272], mod_consts[270], 3, 0, 0);
    codeobj_89ac6f06141c632f880de453f1fba131 = MAKE_CODE_OBJECT(module_filename_obj, 290, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[1], mod_consts[272], mod_consts[270], 3, 0, 0);
    codeobj_0d7af840ffd856c9bbecc6750bac508a = MAKE_CODE_OBJECT(module_filename_obj, 321, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[1], mod_consts[272], mod_consts[270], 3, 0, 0);
    codeobj_900f15f635b6c10516397ed16adb4af5 = MAKE_CODE_OBJECT(module_filename_obj, 368, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[1], mod_consts[273], mod_consts[270], 4, 0, 0);
    codeobj_5ae4f23350c855e00040ac04d02799e1 = MAKE_CODE_OBJECT(module_filename_obj, 399, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[1], mod_consts[1], mod_consts[274], mod_consts[270], 3, 0, 0);
    codeobj_71d980698cf4b471ecf541df72490d16 = MAKE_CODE_OBJECT(module_filename_obj, 177, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[1], mod_consts[275], mod_consts[270], 4, 0, 0);
    codeobj_c1673366f2c6299dcc9660a6fdfcf143 = MAKE_CODE_OBJECT(module_filename_obj, 30, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[1], mod_consts[276], mod_consts[270], 7, 0, 0);
    codeobj_3d0012afc66d970c7b510fb96cdfb323 = MAKE_CODE_OBJECT(module_filename_obj, 103, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[106], mod_consts[106], mod_consts[277], NULL, 2, 0, 0);
    codeobj_59910062d1f43dfac39d9b31f528d8a8 = MAKE_CODE_OBJECT(module_filename_obj, 338, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[106], mod_consts[106], mod_consts[278], NULL, 2, 0, 0);
    codeobj_042801bf6c7d2918e4ab8b4fcecc4417 = MAKE_CODE_OBJECT(module_filename_obj, 194, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[106], mod_consts[106], mod_consts[279], NULL, 2, 0, 0);
    codeobj_3c9e45f6aa3e4ea787956a854855703d = MAKE_CODE_OBJECT(module_filename_obj, 265, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[106], mod_consts[106], mod_consts[280], NULL, 2, 0, 0);
    codeobj_f9c3a83a3bcd90994d11047f398b57bb = MAKE_CODE_OBJECT(module_filename_obj, 226, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[106], mod_consts[106], mod_consts[281], NULL, 2, 0, 0);
    codeobj_e7541fefd0e0257fd444e859de5002e4 = MAKE_CODE_OBJECT(module_filename_obj, 302, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[106], mod_consts[106], mod_consts[282], NULL, 2, 0, 0);
    codeobj_823c7bb672e2dae299b58d1c85ebc2f5 = MAKE_CODE_OBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[105], mod_consts[105], mod_consts[283], NULL, 2, 0, 0);
    codeobj_e84ca4afd02ba8140ddda3ed1c875bad = MAKE_CODE_OBJECT(module_filename_obj, 157, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[111], mod_consts[111], mod_consts[277], NULL, 3, 0, 0);
    codeobj_3e5258482fb48fbd5b9dfe8a1e42bc98 = MAKE_CODE_OBJECT(module_filename_obj, 380, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[236], mod_consts[236], mod_consts[284], NULL, 2, 0, 0);
    codeobj_2e9ab3cd45f1f17350168ab66b2b17dd = MAKE_CODE_OBJECT(module_filename_obj, 404, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[236], mod_consts[236], mod_consts[284], NULL, 2, 0, 0);
    codeobj_1b41efc51456b4f0c1e851ef6588c86f = MAKE_CODE_OBJECT(module_filename_obj, 164, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[236], mod_consts[236], mod_consts[285], NULL, 2, 0, 0);
    codeobj_1dc57db91ee907281213a6bf3f505532 = MAKE_CODE_OBJECT(module_filename_obj, 210, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[236], mod_consts[236], mod_consts[286], NULL, 2, 0, 0);
    codeobj_1b64eb5d295bd3a5b5b94403bda14a3a = MAKE_CODE_OBJECT(module_filename_obj, 238, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[236], mod_consts[236], mod_consts[286], NULL, 2, 0, 0);
    codeobj_d3d51a57ef42b68973e0dc480ea8df15 = MAKE_CODE_OBJECT(module_filename_obj, 284, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[236], mod_consts[236], mod_consts[286], NULL, 2, 0, 0);
    codeobj_8807bb515bd822f7139ea517afd9a9d3 = MAKE_CODE_OBJECT(module_filename_obj, 315, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[236], mod_consts[236], mod_consts[286], NULL, 2, 0, 0);
    codeobj_175f31c0c423b1a8e102d44be7f34500 = MAKE_CODE_OBJECT(module_filename_obj, 362, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[236], mod_consts[236], mod_consts[286], NULL, 2, 0, 0);
    codeobj_d8fc263dc74f9957b98c56720e114ed5 = MAKE_CODE_OBJECT(module_filename_obj, 410, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[267], mod_consts[267], mod_consts[287], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__10_complex_call_helper_pos_keywords_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__8_complex_call_helper_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__10__forward(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__11_forward(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__12___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__13__forward(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__14_forward(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__15___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__16__forward(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__17_forward(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__18___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__19__forward(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__1___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__20_forward(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__21___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__22_forward(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__23___init__(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__24_forward(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__25_inception_v3(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__2__transform_input(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__3__forward(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__4_eager_outputs(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__5_forward(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__6___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__7__forward(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__8_forward(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__9___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_torchvision$models$inception$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_num_classes = python_pars[1];
    PyObject *par_aux_logits = python_pars[2];
    PyObject *par_transform_input = python_pars[3];
    PyObject *par_inception_blocks = python_pars[4];
    PyObject *par_init_weights = python_pars[5];
    PyObject *par_dropout = python_pars[6];
    PyObject *var_conv_block = NULL;
    PyObject *var_inception_a = NULL;
    PyObject *var_inception_b = NULL;
    PyObject *var_inception_c = NULL;
    PyObject *var_inception_d = NULL;
    PyObject *var_inception_e = NULL;
    PyObject *var_inception_aux = NULL;
    PyObject *var_m = NULL;
    PyObject *var_stddev = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_c1673366f2c6299dcc9660a6fdfcf143;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_c1673366f2c6299dcc9660a6fdfcf143 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c1673366f2c6299dcc9660a6fdfcf143)) {
        Py_XDECREF(cache_frame_c1673366f2c6299dcc9660a6fdfcf143);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c1673366f2c6299dcc9660a6fdfcf143 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c1673366f2c6299dcc9660a6fdfcf143 = MAKE_FUNCTION_FRAME(codeobj_c1673366f2c6299dcc9660a6fdfcf143, module_torchvision$models$inception, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c1673366f2c6299dcc9660a6fdfcf143->m_type_description == NULL);
    frame_c1673366f2c6299dcc9660a6fdfcf143 = cache_frame_c1673366f2c6299dcc9660a6fdfcf143;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c1673366f2c6299dcc9660a6fdfcf143);
    assert(Py_REFCNT(frame_c1673366f2c6299dcc9660a6fdfcf143) == 2);

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

            exception_lineno = 39;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_torchvision$models$inception, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        frame_c1673366f2c6299dcc9660a6fdfcf143->m_frame.f_lineno = 39;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[1]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_c1673366f2c6299dcc9660a6fdfcf143->m_frame.f_lineno = 40;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_inception_blocks);
        tmp_cmp_expr_left_1 = par_inception_blocks;
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
        PyObject *tmp_list_element_1;
        tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_list_element_1 == NULL)) {
            tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_LIST_EMPTY(7);
        PyList_SET_ITEM0(tmp_assign_source_1, 0, tmp_list_element_1);
        tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_list_element_1 == NULL)) {
            tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooooooooooooooc";
            goto list_build_exception_1;
        }
        PyList_SET_ITEM0(tmp_assign_source_1, 1, tmp_list_element_1);
        tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_list_element_1 == NULL)) {
            tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooooooooooooooc";
            goto list_build_exception_1;
        }
        PyList_SET_ITEM0(tmp_assign_source_1, 2, tmp_list_element_1);
        tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_list_element_1 == NULL)) {
            tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooooooooooooooc";
            goto list_build_exception_1;
        }
        PyList_SET_ITEM0(tmp_assign_source_1, 3, tmp_list_element_1);
        tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_list_element_1 == NULL)) {
            tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooooooooooooooc";
            goto list_build_exception_1;
        }
        PyList_SET_ITEM0(tmp_assign_source_1, 4, tmp_list_element_1);
        tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_list_element_1 == NULL)) {
            tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooooooooooooooc";
            goto list_build_exception_1;
        }
        PyList_SET_ITEM0(tmp_assign_source_1, 5, tmp_list_element_1);
        tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_list_element_1 == NULL)) {
            tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooooooooooooooc";
            goto list_build_exception_1;
        }
        PyList_SET_ITEM0(tmp_assign_source_1, 6, tmp_list_element_1);
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        {
            PyObject *old = par_inception_blocks;
            assert(old != NULL);
            par_inception_blocks = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_init_weights);
        tmp_cmp_expr_left_2 = par_init_weights;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[12];
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 48;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        frame_c1673366f2c6299dcc9660a6fdfcf143->m_frame.f_lineno = 44;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_True;
        {
            PyObject *old = par_init_weights;
            assert(old != NULL);
            par_init_weights = tmp_assign_source_2;
            Py_INCREF(par_init_weights);
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        nuitka_digit tmp_cmp_expr_right_3;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_inception_blocks);
        tmp_len_arg_1 = par_inception_blocks;
        tmp_cmp_expr_left_3 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = 7;
        tmp_condition_result_3 = RICH_COMPARE_NE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 51;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooc";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_inception_blocks);
        tmp_expression_value_2 = par_inception_blocks;
        tmp_subscript_value_1 = mod_consts[14];
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_conv_block == NULL);
        var_conv_block = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_inception_blocks);
        tmp_expression_value_3 = par_inception_blocks;
        tmp_subscript_value_2 = mod_consts[15];
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_2, 1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_inception_a == NULL);
        var_inception_a = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(par_inception_blocks);
        tmp_expression_value_4 = par_inception_blocks;
        tmp_subscript_value_3 = mod_consts[16];
        tmp_assign_source_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_3, 2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_inception_b == NULL);
        var_inception_b = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(par_inception_blocks);
        tmp_expression_value_5 = par_inception_blocks;
        tmp_subscript_value_4 = mod_consts[17];
        tmp_assign_source_6 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_4, 3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_inception_c == NULL);
        var_inception_c = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(par_inception_blocks);
        tmp_expression_value_6 = par_inception_blocks;
        tmp_subscript_value_5 = mod_consts[18];
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_5, 4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_inception_d == NULL);
        var_inception_d = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_6;
        CHECK_OBJECT(par_inception_blocks);
        tmp_expression_value_7 = par_inception_blocks;
        tmp_subscript_value_6 = mod_consts[19];
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_6, 5);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_inception_e == NULL);
        var_inception_e = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_7;
        CHECK_OBJECT(par_inception_blocks);
        tmp_expression_value_8 = par_inception_blocks;
        tmp_subscript_value_7 = mod_consts[20];
        tmp_assign_source_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_8, tmp_subscript_value_7, 6);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_inception_aux == NULL);
        var_inception_aux = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_aux_logits);
        tmp_assattr_value_1 = par_aux_logits;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[21], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_transform_input);
        tmp_assattr_value_2 = par_transform_input;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[22], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(var_conv_block);
        tmp_called_value_3 = var_conv_block;
        frame_c1673366f2c6299dcc9660a6fdfcf143->m_frame.f_lineno = 62;
        tmp_assattr_value_3 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_3, &PyTuple_GET_ITEM(mod_consts[23], 0), mod_consts[24]);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[25], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(var_conv_block);
        tmp_called_value_4 = var_conv_block;
        frame_c1673366f2c6299dcc9660a6fdfcf143->m_frame.f_lineno = 63;
        tmp_assattr_value_4 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts[26], 0), mod_consts[27]);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[28], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_called_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(var_conv_block);
        tmp_called_value_5 = var_conv_block;
        frame_c1673366f2c6299dcc9660a6fdfcf143->m_frame.f_lineno = 64;
        tmp_assattr_value_5 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_5, &PyTuple_GET_ITEM(mod_consts[29], 0), mod_consts[30]);
        if (tmp_assattr_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[31], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_assattr_target_6;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[33]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        frame_c1673366f2c6299dcc9660a6fdfcf143->m_frame.f_lineno = 65;
        tmp_assattr_value_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_6, &PyTuple_GET_ITEM(mod_consts[34], 0), mod_consts[24]);
        Py_DECREF(tmp_called_value_6);
        if (tmp_assattr_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[35], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_called_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(var_conv_block);
        tmp_called_value_7 = var_conv_block;
        frame_c1673366f2c6299dcc9660a6fdfcf143->m_frame.f_lineno = 66;
        tmp_assattr_value_7 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_7, &PyTuple_GET_ITEM(mod_consts[36], 0), mod_consts[27]);
        if (tmp_assattr_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[37], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_called_value_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(var_conv_block);
        tmp_called_value_8 = var_conv_block;
        frame_c1673366f2c6299dcc9660a6fdfcf143->m_frame.f_lineno = 67;
        tmp_assattr_value_8 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_8, &PyTuple_GET_ITEM(mod_consts[38], 0), mod_consts[27]);
        if (tmp_assattr_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[39], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_assattr_target_9;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[33]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        frame_c1673366f2c6299dcc9660a6fdfcf143->m_frame.f_lineno = 68;
        tmp_assattr_value_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_9, &PyTuple_GET_ITEM(mod_consts[34], 0), mod_consts[24]);
        Py_DECREF(tmp_called_value_9);
        if (tmp_assattr_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[40], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_called_value_10;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT(var_inception_a);
        tmp_called_value_10 = var_inception_a;
        frame_c1673366f2c6299dcc9660a6fdfcf143->m_frame.f_lineno = 69;
        tmp_assattr_value_10 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_10, &PyTuple_GET_ITEM(mod_consts[41], 0), mod_consts[42]);
        if (tmp_assattr_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[43], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_called_value_11;
        PyObject *tmp_assattr_target_11;
        CHECK_OBJECT(var_inception_a);
        tmp_called_value_11 = var_inception_a;
        frame_c1673366f2c6299dcc9660a6fdfcf143->m_frame.f_lineno = 70;
        tmp_assattr_value_11 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_11, &PyTuple_GET_ITEM(mod_consts[44], 0), mod_consts[42]);
        if (tmp_assattr_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[45], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_called_value_12;
        PyObject *tmp_assattr_target_12;
        CHECK_OBJECT(var_inception_a);
        tmp_called_value_12 = var_inception_a;
        frame_c1673366f2c6299dcc9660a6fdfcf143->m_frame.f_lineno = 71;
        tmp_assattr_value_12 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_12, &PyTuple_GET_ITEM(mod_consts[46], 0), mod_consts[42]);
        if (tmp_assattr_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[47], tmp_assattr_value_12);
        Py_DECREF(tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_called_value_13;
        PyObject *tmp_assattr_target_13;
        CHECK_OBJECT(var_inception_b);
        tmp_called_value_13 = var_inception_b;
        frame_c1673366f2c6299dcc9660a6fdfcf143->m_frame.f_lineno = 72;
        tmp_assattr_value_13 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_13, mod_consts[48]);

        if (tmp_assattr_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[49], tmp_assattr_value_13);
        Py_DECREF(tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_called_value_14;
        PyObject *tmp_assattr_target_14;
        CHECK_OBJECT(var_inception_c);
        tmp_called_value_14 = var_inception_c;
        frame_c1673366f2c6299dcc9660a6fdfcf143->m_frame.f_lineno = 73;
        tmp_assattr_value_14 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_14, &PyTuple_GET_ITEM(mod_consts[50], 0), mod_consts[51]);
        if (tmp_assattr_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_14 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[52], tmp_assattr_value_14);
        Py_DECREF(tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_called_value_15;
        PyObject *tmp_assattr_target_15;
        CHECK_OBJECT(var_inception_c);
        tmp_called_value_15 = var_inception_c;
        frame_c1673366f2c6299dcc9660a6fdfcf143->m_frame.f_lineno = 74;
        tmp_assattr_value_15 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_15, &PyTuple_GET_ITEM(mod_consts[53], 0), mod_consts[51]);
        if (tmp_assattr_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_15 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, mod_consts[54], tmp_assattr_value_15);
        Py_DECREF(tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_called_value_16;
        PyObject *tmp_assattr_target_16;
        CHECK_OBJECT(var_inception_c);
        tmp_called_value_16 = var_inception_c;
        frame_c1673366f2c6299dcc9660a6fdfcf143->m_frame.f_lineno = 75;
        tmp_assattr_value_16 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_16, &PyTuple_GET_ITEM(mod_consts[53], 0), mod_consts[51]);
        if (tmp_assattr_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_16 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_16, mod_consts[55], tmp_assattr_value_16);
        Py_DECREF(tmp_assattr_value_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_called_value_17;
        PyObject *tmp_assattr_target_17;
        CHECK_OBJECT(var_inception_c);
        tmp_called_value_17 = var_inception_c;
        frame_c1673366f2c6299dcc9660a6fdfcf143->m_frame.f_lineno = 76;
        tmp_assattr_value_17 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_17, &PyTuple_GET_ITEM(mod_consts[56], 0), mod_consts[51]);
        if (tmp_assattr_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_17 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_17, mod_consts[57], tmp_assattr_value_17);
        Py_DECREF(tmp_assattr_value_17);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_18;
        PyObject *tmp_assattr_target_18;
        tmp_assattr_value_18 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_18 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_18, mod_consts[58], tmp_assattr_value_18);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_aux_logits);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_aux_logits);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooooooooooooooooc";
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
        PyObject *tmp_assattr_value_19;
        PyObject *tmp_called_value_18;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_assattr_target_19;
        CHECK_OBJECT(var_inception_aux);
        tmp_called_value_18 = var_inception_aux;
        tmp_args_element_value_4 = mod_consts[59];
        CHECK_OBJECT(par_num_classes);
        tmp_args_element_value_5 = par_num_classes;
        frame_c1673366f2c6299dcc9660a6fdfcf143->m_frame.f_lineno = 79;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assattr_value_19 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_18, call_args);
        }

        if (tmp_assattr_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_19 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_19, mod_consts[58], tmp_assattr_value_19);
        Py_DECREF(tmp_assattr_value_19);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    branch_no_4:;
    {
        PyObject *tmp_assattr_value_20;
        PyObject *tmp_called_value_19;
        PyObject *tmp_assattr_target_20;
        CHECK_OBJECT(var_inception_d);
        tmp_called_value_19 = var_inception_d;
        frame_c1673366f2c6299dcc9660a6fdfcf143->m_frame.f_lineno = 80;
        tmp_assattr_value_20 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_19, mod_consts[60]);

        if (tmp_assattr_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_20 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_20, mod_consts[61], tmp_assattr_value_20);
        Py_DECREF(tmp_assattr_value_20);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_21;
        PyObject *tmp_called_value_20;
        PyObject *tmp_assattr_target_21;
        CHECK_OBJECT(var_inception_e);
        tmp_called_value_20 = var_inception_e;
        frame_c1673366f2c6299dcc9660a6fdfcf143->m_frame.f_lineno = 81;
        tmp_assattr_value_21 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_20, mod_consts[62]);

        if (tmp_assattr_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_21 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_21, mod_consts[63], tmp_assattr_value_21);
        Py_DECREF(tmp_assattr_value_21);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_22;
        PyObject *tmp_called_value_21;
        PyObject *tmp_assattr_target_22;
        CHECK_OBJECT(var_inception_e);
        tmp_called_value_21 = var_inception_e;
        frame_c1673366f2c6299dcc9660a6fdfcf143->m_frame.f_lineno = 82;
        tmp_assattr_value_22 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_21, mod_consts[64]);

        if (tmp_assattr_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_22 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_22, mod_consts[65], tmp_assattr_value_22);
        Py_DECREF(tmp_assattr_value_22);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_23;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_assattr_target_23;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        frame_c1673366f2c6299dcc9660a6fdfcf143->m_frame.f_lineno = 83;
        tmp_assattr_value_23 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[66],
            PyTuple_GET_ITEM(mod_consts[67], 0)
        );

        if (tmp_assattr_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_23 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_23, mod_consts[68], tmp_assattr_value_23);
        Py_DECREF(tmp_assattr_value_23);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_24;
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_assattr_target_24;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[69]);
        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dropout);
        tmp_kw_call_value_0_1 = par_dropout;
        frame_c1673366f2c6299dcc9660a6fdfcf143->m_frame.f_lineno = 84;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assattr_value_24 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_22, kw_values, mod_consts[70]);
        }

        Py_DECREF(tmp_called_value_22);
        if (tmp_assattr_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_24 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_24, mod_consts[71], tmp_assattr_value_24);
        Py_DECREF(tmp_assattr_value_24);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_25;
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_assattr_target_25;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[72]);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = mod_consts[73];
        if (par_num_classes == NULL) {
            Py_DECREF(tmp_called_value_23);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[74]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_7 = par_num_classes;
        frame_c1673366f2c6299dcc9660a6fdfcf143->m_frame.f_lineno = 85;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assattr_value_25 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_23, call_args);
        }

        Py_DECREF(tmp_called_value_23);
        if (tmp_assattr_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_25 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_25, mod_consts[75], tmp_assattr_value_25);
        Py_DECREF(tmp_assattr_value_25);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_init_weights);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_init_weights);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        frame_c1673366f2c6299dcc9660a6fdfcf143->m_frame.f_lineno = 87;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[76]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_10;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_11 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_11 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooc";
                exception_lineno = 87;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_12 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_m;
            var_m = tmp_assign_source_12;
            Py_INCREF(var_m);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(var_m);
        tmp_isinstance_inst_1 = var_m;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooooooooooooc";
            goto try_except_handler_2;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[77]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooooooooooooc";
            goto try_except_handler_2;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooooooooooooc";
            goto try_except_handler_2;
        }
        tmp_or_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooooooooooooc";
            goto try_except_handler_2;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_m);
        tmp_isinstance_inst_2 = var_m;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooooooooooooc";
            goto try_except_handler_2;
        }
        tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[72]);
        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooooooooooooc";
            goto try_except_handler_2;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        Py_DECREF(tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooooooooooooc";
            goto try_except_handler_2;
        }
        tmp_or_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_6 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_6 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_13;
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_attribute_value_1;
        PyObject *tmp_float_arg_1;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(var_m);
        tmp_expression_value_15 = var_m;
        tmp_attribute_value_1 = mod_consts[78];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_15, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooooooooooooooooc";
            goto try_except_handler_2;
        }
        tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(var_m);
        tmp_expression_value_16 = var_m;
        tmp_float_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[78]);
        if (tmp_float_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooooooooooooooooc";
            goto try_except_handler_2;
        }
        tmp_assign_source_13 = TO_FLOAT(tmp_float_arg_1);
        Py_DECREF(tmp_float_arg_1);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooooooooooooooooc";
            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_13 = mod_consts[79];
        Py_INCREF(tmp_assign_source_13);
        condexpr_end_1:;
        {
            PyObject *old = var_stddev;
            var_stddev = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_4;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooooooooooooooc";
            goto try_except_handler_2;
        }
        tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[32]);
        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooooooooooooooc";
            goto try_except_handler_2;
        }
        tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[81]);
        Py_DECREF(tmp_expression_value_18);
        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooooooooooooooc";
            goto try_except_handler_2;
        }
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[82]);
        Py_DECREF(tmp_expression_value_17);
        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooooooooooooooc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_m);
        tmp_expression_value_20 = var_m;
        tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[83]);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 90;
            type_description_1 = "ooooooooooooooooc";
            goto try_except_handler_2;
        }
        tmp_kw_call_dict_value_0_1 = mod_consts[84];
        CHECK_OBJECT(var_stddev);
        tmp_kw_call_dict_value_1_1 = var_stddev;
        tmp_kw_call_dict_value_2_1 = mod_consts[85];
        tmp_kw_call_dict_value_3_1 = mod_consts[16];
        frame_c1673366f2c6299dcc9660a6fdfcf143->m_frame.f_lineno = 90;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_24, args, kw_values, mod_consts[86]);
        }

        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooooooooooooooc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto branch_end_6;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        PyObject *tmp_expression_value_21;
        CHECK_OBJECT(var_m);
        tmp_isinstance_inst_3 = var_m;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooooooooooooc";
            goto try_except_handler_2;
        }
        tmp_isinstance_cls_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[87]);
        if (tmp_isinstance_cls_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooooooooooooc";
            goto try_except_handler_2;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
        Py_DECREF(tmp_isinstance_cls_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooooooooooooc";
            goto try_except_handler_2;
        }
        tmp_condition_result_8 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_args_element_value_9;
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooooooooooc";
            goto try_except_handler_2;
        }
        tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[81]);
        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooooooooooc";
            goto try_except_handler_2;
        }
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[88]);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooooooooooc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_m);
        tmp_expression_value_24 = var_m;
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[83]);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 92;
            type_description_1 = "ooooooooooooooooc";
            goto try_except_handler_2;
        }
        tmp_args_element_value_9 = mod_consts[15];
        frame_c1673366f2c6299dcc9660a6fdfcf143->m_frame.f_lineno = 92;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_25, call_args);
        }

        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooooooooooc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_args_element_value_11;
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooooooooooooooc";
            goto try_except_handler_2;
        }
        tmp_expression_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[81]);
        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooooooooooooooc";
            goto try_except_handler_2;
        }
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[88]);
        Py_DECREF(tmp_expression_value_25);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooooooooooooooc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_m);
        tmp_expression_value_27 = var_m;
        tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[89]);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 93;
            type_description_1 = "ooooooooooooooooc";
            goto try_except_handler_2;
        }
        tmp_args_element_value_11 = mod_consts[14];
        frame_c1673366f2c6299dcc9660a6fdfcf143->m_frame.f_lineno = 93;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_26, call_args);
        }

        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooooooooooooooc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_7:;
    branch_end_6:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 87;
        type_description_1 = "ooooooooooooooooc";
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
    branch_no_5:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c1673366f2c6299dcc9660a6fdfcf143, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c1673366f2c6299dcc9660a6fdfcf143->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c1673366f2c6299dcc9660a6fdfcf143, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c1673366f2c6299dcc9660a6fdfcf143,
        type_description_1,
        par_self,
        par_num_classes,
        par_aux_logits,
        par_transform_input,
        par_inception_blocks,
        par_init_weights,
        par_dropout,
        var_conv_block,
        var_inception_a,
        var_inception_b,
        var_inception_c,
        var_inception_d,
        var_inception_e,
        var_inception_aux,
        var_m,
        var_stddev,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_c1673366f2c6299dcc9660a6fdfcf143 == cache_frame_c1673366f2c6299dcc9660a6fdfcf143) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c1673366f2c6299dcc9660a6fdfcf143);
        cache_frame_c1673366f2c6299dcc9660a6fdfcf143 = NULL;
    }

    assertFrameObject(frame_c1673366f2c6299dcc9660a6fdfcf143);

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
    CHECK_OBJECT(par_inception_blocks);
    Py_DECREF(par_inception_blocks);
    par_inception_blocks = NULL;
    CHECK_OBJECT(par_init_weights);
    Py_DECREF(par_init_weights);
    par_init_weights = NULL;
    CHECK_OBJECT(var_conv_block);
    Py_DECREF(var_conv_block);
    var_conv_block = NULL;
    CHECK_OBJECT(var_inception_a);
    Py_DECREF(var_inception_a);
    var_inception_a = NULL;
    CHECK_OBJECT(var_inception_b);
    Py_DECREF(var_inception_b);
    var_inception_b = NULL;
    CHECK_OBJECT(var_inception_c);
    Py_DECREF(var_inception_c);
    var_inception_c = NULL;
    CHECK_OBJECT(var_inception_d);
    Py_DECREF(var_inception_d);
    var_inception_d = NULL;
    CHECK_OBJECT(var_inception_e);
    Py_DECREF(var_inception_e);
    var_inception_e = NULL;
    Py_XDECREF(var_inception_aux);
    var_inception_aux = NULL;
    Py_XDECREF(var_m);
    var_m = NULL;
    Py_XDECREF(var_stddev);
    var_stddev = NULL;
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

    Py_XDECREF(par_inception_blocks);
    par_inception_blocks = NULL;
    CHECK_OBJECT(par_init_weights);
    Py_DECREF(par_init_weights);
    par_init_weights = NULL;
    Py_XDECREF(var_conv_block);
    var_conv_block = NULL;
    Py_XDECREF(var_inception_a);
    var_inception_a = NULL;
    Py_XDECREF(var_inception_b);
    var_inception_b = NULL;
    Py_XDECREF(var_inception_c);
    var_inception_c = NULL;
    Py_XDECREF(var_inception_d);
    var_inception_d = NULL;
    Py_XDECREF(var_inception_e);
    var_inception_e = NULL;
    Py_XDECREF(var_inception_aux);
    var_inception_aux = NULL;
    Py_XDECREF(var_m);
    var_m = NULL;
    Py_XDECREF(var_stddev);
    var_stddev = NULL;
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
    CHECK_OBJECT(par_num_classes);
    Py_DECREF(par_num_classes);
    CHECK_OBJECT(par_aux_logits);
    Py_DECREF(par_aux_logits);
    CHECK_OBJECT(par_transform_input);
    Py_DECREF(par_transform_input);
    CHECK_OBJECT(par_dropout);
    Py_DECREF(par_dropout);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_num_classes);
    Py_DECREF(par_num_classes);
    CHECK_OBJECT(par_aux_logits);
    Py_DECREF(par_aux_logits);
    CHECK_OBJECT(par_transform_input);
    Py_DECREF(par_transform_input);
    CHECK_OBJECT(par_dropout);
    Py_DECREF(par_dropout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$inception$$$function__2__transform_input(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *var_x_ch0 = NULL;
    PyObject *var_x_ch1 = NULL;
    PyObject *var_x_ch2 = NULL;
    struct Nuitka_FrameObject *frame_823c7bb672e2dae299b58d1c85ebc2f5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_823c7bb672e2dae299b58d1c85ebc2f5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_823c7bb672e2dae299b58d1c85ebc2f5)) {
        Py_XDECREF(cache_frame_823c7bb672e2dae299b58d1c85ebc2f5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_823c7bb672e2dae299b58d1c85ebc2f5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_823c7bb672e2dae299b58d1c85ebc2f5 = MAKE_FUNCTION_FRAME(codeobj_823c7bb672e2dae299b58d1c85ebc2f5, module_torchvision$models$inception, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_823c7bb672e2dae299b58d1c85ebc2f5->m_type_description == NULL);
    frame_823c7bb672e2dae299b58d1c85ebc2f5 = cache_frame_823c7bb672e2dae299b58d1c85ebc2f5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_823c7bb672e2dae299b58d1c85ebc2f5);
    assert(Py_REFCNT(frame_823c7bb672e2dae299b58d1c85ebc2f5) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[22]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 96;
            type_description_1 = "ooooo";
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
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[90]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_expression_value_3 = par_x;
        tmp_subscript_value_1 = mod_consts[91];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 97;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[15];
        frame_823c7bb672e2dae299b58d1c85ebc2f5->m_frame.f_lineno = 97;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_mult_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_1 = mod_consts[92];
        tmp_add_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_FLOAT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[93];
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_FLOAT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_x_ch0 == NULL);
        var_x_ch0 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[90]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_expression_value_5 = par_x;
        tmp_subscript_value_2 = mod_consts[94];
        tmp_args_element_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_2);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 98;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = mod_consts[15];
        frame_823c7bb672e2dae299b58d1c85ebc2f5->m_frame.f_lineno = 98;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_mult_expr_left_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_mult_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_2 = mod_consts[95];
        tmp_add_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_FLOAT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = mod_consts[96];
        tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_FLOAT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_x_ch1 == NULL);
        var_x_ch1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_args_element_value_6;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[90]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_expression_value_7 = par_x;
        tmp_subscript_value_3 = mod_consts[97];
        tmp_args_element_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_3);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 99;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = mod_consts[15];
        frame_823c7bb672e2dae299b58d1c85ebc2f5->m_frame.f_lineno = 99;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_mult_expr_left_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_mult_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_3 = mod_consts[98];
        tmp_add_expr_left_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_FLOAT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        Py_DECREF(tmp_mult_expr_left_3);
        if (tmp_add_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_3 = mod_consts[99];
        tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_FLOAT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_x_ch2 == NULL);
        var_x_ch2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_args_element_value_8;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_x_ch0);
        tmp_tuple_element_1 = var_x_ch0;
        tmp_args_element_value_7 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_args_element_value_7, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_x_ch1);
        tmp_tuple_element_1 = var_x_ch1;
        PyTuple_SET_ITEM0(tmp_args_element_value_7, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_x_ch2);
        tmp_tuple_element_1 = var_x_ch2;
        PyTuple_SET_ITEM0(tmp_args_element_value_7, 2, tmp_tuple_element_1);
        tmp_args_element_value_8 = mod_consts[15];
        frame_823c7bb672e2dae299b58d1c85ebc2f5->m_frame.f_lineno = 100;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[100],
                call_args
            );
        }

        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_823c7bb672e2dae299b58d1c85ebc2f5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_823c7bb672e2dae299b58d1c85ebc2f5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_823c7bb672e2dae299b58d1c85ebc2f5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_823c7bb672e2dae299b58d1c85ebc2f5,
        type_description_1,
        par_self,
        par_x,
        var_x_ch0,
        var_x_ch1,
        var_x_ch2
    );


    // Release cached frame if used for exception.
    if (frame_823c7bb672e2dae299b58d1c85ebc2f5 == cache_frame_823c7bb672e2dae299b58d1c85ebc2f5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_823c7bb672e2dae299b58d1c85ebc2f5);
        cache_frame_823c7bb672e2dae299b58d1c85ebc2f5 = NULL;
    }

    assertFrameObject(frame_823c7bb672e2dae299b58d1c85ebc2f5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(par_x);
    tmp_return_value = par_x;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    par_x = NULL;
    Py_XDECREF(var_x_ch0);
    var_x_ch0 = NULL;
    Py_XDECREF(var_x_ch1);
    var_x_ch1 = NULL;
    Py_XDECREF(var_x_ch2);
    var_x_ch2 = NULL;
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

    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    par_x = NULL;
    Py_XDECREF(var_x_ch0);
    var_x_ch0 = NULL;
    Py_XDECREF(var_x_ch1);
    var_x_ch1 = NULL;
    Py_XDECREF(var_x_ch2);
    var_x_ch2 = NULL;
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


static PyObject *impl_torchvision$models$inception$$$function__3__forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *var_aux = NULL;
    struct Nuitka_FrameObject *frame_3d0012afc66d970c7b510fb96cdfb323;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3d0012afc66d970c7b510fb96cdfb323 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3d0012afc66d970c7b510fb96cdfb323)) {
        Py_XDECREF(cache_frame_3d0012afc66d970c7b510fb96cdfb323);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3d0012afc66d970c7b510fb96cdfb323 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3d0012afc66d970c7b510fb96cdfb323 = MAKE_FUNCTION_FRAME(codeobj_3d0012afc66d970c7b510fb96cdfb323, module_torchvision$models$inception, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3d0012afc66d970c7b510fb96cdfb323->m_type_description == NULL);
    frame_3d0012afc66d970c7b510fb96cdfb323 = cache_frame_3d0012afc66d970c7b510fb96cdfb323;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3d0012afc66d970c7b510fb96cdfb323);
    assert(Py_REFCNT(frame_3d0012afc66d970c7b510fb96cdfb323) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_3d0012afc66d970c7b510fb96cdfb323->m_frame.f_lineno = 105;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[25], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        frame_3d0012afc66d970c7b510fb96cdfb323->m_frame.f_lineno = 107;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[28], tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_3 = par_x;
        frame_3d0012afc66d970c7b510fb96cdfb323->m_frame.f_lineno = 109;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[31], tmp_args_element_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_4 = par_x;
        frame_3d0012afc66d970c7b510fb96cdfb323->m_frame.f_lineno = 111;
        tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[35], tmp_args_element_value_4);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(par_self);
        tmp_called_instance_5 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_5 = par_x;
        frame_3d0012afc66d970c7b510fb96cdfb323->m_frame.f_lineno = 113;
        tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[37], tmp_args_element_value_5);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(par_self);
        tmp_called_instance_6 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_6 = par_x;
        frame_3d0012afc66d970c7b510fb96cdfb323->m_frame.f_lineno = 115;
        tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[39], tmp_args_element_value_6);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(par_self);
        tmp_called_instance_7 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_7 = par_x;
        frame_3d0012afc66d970c7b510fb96cdfb323->m_frame.f_lineno = 117;
        tmp_assign_source_7 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_7, mod_consts[40], tmp_args_element_value_7);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_value_8;
        CHECK_OBJECT(par_self);
        tmp_called_instance_8 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_8 = par_x;
        frame_3d0012afc66d970c7b510fb96cdfb323->m_frame.f_lineno = 119;
        tmp_assign_source_8 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_8, mod_consts[43], tmp_args_element_value_8);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_8;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_args_element_value_9;
        CHECK_OBJECT(par_self);
        tmp_called_instance_9 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_9 = par_x;
        frame_3d0012afc66d970c7b510fb96cdfb323->m_frame.f_lineno = 121;
        tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_9, mod_consts[45], tmp_args_element_value_9);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_9;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(par_self);
        tmp_called_instance_10 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_10 = par_x;
        frame_3d0012afc66d970c7b510fb96cdfb323->m_frame.f_lineno = 123;
        tmp_assign_source_10 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_10, mod_consts[47], tmp_args_element_value_10);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_args_element_value_11;
        CHECK_OBJECT(par_self);
        tmp_called_instance_11 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_11 = par_x;
        frame_3d0012afc66d970c7b510fb96cdfb323->m_frame.f_lineno = 125;
        tmp_assign_source_11 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_11, mod_consts[49], tmp_args_element_value_11);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_args_element_value_12;
        CHECK_OBJECT(par_self);
        tmp_called_instance_12 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_12 = par_x;
        frame_3d0012afc66d970c7b510fb96cdfb323->m_frame.f_lineno = 127;
        tmp_assign_source_12 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_12, mod_consts[52], tmp_args_element_value_12);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_12;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_args_element_value_13;
        CHECK_OBJECT(par_self);
        tmp_called_instance_13 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_13 = par_x;
        frame_3d0012afc66d970c7b510fb96cdfb323->m_frame.f_lineno = 129;
        tmp_assign_source_13 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_13, mod_consts[54], tmp_args_element_value_13);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_13;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_args_element_value_14;
        CHECK_OBJECT(par_self);
        tmp_called_instance_14 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_14 = par_x;
        frame_3d0012afc66d970c7b510fb96cdfb323->m_frame.f_lineno = 131;
        tmp_assign_source_14 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_14, mod_consts[55], tmp_args_element_value_14);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_14;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_instance_15;
        PyObject *tmp_args_element_value_15;
        CHECK_OBJECT(par_self);
        tmp_called_instance_15 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_15 = par_x;
        frame_3d0012afc66d970c7b510fb96cdfb323->m_frame.f_lineno = 133;
        tmp_assign_source_15 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_15, mod_consts[57], tmp_args_element_value_15);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_15;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = Py_None;
        assert(var_aux == NULL);
        Py_INCREF(tmp_assign_source_16);
        var_aux = tmp_assign_source_16;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[58]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[101]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 137;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_instance_16;
        PyObject *tmp_args_element_value_16;
        CHECK_OBJECT(par_self);
        tmp_called_instance_16 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_16 = par_x;
        frame_3d0012afc66d970c7b510fb96cdfb323->m_frame.f_lineno = 138;
        tmp_assign_source_17 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_16, mod_consts[58], tmp_args_element_value_16);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_aux;
            assert(old != NULL);
            var_aux = tmp_assign_source_17;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_17;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[61]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (par_x == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[102]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 140;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_17 = par_x;
        frame_3d0012afc66d970c7b510fb96cdfb323->m_frame.f_lineno = 140;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_17);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            par_x = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_instance_17;
        PyObject *tmp_args_element_value_18;
        CHECK_OBJECT(par_self);
        tmp_called_instance_17 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_18 = par_x;
        frame_3d0012afc66d970c7b510fb96cdfb323->m_frame.f_lineno = 142;
        tmp_assign_source_19 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_17, mod_consts[63], tmp_args_element_value_18);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_19;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_instance_18;
        PyObject *tmp_args_element_value_19;
        CHECK_OBJECT(par_self);
        tmp_called_instance_18 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_19 = par_x;
        frame_3d0012afc66d970c7b510fb96cdfb323->m_frame.f_lineno = 144;
        tmp_assign_source_20 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_18, mod_consts[65], tmp_args_element_value_19);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_20;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_instance_19;
        PyObject *tmp_args_element_value_20;
        CHECK_OBJECT(par_self);
        tmp_called_instance_19 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_20 = par_x;
        frame_3d0012afc66d970c7b510fb96cdfb323->m_frame.f_lineno = 147;
        tmp_assign_source_21 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_19, mod_consts[68], tmp_args_element_value_20);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_21;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_instance_20;
        PyObject *tmp_args_element_value_21;
        CHECK_OBJECT(par_self);
        tmp_called_instance_20 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_21 = par_x;
        frame_3d0012afc66d970c7b510fb96cdfb323->m_frame.f_lineno = 149;
        tmp_assign_source_22 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_20, mod_consts[71], tmp_args_element_value_21);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_22;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_instance_21;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        tmp_called_instance_21 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_instance_21 == NULL)) {
            tmp_called_instance_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_called_instance_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_22 = par_x;
        tmp_args_element_value_23 = mod_consts[15];
        frame_3d0012afc66d970c7b510fb96cdfb323->m_frame.f_lineno = 151;
        {
            PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23};
            tmp_assign_source_23 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_21,
                mod_consts[103],
                call_args
            );
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_23;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_instance_22;
        PyObject *tmp_args_element_value_24;
        CHECK_OBJECT(par_self);
        tmp_called_instance_22 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_24 = par_x;
        frame_3d0012afc66d970c7b510fb96cdfb323->m_frame.f_lineno = 153;
        tmp_assign_source_24 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_22, mod_consts[75], tmp_args_element_value_24);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_24;
            Py_DECREF(old);
        }

    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3d0012afc66d970c7b510fb96cdfb323, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3d0012afc66d970c7b510fb96cdfb323->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3d0012afc66d970c7b510fb96cdfb323, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3d0012afc66d970c7b510fb96cdfb323,
        type_description_1,
        par_self,
        par_x,
        var_aux
    );


    // Release cached frame if used for exception.
    if (frame_3d0012afc66d970c7b510fb96cdfb323 == cache_frame_3d0012afc66d970c7b510fb96cdfb323) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3d0012afc66d970c7b510fb96cdfb323);
        cache_frame_3d0012afc66d970c7b510fb96cdfb323 = NULL;
    }

    assertFrameObject(frame_3d0012afc66d970c7b510fb96cdfb323);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_x);
        tmp_tuple_element_1 = par_x;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_aux);
        tmp_tuple_element_1 = var_aux;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    par_x = NULL;
    CHECK_OBJECT(var_aux);
    Py_DECREF(var_aux);
    var_aux = NULL;
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

    Py_XDECREF(par_x);
    par_x = NULL;
    Py_XDECREF(var_aux);
    var_aux = NULL;
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


static PyObject *impl_torchvision$models$inception$$$function__4_eager_outputs(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *par_aux = python_pars[2];
    struct Nuitka_FrameObject *frame_e84ca4afd02ba8140ddda3ed1c875bad;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e84ca4afd02ba8140ddda3ed1c875bad = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e84ca4afd02ba8140ddda3ed1c875bad)) {
        Py_XDECREF(cache_frame_e84ca4afd02ba8140ddda3ed1c875bad);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e84ca4afd02ba8140ddda3ed1c875bad == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e84ca4afd02ba8140ddda3ed1c875bad = MAKE_FUNCTION_FRAME(codeobj_e84ca4afd02ba8140ddda3ed1c875bad, module_torchvision$models$inception, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e84ca4afd02ba8140ddda3ed1c875bad->m_type_description == NULL);
    frame_e84ca4afd02ba8140ddda3ed1c875bad = cache_frame_e84ca4afd02ba8140ddda3ed1c875bad;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e84ca4afd02ba8140ddda3ed1c875bad);
    assert(Py_REFCNT(frame_e84ca4afd02ba8140ddda3ed1c875bad) == 2);

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
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[101]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 159;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooo";
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
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[21]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 159;
            type_description_1 = "ooo";
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        CHECK_OBJECT(par_aux);
        tmp_args_element_value_2 = par_aux;
        frame_e84ca4afd02ba8140ddda3ed1c875bad->m_frame.f_lineno = 160;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    CHECK_OBJECT(par_x);
    tmp_return_value = par_x;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_e84ca4afd02ba8140ddda3ed1c875bad, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e84ca4afd02ba8140ddda3ed1c875bad->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e84ca4afd02ba8140ddda3ed1c875bad, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e84ca4afd02ba8140ddda3ed1c875bad,
        type_description_1,
        par_self,
        par_x,
        par_aux
    );


    // Release cached frame if used for exception.
    if (frame_e84ca4afd02ba8140ddda3ed1c875bad == cache_frame_e84ca4afd02ba8140ddda3ed1c875bad) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e84ca4afd02ba8140ddda3ed1c875bad);
        cache_frame_e84ca4afd02ba8140ddda3ed1c875bad = NULL;
    }

    assertFrameObject(frame_e84ca4afd02ba8140ddda3ed1c875bad);

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
    CHECK_OBJECT(par_aux);
    Py_DECREF(par_aux);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_aux);
    Py_DECREF(par_aux);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$inception$$$function__5_forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *var_aux = NULL;
    PyObject *var_aux_defined = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_1b41efc51456b4f0c1e851ef6588c86f;
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
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1b41efc51456b4f0c1e851ef6588c86f = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1b41efc51456b4f0c1e851ef6588c86f)) {
        Py_XDECREF(cache_frame_1b41efc51456b4f0c1e851ef6588c86f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1b41efc51456b4f0c1e851ef6588c86f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1b41efc51456b4f0c1e851ef6588c86f = MAKE_FUNCTION_FRAME(codeobj_1b41efc51456b4f0c1e851ef6588c86f, module_torchvision$models$inception, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1b41efc51456b4f0c1e851ef6588c86f->m_type_description == NULL);
    frame_1b41efc51456b4f0c1e851ef6588c86f = cache_frame_1b41efc51456b4f0c1e851ef6588c86f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1b41efc51456b4f0c1e851ef6588c86f);
    assert(Py_REFCNT(frame_1b41efc51456b4f0c1e851ef6588c86f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_1b41efc51456b4f0c1e851ef6588c86f->m_frame.f_lineno = 165;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[105], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        frame_1b41efc51456b4f0c1e851ef6588c86f->m_frame.f_lineno = 166;
        tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[106], tmp_args_element_value_2);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooo";
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


            type_description_1 = "oooo";
            exception_lineno = 166;
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


            type_description_1 = "oooo";
            exception_lineno = 166;
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

                    type_description_1 = "oooo";
                    exception_lineno = 166;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[107];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooo";
            exception_lineno = 166;
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
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_5;
            Py_INCREF(par_x);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var_aux == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_aux = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_and_left_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[101]);
        if (tmp_and_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_1);

            exception_lineno = 167;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        Py_DECREF(tmp_and_left_value_1);
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_and_right_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[21]);
        if (tmp_and_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_assign_source_7 = tmp_and_left_value_1;
        and_end_1:;
        assert(var_aux_defined == NULL);
        var_aux_defined = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[108]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_1b41efc51456b4f0c1e851ef6588c86f->m_frame.f_lineno = 168;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[109]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 168;
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
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(var_aux_defined);
        tmp_operand_value_1 = var_aux_defined;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooo";
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
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_2;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_1b41efc51456b4f0c1e851ef6588c86f->m_frame.f_lineno = 170;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_4,
            mod_consts[11],
            PyTuple_GET_ITEM(mod_consts[110], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_2:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_3 = par_x;
        CHECK_OBJECT(var_aux);
        tmp_args_element_value_4 = var_aux;
        frame_1b41efc51456b4f0c1e851ef6588c86f->m_frame.f_lineno = 171;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(par_self);
        tmp_called_instance_5 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_5 = par_x;
        CHECK_OBJECT(var_aux);
        tmp_args_element_value_6 = var_aux;
        frame_1b41efc51456b4f0c1e851ef6588c86f->m_frame.f_lineno = 173;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_5,
                mod_consts[111],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1b41efc51456b4f0c1e851ef6588c86f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1b41efc51456b4f0c1e851ef6588c86f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1b41efc51456b4f0c1e851ef6588c86f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1b41efc51456b4f0c1e851ef6588c86f,
        type_description_1,
        par_self,
        par_x,
        var_aux,
        var_aux_defined
    );


    // Release cached frame if used for exception.
    if (frame_1b41efc51456b4f0c1e851ef6588c86f == cache_frame_1b41efc51456b4f0c1e851ef6588c86f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1b41efc51456b4f0c1e851ef6588c86f);
        cache_frame_1b41efc51456b4f0c1e851ef6588c86f = NULL;
    }

    assertFrameObject(frame_1b41efc51456b4f0c1e851ef6588c86f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_x);
    par_x = NULL;
    Py_XDECREF(var_aux);
    var_aux = NULL;
    CHECK_OBJECT(var_aux_defined);
    Py_DECREF(var_aux_defined);
    var_aux_defined = NULL;
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

    Py_XDECREF(par_x);
    par_x = NULL;
    Py_XDECREF(var_aux);
    var_aux = NULL;
    Py_XDECREF(var_aux_defined);
    var_aux_defined = NULL;
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


static PyObject *impl_torchvision$models$inception$$$function__6___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_in_channels = python_pars[1];
    PyObject *par_pool_features = python_pars[2];
    PyObject *par_conv_block = python_pars[3];
    struct Nuitka_FrameObject *frame_71d980698cf4b471ecf541df72490d16;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_71d980698cf4b471ecf541df72490d16 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_71d980698cf4b471ecf541df72490d16)) {
        Py_XDECREF(cache_frame_71d980698cf4b471ecf541df72490d16);

#if _DEBUG_REFCOUNTS
        if (cache_frame_71d980698cf4b471ecf541df72490d16 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_71d980698cf4b471ecf541df72490d16 = MAKE_FUNCTION_FRAME(codeobj_71d980698cf4b471ecf541df72490d16, module_torchvision$models$inception, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_71d980698cf4b471ecf541df72490d16->m_type_description == NULL);
    frame_71d980698cf4b471ecf541df72490d16 = cache_frame_71d980698cf4b471ecf541df72490d16;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_71d980698cf4b471ecf541df72490d16);
    assert(Py_REFCNT(frame_71d980698cf4b471ecf541df72490d16) == 2);

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

            exception_lineno = 180;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_torchvision$models$inception, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_71d980698cf4b471ecf541df72490d16->m_frame.f_lineno = 180;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[1]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_conv_block);
        tmp_cmp_expr_left_1 = par_conv_block;
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
        tmp_assign_source_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assign_source_1 == NULL)) {
            tmp_assign_source_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_conv_block;
            assert(old != NULL);
            par_conv_block = tmp_assign_source_1;
            Py_INCREF(par_conv_block);
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_conv_block);
        tmp_called_value_1 = par_conv_block;
        CHECK_OBJECT(par_in_channels);
        tmp_tuple_element_1 = par_in_channels;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[112];
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[113]);
        frame_71d980698cf4b471ecf541df72490d16->m_frame.f_lineno = 183;
        tmp_assattr_value_1 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[114], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_conv_block);
        tmp_called_value_2 = par_conv_block;
        CHECK_OBJECT(par_in_channels);
        tmp_tuple_element_2 = par_in_channels;
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[115];
        PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[113]);
        frame_71d980698cf4b471ecf541df72490d16->m_frame.f_lineno = 185;
        tmp_assattr_value_2 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[116], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_conv_block);
        tmp_called_value_3 = par_conv_block;
        frame_71d980698cf4b471ecf541df72490d16->m_frame.f_lineno = 186;
        tmp_assattr_value_3 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_3, &PyTuple_GET_ITEM(mod_consts[117], 0), mod_consts[30]);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[118], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_value_3;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_conv_block);
        tmp_called_value_4 = par_conv_block;
        CHECK_OBJECT(par_in_channels);
        tmp_tuple_element_3 = par_in_channels;
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_3);
        tmp_tuple_element_3 = mod_consts[112];
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_3);
        tmp_kwargs_value_3 = DICT_COPY(mod_consts[113]);
        frame_71d980698cf4b471ecf541df72490d16->m_frame.f_lineno = 188;
        tmp_assattr_value_4 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_args_value_3);
        Py_DECREF(tmp_kwargs_value_3);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[119], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_called_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_conv_block);
        tmp_called_value_5 = par_conv_block;
        frame_71d980698cf4b471ecf541df72490d16->m_frame.f_lineno = 189;
        tmp_assattr_value_5 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_5, &PyTuple_GET_ITEM(mod_consts[120], 0), mod_consts[30]);
        if (tmp_assattr_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[121], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_called_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_conv_block);
        tmp_called_value_6 = par_conv_block;
        frame_71d980698cf4b471ecf541df72490d16->m_frame.f_lineno = 190;
        tmp_assattr_value_6 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_6, &PyTuple_GET_ITEM(mod_consts[122], 0), mod_consts[30]);
        if (tmp_assattr_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[123], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_value_4;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_value_4;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_conv_block);
        tmp_called_value_7 = par_conv_block;
        CHECK_OBJECT(par_in_channels);
        tmp_tuple_element_4 = par_in_channels;
        tmp_args_value_4 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_4);
        CHECK_OBJECT(par_pool_features);
        tmp_tuple_element_4 = par_pool_features;
        PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_4);
        tmp_kwargs_value_4 = DICT_COPY(mod_consts[113]);
        frame_71d980698cf4b471ecf541df72490d16->m_frame.f_lineno = 192;
        tmp_assattr_value_7 = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_4, tmp_kwargs_value_4);
        Py_DECREF(tmp_args_value_4);
        Py_DECREF(tmp_kwargs_value_4);
        if (tmp_assattr_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[124], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_71d980698cf4b471ecf541df72490d16, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_71d980698cf4b471ecf541df72490d16->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_71d980698cf4b471ecf541df72490d16, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_71d980698cf4b471ecf541df72490d16,
        type_description_1,
        par_self,
        par_in_channels,
        par_pool_features,
        par_conv_block,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_71d980698cf4b471ecf541df72490d16 == cache_frame_71d980698cf4b471ecf541df72490d16) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_71d980698cf4b471ecf541df72490d16);
        cache_frame_71d980698cf4b471ecf541df72490d16 = NULL;
    }

    assertFrameObject(frame_71d980698cf4b471ecf541df72490d16);

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
    CHECK_OBJECT(par_conv_block);
    Py_DECREF(par_conv_block);
    par_conv_block = NULL;
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

    Py_XDECREF(par_conv_block);
    par_conv_block = NULL;
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
    CHECK_OBJECT(par_in_channels);
    Py_DECREF(par_in_channels);
    CHECK_OBJECT(par_pool_features);
    Py_DECREF(par_pool_features);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_in_channels);
    Py_DECREF(par_in_channels);
    CHECK_OBJECT(par_pool_features);
    Py_DECREF(par_pool_features);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$inception$$$function__7__forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *var_branch1x1 = NULL;
    PyObject *var_branch5x5 = NULL;
    PyObject *var_branch3x3dbl = NULL;
    PyObject *var_branch_pool = NULL;
    PyObject *var_outputs = NULL;
    struct Nuitka_FrameObject *frame_042801bf6c7d2918e4ab8b4fcecc4417;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_042801bf6c7d2918e4ab8b4fcecc4417 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_042801bf6c7d2918e4ab8b4fcecc4417)) {
        Py_XDECREF(cache_frame_042801bf6c7d2918e4ab8b4fcecc4417);

#if _DEBUG_REFCOUNTS
        if (cache_frame_042801bf6c7d2918e4ab8b4fcecc4417 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_042801bf6c7d2918e4ab8b4fcecc4417 = MAKE_FUNCTION_FRAME(codeobj_042801bf6c7d2918e4ab8b4fcecc4417, module_torchvision$models$inception, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_042801bf6c7d2918e4ab8b4fcecc4417->m_type_description == NULL);
    frame_042801bf6c7d2918e4ab8b4fcecc4417 = cache_frame_042801bf6c7d2918e4ab8b4fcecc4417;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_042801bf6c7d2918e4ab8b4fcecc4417);
    assert(Py_REFCNT(frame_042801bf6c7d2918e4ab8b4fcecc4417) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_042801bf6c7d2918e4ab8b4fcecc4417->m_frame.f_lineno = 195;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[114], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_branch1x1 == NULL);
        var_branch1x1 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        frame_042801bf6c7d2918e4ab8b4fcecc4417->m_frame.f_lineno = 197;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[116], tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_branch5x5 == NULL);
        var_branch5x5 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(var_branch5x5);
        tmp_args_element_value_3 = var_branch5x5;
        frame_042801bf6c7d2918e4ab8b4fcecc4417->m_frame.f_lineno = 198;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[118], tmp_args_element_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_branch5x5;
            assert(old != NULL);
            var_branch5x5 = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_4 = par_x;
        frame_042801bf6c7d2918e4ab8b4fcecc4417->m_frame.f_lineno = 200;
        tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[119], tmp_args_element_value_4);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_branch3x3dbl == NULL);
        var_branch3x3dbl = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(par_self);
        tmp_called_instance_5 = par_self;
        CHECK_OBJECT(var_branch3x3dbl);
        tmp_args_element_value_5 = var_branch3x3dbl;
        frame_042801bf6c7d2918e4ab8b4fcecc4417->m_frame.f_lineno = 201;
        tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[121], tmp_args_element_value_5);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_branch3x3dbl;
            assert(old != NULL);
            var_branch3x3dbl = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(par_self);
        tmp_called_instance_6 = par_self;
        CHECK_OBJECT(var_branch3x3dbl);
        tmp_args_element_value_6 = var_branch3x3dbl;
        frame_042801bf6c7d2918e4ab8b4fcecc4417->m_frame.f_lineno = 202;
        tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[123], tmp_args_element_value_6);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_branch3x3dbl;
            assert(old != NULL);
            var_branch3x3dbl = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[126]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_tuple_element_1 = par_x;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[127]);
        frame_042801bf6c7d2918e4ab8b4fcecc4417->m_frame.f_lineno = 204;
        tmp_assign_source_7 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_branch_pool == NULL);
        var_branch_pool = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(par_self);
        tmp_called_instance_7 = par_self;
        CHECK_OBJECT(var_branch_pool);
        tmp_args_element_value_7 = var_branch_pool;
        frame_042801bf6c7d2918e4ab8b4fcecc4417->m_frame.f_lineno = 205;
        tmp_assign_source_8 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_7, mod_consts[124], tmp_args_element_value_7);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_branch_pool;
            assert(old != NULL);
            var_branch_pool = tmp_assign_source_8;
            Py_DECREF(old);
        }

    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_042801bf6c7d2918e4ab8b4fcecc4417, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_042801bf6c7d2918e4ab8b4fcecc4417->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_042801bf6c7d2918e4ab8b4fcecc4417, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_042801bf6c7d2918e4ab8b4fcecc4417,
        type_description_1,
        par_self,
        par_x,
        var_branch1x1,
        var_branch5x5,
        var_branch3x3dbl,
        var_branch_pool,
        var_outputs
    );


    // Release cached frame if used for exception.
    if (frame_042801bf6c7d2918e4ab8b4fcecc4417 == cache_frame_042801bf6c7d2918e4ab8b4fcecc4417) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_042801bf6c7d2918e4ab8b4fcecc4417);
        cache_frame_042801bf6c7d2918e4ab8b4fcecc4417 = NULL;
    }

    assertFrameObject(frame_042801bf6c7d2918e4ab8b4fcecc4417);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT(var_branch1x1);
        tmp_list_element_1 = var_branch1x1;
        tmp_assign_source_9 = MAKE_LIST_EMPTY(4);
        PyList_SET_ITEM0(tmp_assign_source_9, 0, tmp_list_element_1);
        CHECK_OBJECT(var_branch5x5);
        tmp_list_element_1 = var_branch5x5;
        PyList_SET_ITEM0(tmp_assign_source_9, 1, tmp_list_element_1);
        CHECK_OBJECT(var_branch3x3dbl);
        tmp_list_element_1 = var_branch3x3dbl;
        PyList_SET_ITEM0(tmp_assign_source_9, 2, tmp_list_element_1);
        CHECK_OBJECT(var_branch_pool);
        tmp_list_element_1 = var_branch_pool;
        PyList_SET_ITEM0(tmp_assign_source_9, 3, tmp_list_element_1);
        assert(var_outputs == NULL);
        var_outputs = tmp_assign_source_9;
    }
    CHECK_OBJECT(var_outputs);
    tmp_return_value = var_outputs;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_branch1x1);
    Py_DECREF(var_branch1x1);
    var_branch1x1 = NULL;
    CHECK_OBJECT(var_branch5x5);
    Py_DECREF(var_branch5x5);
    var_branch5x5 = NULL;
    CHECK_OBJECT(var_branch3x3dbl);
    Py_DECREF(var_branch3x3dbl);
    var_branch3x3dbl = NULL;
    CHECK_OBJECT(var_branch_pool);
    Py_DECREF(var_branch_pool);
    var_branch_pool = NULL;
    CHECK_OBJECT(var_outputs);
    Py_DECREF(var_outputs);
    var_outputs = NULL;
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

    Py_XDECREF(var_branch1x1);
    var_branch1x1 = NULL;
    Py_XDECREF(var_branch5x5);
    var_branch5x5 = NULL;
    Py_XDECREF(var_branch3x3dbl);
    var_branch3x3dbl = NULL;
    Py_XDECREF(var_branch_pool);
    var_branch_pool = NULL;
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


static PyObject *impl_torchvision$models$inception$$$function__8_forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *var_outputs = NULL;
    struct Nuitka_FrameObject *frame_1dc57db91ee907281213a6bf3f505532;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1dc57db91ee907281213a6bf3f505532 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1dc57db91ee907281213a6bf3f505532)) {
        Py_XDECREF(cache_frame_1dc57db91ee907281213a6bf3f505532);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1dc57db91ee907281213a6bf3f505532 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1dc57db91ee907281213a6bf3f505532 = MAKE_FUNCTION_FRAME(codeobj_1dc57db91ee907281213a6bf3f505532, module_torchvision$models$inception, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1dc57db91ee907281213a6bf3f505532->m_type_description == NULL);
    frame_1dc57db91ee907281213a6bf3f505532 = cache_frame_1dc57db91ee907281213a6bf3f505532;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1dc57db91ee907281213a6bf3f505532);
    assert(Py_REFCNT(frame_1dc57db91ee907281213a6bf3f505532) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_1dc57db91ee907281213a6bf3f505532->m_frame.f_lineno = 211;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[106], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_outputs == NULL);
        var_outputs = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_outputs);
        tmp_args_element_value_2 = var_outputs;
        tmp_args_element_value_3 = mod_consts[15];
        frame_1dc57db91ee907281213a6bf3f505532->m_frame.f_lineno = 212;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[100],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
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
        exception_tb = MAKE_TRACEBACK(frame_1dc57db91ee907281213a6bf3f505532, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1dc57db91ee907281213a6bf3f505532->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1dc57db91ee907281213a6bf3f505532, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1dc57db91ee907281213a6bf3f505532,
        type_description_1,
        par_self,
        par_x,
        var_outputs
    );


    // Release cached frame if used for exception.
    if (frame_1dc57db91ee907281213a6bf3f505532 == cache_frame_1dc57db91ee907281213a6bf3f505532) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1dc57db91ee907281213a6bf3f505532);
        cache_frame_1dc57db91ee907281213a6bf3f505532 = NULL;
    }

    assertFrameObject(frame_1dc57db91ee907281213a6bf3f505532);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_outputs);
    Py_DECREF(var_outputs);
    var_outputs = NULL;
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

    Py_XDECREF(var_outputs);
    var_outputs = NULL;
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


static PyObject *impl_torchvision$models$inception$$$function__9___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_in_channels = python_pars[1];
    PyObject *par_conv_block = python_pars[2];
    struct Nuitka_FrameObject *frame_272f4ece8c8aa64d4e680dbce11a1280;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_272f4ece8c8aa64d4e680dbce11a1280 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_272f4ece8c8aa64d4e680dbce11a1280)) {
        Py_XDECREF(cache_frame_272f4ece8c8aa64d4e680dbce11a1280);

#if _DEBUG_REFCOUNTS
        if (cache_frame_272f4ece8c8aa64d4e680dbce11a1280 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_272f4ece8c8aa64d4e680dbce11a1280 = MAKE_FUNCTION_FRAME(codeobj_272f4ece8c8aa64d4e680dbce11a1280, module_torchvision$models$inception, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_272f4ece8c8aa64d4e680dbce11a1280->m_type_description == NULL);
    frame_272f4ece8c8aa64d4e680dbce11a1280 = cache_frame_272f4ece8c8aa64d4e680dbce11a1280;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_272f4ece8c8aa64d4e680dbce11a1280);
    assert(Py_REFCNT(frame_272f4ece8c8aa64d4e680dbce11a1280) == 2);

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

            exception_lineno = 217;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_torchvision$models$inception, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        frame_272f4ece8c8aa64d4e680dbce11a1280->m_frame.f_lineno = 217;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[1]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_conv_block);
        tmp_cmp_expr_left_1 = par_conv_block;
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
        tmp_assign_source_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assign_source_1 == NULL)) {
            tmp_assign_source_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_conv_block;
            assert(old != NULL);
            par_conv_block = tmp_assign_source_1;
            Py_INCREF(par_conv_block);
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_conv_block);
        tmp_called_value_1 = par_conv_block;
        CHECK_OBJECT(par_in_channels);
        tmp_tuple_element_1 = par_in_channels;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[128];
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[129]);
        frame_272f4ece8c8aa64d4e680dbce11a1280->m_frame.f_lineno = 220;
        tmp_assattr_value_1 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[130], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_conv_block);
        tmp_called_value_2 = par_conv_block;
        CHECK_OBJECT(par_in_channels);
        tmp_tuple_element_2 = par_in_channels;
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[112];
        PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[113]);
        frame_272f4ece8c8aa64d4e680dbce11a1280->m_frame.f_lineno = 222;
        tmp_assattr_value_2 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[119], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_conv_block);
        tmp_called_value_3 = par_conv_block;
        frame_272f4ece8c8aa64d4e680dbce11a1280->m_frame.f_lineno = 223;
        tmp_assattr_value_3 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_3, &PyTuple_GET_ITEM(mod_consts[120], 0), mod_consts[30]);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[121], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_conv_block);
        tmp_called_value_4 = par_conv_block;
        frame_272f4ece8c8aa64d4e680dbce11a1280->m_frame.f_lineno = 224;
        tmp_assattr_value_4 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts[131], 0), mod_consts[24]);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[123], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_272f4ece8c8aa64d4e680dbce11a1280, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_272f4ece8c8aa64d4e680dbce11a1280->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_272f4ece8c8aa64d4e680dbce11a1280, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_272f4ece8c8aa64d4e680dbce11a1280,
        type_description_1,
        par_self,
        par_in_channels,
        par_conv_block,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_272f4ece8c8aa64d4e680dbce11a1280 == cache_frame_272f4ece8c8aa64d4e680dbce11a1280) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_272f4ece8c8aa64d4e680dbce11a1280);
        cache_frame_272f4ece8c8aa64d4e680dbce11a1280 = NULL;
    }

    assertFrameObject(frame_272f4ece8c8aa64d4e680dbce11a1280);

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
    CHECK_OBJECT(par_conv_block);
    Py_DECREF(par_conv_block);
    par_conv_block = NULL;
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

    Py_XDECREF(par_conv_block);
    par_conv_block = NULL;
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
    CHECK_OBJECT(par_in_channels);
    Py_DECREF(par_in_channels);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_in_channels);
    Py_DECREF(par_in_channels);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$inception$$$function__10__forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *var_branch3x3 = NULL;
    PyObject *var_branch3x3dbl = NULL;
    PyObject *var_branch_pool = NULL;
    PyObject *var_outputs = NULL;
    struct Nuitka_FrameObject *frame_f9c3a83a3bcd90994d11047f398b57bb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f9c3a83a3bcd90994d11047f398b57bb = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f9c3a83a3bcd90994d11047f398b57bb)) {
        Py_XDECREF(cache_frame_f9c3a83a3bcd90994d11047f398b57bb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f9c3a83a3bcd90994d11047f398b57bb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f9c3a83a3bcd90994d11047f398b57bb = MAKE_FUNCTION_FRAME(codeobj_f9c3a83a3bcd90994d11047f398b57bb, module_torchvision$models$inception, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f9c3a83a3bcd90994d11047f398b57bb->m_type_description == NULL);
    frame_f9c3a83a3bcd90994d11047f398b57bb = cache_frame_f9c3a83a3bcd90994d11047f398b57bb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f9c3a83a3bcd90994d11047f398b57bb);
    assert(Py_REFCNT(frame_f9c3a83a3bcd90994d11047f398b57bb) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_f9c3a83a3bcd90994d11047f398b57bb->m_frame.f_lineno = 227;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[130], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_branch3x3 == NULL);
        var_branch3x3 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        frame_f9c3a83a3bcd90994d11047f398b57bb->m_frame.f_lineno = 229;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[119], tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_branch3x3dbl == NULL);
        var_branch3x3dbl = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(var_branch3x3dbl);
        tmp_args_element_value_3 = var_branch3x3dbl;
        frame_f9c3a83a3bcd90994d11047f398b57bb->m_frame.f_lineno = 230;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[121], tmp_args_element_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_branch3x3dbl;
            assert(old != NULL);
            var_branch3x3dbl = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        CHECK_OBJECT(var_branch3x3dbl);
        tmp_args_element_value_4 = var_branch3x3dbl;
        frame_f9c3a83a3bcd90994d11047f398b57bb->m_frame.f_lineno = 231;
        tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[123], tmp_args_element_value_4);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_branch3x3dbl;
            assert(old != NULL);
            var_branch3x3dbl = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[132]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_tuple_element_1 = par_x;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[129]);
        frame_f9c3a83a3bcd90994d11047f398b57bb->m_frame.f_lineno = 233;
        tmp_assign_source_5 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_branch_pool == NULL);
        var_branch_pool = tmp_assign_source_5;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f9c3a83a3bcd90994d11047f398b57bb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f9c3a83a3bcd90994d11047f398b57bb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f9c3a83a3bcd90994d11047f398b57bb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f9c3a83a3bcd90994d11047f398b57bb,
        type_description_1,
        par_self,
        par_x,
        var_branch3x3,
        var_branch3x3dbl,
        var_branch_pool,
        var_outputs
    );


    // Release cached frame if used for exception.
    if (frame_f9c3a83a3bcd90994d11047f398b57bb == cache_frame_f9c3a83a3bcd90994d11047f398b57bb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f9c3a83a3bcd90994d11047f398b57bb);
        cache_frame_f9c3a83a3bcd90994d11047f398b57bb = NULL;
    }

    assertFrameObject(frame_f9c3a83a3bcd90994d11047f398b57bb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT(var_branch3x3);
        tmp_list_element_1 = var_branch3x3;
        tmp_assign_source_6 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assign_source_6, 0, tmp_list_element_1);
        CHECK_OBJECT(var_branch3x3dbl);
        tmp_list_element_1 = var_branch3x3dbl;
        PyList_SET_ITEM0(tmp_assign_source_6, 1, tmp_list_element_1);
        CHECK_OBJECT(var_branch_pool);
        tmp_list_element_1 = var_branch_pool;
        PyList_SET_ITEM0(tmp_assign_source_6, 2, tmp_list_element_1);
        assert(var_outputs == NULL);
        var_outputs = tmp_assign_source_6;
    }
    CHECK_OBJECT(var_outputs);
    tmp_return_value = var_outputs;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_branch3x3);
    Py_DECREF(var_branch3x3);
    var_branch3x3 = NULL;
    CHECK_OBJECT(var_branch3x3dbl);
    Py_DECREF(var_branch3x3dbl);
    var_branch3x3dbl = NULL;
    CHECK_OBJECT(var_branch_pool);
    Py_DECREF(var_branch_pool);
    var_branch_pool = NULL;
    CHECK_OBJECT(var_outputs);
    Py_DECREF(var_outputs);
    var_outputs = NULL;
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

    Py_XDECREF(var_branch3x3);
    var_branch3x3 = NULL;
    Py_XDECREF(var_branch3x3dbl);
    var_branch3x3dbl = NULL;
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


static PyObject *impl_torchvision$models$inception$$$function__11_forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *var_outputs = NULL;
    struct Nuitka_FrameObject *frame_1b64eb5d295bd3a5b5b94403bda14a3a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1b64eb5d295bd3a5b5b94403bda14a3a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1b64eb5d295bd3a5b5b94403bda14a3a)) {
        Py_XDECREF(cache_frame_1b64eb5d295bd3a5b5b94403bda14a3a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1b64eb5d295bd3a5b5b94403bda14a3a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1b64eb5d295bd3a5b5b94403bda14a3a = MAKE_FUNCTION_FRAME(codeobj_1b64eb5d295bd3a5b5b94403bda14a3a, module_torchvision$models$inception, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1b64eb5d295bd3a5b5b94403bda14a3a->m_type_description == NULL);
    frame_1b64eb5d295bd3a5b5b94403bda14a3a = cache_frame_1b64eb5d295bd3a5b5b94403bda14a3a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1b64eb5d295bd3a5b5b94403bda14a3a);
    assert(Py_REFCNT(frame_1b64eb5d295bd3a5b5b94403bda14a3a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_1b64eb5d295bd3a5b5b94403bda14a3a->m_frame.f_lineno = 239;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[106], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_outputs == NULL);
        var_outputs = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_outputs);
        tmp_args_element_value_2 = var_outputs;
        tmp_args_element_value_3 = mod_consts[15];
        frame_1b64eb5d295bd3a5b5b94403bda14a3a->m_frame.f_lineno = 240;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[100],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
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
        exception_tb = MAKE_TRACEBACK(frame_1b64eb5d295bd3a5b5b94403bda14a3a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1b64eb5d295bd3a5b5b94403bda14a3a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1b64eb5d295bd3a5b5b94403bda14a3a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1b64eb5d295bd3a5b5b94403bda14a3a,
        type_description_1,
        par_self,
        par_x,
        var_outputs
    );


    // Release cached frame if used for exception.
    if (frame_1b64eb5d295bd3a5b5b94403bda14a3a == cache_frame_1b64eb5d295bd3a5b5b94403bda14a3a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1b64eb5d295bd3a5b5b94403bda14a3a);
        cache_frame_1b64eb5d295bd3a5b5b94403bda14a3a = NULL;
    }

    assertFrameObject(frame_1b64eb5d295bd3a5b5b94403bda14a3a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_outputs);
    Py_DECREF(var_outputs);
    var_outputs = NULL;
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

    Py_XDECREF(var_outputs);
    var_outputs = NULL;
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


static PyObject *impl_torchvision$models$inception$$$function__12___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_in_channels = python_pars[1];
    PyObject *par_channels_7x7 = python_pars[2];
    PyObject *par_conv_block = python_pars[3];
    PyObject *var_c7 = NULL;
    struct Nuitka_FrameObject *frame_5044b72a05234ef62c39b0e3ca53ff1f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_5044b72a05234ef62c39b0e3ca53ff1f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5044b72a05234ef62c39b0e3ca53ff1f)) {
        Py_XDECREF(cache_frame_5044b72a05234ef62c39b0e3ca53ff1f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5044b72a05234ef62c39b0e3ca53ff1f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5044b72a05234ef62c39b0e3ca53ff1f = MAKE_FUNCTION_FRAME(codeobj_5044b72a05234ef62c39b0e3ca53ff1f, module_torchvision$models$inception, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5044b72a05234ef62c39b0e3ca53ff1f->m_type_description == NULL);
    frame_5044b72a05234ef62c39b0e3ca53ff1f = cache_frame_5044b72a05234ef62c39b0e3ca53ff1f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5044b72a05234ef62c39b0e3ca53ff1f);
    assert(Py_REFCNT(frame_5044b72a05234ef62c39b0e3ca53ff1f) == 2);

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

            exception_lineno = 247;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_torchvision$models$inception, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        frame_5044b72a05234ef62c39b0e3ca53ff1f->m_frame.f_lineno = 247;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[1]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_conv_block);
        tmp_cmp_expr_left_1 = par_conv_block;
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
        tmp_assign_source_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assign_source_1 == NULL)) {
            tmp_assign_source_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_conv_block;
            assert(old != NULL);
            par_conv_block = tmp_assign_source_1;
            Py_INCREF(par_conv_block);
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_conv_block);
        tmp_called_value_1 = par_conv_block;
        CHECK_OBJECT(par_in_channels);
        tmp_tuple_element_1 = par_in_channels;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[133];
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[113]);
        frame_5044b72a05234ef62c39b0e3ca53ff1f->m_frame.f_lineno = 250;
        tmp_assattr_value_1 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[114], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(par_channels_7x7);
        tmp_assign_source_2 = par_channels_7x7;
        assert(var_c7 == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_c7 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_conv_block);
        tmp_called_value_2 = par_conv_block;
        CHECK_OBJECT(par_in_channels);
        tmp_tuple_element_2 = par_in_channels;
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_c7);
        tmp_tuple_element_2 = var_c7;
        PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[113]);
        frame_5044b72a05234ef62c39b0e3ca53ff1f->m_frame.f_lineno = 253;
        tmp_assattr_value_2 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[134], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_conv_block);
        tmp_called_value_3 = par_conv_block;
        CHECK_OBJECT(var_c7);
        tmp_tuple_element_3 = var_c7;
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_3);
        CHECK_OBJECT(var_c7);
        tmp_tuple_element_3 = var_c7;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_3);
        tmp_kwargs_value_3 = DICT_COPY(mod_consts[135]);
        frame_5044b72a05234ef62c39b0e3ca53ff1f->m_frame.f_lineno = 254;
        tmp_assattr_value_3 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_args_value_3);
        Py_DECREF(tmp_kwargs_value_3);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[136], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_value_4;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_conv_block);
        tmp_called_value_4 = par_conv_block;
        CHECK_OBJECT(var_c7);
        tmp_tuple_element_4 = var_c7;
        tmp_args_value_4 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_4);
        tmp_tuple_element_4 = mod_consts[133];
        PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_4);
        tmp_kwargs_value_4 = DICT_COPY(mod_consts[137]);
        frame_5044b72a05234ef62c39b0e3ca53ff1f->m_frame.f_lineno = 255;
        tmp_assattr_value_4 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
        Py_DECREF(tmp_args_value_4);
        Py_DECREF(tmp_kwargs_value_4);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[138], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kwargs_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_conv_block);
        tmp_called_value_5 = par_conv_block;
        CHECK_OBJECT(par_in_channels);
        tmp_tuple_element_5 = par_in_channels;
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_5);
        CHECK_OBJECT(var_c7);
        tmp_tuple_element_5 = var_c7;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_5);
        tmp_kwargs_value_5 = DICT_COPY(mod_consts[113]);
        frame_5044b72a05234ef62c39b0e3ca53ff1f->m_frame.f_lineno = 257;
        tmp_assattr_value_5 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_args_value_5);
        Py_DECREF(tmp_kwargs_value_5);
        if (tmp_assattr_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[139], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_value_6;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_conv_block);
        tmp_called_value_6 = par_conv_block;
        CHECK_OBJECT(var_c7);
        tmp_tuple_element_6 = var_c7;
        tmp_args_value_6 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_6);
        CHECK_OBJECT(var_c7);
        tmp_tuple_element_6 = var_c7;
        PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_6);
        tmp_kwargs_value_6 = DICT_COPY(mod_consts[137]);
        frame_5044b72a05234ef62c39b0e3ca53ff1f->m_frame.f_lineno = 258;
        tmp_assattr_value_6 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_6, tmp_kwargs_value_6);
        Py_DECREF(tmp_args_value_6);
        Py_DECREF(tmp_kwargs_value_6);
        if (tmp_assattr_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[140], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_kwargs_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_conv_block);
        tmp_called_value_7 = par_conv_block;
        CHECK_OBJECT(var_c7);
        tmp_tuple_element_7 = var_c7;
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_7);
        CHECK_OBJECT(var_c7);
        tmp_tuple_element_7 = var_c7;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_7);
        tmp_kwargs_value_7 = DICT_COPY(mod_consts[135]);
        frame_5044b72a05234ef62c39b0e3ca53ff1f->m_frame.f_lineno = 259;
        tmp_assattr_value_7 = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_args_value_7);
        Py_DECREF(tmp_kwargs_value_7);
        if (tmp_assattr_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[141], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_value_8;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_kwargs_value_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_conv_block);
        tmp_called_value_8 = par_conv_block;
        CHECK_OBJECT(var_c7);
        tmp_tuple_element_8 = var_c7;
        tmp_args_value_8 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_8);
        CHECK_OBJECT(var_c7);
        tmp_tuple_element_8 = var_c7;
        PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_8);
        tmp_kwargs_value_8 = DICT_COPY(mod_consts[137]);
        frame_5044b72a05234ef62c39b0e3ca53ff1f->m_frame.f_lineno = 260;
        tmp_assattr_value_8 = CALL_FUNCTION(tmp_called_value_8, tmp_args_value_8, tmp_kwargs_value_8);
        Py_DECREF(tmp_args_value_8);
        Py_DECREF(tmp_kwargs_value_8);
        if (tmp_assattr_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[142], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_kwargs_value_9;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(par_conv_block);
        tmp_called_value_9 = par_conv_block;
        CHECK_OBJECT(var_c7);
        tmp_tuple_element_9 = var_c7;
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_9);
        tmp_tuple_element_9 = mod_consts[133];
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_9);
        tmp_kwargs_value_9 = DICT_COPY(mod_consts[135]);
        frame_5044b72a05234ef62c39b0e3ca53ff1f->m_frame.f_lineno = 261;
        tmp_assattr_value_9 = CALL_FUNCTION(tmp_called_value_9, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_args_value_9);
        Py_DECREF(tmp_kwargs_value_9);
        if (tmp_assattr_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[143], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_value_10;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kwargs_value_10;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT(par_conv_block);
        tmp_called_value_10 = par_conv_block;
        CHECK_OBJECT(par_in_channels);
        tmp_tuple_element_10 = par_in_channels;
        tmp_args_value_10 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_10);
        tmp_tuple_element_10 = mod_consts[133];
        PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_10);
        tmp_kwargs_value_10 = DICT_COPY(mod_consts[113]);
        frame_5044b72a05234ef62c39b0e3ca53ff1f->m_frame.f_lineno = 263;
        tmp_assattr_value_10 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_10, tmp_kwargs_value_10);
        Py_DECREF(tmp_args_value_10);
        Py_DECREF(tmp_kwargs_value_10);
        if (tmp_assattr_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[124], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5044b72a05234ef62c39b0e3ca53ff1f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5044b72a05234ef62c39b0e3ca53ff1f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5044b72a05234ef62c39b0e3ca53ff1f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5044b72a05234ef62c39b0e3ca53ff1f,
        type_description_1,
        par_self,
        par_in_channels,
        par_channels_7x7,
        par_conv_block,
        var_c7,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_5044b72a05234ef62c39b0e3ca53ff1f == cache_frame_5044b72a05234ef62c39b0e3ca53ff1f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5044b72a05234ef62c39b0e3ca53ff1f);
        cache_frame_5044b72a05234ef62c39b0e3ca53ff1f = NULL;
    }

    assertFrameObject(frame_5044b72a05234ef62c39b0e3ca53ff1f);

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
    CHECK_OBJECT(par_conv_block);
    Py_DECREF(par_conv_block);
    par_conv_block = NULL;
    CHECK_OBJECT(var_c7);
    Py_DECREF(var_c7);
    var_c7 = NULL;
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

    Py_XDECREF(par_conv_block);
    par_conv_block = NULL;
    Py_XDECREF(var_c7);
    var_c7 = NULL;
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
    CHECK_OBJECT(par_in_channels);
    Py_DECREF(par_in_channels);
    CHECK_OBJECT(par_channels_7x7);
    Py_DECREF(par_channels_7x7);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_in_channels);
    Py_DECREF(par_in_channels);
    CHECK_OBJECT(par_channels_7x7);
    Py_DECREF(par_channels_7x7);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$inception$$$function__13__forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *var_branch1x1 = NULL;
    PyObject *var_branch7x7 = NULL;
    PyObject *var_branch7x7dbl = NULL;
    PyObject *var_branch_pool = NULL;
    PyObject *var_outputs = NULL;
    struct Nuitka_FrameObject *frame_3c9e45f6aa3e4ea787956a854855703d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3c9e45f6aa3e4ea787956a854855703d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3c9e45f6aa3e4ea787956a854855703d)) {
        Py_XDECREF(cache_frame_3c9e45f6aa3e4ea787956a854855703d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3c9e45f6aa3e4ea787956a854855703d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3c9e45f6aa3e4ea787956a854855703d = MAKE_FUNCTION_FRAME(codeobj_3c9e45f6aa3e4ea787956a854855703d, module_torchvision$models$inception, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3c9e45f6aa3e4ea787956a854855703d->m_type_description == NULL);
    frame_3c9e45f6aa3e4ea787956a854855703d = cache_frame_3c9e45f6aa3e4ea787956a854855703d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3c9e45f6aa3e4ea787956a854855703d);
    assert(Py_REFCNT(frame_3c9e45f6aa3e4ea787956a854855703d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_3c9e45f6aa3e4ea787956a854855703d->m_frame.f_lineno = 266;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[114], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_branch1x1 == NULL);
        var_branch1x1 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        frame_3c9e45f6aa3e4ea787956a854855703d->m_frame.f_lineno = 268;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[134], tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_branch7x7 == NULL);
        var_branch7x7 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(var_branch7x7);
        tmp_args_element_value_3 = var_branch7x7;
        frame_3c9e45f6aa3e4ea787956a854855703d->m_frame.f_lineno = 269;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[136], tmp_args_element_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_branch7x7;
            assert(old != NULL);
            var_branch7x7 = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        CHECK_OBJECT(var_branch7x7);
        tmp_args_element_value_4 = var_branch7x7;
        frame_3c9e45f6aa3e4ea787956a854855703d->m_frame.f_lineno = 270;
        tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[138], tmp_args_element_value_4);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_branch7x7;
            assert(old != NULL);
            var_branch7x7 = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(par_self);
        tmp_called_instance_5 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_5 = par_x;
        frame_3c9e45f6aa3e4ea787956a854855703d->m_frame.f_lineno = 272;
        tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[139], tmp_args_element_value_5);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_branch7x7dbl == NULL);
        var_branch7x7dbl = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(par_self);
        tmp_called_instance_6 = par_self;
        CHECK_OBJECT(var_branch7x7dbl);
        tmp_args_element_value_6 = var_branch7x7dbl;
        frame_3c9e45f6aa3e4ea787956a854855703d->m_frame.f_lineno = 273;
        tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[140], tmp_args_element_value_6);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_branch7x7dbl;
            assert(old != NULL);
            var_branch7x7dbl = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(par_self);
        tmp_called_instance_7 = par_self;
        CHECK_OBJECT(var_branch7x7dbl);
        tmp_args_element_value_7 = var_branch7x7dbl;
        frame_3c9e45f6aa3e4ea787956a854855703d->m_frame.f_lineno = 274;
        tmp_assign_source_7 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_7, mod_consts[141], tmp_args_element_value_7);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_branch7x7dbl;
            assert(old != NULL);
            var_branch7x7dbl = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_value_8;
        CHECK_OBJECT(par_self);
        tmp_called_instance_8 = par_self;
        CHECK_OBJECT(var_branch7x7dbl);
        tmp_args_element_value_8 = var_branch7x7dbl;
        frame_3c9e45f6aa3e4ea787956a854855703d->m_frame.f_lineno = 275;
        tmp_assign_source_8 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_8, mod_consts[142], tmp_args_element_value_8);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_branch7x7dbl;
            assert(old != NULL);
            var_branch7x7dbl = tmp_assign_source_8;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_args_element_value_9;
        CHECK_OBJECT(par_self);
        tmp_called_instance_9 = par_self;
        CHECK_OBJECT(var_branch7x7dbl);
        tmp_args_element_value_9 = var_branch7x7dbl;
        frame_3c9e45f6aa3e4ea787956a854855703d->m_frame.f_lineno = 276;
        tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_9, mod_consts[143], tmp_args_element_value_9);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_branch7x7dbl;
            assert(old != NULL);
            var_branch7x7dbl = tmp_assign_source_9;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[126]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_tuple_element_1 = par_x;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[127]);
        frame_3c9e45f6aa3e4ea787956a854855703d->m_frame.f_lineno = 278;
        tmp_assign_source_10 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_branch_pool == NULL);
        var_branch_pool = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(par_self);
        tmp_called_instance_10 = par_self;
        CHECK_OBJECT(var_branch_pool);
        tmp_args_element_value_10 = var_branch_pool;
        frame_3c9e45f6aa3e4ea787956a854855703d->m_frame.f_lineno = 279;
        tmp_assign_source_11 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_10, mod_consts[124], tmp_args_element_value_10);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_branch_pool;
            assert(old != NULL);
            var_branch_pool = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3c9e45f6aa3e4ea787956a854855703d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3c9e45f6aa3e4ea787956a854855703d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3c9e45f6aa3e4ea787956a854855703d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3c9e45f6aa3e4ea787956a854855703d,
        type_description_1,
        par_self,
        par_x,
        var_branch1x1,
        var_branch7x7,
        var_branch7x7dbl,
        var_branch_pool,
        var_outputs
    );


    // Release cached frame if used for exception.
    if (frame_3c9e45f6aa3e4ea787956a854855703d == cache_frame_3c9e45f6aa3e4ea787956a854855703d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3c9e45f6aa3e4ea787956a854855703d);
        cache_frame_3c9e45f6aa3e4ea787956a854855703d = NULL;
    }

    assertFrameObject(frame_3c9e45f6aa3e4ea787956a854855703d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT(var_branch1x1);
        tmp_list_element_1 = var_branch1x1;
        tmp_assign_source_12 = MAKE_LIST_EMPTY(4);
        PyList_SET_ITEM0(tmp_assign_source_12, 0, tmp_list_element_1);
        CHECK_OBJECT(var_branch7x7);
        tmp_list_element_1 = var_branch7x7;
        PyList_SET_ITEM0(tmp_assign_source_12, 1, tmp_list_element_1);
        CHECK_OBJECT(var_branch7x7dbl);
        tmp_list_element_1 = var_branch7x7dbl;
        PyList_SET_ITEM0(tmp_assign_source_12, 2, tmp_list_element_1);
        CHECK_OBJECT(var_branch_pool);
        tmp_list_element_1 = var_branch_pool;
        PyList_SET_ITEM0(tmp_assign_source_12, 3, tmp_list_element_1);
        assert(var_outputs == NULL);
        var_outputs = tmp_assign_source_12;
    }
    CHECK_OBJECT(var_outputs);
    tmp_return_value = var_outputs;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_branch1x1);
    Py_DECREF(var_branch1x1);
    var_branch1x1 = NULL;
    CHECK_OBJECT(var_branch7x7);
    Py_DECREF(var_branch7x7);
    var_branch7x7 = NULL;
    CHECK_OBJECT(var_branch7x7dbl);
    Py_DECREF(var_branch7x7dbl);
    var_branch7x7dbl = NULL;
    CHECK_OBJECT(var_branch_pool);
    Py_DECREF(var_branch_pool);
    var_branch_pool = NULL;
    CHECK_OBJECT(var_outputs);
    Py_DECREF(var_outputs);
    var_outputs = NULL;
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

    Py_XDECREF(var_branch1x1);
    var_branch1x1 = NULL;
    Py_XDECREF(var_branch7x7);
    var_branch7x7 = NULL;
    Py_XDECREF(var_branch7x7dbl);
    var_branch7x7dbl = NULL;
    Py_XDECREF(var_branch_pool);
    var_branch_pool = NULL;
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


static PyObject *impl_torchvision$models$inception$$$function__14_forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *var_outputs = NULL;
    struct Nuitka_FrameObject *frame_d3d51a57ef42b68973e0dc480ea8df15;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d3d51a57ef42b68973e0dc480ea8df15 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d3d51a57ef42b68973e0dc480ea8df15)) {
        Py_XDECREF(cache_frame_d3d51a57ef42b68973e0dc480ea8df15);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d3d51a57ef42b68973e0dc480ea8df15 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d3d51a57ef42b68973e0dc480ea8df15 = MAKE_FUNCTION_FRAME(codeobj_d3d51a57ef42b68973e0dc480ea8df15, module_torchvision$models$inception, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d3d51a57ef42b68973e0dc480ea8df15->m_type_description == NULL);
    frame_d3d51a57ef42b68973e0dc480ea8df15 = cache_frame_d3d51a57ef42b68973e0dc480ea8df15;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d3d51a57ef42b68973e0dc480ea8df15);
    assert(Py_REFCNT(frame_d3d51a57ef42b68973e0dc480ea8df15) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_d3d51a57ef42b68973e0dc480ea8df15->m_frame.f_lineno = 285;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[106], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_outputs == NULL);
        var_outputs = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_outputs);
        tmp_args_element_value_2 = var_outputs;
        tmp_args_element_value_3 = mod_consts[15];
        frame_d3d51a57ef42b68973e0dc480ea8df15->m_frame.f_lineno = 286;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[100],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
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
        exception_tb = MAKE_TRACEBACK(frame_d3d51a57ef42b68973e0dc480ea8df15, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d3d51a57ef42b68973e0dc480ea8df15->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d3d51a57ef42b68973e0dc480ea8df15, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d3d51a57ef42b68973e0dc480ea8df15,
        type_description_1,
        par_self,
        par_x,
        var_outputs
    );


    // Release cached frame if used for exception.
    if (frame_d3d51a57ef42b68973e0dc480ea8df15 == cache_frame_d3d51a57ef42b68973e0dc480ea8df15) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d3d51a57ef42b68973e0dc480ea8df15);
        cache_frame_d3d51a57ef42b68973e0dc480ea8df15 = NULL;
    }

    assertFrameObject(frame_d3d51a57ef42b68973e0dc480ea8df15);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_outputs);
    Py_DECREF(var_outputs);
    var_outputs = NULL;
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

    Py_XDECREF(var_outputs);
    var_outputs = NULL;
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


static PyObject *impl_torchvision$models$inception$$$function__15___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_in_channels = python_pars[1];
    PyObject *par_conv_block = python_pars[2];
    struct Nuitka_FrameObject *frame_89ac6f06141c632f880de453f1fba131;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_89ac6f06141c632f880de453f1fba131 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_89ac6f06141c632f880de453f1fba131)) {
        Py_XDECREF(cache_frame_89ac6f06141c632f880de453f1fba131);

#if _DEBUG_REFCOUNTS
        if (cache_frame_89ac6f06141c632f880de453f1fba131 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_89ac6f06141c632f880de453f1fba131 = MAKE_FUNCTION_FRAME(codeobj_89ac6f06141c632f880de453f1fba131, module_torchvision$models$inception, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_89ac6f06141c632f880de453f1fba131->m_type_description == NULL);
    frame_89ac6f06141c632f880de453f1fba131 = cache_frame_89ac6f06141c632f880de453f1fba131;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_89ac6f06141c632f880de453f1fba131);
    assert(Py_REFCNT(frame_89ac6f06141c632f880de453f1fba131) == 2);

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

            exception_lineno = 291;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_torchvision$models$inception, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        frame_89ac6f06141c632f880de453f1fba131->m_frame.f_lineno = 291;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[1]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_conv_block);
        tmp_cmp_expr_left_1 = par_conv_block;
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
        tmp_assign_source_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assign_source_1 == NULL)) {
            tmp_assign_source_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_conv_block;
            assert(old != NULL);
            par_conv_block = tmp_assign_source_1;
            Py_INCREF(par_conv_block);
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_conv_block);
        tmp_called_value_1 = par_conv_block;
        CHECK_OBJECT(par_in_channels);
        tmp_tuple_element_1 = par_in_channels;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[133];
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[113]);
        frame_89ac6f06141c632f880de453f1fba131->m_frame.f_lineno = 294;
        tmp_assattr_value_1 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[144], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_conv_block);
        tmp_called_value_2 = par_conv_block;
        frame_89ac6f06141c632f880de453f1fba131->m_frame.f_lineno = 295;
        tmp_assattr_value_2 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts[145], 0), mod_consts[24]);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[146], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_2;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_conv_block);
        tmp_called_value_3 = par_conv_block;
        CHECK_OBJECT(par_in_channels);
        tmp_tuple_element_2 = par_in_channels;
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[133];
        PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[113]);
        frame_89ac6f06141c632f880de453f1fba131->m_frame.f_lineno = 297;
        tmp_assattr_value_3 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[147], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_conv_block);
        tmp_called_value_4 = par_conv_block;
        frame_89ac6f06141c632f880de453f1fba131->m_frame.f_lineno = 298;
        tmp_assattr_value_4 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts[148], 0), mod_consts[30]);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[149], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_called_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_conv_block);
        tmp_called_value_5 = par_conv_block;
        frame_89ac6f06141c632f880de453f1fba131->m_frame.f_lineno = 299;
        tmp_assattr_value_5 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_5, &PyTuple_GET_ITEM(mod_consts[150], 0), mod_consts[30]);
        if (tmp_assattr_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[151], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_called_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_conv_block);
        tmp_called_value_6 = par_conv_block;
        frame_89ac6f06141c632f880de453f1fba131->m_frame.f_lineno = 300;
        tmp_assattr_value_6 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_6, &PyTuple_GET_ITEM(mod_consts[152], 0), mod_consts[24]);
        if (tmp_assattr_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[153], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_89ac6f06141c632f880de453f1fba131, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_89ac6f06141c632f880de453f1fba131->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_89ac6f06141c632f880de453f1fba131, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_89ac6f06141c632f880de453f1fba131,
        type_description_1,
        par_self,
        par_in_channels,
        par_conv_block,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_89ac6f06141c632f880de453f1fba131 == cache_frame_89ac6f06141c632f880de453f1fba131) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_89ac6f06141c632f880de453f1fba131);
        cache_frame_89ac6f06141c632f880de453f1fba131 = NULL;
    }

    assertFrameObject(frame_89ac6f06141c632f880de453f1fba131);

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
    CHECK_OBJECT(par_conv_block);
    Py_DECREF(par_conv_block);
    par_conv_block = NULL;
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

    Py_XDECREF(par_conv_block);
    par_conv_block = NULL;
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
    CHECK_OBJECT(par_in_channels);
    Py_DECREF(par_in_channels);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_in_channels);
    Py_DECREF(par_in_channels);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$inception$$$function__16__forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *var_branch3x3 = NULL;
    PyObject *var_branch7x7x3 = NULL;
    PyObject *var_branch_pool = NULL;
    PyObject *var_outputs = NULL;
    struct Nuitka_FrameObject *frame_e7541fefd0e0257fd444e859de5002e4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e7541fefd0e0257fd444e859de5002e4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e7541fefd0e0257fd444e859de5002e4)) {
        Py_XDECREF(cache_frame_e7541fefd0e0257fd444e859de5002e4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e7541fefd0e0257fd444e859de5002e4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e7541fefd0e0257fd444e859de5002e4 = MAKE_FUNCTION_FRAME(codeobj_e7541fefd0e0257fd444e859de5002e4, module_torchvision$models$inception, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e7541fefd0e0257fd444e859de5002e4->m_type_description == NULL);
    frame_e7541fefd0e0257fd444e859de5002e4 = cache_frame_e7541fefd0e0257fd444e859de5002e4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e7541fefd0e0257fd444e859de5002e4);
    assert(Py_REFCNT(frame_e7541fefd0e0257fd444e859de5002e4) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_e7541fefd0e0257fd444e859de5002e4->m_frame.f_lineno = 303;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[144], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_branch3x3 == NULL);
        var_branch3x3 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(var_branch3x3);
        tmp_args_element_value_2 = var_branch3x3;
        frame_e7541fefd0e0257fd444e859de5002e4->m_frame.f_lineno = 304;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[146], tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_branch3x3;
            assert(old != NULL);
            var_branch3x3 = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_3 = par_x;
        frame_e7541fefd0e0257fd444e859de5002e4->m_frame.f_lineno = 306;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[147], tmp_args_element_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_branch7x7x3 == NULL);
        var_branch7x7x3 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        CHECK_OBJECT(var_branch7x7x3);
        tmp_args_element_value_4 = var_branch7x7x3;
        frame_e7541fefd0e0257fd444e859de5002e4->m_frame.f_lineno = 307;
        tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[149], tmp_args_element_value_4);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_branch7x7x3;
            assert(old != NULL);
            var_branch7x7x3 = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(par_self);
        tmp_called_instance_5 = par_self;
        CHECK_OBJECT(var_branch7x7x3);
        tmp_args_element_value_5 = var_branch7x7x3;
        frame_e7541fefd0e0257fd444e859de5002e4->m_frame.f_lineno = 308;
        tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[151], tmp_args_element_value_5);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_branch7x7x3;
            assert(old != NULL);
            var_branch7x7x3 = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(par_self);
        tmp_called_instance_6 = par_self;
        CHECK_OBJECT(var_branch7x7x3);
        tmp_args_element_value_6 = var_branch7x7x3;
        frame_e7541fefd0e0257fd444e859de5002e4->m_frame.f_lineno = 309;
        tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[153], tmp_args_element_value_6);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_branch7x7x3;
            assert(old != NULL);
            var_branch7x7x3 = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[132]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_tuple_element_1 = par_x;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[129]);
        frame_e7541fefd0e0257fd444e859de5002e4->m_frame.f_lineno = 311;
        tmp_assign_source_7 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_branch_pool == NULL);
        var_branch_pool = tmp_assign_source_7;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e7541fefd0e0257fd444e859de5002e4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e7541fefd0e0257fd444e859de5002e4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e7541fefd0e0257fd444e859de5002e4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e7541fefd0e0257fd444e859de5002e4,
        type_description_1,
        par_self,
        par_x,
        var_branch3x3,
        var_branch7x7x3,
        var_branch_pool,
        var_outputs
    );


    // Release cached frame if used for exception.
    if (frame_e7541fefd0e0257fd444e859de5002e4 == cache_frame_e7541fefd0e0257fd444e859de5002e4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e7541fefd0e0257fd444e859de5002e4);
        cache_frame_e7541fefd0e0257fd444e859de5002e4 = NULL;
    }

    assertFrameObject(frame_e7541fefd0e0257fd444e859de5002e4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT(var_branch3x3);
        tmp_list_element_1 = var_branch3x3;
        tmp_assign_source_8 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assign_source_8, 0, tmp_list_element_1);
        CHECK_OBJECT(var_branch7x7x3);
        tmp_list_element_1 = var_branch7x7x3;
        PyList_SET_ITEM0(tmp_assign_source_8, 1, tmp_list_element_1);
        CHECK_OBJECT(var_branch_pool);
        tmp_list_element_1 = var_branch_pool;
        PyList_SET_ITEM0(tmp_assign_source_8, 2, tmp_list_element_1);
        assert(var_outputs == NULL);
        var_outputs = tmp_assign_source_8;
    }
    CHECK_OBJECT(var_outputs);
    tmp_return_value = var_outputs;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_branch3x3);
    Py_DECREF(var_branch3x3);
    var_branch3x3 = NULL;
    CHECK_OBJECT(var_branch7x7x3);
    Py_DECREF(var_branch7x7x3);
    var_branch7x7x3 = NULL;
    CHECK_OBJECT(var_branch_pool);
    Py_DECREF(var_branch_pool);
    var_branch_pool = NULL;
    CHECK_OBJECT(var_outputs);
    Py_DECREF(var_outputs);
    var_outputs = NULL;
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

    Py_XDECREF(var_branch3x3);
    var_branch3x3 = NULL;
    Py_XDECREF(var_branch7x7x3);
    var_branch7x7x3 = NULL;
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


static PyObject *impl_torchvision$models$inception$$$function__17_forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *var_outputs = NULL;
    struct Nuitka_FrameObject *frame_8807bb515bd822f7139ea517afd9a9d3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8807bb515bd822f7139ea517afd9a9d3 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8807bb515bd822f7139ea517afd9a9d3)) {
        Py_XDECREF(cache_frame_8807bb515bd822f7139ea517afd9a9d3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8807bb515bd822f7139ea517afd9a9d3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8807bb515bd822f7139ea517afd9a9d3 = MAKE_FUNCTION_FRAME(codeobj_8807bb515bd822f7139ea517afd9a9d3, module_torchvision$models$inception, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8807bb515bd822f7139ea517afd9a9d3->m_type_description == NULL);
    frame_8807bb515bd822f7139ea517afd9a9d3 = cache_frame_8807bb515bd822f7139ea517afd9a9d3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8807bb515bd822f7139ea517afd9a9d3);
    assert(Py_REFCNT(frame_8807bb515bd822f7139ea517afd9a9d3) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_8807bb515bd822f7139ea517afd9a9d3->m_frame.f_lineno = 316;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[106], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_outputs == NULL);
        var_outputs = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_outputs);
        tmp_args_element_value_2 = var_outputs;
        tmp_args_element_value_3 = mod_consts[15];
        frame_8807bb515bd822f7139ea517afd9a9d3->m_frame.f_lineno = 317;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[100],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
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
        exception_tb = MAKE_TRACEBACK(frame_8807bb515bd822f7139ea517afd9a9d3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8807bb515bd822f7139ea517afd9a9d3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8807bb515bd822f7139ea517afd9a9d3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8807bb515bd822f7139ea517afd9a9d3,
        type_description_1,
        par_self,
        par_x,
        var_outputs
    );


    // Release cached frame if used for exception.
    if (frame_8807bb515bd822f7139ea517afd9a9d3 == cache_frame_8807bb515bd822f7139ea517afd9a9d3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8807bb515bd822f7139ea517afd9a9d3);
        cache_frame_8807bb515bd822f7139ea517afd9a9d3 = NULL;
    }

    assertFrameObject(frame_8807bb515bd822f7139ea517afd9a9d3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_outputs);
    Py_DECREF(var_outputs);
    var_outputs = NULL;
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

    Py_XDECREF(var_outputs);
    var_outputs = NULL;
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


static PyObject *impl_torchvision$models$inception$$$function__18___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_in_channels = python_pars[1];
    PyObject *par_conv_block = python_pars[2];
    struct Nuitka_FrameObject *frame_0d7af840ffd856c9bbecc6750bac508a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_0d7af840ffd856c9bbecc6750bac508a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0d7af840ffd856c9bbecc6750bac508a)) {
        Py_XDECREF(cache_frame_0d7af840ffd856c9bbecc6750bac508a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0d7af840ffd856c9bbecc6750bac508a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0d7af840ffd856c9bbecc6750bac508a = MAKE_FUNCTION_FRAME(codeobj_0d7af840ffd856c9bbecc6750bac508a, module_torchvision$models$inception, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0d7af840ffd856c9bbecc6750bac508a->m_type_description == NULL);
    frame_0d7af840ffd856c9bbecc6750bac508a = cache_frame_0d7af840ffd856c9bbecc6750bac508a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0d7af840ffd856c9bbecc6750bac508a);
    assert(Py_REFCNT(frame_0d7af840ffd856c9bbecc6750bac508a) == 2);

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

            exception_lineno = 322;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_torchvision$models$inception, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        frame_0d7af840ffd856c9bbecc6750bac508a->m_frame.f_lineno = 322;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[1]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_conv_block);
        tmp_cmp_expr_left_1 = par_conv_block;
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
        tmp_assign_source_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assign_source_1 == NULL)) {
            tmp_assign_source_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_conv_block;
            assert(old != NULL);
            par_conv_block = tmp_assign_source_1;
            Py_INCREF(par_conv_block);
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_conv_block);
        tmp_called_value_1 = par_conv_block;
        CHECK_OBJECT(par_in_channels);
        tmp_tuple_element_1 = par_in_channels;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[154];
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[113]);
        frame_0d7af840ffd856c9bbecc6750bac508a->m_frame.f_lineno = 325;
        tmp_assattr_value_1 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[114], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_conv_block);
        tmp_called_value_2 = par_conv_block;
        CHECK_OBJECT(par_in_channels);
        tmp_tuple_element_2 = par_in_channels;
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[128];
        PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[113]);
        frame_0d7af840ffd856c9bbecc6750bac508a->m_frame.f_lineno = 327;
        tmp_assattr_value_2 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[144], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_conv_block);
        tmp_called_value_3 = par_conv_block;
        frame_0d7af840ffd856c9bbecc6750bac508a->m_frame.f_lineno = 328;
        tmp_assattr_value_3 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_3, &PyTuple_GET_ITEM(mod_consts[155], 0), mod_consts[30]);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[156], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_conv_block);
        tmp_called_value_4 = par_conv_block;
        frame_0d7af840ffd856c9bbecc6750bac508a->m_frame.f_lineno = 329;
        tmp_assattr_value_4 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts[157], 0), mod_consts[30]);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[158], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_value_3;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_conv_block);
        tmp_called_value_5 = par_conv_block;
        CHECK_OBJECT(par_in_channels);
        tmp_tuple_element_3 = par_in_channels;
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_3);
        tmp_tuple_element_3 = mod_consts[159];
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_3);
        tmp_kwargs_value_3 = DICT_COPY(mod_consts[113]);
        frame_0d7af840ffd856c9bbecc6750bac508a->m_frame.f_lineno = 331;
        tmp_assattr_value_5 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_args_value_3);
        Py_DECREF(tmp_kwargs_value_3);
        if (tmp_assattr_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[119], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_called_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_conv_block);
        tmp_called_value_6 = par_conv_block;
        frame_0d7af840ffd856c9bbecc6750bac508a->m_frame.f_lineno = 332;
        tmp_assattr_value_6 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_6, &PyTuple_GET_ITEM(mod_consts[160], 0), mod_consts[30]);
        if (tmp_assattr_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[121], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_called_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_conv_block);
        tmp_called_value_7 = par_conv_block;
        frame_0d7af840ffd856c9bbecc6750bac508a->m_frame.f_lineno = 333;
        tmp_assattr_value_7 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_7, &PyTuple_GET_ITEM(mod_consts[155], 0), mod_consts[30]);
        if (tmp_assattr_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[161], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_called_value_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_conv_block);
        tmp_called_value_8 = par_conv_block;
        frame_0d7af840ffd856c9bbecc6750bac508a->m_frame.f_lineno = 334;
        tmp_assattr_value_8 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_8, &PyTuple_GET_ITEM(mod_consts[157], 0), mod_consts[30]);
        if (tmp_assattr_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[162], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_value_4;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_value_4;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(par_conv_block);
        tmp_called_value_9 = par_conv_block;
        CHECK_OBJECT(par_in_channels);
        tmp_tuple_element_4 = par_in_channels;
        tmp_args_value_4 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_4);
        tmp_tuple_element_4 = mod_consts[133];
        PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_4);
        tmp_kwargs_value_4 = DICT_COPY(mod_consts[113]);
        frame_0d7af840ffd856c9bbecc6750bac508a->m_frame.f_lineno = 336;
        tmp_assattr_value_9 = CALL_FUNCTION(tmp_called_value_9, tmp_args_value_4, tmp_kwargs_value_4);
        Py_DECREF(tmp_args_value_4);
        Py_DECREF(tmp_kwargs_value_4);
        if (tmp_assattr_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[124], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0d7af840ffd856c9bbecc6750bac508a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0d7af840ffd856c9bbecc6750bac508a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0d7af840ffd856c9bbecc6750bac508a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0d7af840ffd856c9bbecc6750bac508a,
        type_description_1,
        par_self,
        par_in_channels,
        par_conv_block,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_0d7af840ffd856c9bbecc6750bac508a == cache_frame_0d7af840ffd856c9bbecc6750bac508a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0d7af840ffd856c9bbecc6750bac508a);
        cache_frame_0d7af840ffd856c9bbecc6750bac508a = NULL;
    }

    assertFrameObject(frame_0d7af840ffd856c9bbecc6750bac508a);

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
    CHECK_OBJECT(par_conv_block);
    Py_DECREF(par_conv_block);
    par_conv_block = NULL;
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

    Py_XDECREF(par_conv_block);
    par_conv_block = NULL;
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
    CHECK_OBJECT(par_in_channels);
    Py_DECREF(par_in_channels);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_in_channels);
    Py_DECREF(par_in_channels);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$inception$$$function__19__forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *var_branch1x1 = NULL;
    PyObject *var_branch3x3 = NULL;
    PyObject *var_branch3x3dbl = NULL;
    PyObject *var_branch_pool = NULL;
    PyObject *var_outputs = NULL;
    struct Nuitka_FrameObject *frame_59910062d1f43dfac39d9b31f528d8a8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_59910062d1f43dfac39d9b31f528d8a8 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_59910062d1f43dfac39d9b31f528d8a8)) {
        Py_XDECREF(cache_frame_59910062d1f43dfac39d9b31f528d8a8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_59910062d1f43dfac39d9b31f528d8a8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_59910062d1f43dfac39d9b31f528d8a8 = MAKE_FUNCTION_FRAME(codeobj_59910062d1f43dfac39d9b31f528d8a8, module_torchvision$models$inception, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_59910062d1f43dfac39d9b31f528d8a8->m_type_description == NULL);
    frame_59910062d1f43dfac39d9b31f528d8a8 = cache_frame_59910062d1f43dfac39d9b31f528d8a8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_59910062d1f43dfac39d9b31f528d8a8);
    assert(Py_REFCNT(frame_59910062d1f43dfac39d9b31f528d8a8) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_59910062d1f43dfac39d9b31f528d8a8->m_frame.f_lineno = 339;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[114], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_branch1x1 == NULL);
        var_branch1x1 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        frame_59910062d1f43dfac39d9b31f528d8a8->m_frame.f_lineno = 341;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[144], tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_branch3x3 == NULL);
        var_branch3x3 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(var_branch3x3);
        tmp_args_element_value_3 = var_branch3x3;
        frame_59910062d1f43dfac39d9b31f528d8a8->m_frame.f_lineno = 343;
        tmp_list_element_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[156], tmp_args_element_value_3);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_value_4;
            PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
            CHECK_OBJECT(par_self);
            tmp_called_instance_4 = par_self;
            CHECK_OBJECT(var_branch3x3);
            tmp_args_element_value_4 = var_branch3x3;
            frame_59910062d1f43dfac39d9b31f528d8a8->m_frame.f_lineno = 344;
            tmp_list_element_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[158], tmp_args_element_value_4);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 344;
                type_description_1 = "ooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        {
            PyObject *old = var_branch3x3;
            assert(old != NULL);
            var_branch3x3 = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_branch3x3);
        tmp_args_element_value_5 = var_branch3x3;
        tmp_args_element_value_6 = mod_consts[15];
        frame_59910062d1f43dfac39d9b31f528d8a8->m_frame.f_lineno = 346;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_5,
                mod_consts[100],
                call_args
            );
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_branch3x3;
            assert(old != NULL);
            var_branch3x3 = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(par_self);
        tmp_called_instance_6 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_7 = par_x;
        frame_59910062d1f43dfac39d9b31f528d8a8->m_frame.f_lineno = 348;
        tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[119], tmp_args_element_value_7);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_branch3x3dbl == NULL);
        var_branch3x3dbl = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_8;
        CHECK_OBJECT(par_self);
        tmp_called_instance_7 = par_self;
        CHECK_OBJECT(var_branch3x3dbl);
        tmp_args_element_value_8 = var_branch3x3dbl;
        frame_59910062d1f43dfac39d9b31f528d8a8->m_frame.f_lineno = 349;
        tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_7, mod_consts[121], tmp_args_element_value_8);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_branch3x3dbl;
            assert(old != NULL);
            var_branch3x3dbl = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_list_element_2;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_value_9;
        CHECK_OBJECT(par_self);
        tmp_called_instance_8 = par_self;
        CHECK_OBJECT(var_branch3x3dbl);
        tmp_args_element_value_9 = var_branch3x3dbl;
        frame_59910062d1f43dfac39d9b31f528d8a8->m_frame.f_lineno = 351;
        tmp_list_element_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_8, mod_consts[161], tmp_args_element_value_9);
        if (tmp_list_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_instance_9;
            PyObject *tmp_args_element_value_10;
            PyList_SET_ITEM(tmp_assign_source_7, 0, tmp_list_element_2);
            CHECK_OBJECT(par_self);
            tmp_called_instance_9 = par_self;
            CHECK_OBJECT(var_branch3x3dbl);
            tmp_args_element_value_10 = var_branch3x3dbl;
            frame_59910062d1f43dfac39d9b31f528d8a8->m_frame.f_lineno = 352;
            tmp_list_element_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_9, mod_consts[162], tmp_args_element_value_10);
            if (tmp_list_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 352;
                type_description_1 = "ooooooo";
                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_assign_source_7, 1, tmp_list_element_2);
        }
        goto list_build_noexception_2;
        // Exception handling pass through code for list_build:
        list_build_exception_2:;
        Py_DECREF(tmp_assign_source_7);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_2:;
        {
            PyObject *old = var_branch3x3dbl;
            assert(old != NULL);
            var_branch3x3dbl = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_instance_10 == NULL)) {
            tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_branch3x3dbl);
        tmp_args_element_value_11 = var_branch3x3dbl;
        tmp_args_element_value_12 = mod_consts[15];
        frame_59910062d1f43dfac39d9b31f528d8a8->m_frame.f_lineno = 354;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_assign_source_8 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_10,
                mod_consts[100],
                call_args
            );
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_branch3x3dbl;
            assert(old != NULL);
            var_branch3x3dbl = tmp_assign_source_8;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[126]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_tuple_element_1 = par_x;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[127]);
        frame_59910062d1f43dfac39d9b31f528d8a8->m_frame.f_lineno = 356;
        tmp_assign_source_9 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_branch_pool == NULL);
        var_branch_pool = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_args_element_value_13;
        CHECK_OBJECT(par_self);
        tmp_called_instance_11 = par_self;
        CHECK_OBJECT(var_branch_pool);
        tmp_args_element_value_13 = var_branch_pool;
        frame_59910062d1f43dfac39d9b31f528d8a8->m_frame.f_lineno = 357;
        tmp_assign_source_10 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_11, mod_consts[124], tmp_args_element_value_13);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_branch_pool;
            assert(old != NULL);
            var_branch_pool = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_59910062d1f43dfac39d9b31f528d8a8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_59910062d1f43dfac39d9b31f528d8a8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_59910062d1f43dfac39d9b31f528d8a8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_59910062d1f43dfac39d9b31f528d8a8,
        type_description_1,
        par_self,
        par_x,
        var_branch1x1,
        var_branch3x3,
        var_branch3x3dbl,
        var_branch_pool,
        var_outputs
    );


    // Release cached frame if used for exception.
    if (frame_59910062d1f43dfac39d9b31f528d8a8 == cache_frame_59910062d1f43dfac39d9b31f528d8a8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_59910062d1f43dfac39d9b31f528d8a8);
        cache_frame_59910062d1f43dfac39d9b31f528d8a8 = NULL;
    }

    assertFrameObject(frame_59910062d1f43dfac39d9b31f528d8a8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_list_element_3;
        CHECK_OBJECT(var_branch1x1);
        tmp_list_element_3 = var_branch1x1;
        tmp_assign_source_11 = MAKE_LIST_EMPTY(4);
        PyList_SET_ITEM0(tmp_assign_source_11, 0, tmp_list_element_3);
        CHECK_OBJECT(var_branch3x3);
        tmp_list_element_3 = var_branch3x3;
        PyList_SET_ITEM0(tmp_assign_source_11, 1, tmp_list_element_3);
        CHECK_OBJECT(var_branch3x3dbl);
        tmp_list_element_3 = var_branch3x3dbl;
        PyList_SET_ITEM0(tmp_assign_source_11, 2, tmp_list_element_3);
        CHECK_OBJECT(var_branch_pool);
        tmp_list_element_3 = var_branch_pool;
        PyList_SET_ITEM0(tmp_assign_source_11, 3, tmp_list_element_3);
        assert(var_outputs == NULL);
        var_outputs = tmp_assign_source_11;
    }
    CHECK_OBJECT(var_outputs);
    tmp_return_value = var_outputs;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_branch1x1);
    Py_DECREF(var_branch1x1);
    var_branch1x1 = NULL;
    CHECK_OBJECT(var_branch3x3);
    Py_DECREF(var_branch3x3);
    var_branch3x3 = NULL;
    CHECK_OBJECT(var_branch3x3dbl);
    Py_DECREF(var_branch3x3dbl);
    var_branch3x3dbl = NULL;
    CHECK_OBJECT(var_branch_pool);
    Py_DECREF(var_branch_pool);
    var_branch_pool = NULL;
    CHECK_OBJECT(var_outputs);
    Py_DECREF(var_outputs);
    var_outputs = NULL;
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

    Py_XDECREF(var_branch1x1);
    var_branch1x1 = NULL;
    Py_XDECREF(var_branch3x3);
    var_branch3x3 = NULL;
    Py_XDECREF(var_branch3x3dbl);
    var_branch3x3dbl = NULL;
    Py_XDECREF(var_branch_pool);
    var_branch_pool = NULL;
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


static PyObject *impl_torchvision$models$inception$$$function__20_forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *var_outputs = NULL;
    struct Nuitka_FrameObject *frame_175f31c0c423b1a8e102d44be7f34500;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_175f31c0c423b1a8e102d44be7f34500 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_175f31c0c423b1a8e102d44be7f34500)) {
        Py_XDECREF(cache_frame_175f31c0c423b1a8e102d44be7f34500);

#if _DEBUG_REFCOUNTS
        if (cache_frame_175f31c0c423b1a8e102d44be7f34500 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_175f31c0c423b1a8e102d44be7f34500 = MAKE_FUNCTION_FRAME(codeobj_175f31c0c423b1a8e102d44be7f34500, module_torchvision$models$inception, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_175f31c0c423b1a8e102d44be7f34500->m_type_description == NULL);
    frame_175f31c0c423b1a8e102d44be7f34500 = cache_frame_175f31c0c423b1a8e102d44be7f34500;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_175f31c0c423b1a8e102d44be7f34500);
    assert(Py_REFCNT(frame_175f31c0c423b1a8e102d44be7f34500) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_175f31c0c423b1a8e102d44be7f34500->m_frame.f_lineno = 363;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[106], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_outputs == NULL);
        var_outputs = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_outputs);
        tmp_args_element_value_2 = var_outputs;
        tmp_args_element_value_3 = mod_consts[15];
        frame_175f31c0c423b1a8e102d44be7f34500->m_frame.f_lineno = 364;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[100],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
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
        exception_tb = MAKE_TRACEBACK(frame_175f31c0c423b1a8e102d44be7f34500, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_175f31c0c423b1a8e102d44be7f34500->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_175f31c0c423b1a8e102d44be7f34500, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_175f31c0c423b1a8e102d44be7f34500,
        type_description_1,
        par_self,
        par_x,
        var_outputs
    );


    // Release cached frame if used for exception.
    if (frame_175f31c0c423b1a8e102d44be7f34500 == cache_frame_175f31c0c423b1a8e102d44be7f34500) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_175f31c0c423b1a8e102d44be7f34500);
        cache_frame_175f31c0c423b1a8e102d44be7f34500 = NULL;
    }

    assertFrameObject(frame_175f31c0c423b1a8e102d44be7f34500);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_outputs);
    Py_DECREF(var_outputs);
    var_outputs = NULL;
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

    Py_XDECREF(var_outputs);
    var_outputs = NULL;
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


static PyObject *impl_torchvision$models$inception$$$function__21___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_in_channels = python_pars[1];
    PyObject *par_num_classes = python_pars[2];
    PyObject *par_conv_block = python_pars[3];
    struct Nuitka_FrameObject *frame_900f15f635b6c10516397ed16adb4af5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_900f15f635b6c10516397ed16adb4af5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_900f15f635b6c10516397ed16adb4af5)) {
        Py_XDECREF(cache_frame_900f15f635b6c10516397ed16adb4af5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_900f15f635b6c10516397ed16adb4af5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_900f15f635b6c10516397ed16adb4af5 = MAKE_FUNCTION_FRAME(codeobj_900f15f635b6c10516397ed16adb4af5, module_torchvision$models$inception, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_900f15f635b6c10516397ed16adb4af5->m_type_description == NULL);
    frame_900f15f635b6c10516397ed16adb4af5 = cache_frame_900f15f635b6c10516397ed16adb4af5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_900f15f635b6c10516397ed16adb4af5);
    assert(Py_REFCNT(frame_900f15f635b6c10516397ed16adb4af5) == 2);

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

            exception_lineno = 371;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_torchvision$models$inception, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_900f15f635b6c10516397ed16adb4af5->m_frame.f_lineno = 371;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[1]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_conv_block);
        tmp_cmp_expr_left_1 = par_conv_block;
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
        tmp_assign_source_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assign_source_1 == NULL)) {
            tmp_assign_source_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_conv_block;
            assert(old != NULL);
            par_conv_block = tmp_assign_source_1;
            Py_INCREF(par_conv_block);
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_conv_block);
        tmp_called_value_1 = par_conv_block;
        CHECK_OBJECT(par_in_channels);
        tmp_tuple_element_1 = par_in_channels;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[163];
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[113]);
        frame_900f15f635b6c10516397ed16adb4af5->m_frame.f_lineno = 374;
        tmp_assattr_value_1 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[164], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_conv_block);
        tmp_called_value_2 = par_conv_block;
        frame_900f15f635b6c10516397ed16adb4af5->m_frame.f_lineno = 375;
        tmp_assattr_value_2 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts[165], 0), mod_consts[27]);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[166], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_expression_value_1;
        tmp_assattr_value_3 = mod_consts[167];
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assattr_target_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[166]);
        if (tmp_assattr_target_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[78], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_target_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_assattr_target_4;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[59];
        CHECK_OBJECT(par_num_classes);
        tmp_args_element_value_2 = par_num_classes;
        frame_900f15f635b6c10516397ed16adb4af5->m_frame.f_lineno = 377;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assattr_value_4 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[72],
                call_args
            );
        }

        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[75], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        PyObject *tmp_expression_value_2;
        tmp_assattr_value_5 = mod_consts[168];
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_assattr_target_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[75]);
        if (tmp_assattr_target_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[78], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_target_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_900f15f635b6c10516397ed16adb4af5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_900f15f635b6c10516397ed16adb4af5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_900f15f635b6c10516397ed16adb4af5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_900f15f635b6c10516397ed16adb4af5,
        type_description_1,
        par_self,
        par_in_channels,
        par_num_classes,
        par_conv_block,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_900f15f635b6c10516397ed16adb4af5 == cache_frame_900f15f635b6c10516397ed16adb4af5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_900f15f635b6c10516397ed16adb4af5);
        cache_frame_900f15f635b6c10516397ed16adb4af5 = NULL;
    }

    assertFrameObject(frame_900f15f635b6c10516397ed16adb4af5);

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
    CHECK_OBJECT(par_conv_block);
    Py_DECREF(par_conv_block);
    par_conv_block = NULL;
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

    Py_XDECREF(par_conv_block);
    par_conv_block = NULL;
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
    CHECK_OBJECT(par_in_channels);
    Py_DECREF(par_in_channels);
    CHECK_OBJECT(par_num_classes);
    Py_DECREF(par_num_classes);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_in_channels);
    Py_DECREF(par_in_channels);
    CHECK_OBJECT(par_num_classes);
    Py_DECREF(par_num_classes);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$inception$$$function__22_forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    struct Nuitka_FrameObject *frame_3e5258482fb48fbd5b9dfe8a1e42bc98;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3e5258482fb48fbd5b9dfe8a1e42bc98 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3e5258482fb48fbd5b9dfe8a1e42bc98)) {
        Py_XDECREF(cache_frame_3e5258482fb48fbd5b9dfe8a1e42bc98);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3e5258482fb48fbd5b9dfe8a1e42bc98 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3e5258482fb48fbd5b9dfe8a1e42bc98 = MAKE_FUNCTION_FRAME(codeobj_3e5258482fb48fbd5b9dfe8a1e42bc98, module_torchvision$models$inception, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3e5258482fb48fbd5b9dfe8a1e42bc98->m_type_description == NULL);
    frame_3e5258482fb48fbd5b9dfe8a1e42bc98 = cache_frame_3e5258482fb48fbd5b9dfe8a1e42bc98;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3e5258482fb48fbd5b9dfe8a1e42bc98);
    assert(Py_REFCNT(frame_3e5258482fb48fbd5b9dfe8a1e42bc98) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[126]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_tuple_element_1 = par_x;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[169]);
        frame_3e5258482fb48fbd5b9dfe8a1e42bc98->m_frame.f_lineno = 382;
        tmp_assign_source_1 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_3e5258482fb48fbd5b9dfe8a1e42bc98->m_frame.f_lineno = 384;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[164], tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        frame_3e5258482fb48fbd5b9dfe8a1e42bc98->m_frame.f_lineno = 386;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[166], tmp_args_element_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_3 = par_x;
        tmp_args_element_value_4 = mod_consts[171];
        frame_3e5258482fb48fbd5b9dfe8a1e42bc98->m_frame.f_lineno = 389;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[170],
                call_args
            );
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_5 = par_x;
        tmp_args_element_value_6 = mod_consts[15];
        frame_3e5258482fb48fbd5b9dfe8a1e42bc98->m_frame.f_lineno = 391;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_5 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_4,
                mod_consts[103],
                call_args
            );
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(par_self);
        tmp_called_instance_5 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_7 = par_x;
        frame_3e5258482fb48fbd5b9dfe8a1e42bc98->m_frame.f_lineno = 393;
        tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[75], tmp_args_element_value_7);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3e5258482fb48fbd5b9dfe8a1e42bc98, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3e5258482fb48fbd5b9dfe8a1e42bc98->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3e5258482fb48fbd5b9dfe8a1e42bc98, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3e5258482fb48fbd5b9dfe8a1e42bc98,
        type_description_1,
        par_self,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_3e5258482fb48fbd5b9dfe8a1e42bc98 == cache_frame_3e5258482fb48fbd5b9dfe8a1e42bc98) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3e5258482fb48fbd5b9dfe8a1e42bc98);
        cache_frame_3e5258482fb48fbd5b9dfe8a1e42bc98 = NULL;
    }

    assertFrameObject(frame_3e5258482fb48fbd5b9dfe8a1e42bc98);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(par_x);
    tmp_return_value = par_x;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    par_x = NULL;
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

    Py_XDECREF(par_x);
    par_x = NULL;
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


static PyObject *impl_torchvision$models$inception$$$function__23___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_in_channels = python_pars[1];
    PyObject *par_out_channels = python_pars[2];
    PyObject *par_kwargs = python_pars[3];
    struct Nuitka_FrameObject *frame_5ae4f23350c855e00040ac04d02799e1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_5ae4f23350c855e00040ac04d02799e1 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5ae4f23350c855e00040ac04d02799e1)) {
        Py_XDECREF(cache_frame_5ae4f23350c855e00040ac04d02799e1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5ae4f23350c855e00040ac04d02799e1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5ae4f23350c855e00040ac04d02799e1 = MAKE_FUNCTION_FRAME(codeobj_5ae4f23350c855e00040ac04d02799e1, module_torchvision$models$inception, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5ae4f23350c855e00040ac04d02799e1->m_type_description == NULL);
    frame_5ae4f23350c855e00040ac04d02799e1 = cache_frame_5ae4f23350c855e00040ac04d02799e1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5ae4f23350c855e00040ac04d02799e1);
    assert(Py_REFCNT(frame_5ae4f23350c855e00040ac04d02799e1) == 2);

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

            exception_lineno = 400;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_torchvision$models$inception, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_5ae4f23350c855e00040ac04d02799e1->m_frame.f_lineno = 400;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[1]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        PyObject *tmp_assattr_target_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[77]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_in_channels);
        tmp_tuple_element_1 = par_in_channels;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_out_channels);
        tmp_tuple_element_1 = par_out_channels;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg3_1 = DICT_COPY(mod_consts[172]);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_assattr_value_1 = impl___main__$$$function__10_complex_call_helper_pos_keywords_star_dict(dir_call_args);
        }
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[173], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        PyObject *tmp_assattr_target_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[87]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_out_channels);
        tmp_tuple_element_2 = par_out_channels;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[174]);
        frame_5ae4f23350c855e00040ac04d02799e1->m_frame.f_lineno = 402;
        tmp_assattr_value_2 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[175], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5ae4f23350c855e00040ac04d02799e1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5ae4f23350c855e00040ac04d02799e1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5ae4f23350c855e00040ac04d02799e1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5ae4f23350c855e00040ac04d02799e1,
        type_description_1,
        par_self,
        par_in_channels,
        par_out_channels,
        par_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_5ae4f23350c855e00040ac04d02799e1 == cache_frame_5ae4f23350c855e00040ac04d02799e1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5ae4f23350c855e00040ac04d02799e1);
        cache_frame_5ae4f23350c855e00040ac04d02799e1 = NULL;
    }

    assertFrameObject(frame_5ae4f23350c855e00040ac04d02799e1);

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
    CHECK_OBJECT(par_in_channels);
    Py_DECREF(par_in_channels);
    CHECK_OBJECT(par_out_channels);
    Py_DECREF(par_out_channels);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_in_channels);
    Py_DECREF(par_in_channels);
    CHECK_OBJECT(par_out_channels);
    Py_DECREF(par_out_channels);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$inception$$$function__24_forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    struct Nuitka_FrameObject *frame_2e9ab3cd45f1f17350168ab66b2b17dd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2e9ab3cd45f1f17350168ab66b2b17dd = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2e9ab3cd45f1f17350168ab66b2b17dd)) {
        Py_XDECREF(cache_frame_2e9ab3cd45f1f17350168ab66b2b17dd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2e9ab3cd45f1f17350168ab66b2b17dd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2e9ab3cd45f1f17350168ab66b2b17dd = MAKE_FUNCTION_FRAME(codeobj_2e9ab3cd45f1f17350168ab66b2b17dd, module_torchvision$models$inception, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2e9ab3cd45f1f17350168ab66b2b17dd->m_type_description == NULL);
    frame_2e9ab3cd45f1f17350168ab66b2b17dd = cache_frame_2e9ab3cd45f1f17350168ab66b2b17dd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2e9ab3cd45f1f17350168ab66b2b17dd);
    assert(Py_REFCNT(frame_2e9ab3cd45f1f17350168ab66b2b17dd) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_2e9ab3cd45f1f17350168ab66b2b17dd->m_frame.f_lineno = 405;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[173], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        frame_2e9ab3cd45f1f17350168ab66b2b17dd->m_frame.f_lineno = 406;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[175], tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[176]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_tuple_element_1 = par_x;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[177]);
        frame_2e9ab3cd45f1f17350168ab66b2b17dd->m_frame.f_lineno = 407;
        tmp_return_value = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
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
        exception_tb = MAKE_TRACEBACK(frame_2e9ab3cd45f1f17350168ab66b2b17dd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2e9ab3cd45f1f17350168ab66b2b17dd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2e9ab3cd45f1f17350168ab66b2b17dd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2e9ab3cd45f1f17350168ab66b2b17dd,
        type_description_1,
        par_self,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_2e9ab3cd45f1f17350168ab66b2b17dd == cache_frame_2e9ab3cd45f1f17350168ab66b2b17dd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2e9ab3cd45f1f17350168ab66b2b17dd);
        cache_frame_2e9ab3cd45f1f17350168ab66b2b17dd = NULL;
    }

    assertFrameObject(frame_2e9ab3cd45f1f17350168ab66b2b17dd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    par_x = NULL;
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

    Py_XDECREF(par_x);
    par_x = NULL;
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


static PyObject *impl_torchvision$models$inception$$$function__25_inception_v3(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_pretrained = python_pars[0];
    PyObject *par_progress = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_original_aux_logits = NULL;
    PyObject *var_model = NULL;
    PyObject *var_state_dict = NULL;
    struct Nuitka_FrameObject *frame_d8fc263dc74f9957b98c56720e114ed5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d8fc263dc74f9957b98c56720e114ed5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d8fc263dc74f9957b98c56720e114ed5)) {
        Py_XDECREF(cache_frame_d8fc263dc74f9957b98c56720e114ed5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d8fc263dc74f9957b98c56720e114ed5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d8fc263dc74f9957b98c56720e114ed5 = MAKE_FUNCTION_FRAME(codeobj_d8fc263dc74f9957b98c56720e114ed5, module_torchvision$models$inception, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d8fc263dc74f9957b98c56720e114ed5->m_type_description == NULL);
    frame_d8fc263dc74f9957b98c56720e114ed5 = cache_frame_d8fc263dc74f9957b98c56720e114ed5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d8fc263dc74f9957b98c56720e114ed5);
    assert(Py_REFCNT(frame_d8fc263dc74f9957b98c56720e114ed5) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_pretrained);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_pretrained);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "oooooo";
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
        bool tmp_condition_result_2;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        tmp_key_value_1 = mod_consts[22];
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_1 = par_kwargs;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_1, tmp_key_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_dictset_value = Py_True;
    CHECK_OBJECT(par_kwargs);
    tmp_dictset_dict = par_kwargs;
    tmp_dictset_key = mod_consts[22];
    assert(PyDict_CheckExact(tmp_dictset_dict));
    tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

    assert(!(tmp_res != 0));
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = mod_consts[21];
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[178]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 430;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_1 = par_kwargs;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[178]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 431;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = par_kwargs;
        tmp_subscript_value_1 = mod_consts[21];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_original_aux_logits == NULL);
        var_original_aux_logits = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = Py_True;
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[178]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 432;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_1 = par_kwargs;
        tmp_ass_subscript_1 = mod_consts[21];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_True;
        assert(var_original_aux_logits == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_original_aux_logits = tmp_assign_source_2;
    }
    branch_end_3:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_ass_subvalue_2 = Py_False;
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[178]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 435;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_2 = par_kwargs;
        tmp_ass_subscript_2 = mod_consts[179];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[180]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[178]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 436;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg2_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_3 = impl___main__$$$function__8_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_model == NULL);
        var_model = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[181]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[181]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[182]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[182]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[183];
        tmp_kw_call_arg_value_0_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_progress);
        tmp_kw_call_dict_value_0_1 = par_progress;
        frame_d8fc263dc74f9957b98c56720e114ed5->m_frame.f_lineno = 437;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[184]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_state_dict == NULL);
        var_state_dict = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_model);
        tmp_called_instance_1 = var_model;
        CHECK_OBJECT(var_state_dict);
        tmp_args_element_value_1 = var_state_dict;
        frame_d8fc263dc74f9957b98c56720e114ed5->m_frame.f_lineno = 438;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[185], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(var_original_aux_logits);
        tmp_operand_value_1 = var_original_aux_logits;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "oooooo";
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
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_False;
        CHECK_OBJECT(var_model);
        tmp_assattr_target_1 = var_model;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[21], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_None;
        CHECK_OBJECT(var_model);
        tmp_assattr_target_2 = var_model;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[58], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_4:;
    CHECK_OBJECT(var_model);
    tmp_return_value = var_model;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_dircall_arg1_2 == NULL)) {
            tmp_dircall_arg1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[180]);
        }

        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg2_2 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_2);
        Py_INCREF(tmp_dircall_arg2_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2};
            tmp_return_value = impl___main__$$$function__8_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_d8fc263dc74f9957b98c56720e114ed5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d8fc263dc74f9957b98c56720e114ed5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d8fc263dc74f9957b98c56720e114ed5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d8fc263dc74f9957b98c56720e114ed5,
        type_description_1,
        par_pretrained,
        par_progress,
        par_kwargs,
        var_original_aux_logits,
        var_model,
        var_state_dict
    );


    // Release cached frame if used for exception.
    if (frame_d8fc263dc74f9957b98c56720e114ed5 == cache_frame_d8fc263dc74f9957b98c56720e114ed5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d8fc263dc74f9957b98c56720e114ed5);
        cache_frame_d8fc263dc74f9957b98c56720e114ed5 = NULL;
    }

    assertFrameObject(frame_d8fc263dc74f9957b98c56720e114ed5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_original_aux_logits);
    var_original_aux_logits = NULL;
    Py_XDECREF(var_model);
    var_model = NULL;
    Py_XDECREF(var_state_dict);
    var_state_dict = NULL;
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

    Py_XDECREF(var_original_aux_logits);
    var_original_aux_logits = NULL;
    Py_XDECREF(var_model);
    var_model = NULL;
    Py_XDECREF(var_state_dict);
    var_state_dict = NULL;
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
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__10__forward(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$inception$$$function__10__forward,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        mod_consts[247],
#endif
        codeobj_f9c3a83a3bcd90994d11047f398b57bb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$inception,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__11_forward(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$inception$$$function__11_forward,
        mod_consts[236],
#if PYTHON_VERSION >= 0x300
        mod_consts[248],
#endif
        codeobj_1b64eb5d295bd3a5b5b94403bda14a3a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$inception,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__12___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$inception$$$function__12___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[250],
#endif
        codeobj_5044b72a05234ef62c39b0e3ca53ff1f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$inception,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__13__forward(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$inception$$$function__13__forward,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        mod_consts[251],
#endif
        codeobj_3c9e45f6aa3e4ea787956a854855703d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$inception,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__14_forward(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$inception$$$function__14_forward,
        mod_consts[236],
#if PYTHON_VERSION >= 0x300
        mod_consts[252],
#endif
        codeobj_d3d51a57ef42b68973e0dc480ea8df15,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$inception,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__15___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$inception$$$function__15___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[253],
#endif
        codeobj_89ac6f06141c632f880de453f1fba131,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$inception,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__16__forward(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$inception$$$function__16__forward,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        mod_consts[254],
#endif
        codeobj_e7541fefd0e0257fd444e859de5002e4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$inception,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__17_forward(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$inception$$$function__17_forward,
        mod_consts[236],
#if PYTHON_VERSION >= 0x300
        mod_consts[255],
#endif
        codeobj_8807bb515bd822f7139ea517afd9a9d3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$inception,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__18___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$inception$$$function__18___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[256],
#endif
        codeobj_0d7af840ffd856c9bbecc6750bac508a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$inception,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__19__forward(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$inception$$$function__19__forward,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        mod_consts[257],
#endif
        codeobj_59910062d1f43dfac39d9b31f528d8a8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$inception,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__1___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$inception$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[230],
#endif
        codeobj_c1673366f2c6299dcc9660a6fdfcf143,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$inception,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__20_forward(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$inception$$$function__20_forward,
        mod_consts[236],
#if PYTHON_VERSION >= 0x300
        mod_consts[258],
#endif
        codeobj_175f31c0c423b1a8e102d44be7f34500,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$inception,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__21___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$inception$$$function__21___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[259],
#endif
        codeobj_900f15f635b6c10516397ed16adb4af5,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$inception,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__22_forward(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$inception$$$function__22_forward,
        mod_consts[236],
#if PYTHON_VERSION >= 0x300
        mod_consts[260],
#endif
        codeobj_3e5258482fb48fbd5b9dfe8a1e42bc98,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$inception,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__23___init__(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$inception$$$function__23___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[262],
#endif
        codeobj_5ae4f23350c855e00040ac04d02799e1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$inception,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__24_forward(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$inception$$$function__24_forward,
        mod_consts[236],
#if PYTHON_VERSION >= 0x300
        mod_consts[263],
#endif
        codeobj_2e9ab3cd45f1f17350168ab66b2b17dd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$inception,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__25_inception_v3(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$inception$$$function__25_inception_v3,
        mod_consts[267],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d8fc263dc74f9957b98c56720e114ed5,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$inception,
        mod_consts[186],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__2__transform_input(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$inception$$$function__2__transform_input,
        mod_consts[105],
#if PYTHON_VERSION >= 0x300
        mod_consts[231],
#endif
        codeobj_823c7bb672e2dae299b58d1c85ebc2f5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$inception,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__3__forward(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$inception$$$function__3__forward,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        mod_consts[232],
#endif
        codeobj_3d0012afc66d970c7b510fb96cdfb323,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$inception,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__4_eager_outputs(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$inception$$$function__4_eager_outputs,
        mod_consts[111],
#if PYTHON_VERSION >= 0x300
        mod_consts[235],
#endif
        codeobj_e84ca4afd02ba8140ddda3ed1c875bad,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$inception,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__5_forward(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$inception$$$function__5_forward,
        mod_consts[236],
#if PYTHON_VERSION >= 0x300
        mod_consts[237],
#endif
        codeobj_1b41efc51456b4f0c1e851ef6588c86f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$inception,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__6___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$inception$$$function__6___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[243],
#endif
        codeobj_71d980698cf4b471ecf541df72490d16,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$inception,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__7__forward(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$inception$$$function__7__forward,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        mod_consts[244],
#endif
        codeobj_042801bf6c7d2918e4ab8b4fcecc4417,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$inception,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__8_forward(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$inception$$$function__8_forward,
        mod_consts[236],
#if PYTHON_VERSION >= 0x300
        mod_consts[245],
#endif
        codeobj_1dc57db91ee907281213a6bf3f505532,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$inception,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$inception$$$function__9___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$inception$$$function__9___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[246],
#endif
        codeobj_272f4ece8c8aa64d4e680dbce11a1280,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$inception,
        NULL,
        closure,
        1
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

function_impl_code functable_torchvision$models$inception[] = {
    impl_torchvision$models$inception$$$function__1___init__,
    impl_torchvision$models$inception$$$function__2__transform_input,
    impl_torchvision$models$inception$$$function__3__forward,
    impl_torchvision$models$inception$$$function__4_eager_outputs,
    impl_torchvision$models$inception$$$function__5_forward,
    impl_torchvision$models$inception$$$function__6___init__,
    impl_torchvision$models$inception$$$function__7__forward,
    impl_torchvision$models$inception$$$function__8_forward,
    impl_torchvision$models$inception$$$function__9___init__,
    impl_torchvision$models$inception$$$function__10__forward,
    impl_torchvision$models$inception$$$function__11_forward,
    impl_torchvision$models$inception$$$function__12___init__,
    impl_torchvision$models$inception$$$function__13__forward,
    impl_torchvision$models$inception$$$function__14_forward,
    impl_torchvision$models$inception$$$function__15___init__,
    impl_torchvision$models$inception$$$function__16__forward,
    impl_torchvision$models$inception$$$function__17_forward,
    impl_torchvision$models$inception$$$function__18___init__,
    impl_torchvision$models$inception$$$function__19__forward,
    impl_torchvision$models$inception$$$function__20_forward,
    impl_torchvision$models$inception$$$function__21___init__,
    impl_torchvision$models$inception$$$function__22_forward,
    impl_torchvision$models$inception$$$function__23___init__,
    impl_torchvision$models$inception$$$function__24_forward,
    impl_torchvision$models$inception$$$function__25_inception_v3,
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

    function_impl_code *current = functable_torchvision$models$inception;
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

    if (offset > sizeof(functable_torchvision$models$inception) || offset < 0) {
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
        functable_torchvision$models$inception[offset],
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
        module_torchvision$models$inception,
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
PyObject *modulecode_torchvision$models$inception(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torchvision.models.inception");

    // Store the module for future use.
    module_torchvision$models$inception = module;

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
        PRINT_STRING("torchvision.models.inception: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torchvision.models.inception: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torchvision.models.inception: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorchvision$models$inception\n");

    moduledict_torchvision$models$inception = MODULE_DICT(module_torchvision$models$inception);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torchvision$models$inception,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torchvision$models$inception,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[288]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torchvision$models$inception,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torchvision$models$inception,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torchvision$models$inception,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torchvision$models$inception);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torchvision$models$inception, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torchvision$models$inception, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torchvision$models$inception, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torchvision$models$inception);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torchvision$models$inception, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_CellObject *outline_0_var___class__ = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *outline_1_var___class__ = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *outline_2_var___class__ = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *outline_3_var___class__ = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *outline_4_var___class__ = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *outline_5_var___class__ = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *outline_6_var___class__ = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *outline_7_var___class__ = Nuitka_Cell_Empty();
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
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__bases_orig = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__bases_orig = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__bases_orig = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__bases_orig = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_fee381e33065d2681a1f143869d41738;
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
    PyObject *locals_torchvision$models$inception$$$class__1_Inception3_29 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_f4f673a757f1f08e5cfc517ecb003a52_2;
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
    PyObject *locals_torchvision$models$inception$$$class__2_InceptionA_176 = NULL;
    struct Nuitka_FrameObject *frame_6b7bad589c81bc6a27d20b1b0aebecab_3;
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
    PyObject *locals_torchvision$models$inception$$$class__3_InceptionB_215 = NULL;
    struct Nuitka_FrameObject *frame_516cc1ed38f6ad4acbc558d77811787f_4;
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
    PyObject *locals_torchvision$models$inception$$$class__4_InceptionC_243 = NULL;
    struct Nuitka_FrameObject *frame_2b4a3cbeb62244025f83fac37095f924_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *locals_torchvision$models$inception$$$class__5_InceptionD_289 = NULL;
    struct Nuitka_FrameObject *frame_4590b8c0f74707764fde967db07945d3_6;
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
    PyObject *locals_torchvision$models$inception$$$class__6_InceptionE_320 = NULL;
    struct Nuitka_FrameObject *frame_e45c297178d6a0bc5e2cf78ae0404705_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
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
    PyObject *locals_torchvision$models$inception$$$class__7_InceptionAux_367 = NULL;
    struct Nuitka_FrameObject *frame_7e3d01339c9819bf663f1c6e46c8b305_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
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
    PyObject *locals_torchvision$models$inception$$$class__8_BasicConv2d_398 = NULL;
    struct Nuitka_FrameObject *frame_f5e284857cba51a86df7665aec7ef801_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_2);
    }
    frame_fee381e33065d2681a1f143869d41738 = MAKE_MODULE_FRAME(codeobj_fee381e33065d2681a1f143869d41738, module_torchvision$models$inception);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fee381e33065d2681a1f143869d41738);
    assert(Py_REFCNT(frame_fee381e33065d2681a1f143869d41738) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[189]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[189]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[190], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[189]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[189]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[191], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[192], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[10];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torchvision$models$inception;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[14];
        frame_fee381e33065d2681a1f143869d41738->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[193];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torchvision$models$inception;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[194];
        tmp_level_value_2 = mod_consts[14];
        frame_fee381e33065d2681a1f143869d41738->m_frame.f_lineno = 2;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torchvision$models$inception,
                mod_consts[195],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[195]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_5);
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
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_torchvision$models$inception,
                mod_consts[196],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[196]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_torchvision$models$inception,
                mod_consts[197],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[197]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_torchvision$models$inception,
                mod_consts[198],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[198]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_torchvision$models$inception,
                mod_consts[199],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[199]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_torchvision$models$inception,
                mod_consts[200],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[200]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[200], tmp_assign_source_11);
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
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[80];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_torchvision$models$inception;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[14];
        frame_fee381e33065d2681a1f143869d41738->m_frame.f_lineno = 5;
        tmp_assign_source_12 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[201];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_torchvision$models$inception;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[14];
        frame_fee381e33065d2681a1f143869d41738->m_frame.f_lineno = 6;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_import_name_from_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_torchvision$models$inception,
                mod_consts[32],
                mod_consts[14]
            );
        } else {
            tmp_import_name_from_7 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[32]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_torchvision$models$inception,
                mod_consts[202],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[202]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[80];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_torchvision$models$inception;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[203];
        tmp_level_value_5 = mod_consts[14];
        frame_fee381e33065d2681a1f143869d41738->m_frame.f_lineno = 7;
        tmp_assign_source_14 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_torchvision$models$inception,
                mod_consts[32],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[32]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_10 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_torchvision$models$inception,
                mod_consts[204],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[204]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_16);
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
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[205];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_torchvision$models$inception;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[206];
        tmp_level_value_6 = mod_consts[16];
        frame_fee381e33065d2681a1f143869d41738->m_frame.f_lineno = 9;
        tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_torchvision$models$inception,
                mod_consts[181],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[181]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[207];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_torchvision$models$inception;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[208];
        tmp_level_value_7 = mod_consts[16];
        frame_fee381e33065d2681a1f143869d41738->m_frame.f_lineno = 10;
        tmp_import_name_from_12 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_torchvision$models$inception,
                mod_consts[2],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[2]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_LIST4(mod_consts[209]);
        UPDATE_STRING_DICT1(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = DICT_COPY(mod_consts[211]);
        UPDATE_STRING_DICT1(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[195]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[195]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = mod_consts[104];
        tmp_call_arg_element_2 = MAKE_LIST2(mod_consts[212],mod_consts[21]);
        frame_fee381e33065d2681a1f143869d41738->m_frame.f_lineno = 21;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
            tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_assattr_target_3;
        tmp_dict_key_1 = mod_consts[212];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[204]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_3 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_1;
            PyObject *tmp_subscript_value_1;
            tmp_res = PyDict_SetItem(tmp_assattr_value_3, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[21];
            tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_expression_value_1 == NULL)) {
                tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[198]);
            }

            if (tmp_expression_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[204]);

            if (unlikely(tmp_subscript_value_1 == NULL)) {
                tmp_subscript_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
            }

            if (tmp_subscript_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assattr_value_3, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assattr_value_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_assattr_target_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_3);

            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[213], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_assign_source_22 == NULL)) {
            tmp_assign_source_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_22);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_3;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[215]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_3;
        }
        tmp_assign_source_23 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_23, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_24 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
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
        tmp_expression_value_3 = tmp_class_creation_1__bases;
        tmp_subscript_value_2 = mod_consts[14];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_2, 0);
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
        tmp_assign_source_26 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_26;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[216]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[216]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_3;
        }
        tmp_tuple_element_2 = mod_consts[180];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_fee381e33065d2681a1f143869d41738->m_frame.f_lineno = 29;
        tmp_assign_source_27 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_27;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_6 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_6, mod_consts[217]);
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
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[218];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[219];
        tmp_getattr_default_1 = mod_consts[220];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_3;
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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[219]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
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
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_28;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_29;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_torchvision$models$inception$$$class__1_Inception3_29 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[221];
        tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__1_Inception3_29, mod_consts[222], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[180];
        tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__1_Inception3_29, mod_consts[223], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_5;
        }
        frame_f4f673a757f1f08e5cfc517ecb003a52_2 = MAKE_CLASS_FRAME(codeobj_f4f673a757f1f08e5cfc517ecb003a52, module_torchvision$models$inception, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_f4f673a757f1f08e5cfc517ecb003a52_2);
        assert(Py_REFCNT(frame_f4f673a757f1f08e5cfc517ecb003a52_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            struct Nuitka_CellObject *tmp_closure_1[1];
            tmp_defaults_1 = mod_consts[224];
            tmp_dict_key_2 = mod_consts[74];
            tmp_dict_value_2 = PyObject_GetItem(locals_torchvision$models$inception$$$class__1_Inception3_29, mod_consts[225]);

            if (tmp_dict_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_2 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_2);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_1 = _PyDict_NewPresized( 7 );
            {
                PyObject *tmp_expression_value_8;
                PyObject *tmp_subscript_value_3;
                PyObject *tmp_expression_value_9;
                PyObject *tmp_subscript_value_4;
                PyObject *tmp_expression_value_10;
                PyObject *tmp_subscript_value_5;
                PyObject *tmp_tuple_element_4;
                PyObject *tmp_expression_value_12;
                PyObject *tmp_subscript_value_6;
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[21];
                tmp_dict_value_2 = PyObject_GetItem(locals_torchvision$models$inception$$$class__1_Inception3_29, mod_consts[226]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[22];
                tmp_dict_value_2 = PyObject_GetItem(locals_torchvision$models$inception$$$class__1_Inception3_29, mod_consts[226]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[227];
                tmp_expression_value_8 = PyObject_GetItem(locals_torchvision$models$inception$$$class__1_Inception3_29, mod_consts[198]);

                if (tmp_expression_value_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[198]);

                        if (unlikely(tmp_expression_value_8 == NULL)) {
                            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[198]);
                        }

                        if (tmp_expression_value_8 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 35;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_8);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_expression_value_9 = PyObject_GetItem(locals_torchvision$models$inception$$$class__1_Inception3_29, mod_consts[200]);

                if (tmp_expression_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[200]);

                        if (unlikely(tmp_expression_value_9 == NULL)) {
                            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[200]);
                        }

                        if (tmp_expression_value_9 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_8);

                            exception_lineno = 35;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_9);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_expression_value_10 = PyObject_GetItem(locals_torchvision$models$inception$$$class__1_Inception3_29, mod_consts[196]);

                if (tmp_expression_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[196]);

                        if (unlikely(tmp_expression_value_10 == NULL)) {
                            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[196]);
                        }

                        if (tmp_expression_value_10 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_8);
                            Py_DECREF(tmp_expression_value_9);

                            exception_lineno = 35;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_10);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_tuple_element_4 = Py_Ellipsis;
                tmp_subscript_value_5 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_11;
                    PyTuple_SET_ITEM0(tmp_subscript_value_5, 0, tmp_tuple_element_4);
                    tmp_expression_value_11 = PyObject_GetItem(locals_torchvision$models$inception$$$class__1_Inception3_29, mod_consts[32]);

                    if (tmp_expression_value_11 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[32]);

                            if (unlikely(tmp_expression_value_11 == NULL)) {
                                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                            }

                            if (tmp_expression_value_11 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 35;
                                type_description_2 = "c";
                                goto tuple_build_exception_2;
                            }
                            Py_INCREF(tmp_expression_value_11);
                        } else {
                            goto tuple_build_exception_2;
                        }
                    }

                    tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[215]);
                    Py_DECREF(tmp_expression_value_11);
                    if (tmp_tuple_element_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 35;
                        type_description_2 = "c";
                        goto tuple_build_exception_2;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_5, 1, tmp_tuple_element_4);
                }
                goto tuple_build_noexception_2;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_2:;
                Py_DECREF(tmp_expression_value_8);
                Py_DECREF(tmp_expression_value_9);
                Py_DECREF(tmp_expression_value_10);
                Py_DECREF(tmp_subscript_value_5);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_2:;
                tmp_subscript_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_5);
                Py_DECREF(tmp_expression_value_10);
                Py_DECREF(tmp_subscript_value_5);
                if (tmp_subscript_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_8);
                    Py_DECREF(tmp_expression_value_9);

                    exception_lineno = 35;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_subscript_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_4);
                Py_DECREF(tmp_expression_value_9);
                Py_DECREF(tmp_subscript_value_4);
                if (tmp_subscript_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_8);

                    exception_lineno = 35;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_3);
                Py_DECREF(tmp_expression_value_8);
                Py_DECREF(tmp_subscript_value_3);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 35;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[179];
                tmp_expression_value_12 = PyObject_GetItem(locals_torchvision$models$inception$$$class__1_Inception3_29, mod_consts[198]);

                if (tmp_expression_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[198]);

                        if (unlikely(tmp_expression_value_12 == NULL)) {
                            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[198]);
                        }

                        if (tmp_expression_value_12 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 36;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_12);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_6 = PyObject_GetItem(locals_torchvision$models$inception$$$class__1_Inception3_29, mod_consts[226]);

                if (tmp_subscript_value_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_6 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_6);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_6);
                Py_DECREF(tmp_expression_value_12);
                Py_DECREF(tmp_subscript_value_6);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 36;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[71];
                tmp_dict_value_2 = PyObject_GetItem(locals_torchvision$models$inception$$$class__1_Inception3_29, mod_consts[228]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[229];
                tmp_dict_value_2 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_annotations_1);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;
            Py_INCREF(tmp_defaults_1);

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$inception$$$function__1___init__(tmp_defaults_1, tmp_annotations_1, tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__1_Inception3_29, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_dict_key_3 = mod_consts[102];
            tmp_dict_value_3 = PyObject_GetItem(locals_torchvision$models$inception$$$class__1_Inception3_29, mod_consts[204]);

            if (tmp_dict_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[204]);

                    if (unlikely(tmp_dict_value_3 == NULL)) {
                        tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
                    }

                    if (tmp_dict_value_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 95;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_3);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_2 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[229];
            tmp_dict_value_3 = PyObject_GetItem(locals_torchvision$models$inception$$$class__1_Inception3_29, mod_consts[204]);

            if (tmp_dict_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[204]);

                    if (unlikely(tmp_dict_value_3 == NULL)) {
                        tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
                    }

                    if (tmp_dict_value_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 95;
                        type_description_2 = "c";
                        goto dict_build_exception_3;
                    }
                    Py_INCREF(tmp_dict_value_3);
                } else {
                    goto dict_build_exception_3;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_3;
            // Exception handling pass through code for dict_build:
            dict_build_exception_3:;
            Py_DECREF(tmp_annotations_2);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_3:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$inception$$$function__2__transform_input(tmp_annotations_2);

            tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__1_Inception3_29, mod_consts[105], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            tmp_dict_key_4 = mod_consts[102];
            tmp_dict_value_4 = PyObject_GetItem(locals_torchvision$models$inception$$$class__1_Inception3_29, mod_consts[204]);

            if (tmp_dict_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[204]);

                    if (unlikely(tmp_dict_value_4 == NULL)) {
                        tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
                    }

                    if (tmp_dict_value_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 103;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_4);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_3 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_13;
                PyObject *tmp_subscript_value_7;
                PyObject *tmp_tuple_element_5;
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[229];
                tmp_expression_value_13 = PyObject_GetItem(locals_torchvision$models$inception$$$class__1_Inception3_29, mod_consts[199]);

                if (tmp_expression_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[199]);

                        if (unlikely(tmp_expression_value_13 == NULL)) {
                            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[199]);
                        }

                        if (tmp_expression_value_13 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 103;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_13);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_tuple_element_5 = PyObject_GetItem(locals_torchvision$models$inception$$$class__1_Inception3_29, mod_consts[204]);

                if (tmp_tuple_element_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[204]);

                        if (unlikely(tmp_tuple_element_5 == NULL)) {
                            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
                        }

                        if (tmp_tuple_element_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_13);

                            exception_lineno = 103;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_tuple_element_5);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_subscript_value_7 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_14;
                    PyObject *tmp_subscript_value_8;
                    PyTuple_SET_ITEM(tmp_subscript_value_7, 0, tmp_tuple_element_5);
                    tmp_expression_value_14 = PyObject_GetItem(locals_torchvision$models$inception$$$class__1_Inception3_29, mod_consts[198]);

                    if (tmp_expression_value_14 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[198]);

                            if (unlikely(tmp_expression_value_14 == NULL)) {
                                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[198]);
                            }

                            if (tmp_expression_value_14 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 103;
                                type_description_2 = "c";
                                goto tuple_build_exception_3;
                            }
                            Py_INCREF(tmp_expression_value_14);
                        } else {
                            goto tuple_build_exception_3;
                        }
                    }

                    tmp_subscript_value_8 = PyObject_GetItem(locals_torchvision$models$inception$$$class__1_Inception3_29, mod_consts[204]);

                    if (tmp_subscript_value_8 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_subscript_value_8 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[204]);

                            if (unlikely(tmp_subscript_value_8 == NULL)) {
                                tmp_subscript_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
                            }

                            if (tmp_subscript_value_8 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_expression_value_14);

                                exception_lineno = 103;
                                type_description_2 = "c";
                                goto tuple_build_exception_3;
                            }
                            Py_INCREF(tmp_subscript_value_8);
                        } else {
                            goto tuple_build_exception_3;
                        }
                    }

                    tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_8);
                    Py_DECREF(tmp_expression_value_14);
                    Py_DECREF(tmp_subscript_value_8);
                    if (tmp_tuple_element_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 103;
                        type_description_2 = "c";
                        goto tuple_build_exception_3;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_7, 1, tmp_tuple_element_5);
                }
                goto tuple_build_noexception_3;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_3:;
                Py_DECREF(tmp_expression_value_13);
                Py_DECREF(tmp_subscript_value_7);
                goto dict_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_3:;
                tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_7);
                Py_DECREF(tmp_expression_value_13);
                Py_DECREF(tmp_subscript_value_7);
                if (tmp_dict_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 103;
                    type_description_2 = "c";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_4;
            // Exception handling pass through code for dict_build:
            dict_build_exception_4:;
            Py_DECREF(tmp_annotations_3);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_4:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$inception$$$function__3__forward(tmp_annotations_3);

            tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__1_Inception3_29, mod_consts[106], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            tmp_expression_value_16 = PyObject_GetItem(locals_torchvision$models$inception$$$class__1_Inception3_29, mod_consts[80]);

            if (tmp_expression_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[80]);

                    if (unlikely(tmp_expression_value_16 == NULL)) {
                        tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
                    }

                    if (tmp_expression_value_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 157;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_16);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[108]);
            Py_DECREF(tmp_expression_value_16);
            if (tmp_expression_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[233]);
            Py_DECREF(tmp_expression_value_15);
            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_5 = mod_consts[102];
            tmp_dict_value_5 = PyObject_GetItem(locals_torchvision$models$inception$$$class__1_Inception3_29, mod_consts[204]);

            if (tmp_dict_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[204]);

                    if (unlikely(tmp_dict_value_5 == NULL)) {
                        tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
                    }

                    if (tmp_dict_value_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_3);

                        exception_lineno = 158;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_5);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_4 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_17;
                PyObject *tmp_subscript_value_9;
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[234];
                tmp_expression_value_17 = PyObject_GetItem(locals_torchvision$models$inception$$$class__1_Inception3_29, mod_consts[198]);

                if (tmp_expression_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[198]);

                        if (unlikely(tmp_expression_value_17 == NULL)) {
                            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[198]);
                        }

                        if (tmp_expression_value_17 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 158;
                            type_description_2 = "c";
                            goto dict_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_17);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_subscript_value_9 = PyObject_GetItem(locals_torchvision$models$inception$$$class__1_Inception3_29, mod_consts[204]);

                if (tmp_subscript_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_9 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[204]);

                        if (unlikely(tmp_subscript_value_9 == NULL)) {
                            tmp_subscript_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
                        }

                        if (tmp_subscript_value_9 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_17);

                            exception_lineno = 158;
                            type_description_2 = "c";
                            goto dict_build_exception_5;
                        }
                        Py_INCREF(tmp_subscript_value_9);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_9);
                Py_DECREF(tmp_expression_value_17);
                Py_DECREF(tmp_subscript_value_9);
                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 158;
                    type_description_2 = "c";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[229];
                tmp_dict_value_5 = PyObject_GetItem(locals_torchvision$models$inception$$$class__1_Inception3_29, mod_consts[104]);

                if (tmp_dict_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[104]);

                        if (unlikely(tmp_dict_value_5 == NULL)) {
                            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
                        }

                        if (tmp_dict_value_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 158;
                            type_description_2 = "c";
                            goto dict_build_exception_5;
                        }
                        Py_INCREF(tmp_dict_value_5);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_5;
            // Exception handling pass through code for dict_build:
            dict_build_exception_5:;
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_annotations_4);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_5:;


            tmp_args_element_value_1 = MAKE_FUNCTION_torchvision$models$inception$$$function__4_eager_outputs(tmp_annotations_4);

            frame_f4f673a757f1f08e5cfc517ecb003a52_2->m_frame.f_lineno = 157;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__1_Inception3_29, mod_consts[111], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            tmp_dict_key_6 = mod_consts[102];
            tmp_dict_value_6 = PyObject_GetItem(locals_torchvision$models$inception$$$class__1_Inception3_29, mod_consts[204]);

            if (tmp_dict_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[204]);

                    if (unlikely(tmp_dict_value_6 == NULL)) {
                        tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
                    }

                    if (tmp_dict_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 164;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_5 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[229];
            tmp_dict_value_6 = PyObject_GetItem(locals_torchvision$models$inception$$$class__1_Inception3_29, mod_consts[104]);

            if (tmp_dict_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[104]);

                    if (unlikely(tmp_dict_value_6 == NULL)) {
                        tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
                    }

                    if (tmp_dict_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 164;
                        type_description_2 = "c";
                        goto dict_build_exception_6;
                    }
                    Py_INCREF(tmp_dict_value_6);
                } else {
                    goto dict_build_exception_6;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_6;
            // Exception handling pass through code for dict_build:
            dict_build_exception_6:;
            Py_DECREF(tmp_annotations_5);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_6:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$inception$$$function__5_forward(tmp_annotations_5);

            tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__1_Inception3_29, mod_consts[236], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f4f673a757f1f08e5cfc517ecb003a52_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f4f673a757f1f08e5cfc517ecb003a52_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f4f673a757f1f08e5cfc517ecb003a52_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f4f673a757f1f08e5cfc517ecb003a52_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_f4f673a757f1f08e5cfc517ecb003a52_2);

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
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
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
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__1_Inception3_29, mod_consts[238], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_5;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_4 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_6 = mod_consts[180];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_6 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_torchvision$models$inception$$$class__1_Inception3_29;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_fee381e33065d2681a1f143869d41738->m_frame.f_lineno = 29;
            tmp_assign_source_30 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto try_except_handler_5;
            }
            assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
            PyCell_SET(outline_0_var___class__, tmp_assign_source_30);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
        tmp_assign_source_29 = Nuitka_Cell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_29);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_torchvision$models$inception$$$class__1_Inception3_29);
        locals_torchvision$models$inception$$$class__1_Inception3_29 = NULL;
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

        Py_DECREF(locals_torchvision$models$inception$$$class__1_Inception3_29);
        locals_torchvision$models$inception$$$class__1_Inception3_29 = NULL;
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
        UPDATE_STRING_DICT1(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_29);
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
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
        PyObject *tmp_assign_source_31;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_expression_value_18;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_6;
        }
        tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[215]);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_6;
        }
        tmp_assign_source_31 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_31, 0, tmp_tuple_element_7);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_32 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

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
        tmp_expression_value_19 = tmp_class_creation_2__bases;
        tmp_subscript_value_10 = mod_consts[14];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_19, tmp_subscript_value_10, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_6;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_6;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_34 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_34;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_20 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_20, mod_consts[216]);
        tmp_condition_result_6 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_21 = tmp_class_creation_2__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[216]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_6;
        }
        tmp_tuple_element_8 = mod_consts[4];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_8 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_fee381e33065d2681a1f143869d41738->m_frame.f_lineno = 176;
        tmp_assign_source_35 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_35;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_22 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_22, mod_consts[217]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

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
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[218];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[219];
        tmp_getattr_default_2 = mod_consts[220];
        tmp_tuple_element_9 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_6;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_23;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_23 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_23 == NULL));
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[219]);
            Py_DECREF(tmp_expression_value_23);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_6;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 176;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_6;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_36;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_37;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_torchvision$models$inception$$$class__2_InceptionA_176 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[221];
        tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__2_InceptionA_176, mod_consts[222], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[4];
        tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__2_InceptionA_176, mod_consts[223], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_8;
        }
        frame_6b7bad589c81bc6a27d20b1b0aebecab_3 = MAKE_CLASS_FRAME(codeobj_6b7bad589c81bc6a27d20b1b0aebecab, module_torchvision$models$inception, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_6b7bad589c81bc6a27d20b1b0aebecab_3);
        assert(Py_REFCNT(frame_6b7bad589c81bc6a27d20b1b0aebecab_3) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            struct Nuitka_CellObject *tmp_closure_2[1];
            tmp_defaults_2 = mod_consts[239];
            tmp_dict_key_7 = mod_consts[240];
            tmp_dict_value_7 = PyObject_GetItem(locals_torchvision$models$inception$$$class__2_InceptionA_176, mod_consts[225]);

            if (tmp_dict_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_7 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_7);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_6 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_value_24;
                PyObject *tmp_subscript_value_11;
                PyObject *tmp_expression_value_25;
                PyObject *tmp_subscript_value_12;
                PyObject *tmp_tuple_element_10;
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[241];
                tmp_dict_value_7 = PyObject_GetItem(locals_torchvision$models$inception$$$class__2_InceptionA_176, mod_consts[225]);

                if (tmp_dict_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_7 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_7);
                    } else {
                        goto dict_build_exception_7;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[242];
                tmp_expression_value_24 = PyObject_GetItem(locals_torchvision$models$inception$$$class__2_InceptionA_176, mod_consts[198]);

                if (tmp_expression_value_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[198]);

                        if (unlikely(tmp_expression_value_24 == NULL)) {
                            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[198]);
                        }

                        if (tmp_expression_value_24 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 178;
                            type_description_2 = "c";
                            goto dict_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_24);
                    } else {
                        goto dict_build_exception_7;
                    }
                }

                tmp_expression_value_25 = PyObject_GetItem(locals_torchvision$models$inception$$$class__2_InceptionA_176, mod_consts[196]);

                if (tmp_expression_value_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[196]);

                        if (unlikely(tmp_expression_value_25 == NULL)) {
                            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[196]);
                        }

                        if (tmp_expression_value_25 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_24);

                            exception_lineno = 178;
                            type_description_2 = "c";
                            goto dict_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_25);
                    } else {
                        goto dict_build_exception_7;
                    }
                }

                tmp_tuple_element_10 = Py_Ellipsis;
                tmp_subscript_value_12 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_26;
                    PyTuple_SET_ITEM0(tmp_subscript_value_12, 0, tmp_tuple_element_10);
                    tmp_expression_value_26 = PyObject_GetItem(locals_torchvision$models$inception$$$class__2_InceptionA_176, mod_consts[32]);

                    if (tmp_expression_value_26 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[32]);

                            if (unlikely(tmp_expression_value_26 == NULL)) {
                                tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                            }

                            if (tmp_expression_value_26 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 178;
                                type_description_2 = "c";
                                goto tuple_build_exception_5;
                            }
                            Py_INCREF(tmp_expression_value_26);
                        } else {
                            goto tuple_build_exception_5;
                        }
                    }

                    tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[215]);
                    Py_DECREF(tmp_expression_value_26);
                    if (tmp_tuple_element_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 178;
                        type_description_2 = "c";
                        goto tuple_build_exception_5;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_12, 1, tmp_tuple_element_10);
                }
                goto tuple_build_noexception_5;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_5:;
                Py_DECREF(tmp_expression_value_24);
                Py_DECREF(tmp_expression_value_25);
                Py_DECREF(tmp_subscript_value_12);
                goto dict_build_exception_7;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_5:;
                tmp_subscript_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_12);
                Py_DECREF(tmp_expression_value_25);
                Py_DECREF(tmp_subscript_value_12);
                if (tmp_subscript_value_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_24);

                    exception_lineno = 178;
                    type_description_2 = "c";
                    goto dict_build_exception_7;
                }
                tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_11);
                Py_DECREF(tmp_expression_value_24);
                Py_DECREF(tmp_subscript_value_11);
                if (tmp_dict_value_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 178;
                    type_description_2 = "c";
                    goto dict_build_exception_7;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[229];
                tmp_dict_value_7 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_7, tmp_dict_value_7);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_7;
            // Exception handling pass through code for dict_build:
            dict_build_exception_7:;
            Py_DECREF(tmp_annotations_6);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_7:;
            Py_INCREF(tmp_defaults_2);

            tmp_closure_2[0] = outline_1_var___class__;
            Py_INCREF(tmp_closure_2[0]);

            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$inception$$$function__6___init__(tmp_defaults_2, tmp_annotations_6, tmp_closure_2);

            tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__2_InceptionA_176, mod_consts[1], tmp_dictset_value);
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
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            tmp_dict_key_8 = mod_consts[102];
            tmp_dict_value_8 = PyObject_GetItem(locals_torchvision$models$inception$$$class__2_InceptionA_176, mod_consts[204]);

            if (tmp_dict_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[204]);

                    if (unlikely(tmp_dict_value_8 == NULL)) {
                        tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
                    }

                    if (tmp_dict_value_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 194;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_8);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_7 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_27;
                PyObject *tmp_subscript_value_13;
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_8, tmp_dict_value_8);
                Py_DECREF(tmp_dict_value_8);
                assert(!(tmp_res != 0));
                tmp_dict_key_8 = mod_consts[229];
                tmp_expression_value_27 = PyObject_GetItem(locals_torchvision$models$inception$$$class__2_InceptionA_176, mod_consts[200]);

                if (tmp_expression_value_27 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[200]);

                        if (unlikely(tmp_expression_value_27 == NULL)) {
                            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[200]);
                        }

                        if (tmp_expression_value_27 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 194;
                            type_description_2 = "c";
                            goto dict_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_27);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_subscript_value_13 = PyObject_GetItem(locals_torchvision$models$inception$$$class__2_InceptionA_176, mod_consts[204]);

                if (tmp_subscript_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_13 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[204]);

                        if (unlikely(tmp_subscript_value_13 == NULL)) {
                            tmp_subscript_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
                        }

                        if (tmp_subscript_value_13 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_27);

                            exception_lineno = 194;
                            type_description_2 = "c";
                            goto dict_build_exception_8;
                        }
                        Py_INCREF(tmp_subscript_value_13);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_13);
                Py_DECREF(tmp_expression_value_27);
                Py_DECREF(tmp_subscript_value_13);
                if (tmp_dict_value_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 194;
                    type_description_2 = "c";
                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_8, tmp_dict_value_8);
                Py_DECREF(tmp_dict_value_8);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_8;
            // Exception handling pass through code for dict_build:
            dict_build_exception_8:;
            Py_DECREF(tmp_annotations_7);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_8:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$inception$$$function__7__forward(tmp_annotations_7);

            tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__2_InceptionA_176, mod_consts[106], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            tmp_dict_key_9 = mod_consts[102];
            tmp_dict_value_9 = PyObject_GetItem(locals_torchvision$models$inception$$$class__2_InceptionA_176, mod_consts[204]);

            if (tmp_dict_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[204]);

                    if (unlikely(tmp_dict_value_9 == NULL)) {
                        tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
                    }

                    if (tmp_dict_value_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 210;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_9);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_8 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[229];
            tmp_dict_value_9 = PyObject_GetItem(locals_torchvision$models$inception$$$class__2_InceptionA_176, mod_consts[204]);

            if (tmp_dict_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[204]);

                    if (unlikely(tmp_dict_value_9 == NULL)) {
                        tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
                    }

                    if (tmp_dict_value_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 210;
                        type_description_2 = "c";
                        goto dict_build_exception_9;
                    }
                    Py_INCREF(tmp_dict_value_9);
                } else {
                    goto dict_build_exception_9;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_9;
            // Exception handling pass through code for dict_build:
            dict_build_exception_9:;
            Py_DECREF(tmp_annotations_8);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_9:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$inception$$$function__8_forward(tmp_annotations_8);

            tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__2_InceptionA_176, mod_consts[236], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6b7bad589c81bc6a27d20b1b0aebecab_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6b7bad589c81bc6a27d20b1b0aebecab_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6b7bad589c81bc6a27d20b1b0aebecab_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6b7bad589c81bc6a27d20b1b0aebecab_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_6b7bad589c81bc6a27d20b1b0aebecab_3);

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


                exception_lineno = 176;

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
        tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__2_InceptionA_176, mod_consts[238], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_8;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_6 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_11 = mod_consts[4];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_11 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = locals_torchvision$models$inception$$$class__2_InceptionA_176;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_fee381e33065d2681a1f143869d41738->m_frame.f_lineno = 176;
            tmp_assign_source_38 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;

                goto try_except_handler_8;
            }
            assert(Nuitka_Cell_GET(outline_1_var___class__) == NULL);
            PyCell_SET(outline_1_var___class__, tmp_assign_source_38);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_1_var___class__));
        tmp_assign_source_37 = Nuitka_Cell_GET(outline_1_var___class__);
        Py_INCREF(tmp_assign_source_37);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_torchvision$models$inception$$$class__2_InceptionA_176);
        locals_torchvision$models$inception$$$class__2_InceptionA_176 = NULL;
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

        Py_DECREF(locals_torchvision$models$inception$$$class__2_InceptionA_176);
        locals_torchvision$models$inception$$$class__2_InceptionA_176 = NULL;
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
        exception_lineno = 176;
        goto try_except_handler_6;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_37);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_expression_value_28;
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto try_except_handler_9;
        }
        tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[215]);
        if (tmp_tuple_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto try_except_handler_9;
        }
        tmp_assign_source_39 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_39, 0, tmp_tuple_element_12);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_40 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

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
        tmp_expression_value_29 = tmp_class_creation_3__bases;
        tmp_subscript_value_14 = mod_consts[14];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_29, tmp_subscript_value_14, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto try_except_handler_9;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto try_except_handler_9;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_42 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_42;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_value_30;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_30 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_30, mod_consts[216]);
        tmp_condition_result_10 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_31 = tmp_class_creation_3__metaclass;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[216]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto try_except_handler_9;
        }
        tmp_tuple_element_13 = mod_consts[5];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_13);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_13 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_13);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_fee381e33065d2681a1f143869d41738->m_frame.f_lineno = 215;
        tmp_assign_source_43 = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_43;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_32;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_32 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_32, mod_consts[217]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

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
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[218];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[219];
        tmp_getattr_default_3 = mod_consts[220];
        tmp_tuple_element_14 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto try_except_handler_9;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_33;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_33 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_33 == NULL));
            tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[219]);
            Py_DECREF(tmp_expression_value_33);
            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_14);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_9;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto try_except_handler_9;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 215;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_9;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_44;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_45;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_torchvision$models$inception$$$class__3_InceptionB_215 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[221];
        tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__3_InceptionB_215, mod_consts[222], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto try_except_handler_11;
        }
        tmp_dictset_value = mod_consts[5];
        tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__3_InceptionB_215, mod_consts[223], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto try_except_handler_11;
        }
        frame_516cc1ed38f6ad4acbc558d77811787f_4 = MAKE_CLASS_FRAME(codeobj_516cc1ed38f6ad4acbc558d77811787f, module_torchvision$models$inception, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_516cc1ed38f6ad4acbc558d77811787f_4);
        assert(Py_REFCNT(frame_516cc1ed38f6ad4acbc558d77811787f_4) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_3;
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            struct Nuitka_CellObject *tmp_closure_3[1];
            tmp_defaults_3 = mod_consts[239];
            tmp_dict_key_10 = mod_consts[240];
            tmp_dict_value_10 = PyObject_GetItem(locals_torchvision$models$inception$$$class__3_InceptionB_215, mod_consts[225]);

            if (tmp_dict_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_10 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_10);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_9 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_34;
                PyObject *tmp_subscript_value_15;
                PyObject *tmp_expression_value_35;
                PyObject *tmp_subscript_value_16;
                PyObject *tmp_tuple_element_15;
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_10, tmp_dict_value_10);
                Py_DECREF(tmp_dict_value_10);
                assert(!(tmp_res != 0));
                tmp_dict_key_10 = mod_consts[242];
                tmp_expression_value_34 = PyObject_GetItem(locals_torchvision$models$inception$$$class__3_InceptionB_215, mod_consts[198]);

                if (tmp_expression_value_34 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[198]);

                        if (unlikely(tmp_expression_value_34 == NULL)) {
                            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[198]);
                        }

                        if (tmp_expression_value_34 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 216;
                            type_description_2 = "c";
                            goto dict_build_exception_10;
                        }
                        Py_INCREF(tmp_expression_value_34);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_expression_value_35 = PyObject_GetItem(locals_torchvision$models$inception$$$class__3_InceptionB_215, mod_consts[196]);

                if (tmp_expression_value_35 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[196]);

                        if (unlikely(tmp_expression_value_35 == NULL)) {
                            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[196]);
                        }

                        if (tmp_expression_value_35 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_34);

                            exception_lineno = 216;
                            type_description_2 = "c";
                            goto dict_build_exception_10;
                        }
                        Py_INCREF(tmp_expression_value_35);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_tuple_element_15 = Py_Ellipsis;
                tmp_subscript_value_16 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_36;
                    PyTuple_SET_ITEM0(tmp_subscript_value_16, 0, tmp_tuple_element_15);
                    tmp_expression_value_36 = PyObject_GetItem(locals_torchvision$models$inception$$$class__3_InceptionB_215, mod_consts[32]);

                    if (tmp_expression_value_36 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[32]);

                            if (unlikely(tmp_expression_value_36 == NULL)) {
                                tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                            }

                            if (tmp_expression_value_36 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 216;
                                type_description_2 = "c";
                                goto tuple_build_exception_7;
                            }
                            Py_INCREF(tmp_expression_value_36);
                        } else {
                            goto tuple_build_exception_7;
                        }
                    }

                    tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[215]);
                    Py_DECREF(tmp_expression_value_36);
                    if (tmp_tuple_element_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 216;
                        type_description_2 = "c";
                        goto tuple_build_exception_7;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_16, 1, tmp_tuple_element_15);
                }
                goto tuple_build_noexception_7;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_7:;
                Py_DECREF(tmp_expression_value_34);
                Py_DECREF(tmp_expression_value_35);
                Py_DECREF(tmp_subscript_value_16);
                goto dict_build_exception_10;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_7:;
                tmp_subscript_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_35, tmp_subscript_value_16);
                Py_DECREF(tmp_expression_value_35);
                Py_DECREF(tmp_subscript_value_16);
                if (tmp_subscript_value_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_34);

                    exception_lineno = 216;
                    type_description_2 = "c";
                    goto dict_build_exception_10;
                }
                tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_34, tmp_subscript_value_15);
                Py_DECREF(tmp_expression_value_34);
                Py_DECREF(tmp_subscript_value_15);
                if (tmp_dict_value_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 216;
                    type_description_2 = "c";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_10, tmp_dict_value_10);
                Py_DECREF(tmp_dict_value_10);
                assert(!(tmp_res != 0));
                tmp_dict_key_10 = mod_consts[229];
                tmp_dict_value_10 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_10, tmp_dict_value_10);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_10;
            // Exception handling pass through code for dict_build:
            dict_build_exception_10:;
            Py_DECREF(tmp_annotations_9);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_10:;
            Py_INCREF(tmp_defaults_3);

            tmp_closure_3[0] = outline_2_var___class__;
            Py_INCREF(tmp_closure_3[0]);

            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$inception$$$function__9___init__(tmp_defaults_3, tmp_annotations_9, tmp_closure_3);

            tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__3_InceptionB_215, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            tmp_dict_key_11 = mod_consts[102];
            tmp_dict_value_11 = PyObject_GetItem(locals_torchvision$models$inception$$$class__3_InceptionB_215, mod_consts[204]);

            if (tmp_dict_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[204]);

                    if (unlikely(tmp_dict_value_11 == NULL)) {
                        tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
                    }

                    if (tmp_dict_value_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 226;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_11);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_10 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_37;
                PyObject *tmp_subscript_value_17;
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[229];
                tmp_expression_value_37 = PyObject_GetItem(locals_torchvision$models$inception$$$class__3_InceptionB_215, mod_consts[200]);

                if (tmp_expression_value_37 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[200]);

                        if (unlikely(tmp_expression_value_37 == NULL)) {
                            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[200]);
                        }

                        if (tmp_expression_value_37 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 226;
                            type_description_2 = "c";
                            goto dict_build_exception_11;
                        }
                        Py_INCREF(tmp_expression_value_37);
                    } else {
                        goto dict_build_exception_11;
                    }
                }

                tmp_subscript_value_17 = PyObject_GetItem(locals_torchvision$models$inception$$$class__3_InceptionB_215, mod_consts[204]);

                if (tmp_subscript_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_17 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[204]);

                        if (unlikely(tmp_subscript_value_17 == NULL)) {
                            tmp_subscript_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
                        }

                        if (tmp_subscript_value_17 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_37);

                            exception_lineno = 226;
                            type_description_2 = "c";
                            goto dict_build_exception_11;
                        }
                        Py_INCREF(tmp_subscript_value_17);
                    } else {
                        goto dict_build_exception_11;
                    }
                }

                tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_17);
                Py_DECREF(tmp_expression_value_37);
                Py_DECREF(tmp_subscript_value_17);
                if (tmp_dict_value_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 226;
                    type_description_2 = "c";
                    goto dict_build_exception_11;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_11;
            // Exception handling pass through code for dict_build:
            dict_build_exception_11:;
            Py_DECREF(tmp_annotations_10);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_11:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$inception$$$function__10__forward(tmp_annotations_10);

            tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__3_InceptionB_215, mod_consts[106], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_11;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            tmp_dict_key_12 = mod_consts[102];
            tmp_dict_value_12 = PyObject_GetItem(locals_torchvision$models$inception$$$class__3_InceptionB_215, mod_consts[204]);

            if (tmp_dict_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[204]);

                    if (unlikely(tmp_dict_value_12 == NULL)) {
                        tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
                    }

                    if (tmp_dict_value_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 238;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_12);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_11 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[229];
            tmp_dict_value_12 = PyObject_GetItem(locals_torchvision$models$inception$$$class__3_InceptionB_215, mod_consts[204]);

            if (tmp_dict_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[204]);

                    if (unlikely(tmp_dict_value_12 == NULL)) {
                        tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
                    }

                    if (tmp_dict_value_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 238;
                        type_description_2 = "c";
                        goto dict_build_exception_12;
                    }
                    Py_INCREF(tmp_dict_value_12);
                } else {
                    goto dict_build_exception_12;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_12;
            // Exception handling pass through code for dict_build:
            dict_build_exception_12:;
            Py_DECREF(tmp_annotations_11);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_12:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$inception$$$function__11_forward(tmp_annotations_11);

            tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__3_InceptionB_215, mod_consts[236], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_516cc1ed38f6ad4acbc558d77811787f_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_516cc1ed38f6ad4acbc558d77811787f_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_516cc1ed38f6ad4acbc558d77811787f_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_516cc1ed38f6ad4acbc558d77811787f_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_516cc1ed38f6ad4acbc558d77811787f_4);

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


                exception_lineno = 215;

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
        tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__3_InceptionB_215, mod_consts[238], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto try_except_handler_11;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_46;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_8 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_16 = mod_consts[5];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_16 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_16);
            tmp_tuple_element_16 = locals_torchvision$models$inception$$$class__3_InceptionB_215;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_fee381e33065d2681a1f143869d41738->m_frame.f_lineno = 215;
            tmp_assign_source_46 = CALL_FUNCTION(tmp_called_value_8, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;

                goto try_except_handler_11;
            }
            assert(Nuitka_Cell_GET(outline_2_var___class__) == NULL);
            PyCell_SET(outline_2_var___class__, tmp_assign_source_46);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_2_var___class__));
        tmp_assign_source_45 = Nuitka_Cell_GET(outline_2_var___class__);
        Py_INCREF(tmp_assign_source_45);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF(locals_torchvision$models$inception$$$class__3_InceptionB_215);
        locals_torchvision$models$inception$$$class__3_InceptionB_215 = NULL;
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

        Py_DECREF(locals_torchvision$models$inception$$$class__3_InceptionB_215);
        locals_torchvision$models$inception$$$class__3_InceptionB_215 = NULL;
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
        exception_lineno = 215;
        goto try_except_handler_9;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_45);
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
        PyObject *tmp_assign_source_47;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_expression_value_38;
        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_38 == NULL)) {
            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto try_except_handler_12;
        }
        tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[215]);
        if (tmp_tuple_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto try_except_handler_12;
        }
        tmp_assign_source_47 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_47, 0, tmp_tuple_element_17);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_48 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto try_except_handler_12;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_49;
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_subscript_value_18;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto try_except_handler_12;
        }
        tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_39 = tmp_class_creation_4__bases;
        tmp_subscript_value_18 = mod_consts[14];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_39, tmp_subscript_value_18, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto try_except_handler_12;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto try_except_handler_12;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_50 = SELECT_METACLASS(tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto try_except_handler_12;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_50;
    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_expression_value_40;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_40 = tmp_class_creation_4__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_40, mod_consts[216]);
        tmp_condition_result_14 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_41 = tmp_class_creation_4__metaclass;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[216]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto try_except_handler_12;
        }
        tmp_tuple_element_18 = mod_consts[6];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_18);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_18 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_18);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_fee381e33065d2681a1f143869d41738->m_frame.f_lineno = 243;
        tmp_assign_source_51 = CALL_FUNCTION(tmp_called_value_9, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto try_except_handler_12;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_51;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_42;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_42 = tmp_class_creation_4__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_42, mod_consts[217]);
        tmp_operand_value_4 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto try_except_handler_12;
        }
        tmp_condition_result_15 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_getattr_target_4;
        PyObject *tmp_getattr_attr_4;
        PyObject *tmp_getattr_default_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[218];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
        tmp_getattr_attr_4 = mod_consts[219];
        tmp_getattr_default_4 = mod_consts[220];
        tmp_tuple_element_19 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
        if (tmp_tuple_element_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto try_except_handler_12;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_43;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_43 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_43 == NULL));
            tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[219]);
            Py_DECREF(tmp_expression_value_43);
            if (tmp_tuple_element_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_19);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_12;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto try_except_handler_12;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 243;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_12;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_52;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_53;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_torchvision$models$inception$$$class__4_InceptionC_243 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[221];
        tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__4_InceptionC_243, mod_consts[222], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto try_except_handler_14;
        }
        tmp_dictset_value = mod_consts[6];
        tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__4_InceptionC_243, mod_consts[223], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto try_except_handler_14;
        }
        frame_2b4a3cbeb62244025f83fac37095f924_5 = MAKE_CLASS_FRAME(codeobj_2b4a3cbeb62244025f83fac37095f924, module_torchvision$models$inception, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_2b4a3cbeb62244025f83fac37095f924_5);
        assert(Py_REFCNT(frame_2b4a3cbeb62244025f83fac37095f924_5) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_4;
            PyObject *tmp_annotations_12;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            struct Nuitka_CellObject *tmp_closure_4[1];
            tmp_defaults_4 = mod_consts[239];
            tmp_dict_key_13 = mod_consts[240];
            tmp_dict_value_13 = PyObject_GetItem(locals_torchvision$models$inception$$$class__4_InceptionC_243, mod_consts[225]);

            if (tmp_dict_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_13 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_13);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_annotations_12 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_value_44;
                PyObject *tmp_subscript_value_19;
                PyObject *tmp_expression_value_45;
                PyObject *tmp_subscript_value_20;
                PyObject *tmp_tuple_element_20;
                tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[249];
                tmp_dict_value_13 = PyObject_GetItem(locals_torchvision$models$inception$$$class__4_InceptionC_243, mod_consts[225]);

                if (tmp_dict_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_13 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_13);
                    } else {
                        goto dict_build_exception_13;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[242];
                tmp_expression_value_44 = PyObject_GetItem(locals_torchvision$models$inception$$$class__4_InceptionC_243, mod_consts[198]);

                if (tmp_expression_value_44 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[198]);

                        if (unlikely(tmp_expression_value_44 == NULL)) {
                            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[198]);
                        }

                        if (tmp_expression_value_44 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 245;
                            type_description_2 = "c";
                            goto dict_build_exception_13;
                        }
                        Py_INCREF(tmp_expression_value_44);
                    } else {
                        goto dict_build_exception_13;
                    }
                }

                tmp_expression_value_45 = PyObject_GetItem(locals_torchvision$models$inception$$$class__4_InceptionC_243, mod_consts[196]);

                if (tmp_expression_value_45 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[196]);

                        if (unlikely(tmp_expression_value_45 == NULL)) {
                            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[196]);
                        }

                        if (tmp_expression_value_45 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_44);

                            exception_lineno = 245;
                            type_description_2 = "c";
                            goto dict_build_exception_13;
                        }
                        Py_INCREF(tmp_expression_value_45);
                    } else {
                        goto dict_build_exception_13;
                    }
                }

                tmp_tuple_element_20 = Py_Ellipsis;
                tmp_subscript_value_20 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_46;
                    PyTuple_SET_ITEM0(tmp_subscript_value_20, 0, tmp_tuple_element_20);
                    tmp_expression_value_46 = PyObject_GetItem(locals_torchvision$models$inception$$$class__4_InceptionC_243, mod_consts[32]);

                    if (tmp_expression_value_46 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[32]);

                            if (unlikely(tmp_expression_value_46 == NULL)) {
                                tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                            }

                            if (tmp_expression_value_46 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 245;
                                type_description_2 = "c";
                                goto tuple_build_exception_9;
                            }
                            Py_INCREF(tmp_expression_value_46);
                        } else {
                            goto tuple_build_exception_9;
                        }
                    }

                    tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[215]);
                    Py_DECREF(tmp_expression_value_46);
                    if (tmp_tuple_element_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 245;
                        type_description_2 = "c";
                        goto tuple_build_exception_9;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_20, 1, tmp_tuple_element_20);
                }
                goto tuple_build_noexception_9;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_9:;
                Py_DECREF(tmp_expression_value_44);
                Py_DECREF(tmp_expression_value_45);
                Py_DECREF(tmp_subscript_value_20);
                goto dict_build_exception_13;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_9:;
                tmp_subscript_value_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_45, tmp_subscript_value_20);
                Py_DECREF(tmp_expression_value_45);
                Py_DECREF(tmp_subscript_value_20);
                if (tmp_subscript_value_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_44);

                    exception_lineno = 245;
                    type_description_2 = "c";
                    goto dict_build_exception_13;
                }
                tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_44, tmp_subscript_value_19);
                Py_DECREF(tmp_expression_value_44);
                Py_DECREF(tmp_subscript_value_19);
                if (tmp_dict_value_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 245;
                    type_description_2 = "c";
                    goto dict_build_exception_13;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[229];
                tmp_dict_value_13 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_13, tmp_dict_value_13);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_13;
            // Exception handling pass through code for dict_build:
            dict_build_exception_13:;
            Py_DECREF(tmp_annotations_12);
            goto frame_exception_exit_5;
            // Finished with no exception for dict_build:
            dict_build_noexception_13:;
            Py_INCREF(tmp_defaults_4);

            tmp_closure_4[0] = outline_3_var___class__;
            Py_INCREF(tmp_closure_4[0]);

            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$inception$$$function__12___init__(tmp_defaults_4, tmp_annotations_12, tmp_closure_4);

            tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__4_InceptionC_243, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_2 = "c";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_annotations_13;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            tmp_dict_key_14 = mod_consts[102];
            tmp_dict_value_14 = PyObject_GetItem(locals_torchvision$models$inception$$$class__4_InceptionC_243, mod_consts[204]);

            if (tmp_dict_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[204]);

                    if (unlikely(tmp_dict_value_14 == NULL)) {
                        tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
                    }

                    if (tmp_dict_value_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 265;
                        type_description_2 = "c";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_dict_value_14);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_annotations_13 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_47;
                PyObject *tmp_subscript_value_21;
                tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[229];
                tmp_expression_value_47 = PyObject_GetItem(locals_torchvision$models$inception$$$class__4_InceptionC_243, mod_consts[200]);

                if (tmp_expression_value_47 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[200]);

                        if (unlikely(tmp_expression_value_47 == NULL)) {
                            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[200]);
                        }

                        if (tmp_expression_value_47 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 265;
                            type_description_2 = "c";
                            goto dict_build_exception_14;
                        }
                        Py_INCREF(tmp_expression_value_47);
                    } else {
                        goto dict_build_exception_14;
                    }
                }

                tmp_subscript_value_21 = PyObject_GetItem(locals_torchvision$models$inception$$$class__4_InceptionC_243, mod_consts[204]);

                if (tmp_subscript_value_21 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_21 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[204]);

                        if (unlikely(tmp_subscript_value_21 == NULL)) {
                            tmp_subscript_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
                        }

                        if (tmp_subscript_value_21 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_47);

                            exception_lineno = 265;
                            type_description_2 = "c";
                            goto dict_build_exception_14;
                        }
                        Py_INCREF(tmp_subscript_value_21);
                    } else {
                        goto dict_build_exception_14;
                    }
                }

                tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_47, tmp_subscript_value_21);
                Py_DECREF(tmp_expression_value_47);
                Py_DECREF(tmp_subscript_value_21);
                if (tmp_dict_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 265;
                    type_description_2 = "c";
                    goto dict_build_exception_14;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_14;
            // Exception handling pass through code for dict_build:
            dict_build_exception_14:;
            Py_DECREF(tmp_annotations_13);
            goto frame_exception_exit_5;
            // Finished with no exception for dict_build:
            dict_build_noexception_14:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$inception$$$function__13__forward(tmp_annotations_13);

            tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__4_InceptionC_243, mod_consts[106], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;
                type_description_2 = "c";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_annotations_14;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            tmp_dict_key_15 = mod_consts[102];
            tmp_dict_value_15 = PyObject_GetItem(locals_torchvision$models$inception$$$class__4_InceptionC_243, mod_consts[204]);

            if (tmp_dict_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[204]);

                    if (unlikely(tmp_dict_value_15 == NULL)) {
                        tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
                    }

                    if (tmp_dict_value_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 284;
                        type_description_2 = "c";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_dict_value_15);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_annotations_14 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[229];
            tmp_dict_value_15 = PyObject_GetItem(locals_torchvision$models$inception$$$class__4_InceptionC_243, mod_consts[204]);

            if (tmp_dict_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[204]);

                    if (unlikely(tmp_dict_value_15 == NULL)) {
                        tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
                    }

                    if (tmp_dict_value_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 284;
                        type_description_2 = "c";
                        goto dict_build_exception_15;
                    }
                    Py_INCREF(tmp_dict_value_15);
                } else {
                    goto dict_build_exception_15;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_15;
            // Exception handling pass through code for dict_build:
            dict_build_exception_15:;
            Py_DECREF(tmp_annotations_14);
            goto frame_exception_exit_5;
            // Finished with no exception for dict_build:
            dict_build_noexception_15:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$inception$$$function__14_forward(tmp_annotations_14);

            tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__4_InceptionC_243, mod_consts[236], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;
                type_description_2 = "c";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_2b4a3cbeb62244025f83fac37095f924_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_2b4a3cbeb62244025f83fac37095f924_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_2b4a3cbeb62244025f83fac37095f924_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_2b4a3cbeb62244025f83fac37095f924_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_2b4a3cbeb62244025f83fac37095f924_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_14;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;

                goto try_except_handler_14;
            }
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__4_InceptionC_243, mod_consts[238], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto try_except_handler_14;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_54;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_10 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_21 = mod_consts[6];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_21 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_21);
            tmp_tuple_element_21 = locals_torchvision$models$inception$$$class__4_InceptionC_243;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_fee381e33065d2681a1f143869d41738->m_frame.f_lineno = 243;
            tmp_assign_source_54 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;

                goto try_except_handler_14;
            }
            assert(Nuitka_Cell_GET(outline_3_var___class__) == NULL);
            PyCell_SET(outline_3_var___class__, tmp_assign_source_54);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_3_var___class__));
        tmp_assign_source_53 = Nuitka_Cell_GET(outline_3_var___class__);
        Py_INCREF(tmp_assign_source_53);
        goto try_return_handler_14;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        Py_DECREF(locals_torchvision$models$inception$$$class__4_InceptionC_243);
        locals_torchvision$models$inception$$$class__4_InceptionC_243 = NULL;
        goto try_return_handler_13;
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

        Py_DECREF(locals_torchvision$models$inception$$$class__4_InceptionC_243);
        locals_torchvision$models$inception$$$class__4_InceptionC_243 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto try_except_handler_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
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

        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 243;
        goto try_except_handler_12;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_53);
    }
    goto try_end_6;
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
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_tuple_element_22;
        PyObject *tmp_expression_value_48;
        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_48 == NULL)) {
            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto try_except_handler_15;
        }
        tmp_tuple_element_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[215]);
        if (tmp_tuple_element_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto try_except_handler_15;
        }
        tmp_assign_source_55 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_55, 0, tmp_tuple_element_22);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_55;
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_56 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_56;
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_57;
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_metaclass_value_5;
        nuitka_bool tmp_condition_result_17;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_subscript_value_22;
        PyObject *tmp_bases_value_5;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto try_except_handler_15;
        }
        tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_49 = tmp_class_creation_5__bases;
        tmp_subscript_value_22 = mod_consts[14];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_49, tmp_subscript_value_22, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto try_except_handler_15;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto try_except_handler_15;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_5 = tmp_class_creation_5__bases;
        tmp_assign_source_58 = SELECT_METACLASS(tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_58;
    }
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_expression_value_50;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_50 = tmp_class_creation_5__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_50, mod_consts[216]);
        tmp_condition_result_18 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_23;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_51 = tmp_class_creation_5__metaclass;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[216]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto try_except_handler_15;
        }
        tmp_tuple_element_23 = mod_consts[7];
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_23);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_23 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_23);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
        frame_fee381e33065d2681a1f143869d41738->m_frame.f_lineno = 289;
        tmp_assign_source_59 = CALL_FUNCTION(tmp_called_value_11, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_59;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_52;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_52 = tmp_class_creation_5__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_52, mod_consts[217]);
        tmp_operand_value_5 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto try_except_handler_15;
        }
        tmp_condition_result_19 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_19 != false) {
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
        PyObject *tmp_tuple_element_24;
        PyObject *tmp_getattr_target_5;
        PyObject *tmp_getattr_attr_5;
        PyObject *tmp_getattr_default_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[218];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_getattr_target_5 = tmp_class_creation_5__metaclass;
        tmp_getattr_attr_5 = mod_consts[219];
        tmp_getattr_default_5 = mod_consts[220];
        tmp_tuple_element_24 = BUILTIN_GETATTR(tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5);
        if (tmp_tuple_element_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto try_except_handler_15;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_53;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_10 = tmp_class_creation_5__prepared;
            tmp_expression_value_53 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_53 == NULL));
            tmp_tuple_element_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[219]);
            Py_DECREF(tmp_expression_value_53);
            if (tmp_tuple_element_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_24);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_15;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto try_except_handler_15;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 289;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_15;
    }
    branch_no_14:;
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_60;
    }
    branch_end_13:;
    {
        PyObject *tmp_assign_source_61;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_torchvision$models$inception$$$class__5_InceptionD_289 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[221];
        tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__5_InceptionD_289, mod_consts[222], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto try_except_handler_17;
        }
        tmp_dictset_value = mod_consts[7];
        tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__5_InceptionD_289, mod_consts[223], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto try_except_handler_17;
        }
        frame_4590b8c0f74707764fde967db07945d3_6 = MAKE_CLASS_FRAME(codeobj_4590b8c0f74707764fde967db07945d3, module_torchvision$models$inception, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_4590b8c0f74707764fde967db07945d3_6);
        assert(Py_REFCNT(frame_4590b8c0f74707764fde967db07945d3_6) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_5;
            PyObject *tmp_annotations_15;
            PyObject *tmp_dict_key_16;
            PyObject *tmp_dict_value_16;
            struct Nuitka_CellObject *tmp_closure_5[1];
            tmp_defaults_5 = mod_consts[239];
            tmp_dict_key_16 = mod_consts[240];
            tmp_dict_value_16 = PyObject_GetItem(locals_torchvision$models$inception$$$class__5_InceptionD_289, mod_consts[225]);

            if (tmp_dict_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_16 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_16);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_annotations_15 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_54;
                PyObject *tmp_subscript_value_23;
                PyObject *tmp_expression_value_55;
                PyObject *tmp_subscript_value_24;
                PyObject *tmp_tuple_element_25;
                tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_16, tmp_dict_value_16);
                Py_DECREF(tmp_dict_value_16);
                assert(!(tmp_res != 0));
                tmp_dict_key_16 = mod_consts[242];
                tmp_expression_value_54 = PyObject_GetItem(locals_torchvision$models$inception$$$class__5_InceptionD_289, mod_consts[198]);

                if (tmp_expression_value_54 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[198]);

                        if (unlikely(tmp_expression_value_54 == NULL)) {
                            tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[198]);
                        }

                        if (tmp_expression_value_54 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 290;
                            type_description_2 = "c";
                            goto dict_build_exception_16;
                        }
                        Py_INCREF(tmp_expression_value_54);
                    } else {
                        goto dict_build_exception_16;
                    }
                }

                tmp_expression_value_55 = PyObject_GetItem(locals_torchvision$models$inception$$$class__5_InceptionD_289, mod_consts[196]);

                if (tmp_expression_value_55 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[196]);

                        if (unlikely(tmp_expression_value_55 == NULL)) {
                            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[196]);
                        }

                        if (tmp_expression_value_55 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_54);

                            exception_lineno = 290;
                            type_description_2 = "c";
                            goto dict_build_exception_16;
                        }
                        Py_INCREF(tmp_expression_value_55);
                    } else {
                        goto dict_build_exception_16;
                    }
                }

                tmp_tuple_element_25 = Py_Ellipsis;
                tmp_subscript_value_24 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_56;
                    PyTuple_SET_ITEM0(tmp_subscript_value_24, 0, tmp_tuple_element_25);
                    tmp_expression_value_56 = PyObject_GetItem(locals_torchvision$models$inception$$$class__5_InceptionD_289, mod_consts[32]);

                    if (tmp_expression_value_56 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[32]);

                            if (unlikely(tmp_expression_value_56 == NULL)) {
                                tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                            }

                            if (tmp_expression_value_56 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 290;
                                type_description_2 = "c";
                                goto tuple_build_exception_11;
                            }
                            Py_INCREF(tmp_expression_value_56);
                        } else {
                            goto tuple_build_exception_11;
                        }
                    }

                    tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[215]);
                    Py_DECREF(tmp_expression_value_56);
                    if (tmp_tuple_element_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 290;
                        type_description_2 = "c";
                        goto tuple_build_exception_11;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_24, 1, tmp_tuple_element_25);
                }
                goto tuple_build_noexception_11;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_11:;
                Py_DECREF(tmp_expression_value_54);
                Py_DECREF(tmp_expression_value_55);
                Py_DECREF(tmp_subscript_value_24);
                goto dict_build_exception_16;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_11:;
                tmp_subscript_value_23 = LOOKUP_SUBSCRIPT(tmp_expression_value_55, tmp_subscript_value_24);
                Py_DECREF(tmp_expression_value_55);
                Py_DECREF(tmp_subscript_value_24);
                if (tmp_subscript_value_23 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_54);

                    exception_lineno = 290;
                    type_description_2 = "c";
                    goto dict_build_exception_16;
                }
                tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_54, tmp_subscript_value_23);
                Py_DECREF(tmp_expression_value_54);
                Py_DECREF(tmp_subscript_value_23);
                if (tmp_dict_value_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 290;
                    type_description_2 = "c";
                    goto dict_build_exception_16;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_16, tmp_dict_value_16);
                Py_DECREF(tmp_dict_value_16);
                assert(!(tmp_res != 0));
                tmp_dict_key_16 = mod_consts[229];
                tmp_dict_value_16 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_16, tmp_dict_value_16);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_16;
            // Exception handling pass through code for dict_build:
            dict_build_exception_16:;
            Py_DECREF(tmp_annotations_15);
            goto frame_exception_exit_6;
            // Finished with no exception for dict_build:
            dict_build_noexception_16:;
            Py_INCREF(tmp_defaults_5);

            tmp_closure_5[0] = outline_4_var___class__;
            Py_INCREF(tmp_closure_5[0]);

            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$inception$$$function__15___init__(tmp_defaults_5, tmp_annotations_15, tmp_closure_5);

            tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__5_InceptionD_289, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_2 = "c";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_annotations_16;
            PyObject *tmp_dict_key_17;
            PyObject *tmp_dict_value_17;
            tmp_dict_key_17 = mod_consts[102];
            tmp_dict_value_17 = PyObject_GetItem(locals_torchvision$models$inception$$$class__5_InceptionD_289, mod_consts[204]);

            if (tmp_dict_value_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[204]);

                    if (unlikely(tmp_dict_value_17 == NULL)) {
                        tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
                    }

                    if (tmp_dict_value_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 302;
                        type_description_2 = "c";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_dict_value_17);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_annotations_16 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_57;
                PyObject *tmp_subscript_value_25;
                tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_17, tmp_dict_value_17);
                Py_DECREF(tmp_dict_value_17);
                assert(!(tmp_res != 0));
                tmp_dict_key_17 = mod_consts[229];
                tmp_expression_value_57 = PyObject_GetItem(locals_torchvision$models$inception$$$class__5_InceptionD_289, mod_consts[200]);

                if (tmp_expression_value_57 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[200]);

                        if (unlikely(tmp_expression_value_57 == NULL)) {
                            tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[200]);
                        }

                        if (tmp_expression_value_57 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 302;
                            type_description_2 = "c";
                            goto dict_build_exception_17;
                        }
                        Py_INCREF(tmp_expression_value_57);
                    } else {
                        goto dict_build_exception_17;
                    }
                }

                tmp_subscript_value_25 = PyObject_GetItem(locals_torchvision$models$inception$$$class__5_InceptionD_289, mod_consts[204]);

                if (tmp_subscript_value_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_25 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[204]);

                        if (unlikely(tmp_subscript_value_25 == NULL)) {
                            tmp_subscript_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
                        }

                        if (tmp_subscript_value_25 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_57);

                            exception_lineno = 302;
                            type_description_2 = "c";
                            goto dict_build_exception_17;
                        }
                        Py_INCREF(tmp_subscript_value_25);
                    } else {
                        goto dict_build_exception_17;
                    }
                }

                tmp_dict_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_57, tmp_subscript_value_25);
                Py_DECREF(tmp_expression_value_57);
                Py_DECREF(tmp_subscript_value_25);
                if (tmp_dict_value_17 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 302;
                    type_description_2 = "c";
                    goto dict_build_exception_17;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_17, tmp_dict_value_17);
                Py_DECREF(tmp_dict_value_17);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_17;
            // Exception handling pass through code for dict_build:
            dict_build_exception_17:;
            Py_DECREF(tmp_annotations_16);
            goto frame_exception_exit_6;
            // Finished with no exception for dict_build:
            dict_build_noexception_17:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$inception$$$function__16__forward(tmp_annotations_16);

            tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__5_InceptionD_289, mod_consts[106], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 302;
                type_description_2 = "c";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_annotations_17;
            PyObject *tmp_dict_key_18;
            PyObject *tmp_dict_value_18;
            tmp_dict_key_18 = mod_consts[102];
            tmp_dict_value_18 = PyObject_GetItem(locals_torchvision$models$inception$$$class__5_InceptionD_289, mod_consts[204]);

            if (tmp_dict_value_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_18 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[204]);

                    if (unlikely(tmp_dict_value_18 == NULL)) {
                        tmp_dict_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
                    }

                    if (tmp_dict_value_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 315;
                        type_description_2 = "c";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_dict_value_18);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_annotations_17 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[229];
            tmp_dict_value_18 = PyObject_GetItem(locals_torchvision$models$inception$$$class__5_InceptionD_289, mod_consts[204]);

            if (tmp_dict_value_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_18 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[204]);

                    if (unlikely(tmp_dict_value_18 == NULL)) {
                        tmp_dict_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
                    }

                    if (tmp_dict_value_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 315;
                        type_description_2 = "c";
                        goto dict_build_exception_18;
                    }
                    Py_INCREF(tmp_dict_value_18);
                } else {
                    goto dict_build_exception_18;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_18;
            // Exception handling pass through code for dict_build:
            dict_build_exception_18:;
            Py_DECREF(tmp_annotations_17);
            goto frame_exception_exit_6;
            // Finished with no exception for dict_build:
            dict_build_noexception_18:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$inception$$$function__17_forward(tmp_annotations_17);

            tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__5_InceptionD_289, mod_consts[236], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 315;
                type_description_2 = "c";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_4590b8c0f74707764fde967db07945d3_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_4590b8c0f74707764fde967db07945d3_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_4590b8c0f74707764fde967db07945d3_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_4590b8c0f74707764fde967db07945d3_6,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_4590b8c0f74707764fde967db07945d3_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_17;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_5 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;

                goto try_except_handler_17;
            }
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto branch_yes_15;
            } else {
                goto branch_no_15;
            }
        }
        branch_yes_15:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__5_InceptionD_289, mod_consts[238], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto try_except_handler_17;
        }
        branch_no_15:;
        {
            PyObject *tmp_assign_source_62;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_26;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_12 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_26 = mod_consts[7];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_26);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_26 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_26);
            tmp_tuple_element_26 = locals_torchvision$models$inception$$$class__5_InceptionD_289;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_26);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
            frame_fee381e33065d2681a1f143869d41738->m_frame.f_lineno = 289;
            tmp_assign_source_62 = CALL_FUNCTION(tmp_called_value_12, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;

                goto try_except_handler_17;
            }
            assert(Nuitka_Cell_GET(outline_4_var___class__) == NULL);
            PyCell_SET(outline_4_var___class__, tmp_assign_source_62);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_4_var___class__));
        tmp_assign_source_61 = Nuitka_Cell_GET(outline_4_var___class__);
        Py_INCREF(tmp_assign_source_61);
        goto try_return_handler_17;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        Py_DECREF(locals_torchvision$models$inception$$$class__5_InceptionD_289);
        locals_torchvision$models$inception$$$class__5_InceptionD_289 = NULL;
        goto try_return_handler_16;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_torchvision$models$inception$$$class__5_InceptionD_289);
        locals_torchvision$models$inception$$$class__5_InceptionD_289 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto try_except_handler_16;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 289;
        goto try_except_handler_15;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_61);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_class_creation_5__bases_orig);
    Py_DECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_5__bases);
    Py_DECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__metaclass);
    Py_DECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_tuple_element_27;
        PyObject *tmp_expression_value_58;
        tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_58 == NULL)) {
            tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_18;
        }
        tmp_tuple_element_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[215]);
        if (tmp_tuple_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_18;
        }
        tmp_assign_source_63 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_63, 0, tmp_tuple_element_27);
        assert(tmp_class_creation_6__bases_orig == NULL);
        tmp_class_creation_6__bases_orig = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_dircall_arg1_6;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dircall_arg1_6 = tmp_class_creation_6__bases_orig;
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_64 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_18;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_64;
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_65;
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_metaclass_value_6;
        nuitka_bool tmp_condition_result_21;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_subscript_value_26;
        PyObject *tmp_bases_value_6;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_18;
        }
        tmp_condition_result_21 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_value_59 = tmp_class_creation_6__bases;
        tmp_subscript_value_26 = mod_consts[14];
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_59, tmp_subscript_value_26, 0);
        if (tmp_type_arg_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_18;
        }
        tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
        Py_DECREF(tmp_type_arg_11);
        if (tmp_metaclass_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_18;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_6);
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_6 = tmp_class_creation_6__bases;
        tmp_assign_source_66 = SELECT_METACLASS(tmp_metaclass_value_6, tmp_bases_value_6);
        Py_DECREF(tmp_metaclass_value_6);
        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_18;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_66;
    }
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_expression_value_60;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_60 = tmp_class_creation_6__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_60, mod_consts[216]);
        tmp_condition_result_22 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_args_value_11;
        PyObject *tmp_tuple_element_28;
        PyObject *tmp_kwargs_value_11;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_61 = tmp_class_creation_6__metaclass;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[216]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_18;
        }
        tmp_tuple_element_28 = mod_consts[8];
        tmp_args_value_11 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_28);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_28 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_28);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_11 = tmp_class_creation_6__class_decl_dict;
        frame_fee381e33065d2681a1f143869d41738->m_frame.f_lineno = 320;
        tmp_assign_source_67 = CALL_FUNCTION(tmp_called_value_13, tmp_args_value_11, tmp_kwargs_value_11);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_value_11);
        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_18;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_67;
    }
    {
        bool tmp_condition_result_23;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_62;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_62 = tmp_class_creation_6__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_62, mod_consts[217]);
        tmp_operand_value_6 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_18;
        }
        tmp_condition_result_23 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_raise_value_6;
        PyObject *tmp_mod_expr_left_6;
        PyObject *tmp_mod_expr_right_6;
        PyObject *tmp_tuple_element_29;
        PyObject *tmp_getattr_target_6;
        PyObject *tmp_getattr_attr_6;
        PyObject *tmp_getattr_default_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_mod_expr_left_6 = mod_consts[218];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_getattr_target_6 = tmp_class_creation_6__metaclass;
        tmp_getattr_attr_6 = mod_consts[219];
        tmp_getattr_default_6 = mod_consts[220];
        tmp_tuple_element_29 = BUILTIN_GETATTR(tmp_getattr_target_6, tmp_getattr_attr_6, tmp_getattr_default_6);
        if (tmp_tuple_element_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_18;
        }
        tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_63;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_29);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_12 = tmp_class_creation_6__prepared;
            tmp_expression_value_63 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_value_63 == NULL));
            tmp_tuple_element_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[219]);
            Py_DECREF(tmp_expression_value_63);
            if (tmp_tuple_element_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_29);
        }
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_mod_expr_right_6);
        goto try_except_handler_18;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        Py_DECREF(tmp_mod_expr_right_6);
        if (tmp_raise_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_18;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 320;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_18;
    }
    branch_no_17:;
    goto branch_end_16;
    branch_no_16:;
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_68;
    }
    branch_end_16:;
    {
        PyObject *tmp_assign_source_69;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_torchvision$models$inception$$$class__6_InceptionE_320 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[221];
        tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__6_InceptionE_320, mod_consts[222], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_20;
        }
        tmp_dictset_value = mod_consts[8];
        tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__6_InceptionE_320, mod_consts[223], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_20;
        }
        frame_e45c297178d6a0bc5e2cf78ae0404705_7 = MAKE_CLASS_FRAME(codeobj_e45c297178d6a0bc5e2cf78ae0404705, module_torchvision$models$inception, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_e45c297178d6a0bc5e2cf78ae0404705_7);
        assert(Py_REFCNT(frame_e45c297178d6a0bc5e2cf78ae0404705_7) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_6;
            PyObject *tmp_annotations_18;
            PyObject *tmp_dict_key_19;
            PyObject *tmp_dict_value_19;
            struct Nuitka_CellObject *tmp_closure_6[1];
            tmp_defaults_6 = mod_consts[239];
            tmp_dict_key_19 = mod_consts[240];
            tmp_dict_value_19 = PyObject_GetItem(locals_torchvision$models$inception$$$class__6_InceptionE_320, mod_consts[225]);

            if (tmp_dict_value_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_19 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_19);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_annotations_18 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_64;
                PyObject *tmp_subscript_value_27;
                PyObject *tmp_expression_value_65;
                PyObject *tmp_subscript_value_28;
                PyObject *tmp_tuple_element_30;
                tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_19, tmp_dict_value_19);
                Py_DECREF(tmp_dict_value_19);
                assert(!(tmp_res != 0));
                tmp_dict_key_19 = mod_consts[242];
                tmp_expression_value_64 = PyObject_GetItem(locals_torchvision$models$inception$$$class__6_InceptionE_320, mod_consts[198]);

                if (tmp_expression_value_64 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[198]);

                        if (unlikely(tmp_expression_value_64 == NULL)) {
                            tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[198]);
                        }

                        if (tmp_expression_value_64 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 321;
                            type_description_2 = "c";
                            goto dict_build_exception_19;
                        }
                        Py_INCREF(tmp_expression_value_64);
                    } else {
                        goto dict_build_exception_19;
                    }
                }

                tmp_expression_value_65 = PyObject_GetItem(locals_torchvision$models$inception$$$class__6_InceptionE_320, mod_consts[196]);

                if (tmp_expression_value_65 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[196]);

                        if (unlikely(tmp_expression_value_65 == NULL)) {
                            tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[196]);
                        }

                        if (tmp_expression_value_65 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_64);

                            exception_lineno = 321;
                            type_description_2 = "c";
                            goto dict_build_exception_19;
                        }
                        Py_INCREF(tmp_expression_value_65);
                    } else {
                        goto dict_build_exception_19;
                    }
                }

                tmp_tuple_element_30 = Py_Ellipsis;
                tmp_subscript_value_28 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_66;
                    PyTuple_SET_ITEM0(tmp_subscript_value_28, 0, tmp_tuple_element_30);
                    tmp_expression_value_66 = PyObject_GetItem(locals_torchvision$models$inception$$$class__6_InceptionE_320, mod_consts[32]);

                    if (tmp_expression_value_66 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[32]);

                            if (unlikely(tmp_expression_value_66 == NULL)) {
                                tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                            }

                            if (tmp_expression_value_66 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 321;
                                type_description_2 = "c";
                                goto tuple_build_exception_13;
                            }
                            Py_INCREF(tmp_expression_value_66);
                        } else {
                            goto tuple_build_exception_13;
                        }
                    }

                    tmp_tuple_element_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[215]);
                    Py_DECREF(tmp_expression_value_66);
                    if (tmp_tuple_element_30 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 321;
                        type_description_2 = "c";
                        goto tuple_build_exception_13;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_28, 1, tmp_tuple_element_30);
                }
                goto tuple_build_noexception_13;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_13:;
                Py_DECREF(tmp_expression_value_64);
                Py_DECREF(tmp_expression_value_65);
                Py_DECREF(tmp_subscript_value_28);
                goto dict_build_exception_19;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_13:;
                tmp_subscript_value_27 = LOOKUP_SUBSCRIPT(tmp_expression_value_65, tmp_subscript_value_28);
                Py_DECREF(tmp_expression_value_65);
                Py_DECREF(tmp_subscript_value_28);
                if (tmp_subscript_value_27 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_64);

                    exception_lineno = 321;
                    type_description_2 = "c";
                    goto dict_build_exception_19;
                }
                tmp_dict_value_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_64, tmp_subscript_value_27);
                Py_DECREF(tmp_expression_value_64);
                Py_DECREF(tmp_subscript_value_27);
                if (tmp_dict_value_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 321;
                    type_description_2 = "c";
                    goto dict_build_exception_19;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_19, tmp_dict_value_19);
                Py_DECREF(tmp_dict_value_19);
                assert(!(tmp_res != 0));
                tmp_dict_key_19 = mod_consts[229];
                tmp_dict_value_19 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_19, tmp_dict_value_19);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_19;
            // Exception handling pass through code for dict_build:
            dict_build_exception_19:;
            Py_DECREF(tmp_annotations_18);
            goto frame_exception_exit_7;
            // Finished with no exception for dict_build:
            dict_build_noexception_19:;
            Py_INCREF(tmp_defaults_6);

            tmp_closure_6[0] = outline_5_var___class__;
            Py_INCREF(tmp_closure_6[0]);

            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$inception$$$function__18___init__(tmp_defaults_6, tmp_annotations_18, tmp_closure_6);

            tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__6_InceptionE_320, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_annotations_19;
            PyObject *tmp_dict_key_20;
            PyObject *tmp_dict_value_20;
            tmp_dict_key_20 = mod_consts[102];
            tmp_dict_value_20 = PyObject_GetItem(locals_torchvision$models$inception$$$class__6_InceptionE_320, mod_consts[204]);

            if (tmp_dict_value_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_20 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[204]);

                    if (unlikely(tmp_dict_value_20 == NULL)) {
                        tmp_dict_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
                    }

                    if (tmp_dict_value_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 338;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_dict_value_20);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_annotations_19 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_67;
                PyObject *tmp_subscript_value_29;
                tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_20, tmp_dict_value_20);
                Py_DECREF(tmp_dict_value_20);
                assert(!(tmp_res != 0));
                tmp_dict_key_20 = mod_consts[229];
                tmp_expression_value_67 = PyObject_GetItem(locals_torchvision$models$inception$$$class__6_InceptionE_320, mod_consts[200]);

                if (tmp_expression_value_67 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[200]);

                        if (unlikely(tmp_expression_value_67 == NULL)) {
                            tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[200]);
                        }

                        if (tmp_expression_value_67 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 338;
                            type_description_2 = "c";
                            goto dict_build_exception_20;
                        }
                        Py_INCREF(tmp_expression_value_67);
                    } else {
                        goto dict_build_exception_20;
                    }
                }

                tmp_subscript_value_29 = PyObject_GetItem(locals_torchvision$models$inception$$$class__6_InceptionE_320, mod_consts[204]);

                if (tmp_subscript_value_29 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_29 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[204]);

                        if (unlikely(tmp_subscript_value_29 == NULL)) {
                            tmp_subscript_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
                        }

                        if (tmp_subscript_value_29 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_67);

                            exception_lineno = 338;
                            type_description_2 = "c";
                            goto dict_build_exception_20;
                        }
                        Py_INCREF(tmp_subscript_value_29);
                    } else {
                        goto dict_build_exception_20;
                    }
                }

                tmp_dict_value_20 = LOOKUP_SUBSCRIPT(tmp_expression_value_67, tmp_subscript_value_29);
                Py_DECREF(tmp_expression_value_67);
                Py_DECREF(tmp_subscript_value_29);
                if (tmp_dict_value_20 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 338;
                    type_description_2 = "c";
                    goto dict_build_exception_20;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_20, tmp_dict_value_20);
                Py_DECREF(tmp_dict_value_20);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_20;
            // Exception handling pass through code for dict_build:
            dict_build_exception_20:;
            Py_DECREF(tmp_annotations_19);
            goto frame_exception_exit_7;
            // Finished with no exception for dict_build:
            dict_build_noexception_20:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$inception$$$function__19__forward(tmp_annotations_19);

            tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__6_InceptionE_320, mod_consts[106], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_annotations_20;
            PyObject *tmp_dict_key_21;
            PyObject *tmp_dict_value_21;
            tmp_dict_key_21 = mod_consts[102];
            tmp_dict_value_21 = PyObject_GetItem(locals_torchvision$models$inception$$$class__6_InceptionE_320, mod_consts[204]);

            if (tmp_dict_value_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_21 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[204]);

                    if (unlikely(tmp_dict_value_21 == NULL)) {
                        tmp_dict_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
                    }

                    if (tmp_dict_value_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 362;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_dict_value_21);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_annotations_20 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_21, tmp_dict_value_21);
            Py_DECREF(tmp_dict_value_21);
            assert(!(tmp_res != 0));
            tmp_dict_key_21 = mod_consts[229];
            tmp_dict_value_21 = PyObject_GetItem(locals_torchvision$models$inception$$$class__6_InceptionE_320, mod_consts[204]);

            if (tmp_dict_value_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_21 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[204]);

                    if (unlikely(tmp_dict_value_21 == NULL)) {
                        tmp_dict_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
                    }

                    if (tmp_dict_value_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 362;
                        type_description_2 = "c";
                        goto dict_build_exception_21;
                    }
                    Py_INCREF(tmp_dict_value_21);
                } else {
                    goto dict_build_exception_21;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_21, tmp_dict_value_21);
            Py_DECREF(tmp_dict_value_21);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_21;
            // Exception handling pass through code for dict_build:
            dict_build_exception_21:;
            Py_DECREF(tmp_annotations_20);
            goto frame_exception_exit_7;
            // Finished with no exception for dict_build:
            dict_build_noexception_21:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$inception$$$function__20_forward(tmp_annotations_20);

            tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__6_InceptionE_320, mod_consts[236], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 362;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_e45c297178d6a0bc5e2cf78ae0404705_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_e45c297178d6a0bc5e2cf78ae0404705_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_e45c297178d6a0bc5e2cf78ae0404705_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_e45c297178d6a0bc5e2cf78ae0404705_7,
            type_description_2,
            outline_5_var___class__
        );



        assertFrameObject(frame_e45c297178d6a0bc5e2cf78ae0404705_7);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_20;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_cmp_expr_left_6 = tmp_class_creation_6__bases;
            CHECK_OBJECT(tmp_class_creation_6__bases_orig);
            tmp_cmp_expr_right_6 = tmp_class_creation_6__bases_orig;
            tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;

                goto try_except_handler_20;
            }
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto branch_yes_18;
            } else {
                goto branch_no_18;
            }
        }
        branch_yes_18:;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dictset_value = tmp_class_creation_6__bases_orig;
        tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__6_InceptionE_320, mod_consts[238], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_20;
        }
        branch_no_18:;
        {
            PyObject *tmp_assign_source_70;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_31;
            PyObject *tmp_kwargs_value_12;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_14 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_31 = mod_consts[8];
            tmp_args_value_12 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_31);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_31 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_31);
            tmp_tuple_element_31 = locals_torchvision$models$inception$$$class__6_InceptionE_320;
            PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_31);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_12 = tmp_class_creation_6__class_decl_dict;
            frame_fee381e33065d2681a1f143869d41738->m_frame.f_lineno = 320;
            tmp_assign_source_70 = CALL_FUNCTION(tmp_called_value_14, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;

                goto try_except_handler_20;
            }
            assert(Nuitka_Cell_GET(outline_5_var___class__) == NULL);
            PyCell_SET(outline_5_var___class__, tmp_assign_source_70);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_5_var___class__));
        tmp_assign_source_69 = Nuitka_Cell_GET(outline_5_var___class__);
        Py_INCREF(tmp_assign_source_69);
        goto try_return_handler_20;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_20:;
        Py_DECREF(locals_torchvision$models$inception$$$class__6_InceptionE_320);
        locals_torchvision$models$inception$$$class__6_InceptionE_320 = NULL;
        goto try_return_handler_19;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_torchvision$models$inception$$$class__6_InceptionE_320);
        locals_torchvision$models$inception$$$class__6_InceptionE_320 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto try_except_handler_19;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 320;
        goto try_except_handler_18;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_69);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_class_creation_6__bases_orig);
    Py_DECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_6__bases);
    Py_DECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    Py_DECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__metaclass);
    Py_DECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_tuple_element_32;
        PyObject *tmp_expression_value_68;
        tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_68 == NULL)) {
            tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto try_except_handler_21;
        }
        tmp_tuple_element_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[215]);
        if (tmp_tuple_element_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto try_except_handler_21;
        }
        tmp_assign_source_71 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_71, 0, tmp_tuple_element_32);
        assert(tmp_class_creation_7__bases_orig == NULL);
        tmp_class_creation_7__bases_orig = tmp_assign_source_71;
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_dircall_arg1_7;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dircall_arg1_7 = tmp_class_creation_7__bases_orig;
        Py_INCREF(tmp_dircall_arg1_7);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
            tmp_assign_source_72 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto try_except_handler_21;
        }
        assert(tmp_class_creation_7__bases == NULL);
        tmp_class_creation_7__bases = tmp_assign_source_72;
    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_73;
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_metaclass_value_7;
        nuitka_bool tmp_condition_result_25;
        int tmp_truth_name_7;
        PyObject *tmp_type_arg_13;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_subscript_value_30;
        PyObject *tmp_bases_value_7;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_creation_7__bases);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto try_except_handler_21;
        }
        tmp_condition_result_25 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_expression_value_69 = tmp_class_creation_7__bases;
        tmp_subscript_value_30 = mod_consts[14];
        tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_69, tmp_subscript_value_30, 0);
        if (tmp_type_arg_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto try_except_handler_21;
        }
        tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
        Py_DECREF(tmp_type_arg_13);
        if (tmp_metaclass_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto try_except_handler_21;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_7);
        condexpr_end_7:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_bases_value_7 = tmp_class_creation_7__bases;
        tmp_assign_source_74 = SELECT_METACLASS(tmp_metaclass_value_7, tmp_bases_value_7);
        Py_DECREF(tmp_metaclass_value_7);
        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto try_except_handler_21;
        }
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_74;
    }
    {
        nuitka_bool tmp_condition_result_26;
        PyObject *tmp_expression_value_70;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_70 = tmp_class_creation_7__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_70, mod_consts[216]);
        tmp_condition_result_26 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_args_value_13;
        PyObject *tmp_tuple_element_33;
        PyObject *tmp_kwargs_value_13;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_71 = tmp_class_creation_7__metaclass;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[216]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto try_except_handler_21;
        }
        tmp_tuple_element_33 = mod_consts[9];
        tmp_args_value_13 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_33);
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_tuple_element_33 = tmp_class_creation_7__bases;
        PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_33);
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_kwargs_value_13 = tmp_class_creation_7__class_decl_dict;
        frame_fee381e33065d2681a1f143869d41738->m_frame.f_lineno = 367;
        tmp_assign_source_75 = CALL_FUNCTION(tmp_called_value_15, tmp_args_value_13, tmp_kwargs_value_13);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_value_13);
        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto try_except_handler_21;
        }
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_75;
    }
    {
        bool tmp_condition_result_27;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_expression_value_72;
        CHECK_OBJECT(tmp_class_creation_7__prepared);
        tmp_expression_value_72 = tmp_class_creation_7__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_72, mod_consts[217]);
        tmp_operand_value_7 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto try_except_handler_21;
        }
        tmp_condition_result_27 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_27 != false) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_raise_value_7;
        PyObject *tmp_mod_expr_left_7;
        PyObject *tmp_mod_expr_right_7;
        PyObject *tmp_tuple_element_34;
        PyObject *tmp_getattr_target_7;
        PyObject *tmp_getattr_attr_7;
        PyObject *tmp_getattr_default_7;
        tmp_raise_type_7 = PyExc_TypeError;
        tmp_mod_expr_left_7 = mod_consts[218];
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_getattr_target_7 = tmp_class_creation_7__metaclass;
        tmp_getattr_attr_7 = mod_consts[219];
        tmp_getattr_default_7 = mod_consts[220];
        tmp_tuple_element_34 = BUILTIN_GETATTR(tmp_getattr_target_7, tmp_getattr_attr_7, tmp_getattr_default_7);
        if (tmp_tuple_element_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto try_except_handler_21;
        }
        tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_73;
            PyObject *tmp_type_arg_14;
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_34);
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_type_arg_14 = tmp_class_creation_7__prepared;
            tmp_expression_value_73 = BUILTIN_TYPE1(tmp_type_arg_14);
            assert(!(tmp_expression_value_73 == NULL));
            tmp_tuple_element_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[219]);
            Py_DECREF(tmp_expression_value_73);
            if (tmp_tuple_element_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 367;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_34);
        }
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_14:;
        Py_DECREF(tmp_mod_expr_right_7);
        goto try_except_handler_21;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;
        tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
        Py_DECREF(tmp_mod_expr_right_7);
        if (tmp_raise_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto try_except_handler_21;
        }
        exception_type = tmp_raise_type_7;
        Py_INCREF(tmp_raise_type_7);
        exception_value = tmp_raise_value_7;
        exception_lineno = 367;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_21;
    }
    branch_no_20:;
    goto branch_end_19;
    branch_no_19:;
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_76;
    }
    branch_end_19:;
    {
        PyObject *tmp_assign_source_77;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_torchvision$models$inception$$$class__7_InceptionAux_367 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[221];
        tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__7_InceptionAux_367, mod_consts[222], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto try_except_handler_23;
        }
        tmp_dictset_value = mod_consts[9];
        tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__7_InceptionAux_367, mod_consts[223], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto try_except_handler_23;
        }
        frame_7e3d01339c9819bf663f1c6e46c8b305_8 = MAKE_CLASS_FRAME(codeobj_7e3d01339c9819bf663f1c6e46c8b305, module_torchvision$models$inception, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_7e3d01339c9819bf663f1c6e46c8b305_8);
        assert(Py_REFCNT(frame_7e3d01339c9819bf663f1c6e46c8b305_8) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_7;
            PyObject *tmp_annotations_21;
            PyObject *tmp_dict_key_22;
            PyObject *tmp_dict_value_22;
            struct Nuitka_CellObject *tmp_closure_7[1];
            tmp_defaults_7 = mod_consts[239];
            tmp_dict_key_22 = mod_consts[240];
            tmp_dict_value_22 = PyObject_GetItem(locals_torchvision$models$inception$$$class__7_InceptionAux_367, mod_consts[225]);

            if (tmp_dict_value_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_22 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_22);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            tmp_annotations_21 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_value_74;
                PyObject *tmp_subscript_value_31;
                PyObject *tmp_expression_value_75;
                PyObject *tmp_subscript_value_32;
                PyObject *tmp_tuple_element_35;
                tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_22, tmp_dict_value_22);
                Py_DECREF(tmp_dict_value_22);
                assert(!(tmp_res != 0));
                tmp_dict_key_22 = mod_consts[74];
                tmp_dict_value_22 = PyObject_GetItem(locals_torchvision$models$inception$$$class__7_InceptionAux_367, mod_consts[225]);

                if (tmp_dict_value_22 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_22 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_22);
                    } else {
                        goto dict_build_exception_22;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_22, tmp_dict_value_22);
                Py_DECREF(tmp_dict_value_22);
                assert(!(tmp_res != 0));
                tmp_dict_key_22 = mod_consts[242];
                tmp_expression_value_74 = PyObject_GetItem(locals_torchvision$models$inception$$$class__7_InceptionAux_367, mod_consts[198]);

                if (tmp_expression_value_74 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[198]);

                        if (unlikely(tmp_expression_value_74 == NULL)) {
                            tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[198]);
                        }

                        if (tmp_expression_value_74 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 369;
                            type_description_2 = "c";
                            goto dict_build_exception_22;
                        }
                        Py_INCREF(tmp_expression_value_74);
                    } else {
                        goto dict_build_exception_22;
                    }
                }

                tmp_expression_value_75 = PyObject_GetItem(locals_torchvision$models$inception$$$class__7_InceptionAux_367, mod_consts[196]);

                if (tmp_expression_value_75 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[196]);

                        if (unlikely(tmp_expression_value_75 == NULL)) {
                            tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[196]);
                        }

                        if (tmp_expression_value_75 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_74);

                            exception_lineno = 369;
                            type_description_2 = "c";
                            goto dict_build_exception_22;
                        }
                        Py_INCREF(tmp_expression_value_75);
                    } else {
                        goto dict_build_exception_22;
                    }
                }

                tmp_tuple_element_35 = Py_Ellipsis;
                tmp_subscript_value_32 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_76;
                    PyTuple_SET_ITEM0(tmp_subscript_value_32, 0, tmp_tuple_element_35);
                    tmp_expression_value_76 = PyObject_GetItem(locals_torchvision$models$inception$$$class__7_InceptionAux_367, mod_consts[32]);

                    if (tmp_expression_value_76 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[32]);

                            if (unlikely(tmp_expression_value_76 == NULL)) {
                                tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                            }

                            if (tmp_expression_value_76 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 369;
                                type_description_2 = "c";
                                goto tuple_build_exception_15;
                            }
                            Py_INCREF(tmp_expression_value_76);
                        } else {
                            goto tuple_build_exception_15;
                        }
                    }

                    tmp_tuple_element_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_76, mod_consts[215]);
                    Py_DECREF(tmp_expression_value_76);
                    if (tmp_tuple_element_35 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 369;
                        type_description_2 = "c";
                        goto tuple_build_exception_15;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_32, 1, tmp_tuple_element_35);
                }
                goto tuple_build_noexception_15;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_15:;
                Py_DECREF(tmp_expression_value_74);
                Py_DECREF(tmp_expression_value_75);
                Py_DECREF(tmp_subscript_value_32);
                goto dict_build_exception_22;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_15:;
                tmp_subscript_value_31 = LOOKUP_SUBSCRIPT(tmp_expression_value_75, tmp_subscript_value_32);
                Py_DECREF(tmp_expression_value_75);
                Py_DECREF(tmp_subscript_value_32);
                if (tmp_subscript_value_31 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_74);

                    exception_lineno = 369;
                    type_description_2 = "c";
                    goto dict_build_exception_22;
                }
                tmp_dict_value_22 = LOOKUP_SUBSCRIPT(tmp_expression_value_74, tmp_subscript_value_31);
                Py_DECREF(tmp_expression_value_74);
                Py_DECREF(tmp_subscript_value_31);
                if (tmp_dict_value_22 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 369;
                    type_description_2 = "c";
                    goto dict_build_exception_22;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_22, tmp_dict_value_22);
                Py_DECREF(tmp_dict_value_22);
                assert(!(tmp_res != 0));
                tmp_dict_key_22 = mod_consts[229];
                tmp_dict_value_22 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_22, tmp_dict_value_22);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_22;
            // Exception handling pass through code for dict_build:
            dict_build_exception_22:;
            Py_DECREF(tmp_annotations_21);
            goto frame_exception_exit_8;
            // Finished with no exception for dict_build:
            dict_build_noexception_22:;
            Py_INCREF(tmp_defaults_7);

            tmp_closure_7[0] = outline_6_var___class__;
            Py_INCREF(tmp_closure_7[0]);

            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$inception$$$function__21___init__(tmp_defaults_7, tmp_annotations_21, tmp_closure_7);

            tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__7_InceptionAux_367, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 368;
                type_description_2 = "c";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_annotations_22;
            PyObject *tmp_dict_key_23;
            PyObject *tmp_dict_value_23;
            tmp_dict_key_23 = mod_consts[102];
            tmp_dict_value_23 = PyObject_GetItem(locals_torchvision$models$inception$$$class__7_InceptionAux_367, mod_consts[204]);

            if (tmp_dict_value_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_23 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[204]);

                    if (unlikely(tmp_dict_value_23 == NULL)) {
                        tmp_dict_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
                    }

                    if (tmp_dict_value_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 380;
                        type_description_2 = "c";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_dict_value_23);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            tmp_annotations_22 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_23, tmp_dict_value_23);
            Py_DECREF(tmp_dict_value_23);
            assert(!(tmp_res != 0));
            tmp_dict_key_23 = mod_consts[229];
            tmp_dict_value_23 = PyObject_GetItem(locals_torchvision$models$inception$$$class__7_InceptionAux_367, mod_consts[204]);

            if (tmp_dict_value_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_23 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[204]);

                    if (unlikely(tmp_dict_value_23 == NULL)) {
                        tmp_dict_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
                    }

                    if (tmp_dict_value_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 380;
                        type_description_2 = "c";
                        goto dict_build_exception_23;
                    }
                    Py_INCREF(tmp_dict_value_23);
                } else {
                    goto dict_build_exception_23;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_23, tmp_dict_value_23);
            Py_DECREF(tmp_dict_value_23);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_23;
            // Exception handling pass through code for dict_build:
            dict_build_exception_23:;
            Py_DECREF(tmp_annotations_22);
            goto frame_exception_exit_8;
            // Finished with no exception for dict_build:
            dict_build_noexception_23:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$inception$$$function__22_forward(tmp_annotations_22);

            tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__7_InceptionAux_367, mod_consts[236], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 380;
                type_description_2 = "c";
                goto frame_exception_exit_8;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_7;
        frame_exception_exit_8:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7e3d01339c9819bf663f1c6e46c8b305_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7e3d01339c9819bf663f1c6e46c8b305_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7e3d01339c9819bf663f1c6e46c8b305_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7e3d01339c9819bf663f1c6e46c8b305_8,
            type_description_2,
            outline_6_var___class__
        );



        assertFrameObject(frame_7e3d01339c9819bf663f1c6e46c8b305_8);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_7;
        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;

        goto try_except_handler_23;
        skip_nested_handling_7:;
        {
            nuitka_bool tmp_condition_result_28;
            PyObject *tmp_cmp_expr_left_7;
            PyObject *tmp_cmp_expr_right_7;
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_cmp_expr_left_7 = tmp_class_creation_7__bases;
            CHECK_OBJECT(tmp_class_creation_7__bases_orig);
            tmp_cmp_expr_right_7 = tmp_class_creation_7__bases_orig;
            tmp_condition_result_28 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
            if (tmp_condition_result_28 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 367;

                goto try_except_handler_23;
            }
            if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
                goto branch_yes_21;
            } else {
                goto branch_no_21;
            }
        }
        branch_yes_21:;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dictset_value = tmp_class_creation_7__bases_orig;
        tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__7_InceptionAux_367, mod_consts[238], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto try_except_handler_23;
        }
        branch_no_21:;
        {
            PyObject *tmp_assign_source_78;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_value_14;
            PyObject *tmp_tuple_element_36;
            PyObject *tmp_kwargs_value_14;
            CHECK_OBJECT(tmp_class_creation_7__metaclass);
            tmp_called_value_16 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_36 = mod_consts[9];
            tmp_args_value_14 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_36);
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_tuple_element_36 = tmp_class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_36);
            tmp_tuple_element_36 = locals_torchvision$models$inception$$$class__7_InceptionAux_367;
            PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_36);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_value_14 = tmp_class_creation_7__class_decl_dict;
            frame_fee381e33065d2681a1f143869d41738->m_frame.f_lineno = 367;
            tmp_assign_source_78 = CALL_FUNCTION(tmp_called_value_16, tmp_args_value_14, tmp_kwargs_value_14);
            Py_DECREF(tmp_args_value_14);
            if (tmp_assign_source_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 367;

                goto try_except_handler_23;
            }
            assert(Nuitka_Cell_GET(outline_6_var___class__) == NULL);
            PyCell_SET(outline_6_var___class__, tmp_assign_source_78);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_6_var___class__));
        tmp_assign_source_77 = Nuitka_Cell_GET(outline_6_var___class__);
        Py_INCREF(tmp_assign_source_77);
        goto try_return_handler_23;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_23:;
        Py_DECREF(locals_torchvision$models$inception$$$class__7_InceptionAux_367);
        locals_torchvision$models$inception$$$class__7_InceptionAux_367 = NULL;
        goto try_return_handler_22;
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

        Py_DECREF(locals_torchvision$models$inception$$$class__7_InceptionAux_367);
        locals_torchvision$models$inception$$$class__7_InceptionAux_367 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;
        exception_lineno = exception_keeper_lineno_21;

        goto try_except_handler_22;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_22:;
        CHECK_OBJECT(outline_6_var___class__);
        Py_DECREF(outline_6_var___class__);
        outline_6_var___class__ = NULL;
        goto outline_result_7;
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

        // Re-raise.
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;
        exception_lineno = exception_keeper_lineno_22;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 367;
        goto try_except_handler_21;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_77);
    }
    goto try_end_9;
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

    Py_XDECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    Py_XDECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_class_creation_7__bases_orig);
    Py_DECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_7__bases);
    Py_DECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    Py_DECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_7__metaclass);
    Py_DECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_7__prepared);
    Py_DECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_tuple_element_37;
        PyObject *tmp_expression_value_77;
        tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_77 == NULL)) {
            tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;

            goto try_except_handler_24;
        }
        tmp_tuple_element_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_77, mod_consts[215]);
        if (tmp_tuple_element_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;

            goto try_except_handler_24;
        }
        tmp_assign_source_79 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_79, 0, tmp_tuple_element_37);
        assert(tmp_class_creation_8__bases_orig == NULL);
        tmp_class_creation_8__bases_orig = tmp_assign_source_79;
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_dircall_arg1_8;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dircall_arg1_8 = tmp_class_creation_8__bases_orig;
        Py_INCREF(tmp_dircall_arg1_8);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
            tmp_assign_source_80 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;

            goto try_except_handler_24;
        }
        assert(tmp_class_creation_8__bases == NULL);
        tmp_class_creation_8__bases = tmp_assign_source_80;
    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_81;
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_metaclass_value_8;
        nuitka_bool tmp_condition_result_29;
        int tmp_truth_name_8;
        PyObject *tmp_type_arg_15;
        PyObject *tmp_expression_value_78;
        PyObject *tmp_subscript_value_33;
        PyObject *tmp_bases_value_8;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_creation_8__bases);
        if (tmp_truth_name_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;

            goto try_except_handler_24;
        }
        tmp_condition_result_29 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_expression_value_78 = tmp_class_creation_8__bases;
        tmp_subscript_value_33 = mod_consts[14];
        tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_78, tmp_subscript_value_33, 0);
        if (tmp_type_arg_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;

            goto try_except_handler_24;
        }
        tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
        Py_DECREF(tmp_type_arg_15);
        if (tmp_metaclass_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;

            goto try_except_handler_24;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_8);
        condexpr_end_8:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_bases_value_8 = tmp_class_creation_8__bases;
        tmp_assign_source_82 = SELECT_METACLASS(tmp_metaclass_value_8, tmp_bases_value_8);
        Py_DECREF(tmp_metaclass_value_8);
        if (tmp_assign_source_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;

            goto try_except_handler_24;
        }
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_82;
    }
    {
        nuitka_bool tmp_condition_result_30;
        PyObject *tmp_expression_value_79;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_79 = tmp_class_creation_8__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_79, mod_consts[216]);
        tmp_condition_result_30 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_80;
        PyObject *tmp_args_value_15;
        PyObject *tmp_tuple_element_38;
        PyObject *tmp_kwargs_value_15;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_80 = tmp_class_creation_8__metaclass;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_80, mod_consts[216]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;

            goto try_except_handler_24;
        }
        tmp_tuple_element_38 = mod_consts[3];
        tmp_args_value_15 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_38);
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_tuple_element_38 = tmp_class_creation_8__bases;
        PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_38);
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_kwargs_value_15 = tmp_class_creation_8__class_decl_dict;
        frame_fee381e33065d2681a1f143869d41738->m_frame.f_lineno = 398;
        tmp_assign_source_83 = CALL_FUNCTION(tmp_called_value_17, tmp_args_value_15, tmp_kwargs_value_15);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_value_15);
        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;

            goto try_except_handler_24;
        }
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_83;
    }
    {
        bool tmp_condition_result_31;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_expression_value_81;
        CHECK_OBJECT(tmp_class_creation_8__prepared);
        tmp_expression_value_81 = tmp_class_creation_8__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_81, mod_consts[217]);
        tmp_operand_value_8 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;

            goto try_except_handler_24;
        }
        tmp_condition_result_31 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_31 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_raise_type_8;
        PyObject *tmp_raise_value_8;
        PyObject *tmp_mod_expr_left_8;
        PyObject *tmp_mod_expr_right_8;
        PyObject *tmp_tuple_element_39;
        PyObject *tmp_getattr_target_8;
        PyObject *tmp_getattr_attr_8;
        PyObject *tmp_getattr_default_8;
        tmp_raise_type_8 = PyExc_TypeError;
        tmp_mod_expr_left_8 = mod_consts[218];
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_getattr_target_8 = tmp_class_creation_8__metaclass;
        tmp_getattr_attr_8 = mod_consts[219];
        tmp_getattr_default_8 = mod_consts[220];
        tmp_tuple_element_39 = BUILTIN_GETATTR(tmp_getattr_target_8, tmp_getattr_attr_8, tmp_getattr_default_8);
        if (tmp_tuple_element_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;

            goto try_except_handler_24;
        }
        tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_82;
            PyObject *tmp_type_arg_16;
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_39);
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_type_arg_16 = tmp_class_creation_8__prepared;
            tmp_expression_value_82 = BUILTIN_TYPE1(tmp_type_arg_16);
            assert(!(tmp_expression_value_82 == NULL));
            tmp_tuple_element_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_82, mod_consts[219]);
            Py_DECREF(tmp_expression_value_82);
            if (tmp_tuple_element_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 398;

                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_39);
        }
        goto tuple_build_noexception_16;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_16:;
        Py_DECREF(tmp_mod_expr_right_8);
        goto try_except_handler_24;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_16:;
        tmp_raise_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
        Py_DECREF(tmp_mod_expr_right_8);
        if (tmp_raise_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;

            goto try_except_handler_24;
        }
        exception_type = tmp_raise_type_8;
        Py_INCREF(tmp_raise_type_8);
        exception_value = tmp_raise_value_8;
        exception_lineno = 398;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_24;
    }
    branch_no_23:;
    goto branch_end_22;
    branch_no_22:;
    {
        PyObject *tmp_assign_source_84;
        tmp_assign_source_84 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_84;
    }
    branch_end_22:;
    {
        PyObject *tmp_assign_source_85;
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_torchvision$models$inception$$$class__8_BasicConv2d_398 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[221];
        tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__8_BasicConv2d_398, mod_consts[222], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;

            goto try_except_handler_26;
        }
        tmp_dictset_value = mod_consts[3];
        tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__8_BasicConv2d_398, mod_consts[223], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;

            goto try_except_handler_26;
        }
        frame_f5e284857cba51a86df7665aec7ef801_9 = MAKE_CLASS_FRAME(codeobj_f5e284857cba51a86df7665aec7ef801, module_torchvision$models$inception, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_f5e284857cba51a86df7665aec7ef801_9);
        assert(Py_REFCNT(frame_f5e284857cba51a86df7665aec7ef801_9) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_23;
            PyObject *tmp_dict_key_24;
            PyObject *tmp_dict_value_24;
            struct Nuitka_CellObject *tmp_closure_8[1];
            tmp_dict_key_24 = mod_consts[240];
            tmp_dict_value_24 = PyObject_GetItem(locals_torchvision$models$inception$$$class__8_BasicConv2d_398, mod_consts[225]);

            if (tmp_dict_value_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_24 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_24);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            tmp_annotations_23 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_24, tmp_dict_value_24);
            Py_DECREF(tmp_dict_value_24);
            assert(!(tmp_res != 0));
            tmp_dict_key_24 = mod_consts[261];
            tmp_dict_value_24 = PyObject_GetItem(locals_torchvision$models$inception$$$class__8_BasicConv2d_398, mod_consts[225]);

            if (tmp_dict_value_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_24 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_24);
                } else {
                    goto dict_build_exception_24;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_24, tmp_dict_value_24);
            Py_DECREF(tmp_dict_value_24);
            assert(!(tmp_res != 0));
            tmp_dict_key_24 = mod_consts[178];
            tmp_dict_value_24 = PyObject_GetItem(locals_torchvision$models$inception$$$class__8_BasicConv2d_398, mod_consts[197]);

            if (tmp_dict_value_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_24 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[197]);

                    if (unlikely(tmp_dict_value_24 == NULL)) {
                        tmp_dict_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
                    }

                    if (tmp_dict_value_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 399;
                        type_description_2 = "c";
                        goto dict_build_exception_24;
                    }
                    Py_INCREF(tmp_dict_value_24);
                } else {
                    goto dict_build_exception_24;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_24, tmp_dict_value_24);
            Py_DECREF(tmp_dict_value_24);
            assert(!(tmp_res != 0));
            tmp_dict_key_24 = mod_consts[229];
            tmp_dict_value_24 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_24, tmp_dict_value_24);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_24;
            // Exception handling pass through code for dict_build:
            dict_build_exception_24:;
            Py_DECREF(tmp_annotations_23);
            goto frame_exception_exit_9;
            // Finished with no exception for dict_build:
            dict_build_noexception_24:;

            tmp_closure_8[0] = outline_7_var___class__;
            Py_INCREF(tmp_closure_8[0]);

            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$inception$$$function__23___init__(tmp_annotations_23, tmp_closure_8);

            tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__8_BasicConv2d_398, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 399;
                type_description_2 = "c";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_annotations_24;
            PyObject *tmp_dict_key_25;
            PyObject *tmp_dict_value_25;
            tmp_dict_key_25 = mod_consts[102];
            tmp_dict_value_25 = PyObject_GetItem(locals_torchvision$models$inception$$$class__8_BasicConv2d_398, mod_consts[204]);

            if (tmp_dict_value_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_25 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[204]);

                    if (unlikely(tmp_dict_value_25 == NULL)) {
                        tmp_dict_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
                    }

                    if (tmp_dict_value_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 404;
                        type_description_2 = "c";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_dict_value_25);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            tmp_annotations_24 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_25, tmp_dict_value_25);
            Py_DECREF(tmp_dict_value_25);
            assert(!(tmp_res != 0));
            tmp_dict_key_25 = mod_consts[229];
            tmp_dict_value_25 = PyObject_GetItem(locals_torchvision$models$inception$$$class__8_BasicConv2d_398, mod_consts[204]);

            if (tmp_dict_value_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_25 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[204]);

                    if (unlikely(tmp_dict_value_25 == NULL)) {
                        tmp_dict_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
                    }

                    if (tmp_dict_value_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 404;
                        type_description_2 = "c";
                        goto dict_build_exception_25;
                    }
                    Py_INCREF(tmp_dict_value_25);
                } else {
                    goto dict_build_exception_25;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_25, tmp_dict_value_25);
            Py_DECREF(tmp_dict_value_25);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_25;
            // Exception handling pass through code for dict_build:
            dict_build_exception_25:;
            Py_DECREF(tmp_annotations_24);
            goto frame_exception_exit_9;
            // Finished with no exception for dict_build:
            dict_build_noexception_25:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$inception$$$function__24_forward(tmp_annotations_24);

            tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__8_BasicConv2d_398, mod_consts[236], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 404;
                type_description_2 = "c";
                goto frame_exception_exit_9;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_8;
        frame_exception_exit_9:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f5e284857cba51a86df7665aec7ef801_9, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f5e284857cba51a86df7665aec7ef801_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f5e284857cba51a86df7665aec7ef801_9, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f5e284857cba51a86df7665aec7ef801_9,
            type_description_2,
            outline_7_var___class__
        );



        assertFrameObject(frame_f5e284857cba51a86df7665aec7ef801_9);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_8;
        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_8:;

        goto try_except_handler_26;
        skip_nested_handling_8:;
        {
            nuitka_bool tmp_condition_result_32;
            PyObject *tmp_cmp_expr_left_8;
            PyObject *tmp_cmp_expr_right_8;
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_cmp_expr_left_8 = tmp_class_creation_8__bases;
            CHECK_OBJECT(tmp_class_creation_8__bases_orig);
            tmp_cmp_expr_right_8 = tmp_class_creation_8__bases_orig;
            tmp_condition_result_32 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
            if (tmp_condition_result_32 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 398;

                goto try_except_handler_26;
            }
            if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
                goto branch_yes_24;
            } else {
                goto branch_no_24;
            }
        }
        branch_yes_24:;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dictset_value = tmp_class_creation_8__bases_orig;
        tmp_res = PyObject_SetItem(locals_torchvision$models$inception$$$class__8_BasicConv2d_398, mod_consts[238], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;

            goto try_except_handler_26;
        }
        branch_no_24:;
        {
            PyObject *tmp_assign_source_86;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_value_16;
            PyObject *tmp_tuple_element_40;
            PyObject *tmp_kwargs_value_16;
            CHECK_OBJECT(tmp_class_creation_8__metaclass);
            tmp_called_value_18 = tmp_class_creation_8__metaclass;
            tmp_tuple_element_40 = mod_consts[3];
            tmp_args_value_16 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_40);
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_tuple_element_40 = tmp_class_creation_8__bases;
            PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_40);
            tmp_tuple_element_40 = locals_torchvision$models$inception$$$class__8_BasicConv2d_398;
            PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_40);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_value_16 = tmp_class_creation_8__class_decl_dict;
            frame_fee381e33065d2681a1f143869d41738->m_frame.f_lineno = 398;
            tmp_assign_source_86 = CALL_FUNCTION(tmp_called_value_18, tmp_args_value_16, tmp_kwargs_value_16);
            Py_DECREF(tmp_args_value_16);
            if (tmp_assign_source_86 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 398;

                goto try_except_handler_26;
            }
            assert(Nuitka_Cell_GET(outline_7_var___class__) == NULL);
            PyCell_SET(outline_7_var___class__, tmp_assign_source_86);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_7_var___class__));
        tmp_assign_source_85 = Nuitka_Cell_GET(outline_7_var___class__);
        Py_INCREF(tmp_assign_source_85);
        goto try_return_handler_26;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_26:;
        Py_DECREF(locals_torchvision$models$inception$$$class__8_BasicConv2d_398);
        locals_torchvision$models$inception$$$class__8_BasicConv2d_398 = NULL;
        goto try_return_handler_25;
        // Exception handler code:
        try_except_handler_26:;
        exception_keeper_type_24 = exception_type;
        exception_keeper_value_24 = exception_value;
        exception_keeper_tb_24 = exception_tb;
        exception_keeper_lineno_24 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_torchvision$models$inception$$$class__8_BasicConv2d_398);
        locals_torchvision$models$inception$$$class__8_BasicConv2d_398 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_24;
        exception_value = exception_keeper_value_24;
        exception_tb = exception_keeper_tb_24;
        exception_lineno = exception_keeper_lineno_24;

        goto try_except_handler_25;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_25:;
        CHECK_OBJECT(outline_7_var___class__);
        Py_DECREF(outline_7_var___class__);
        outline_7_var___class__ = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_25:;
        exception_keeper_type_25 = exception_type;
        exception_keeper_value_25 = exception_value;
        exception_keeper_tb_25 = exception_tb;
        exception_keeper_lineno_25 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_25;
        exception_value = exception_keeper_value_25;
        exception_tb = exception_keeper_tb_25;
        exception_lineno = exception_keeper_lineno_25;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 398;
        goto try_except_handler_24;
        outline_result_8:;
        UPDATE_STRING_DICT1(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_85);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    Py_XDECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_class_creation_8__bases_orig);
    Py_DECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_8__bases);
    Py_DECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    Py_DECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_8__metaclass);
    Py_DECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_8__prepared);
    Py_DECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_defaults_8;
        PyObject *tmp_annotations_25;
        PyObject *tmp_dict_key_26;
        PyObject *tmp_dict_value_26;
        tmp_defaults_8 = mod_consts[264];
        tmp_dict_key_26 = mod_consts[265];
        tmp_dict_value_26 = (PyObject *)&PyBool_Type;
        tmp_annotations_25 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_26, tmp_dict_value_26);
        assert(!(tmp_res != 0));
        tmp_dict_key_26 = mod_consts[266];
        tmp_dict_value_26 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_26, tmp_dict_value_26);
        assert(!(tmp_res != 0));
        tmp_dict_key_26 = mod_consts[178];
        tmp_dict_value_26 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_dict_value_26 == NULL)) {
            tmp_dict_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
        }

        if (tmp_dict_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;

            goto dict_build_exception_26;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_26, tmp_dict_value_26);
        assert(!(tmp_res != 0));
        tmp_dict_key_26 = mod_consts[229];
        tmp_dict_value_26 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_dict_value_26 == NULL)) {
            tmp_dict_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[180]);
        }

        if (tmp_dict_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;

            goto dict_build_exception_26;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_26, tmp_dict_value_26);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_26;
        // Exception handling pass through code for dict_build:
        dict_build_exception_26:;
        Py_DECREF(tmp_annotations_25);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_26:;
        Py_INCREF(tmp_defaults_8);


        tmp_assign_source_87 = MAKE_FUNCTION_torchvision$models$inception$$$function__25_inception_v3(tmp_defaults_8, tmp_annotations_25);

        UPDATE_STRING_DICT1(moduledict_torchvision$models$inception, (Nuitka_StringObject *)mod_consts[267], tmp_assign_source_87);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_9;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fee381e33065d2681a1f143869d41738, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fee381e33065d2681a1f143869d41738->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fee381e33065d2681a1f143869d41738, exception_lineno);
    }



    assertFrameObject(frame_fee381e33065d2681a1f143869d41738);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_9:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torchvision.models.inception", false);

    Py_INCREF(module_torchvision$models$inception);
    return module_torchvision$models$inception;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$models$inception, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torchvision$models$inception", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
