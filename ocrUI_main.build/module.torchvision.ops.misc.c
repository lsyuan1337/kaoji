/* Generated code for Python module 'torchvision.ops.misc'
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

/* The "module_torchvision$ops$misc" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torchvision$ops$misc;
PyDictObject *moduledict_torchvision$ops$misc;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[122];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[122];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torchvision.ops.misc"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 122; i++) {
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
void checkModuleConstants_torchvision$ops$misc(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 122; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_2972aa1654bd7e0dbf0e21aac6d48ee7;
static PyCodeObject *codeobj_3301e93299f690b440db026f3c11f4ab;
static PyCodeObject *codeobj_ae58579e18ebfed3a857f257f34b390a;
static PyCodeObject *codeobj_3e30df65421bcecdece9efb6c042e690;
static PyCodeObject *codeobj_eb6f4e920491460c25e402e7ca2d688d;
static PyCodeObject *codeobj_e4d731f63562f27c16908375012882f3;
static PyCodeObject *codeobj_cabec8333419cf828554aae80dd55c76;
static PyCodeObject *codeobj_356987a201628bbe9a1809efb918ceba;
static PyCodeObject *codeobj_0461f5006daed7cf5ed1966aad8b76e5;
static PyCodeObject *codeobj_1df1a41bd4cc749b98a155b1ef5441e6;
static PyCodeObject *codeobj_2577be3906d5f8af06eb48ae6281fa46;
static PyCodeObject *codeobj_e8e74df8b87a8d2dee370d0f7f225a36;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[112]); CHECK_OBJECT(module_filename_obj);
    codeobj_2972aa1654bd7e0dbf0e21aac6d48ee7 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[113], mod_consts[113], NULL, NULL, 0, 0, 0);
    codeobj_3301e93299f690b440db026f3c11f4ab = MAKE_CODE_OBJECT(module_filename_obj, 68, CO_NOFREE, mod_consts[91], mod_consts[91], mod_consts[114], NULL, 0, 0, 0);
    codeobj_ae58579e18ebfed3a857f257f34b390a = MAKE_CODE_OBJECT(module_filename_obj, 13, CO_NOFREE, mod_consts[59], mod_consts[59], mod_consts[114], NULL, 0, 0, 0);
    codeobj_3e30df65421bcecdece9efb6c042e690 = MAKE_CODE_OBJECT(module_filename_obj, 127, CO_NOFREE, mod_consts[103], mod_consts[103], mod_consts[114], NULL, 0, 0, 0);
    codeobj_eb6f4e920491460c25e402e7ca2d688d = MAKE_CODE_OBJECT(module_filename_obj, 87, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[1], mod_consts[115], mod_consts[114], 12, 0, 0);
    codeobj_e4d731f63562f27c16908375012882f3 = MAKE_CODE_OBJECT(module_filename_obj, 139, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[1], mod_consts[116], mod_consts[114], 5, 0, 0);
    codeobj_cabec8333419cf828554aae80dd55c76 = MAKE_CODE_OBJECT(module_filename_obj, 22, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[1], mod_consts[117], mod_consts[114], 3, 0, 0);
    codeobj_356987a201628bbe9a1809efb918ceba = MAKE_CODE_OBJECT(module_filename_obj, 64, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[87], mod_consts[87], mod_consts[118], NULL, 1, 0, 0);
    codeobj_0461f5006daed7cf5ed1966aad8b76e5 = MAKE_CODE_OBJECT(module_filename_obj, 35, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[13], mod_consts[13], mod_consts[119], mod_consts[114], 8, 0, 0);
    codeobj_1df1a41bd4cc749b98a155b1ef5441e6 = MAKE_CODE_OBJECT(module_filename_obj, 154, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[41], mod_consts[41], mod_consts[120], NULL, 2, 0, 0);
    codeobj_2577be3906d5f8af06eb48ae6281fa46 = MAKE_CODE_OBJECT(module_filename_obj, 161, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[85], mod_consts[85], mod_consts[120], NULL, 2, 0, 0);
    codeobj_e8e74df8b87a8d2dee370d0f7f225a36 = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[85], mod_consts[85], mod_consts[121], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__8_complex_call_helper_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4_complex_call_helper_star_list(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_torchvision$ops$misc$$$function__1___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torchvision$ops$misc$$$function__2__load_from_state_dict(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torchvision$ops$misc$$$function__3_forward(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$ops$misc$$$function__4___repr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$ops$misc$$$function__5___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torchvision$ops$misc$$$function__6___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torchvision$ops$misc$$$function__7__scale(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$ops$misc$$$function__8_forward(PyObject *annotations);


// The module function definitions.
static PyObject *impl_torchvision$ops$misc$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_num_features = python_pars[1];
    PyObject *par_eps = python_pars[2];
    struct Nuitka_FrameObject *frame_cabec8333419cf828554aae80dd55c76;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_cabec8333419cf828554aae80dd55c76 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cabec8333419cf828554aae80dd55c76)) {
        Py_XDECREF(cache_frame_cabec8333419cf828554aae80dd55c76);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cabec8333419cf828554aae80dd55c76 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cabec8333419cf828554aae80dd55c76 = MAKE_FUNCTION_FRAME(codeobj_cabec8333419cf828554aae80dd55c76, module_torchvision$ops$misc, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cabec8333419cf828554aae80dd55c76->m_type_description == NULL);
    frame_cabec8333419cf828554aae80dd55c76 = cache_frame_cabec8333419cf828554aae80dd55c76;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cabec8333419cf828554aae80dd55c76);
    assert(Py_REFCNT(frame_cabec8333419cf828554aae80dd55c76) == 2);

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

            exception_lineno = 27;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_torchvision$ops$misc, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        frame_cabec8333419cf828554aae80dd55c76->m_frame.f_lineno = 27;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[1]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_cabec8333419cf828554aae80dd55c76->m_frame.f_lineno = 28;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_eps);
        tmp_assattr_value_1 = par_eps;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[5];
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 30;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_num_features);
        tmp_args_element_value_4 = par_num_features;
        frame_cabec8333419cf828554aae80dd55c76->m_frame.f_lineno = 30;
        tmp_args_element_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[7], tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 30;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        frame_cabec8333419cf828554aae80dd55c76->m_frame.f_lineno = 30;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[4]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = mod_consts[8];
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 31;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_num_features);
        tmp_args_element_value_7 = par_num_features;
        frame_cabec8333419cf828554aae80dd55c76->m_frame.f_lineno = 31;
        tmp_args_element_value_6 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[9], tmp_args_element_value_7);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 31;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        frame_cabec8333419cf828554aae80dd55c76->m_frame.f_lineno = 31;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[4]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = mod_consts[10];
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 32;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_num_features);
        tmp_args_element_value_10 = par_num_features;
        frame_cabec8333419cf828554aae80dd55c76->m_frame.f_lineno = 32;
        tmp_args_element_value_9 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[9], tmp_args_element_value_10);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 32;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        frame_cabec8333419cf828554aae80dd55c76->m_frame.f_lineno = 32;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_13;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[4]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = mod_consts[11];
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 33;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_num_features);
        tmp_args_element_value_13 = par_num_features;
        frame_cabec8333419cf828554aae80dd55c76->m_frame.f_lineno = 33;
        tmp_args_element_value_12 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[7], tmp_args_element_value_13);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 33;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        frame_cabec8333419cf828554aae80dd55c76->m_frame.f_lineno = 33;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cabec8333419cf828554aae80dd55c76, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cabec8333419cf828554aae80dd55c76->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cabec8333419cf828554aae80dd55c76, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cabec8333419cf828554aae80dd55c76,
        type_description_1,
        par_self,
        par_num_features,
        par_eps,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_cabec8333419cf828554aae80dd55c76 == cache_frame_cabec8333419cf828554aae80dd55c76) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cabec8333419cf828554aae80dd55c76);
        cache_frame_cabec8333419cf828554aae80dd55c76 = NULL;
    }

    assertFrameObject(frame_cabec8333419cf828554aae80dd55c76);

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
    CHECK_OBJECT(par_num_features);
    Py_DECREF(par_num_features);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_num_features);
    Py_DECREF(par_num_features);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$ops$misc$$$function__2__load_from_state_dict(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
    PyObject *var_num_batches_tracked_key = NULL;
    struct Nuitka_FrameObject *frame_0461f5006daed7cf5ed1966aad8b76e5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_0461f5006daed7cf5ed1966aad8b76e5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0461f5006daed7cf5ed1966aad8b76e5)) {
        Py_XDECREF(cache_frame_0461f5006daed7cf5ed1966aad8b76e5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0461f5006daed7cf5ed1966aad8b76e5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0461f5006daed7cf5ed1966aad8b76e5 = MAKE_FUNCTION_FRAME(codeobj_0461f5006daed7cf5ed1966aad8b76e5, module_torchvision$ops$misc, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0461f5006daed7cf5ed1966aad8b76e5->m_type_description == NULL);
    frame_0461f5006daed7cf5ed1966aad8b76e5 = cache_frame_0461f5006daed7cf5ed1966aad8b76e5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0461f5006daed7cf5ed1966aad8b76e5);
    assert(Py_REFCNT(frame_0461f5006daed7cf5ed1966aad8b76e5) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        CHECK_OBJECT(par_prefix);
        tmp_add_expr_left_1 = par_prefix;
        tmp_add_expr_right_1 = mod_consts[12];
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_num_batches_tracked_key == NULL);
        var_num_batches_tracked_key = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_num_batches_tracked_key);
        tmp_cmp_expr_left_1 = var_num_batches_tracked_key;
        CHECK_OBJECT(par_state_dict);
        tmp_cmp_expr_right_1 = par_state_dict;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooooooooc";
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
        PyObject *tmp_delsubscr_target_1;
        PyObject *tmp_delsubscr_subscript_1;
        CHECK_OBJECT(par_state_dict);
        tmp_delsubscr_target_1 = par_state_dict;
        CHECK_OBJECT(var_num_batches_tracked_key);
        tmp_delsubscr_subscript_1 = var_num_batches_tracked_key;
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 49;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_torchvision$ops$misc, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state_dict);
        tmp_args_element_value_1 = par_state_dict;
        CHECK_OBJECT(par_prefix);
        tmp_args_element_value_2 = par_prefix;
        CHECK_OBJECT(par_local_metadata);
        tmp_args_element_value_3 = par_local_metadata;
        CHECK_OBJECT(par_strict);
        tmp_args_element_value_4 = par_strict;
        CHECK_OBJECT(par_missing_keys);
        tmp_args_element_value_5 = par_missing_keys;
        CHECK_OBJECT(par_unexpected_keys);
        tmp_args_element_value_6 = par_unexpected_keys;
        CHECK_OBJECT(par_error_msgs);
        tmp_args_element_value_7 = par_error_msgs;
        frame_0461f5006daed7cf5ed1966aad8b76e5->m_frame.f_lineno = 49;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS7(
                tmp_called_instance_1,
                mod_consts[13],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0461f5006daed7cf5ed1966aad8b76e5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0461f5006daed7cf5ed1966aad8b76e5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0461f5006daed7cf5ed1966aad8b76e5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0461f5006daed7cf5ed1966aad8b76e5,
        type_description_1,
        par_self,
        par_state_dict,
        par_prefix,
        par_local_metadata,
        par_strict,
        par_missing_keys,
        par_unexpected_keys,
        par_error_msgs,
        var_num_batches_tracked_key,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_0461f5006daed7cf5ed1966aad8b76e5 == cache_frame_0461f5006daed7cf5ed1966aad8b76e5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0461f5006daed7cf5ed1966aad8b76e5);
        cache_frame_0461f5006daed7cf5ed1966aad8b76e5 = NULL;
    }

    assertFrameObject(frame_0461f5006daed7cf5ed1966aad8b76e5);

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
    CHECK_OBJECT(var_num_batches_tracked_key);
    Py_DECREF(var_num_batches_tracked_key);
    var_num_batches_tracked_key = NULL;
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

    Py_XDECREF(var_num_batches_tracked_key);
    var_num_batches_tracked_key = NULL;
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


static PyObject *impl_torchvision$ops$misc$$$function__3_forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *var_w = NULL;
    PyObject *var_b = NULL;
    PyObject *var_rv = NULL;
    PyObject *var_rm = NULL;
    PyObject *var_scale = NULL;
    PyObject *var_bias = NULL;
    struct Nuitka_FrameObject *frame_e8e74df8b87a8d2dee370d0f7f225a36;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e8e74df8b87a8d2dee370d0f7f225a36 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e8e74df8b87a8d2dee370d0f7f225a36)) {
        Py_XDECREF(cache_frame_e8e74df8b87a8d2dee370d0f7f225a36);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e8e74df8b87a8d2dee370d0f7f225a36 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e8e74df8b87a8d2dee370d0f7f225a36 = MAKE_FUNCTION_FRAME(codeobj_e8e74df8b87a8d2dee370d0f7f225a36, module_torchvision$ops$misc, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e8e74df8b87a8d2dee370d0f7f225a36->m_type_description == NULL);
    frame_e8e74df8b87a8d2dee370d0f7f225a36 = cache_frame_e8e74df8b87a8d2dee370d0f7f225a36;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e8e74df8b87a8d2dee370d0f7f225a36);
    assert(Py_REFCNT(frame_e8e74df8b87a8d2dee370d0f7f225a36) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_e8e74df8b87a8d2dee370d0f7f225a36->m_frame.f_lineno = 56;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS4(
            tmp_called_instance_1,
            mod_consts[14],
            &PyTuple_GET_ITEM(mod_consts[15], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_w == NULL);
        var_w = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[8]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_e8e74df8b87a8d2dee370d0f7f225a36->m_frame.f_lineno = 57;
        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS4(
            tmp_called_instance_2,
            mod_consts[14],
            &PyTuple_GET_ITEM(mod_consts[15], 0)
        );

        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_b == NULL);
        var_b = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[11]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_e8e74df8b87a8d2dee370d0f7f225a36->m_frame.f_lineno = 58;
        tmp_assign_source_3 = CALL_METHOD_WITH_ARGS4(
            tmp_called_instance_3,
            mod_consts[14],
            &PyTuple_GET_ITEM(mod_consts[15], 0)
        );

        Py_DECREF(tmp_called_instance_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_rv == NULL);
        var_rv = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[10]);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_e8e74df8b87a8d2dee370d0f7f225a36->m_frame.f_lineno = 59;
        tmp_assign_source_4 = CALL_METHOD_WITH_ARGS4(
            tmp_called_instance_4,
            mod_consts[14],
            &PyTuple_GET_ITEM(mod_consts[15], 0)
        );

        Py_DECREF(tmp_called_instance_4);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_rm == NULL);
        var_rm = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_w);
        tmp_mult_expr_left_1 = var_w;
        CHECK_OBJECT(var_rv);
        tmp_add_expr_left_1 = var_rv;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[3]);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_e8e74df8b87a8d2dee370d0f7f225a36->m_frame.f_lineno = 60;
        tmp_mult_expr_right_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[16]);
        Py_DECREF(tmp_called_instance_5);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_scale == NULL);
        var_scale = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        CHECK_OBJECT(var_b);
        tmp_sub_expr_left_1 = var_b;
        CHECK_OBJECT(var_rm);
        tmp_mult_expr_left_2 = var_rm;
        CHECK_OBJECT(var_scale);
        tmp_mult_expr_right_2 = var_scale;
        tmp_sub_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_bias == NULL);
        var_bias = tmp_assign_source_6;
    }
    {
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        CHECK_OBJECT(par_x);
        tmp_mult_expr_left_3 = par_x;
        CHECK_OBJECT(var_scale);
        tmp_mult_expr_right_3 = var_scale;
        tmp_add_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_bias);
        tmp_add_expr_right_2 = var_bias;
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
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
        exception_tb = MAKE_TRACEBACK(frame_e8e74df8b87a8d2dee370d0f7f225a36, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e8e74df8b87a8d2dee370d0f7f225a36->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e8e74df8b87a8d2dee370d0f7f225a36, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e8e74df8b87a8d2dee370d0f7f225a36,
        type_description_1,
        par_self,
        par_x,
        var_w,
        var_b,
        var_rv,
        var_rm,
        var_scale,
        var_bias
    );


    // Release cached frame if used for exception.
    if (frame_e8e74df8b87a8d2dee370d0f7f225a36 == cache_frame_e8e74df8b87a8d2dee370d0f7f225a36) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e8e74df8b87a8d2dee370d0f7f225a36);
        cache_frame_e8e74df8b87a8d2dee370d0f7f225a36 = NULL;
    }

    assertFrameObject(frame_e8e74df8b87a8d2dee370d0f7f225a36);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_w);
    Py_DECREF(var_w);
    var_w = NULL;
    CHECK_OBJECT(var_b);
    Py_DECREF(var_b);
    var_b = NULL;
    CHECK_OBJECT(var_rv);
    Py_DECREF(var_rv);
    var_rv = NULL;
    CHECK_OBJECT(var_rm);
    Py_DECREF(var_rm);
    var_rm = NULL;
    CHECK_OBJECT(var_scale);
    Py_DECREF(var_scale);
    var_scale = NULL;
    CHECK_OBJECT(var_bias);
    Py_DECREF(var_bias);
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

    Py_XDECREF(var_w);
    var_w = NULL;
    Py_XDECREF(var_b);
    var_b = NULL;
    Py_XDECREF(var_rv);
    var_rv = NULL;
    Py_XDECREF(var_rm);
    var_rm = NULL;
    Py_XDECREF(var_scale);
    var_scale = NULL;
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


static PyObject *impl_torchvision$ops$misc$$$function__4___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_356987a201628bbe9a1809efb918ceba;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_356987a201628bbe9a1809efb918ceba = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_356987a201628bbe9a1809efb918ceba)) {
        Py_XDECREF(cache_frame_356987a201628bbe9a1809efb918ceba);

#if _DEBUG_REFCOUNTS
        if (cache_frame_356987a201628bbe9a1809efb918ceba == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_356987a201628bbe9a1809efb918ceba = MAKE_FUNCTION_FRAME(codeobj_356987a201628bbe9a1809efb918ceba, module_torchvision$ops$misc, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_356987a201628bbe9a1809efb918ceba->m_type_description == NULL);
    frame_356987a201628bbe9a1809efb918ceba = cache_frame_356987a201628bbe9a1809efb918ceba;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_356987a201628bbe9a1809efb918ceba);
    assert(Py_REFCNT(frame_356987a201628bbe9a1809efb918ceba) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_format_spec_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[17]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_format_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_1 = mod_consts[18];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        Py_DECREF(tmp_format_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(6);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[19];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_5 = par_self;
            tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[5]);
            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[20]);
            Py_DECREF(tmp_expression_value_4);
            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_subscript_value_1 = mod_consts[21];
            tmp_format_value_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 0);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[18];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_6 = par_self;
            tmp_format_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[3]);
            if (tmp_format_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_3 = mod_consts[18];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[23];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[18], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
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
        exception_tb = MAKE_TRACEBACK(frame_356987a201628bbe9a1809efb918ceba, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_356987a201628bbe9a1809efb918ceba->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_356987a201628bbe9a1809efb918ceba, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_356987a201628bbe9a1809efb918ceba,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_356987a201628bbe9a1809efb918ceba == cache_frame_356987a201628bbe9a1809efb918ceba) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_356987a201628bbe9a1809efb918ceba);
        cache_frame_356987a201628bbe9a1809efb918ceba = NULL;
    }

    assertFrameObject(frame_356987a201628bbe9a1809efb918ceba);

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


static PyObject *impl_torchvision$ops$misc$$$function__5___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_in_channels = python_pars[1];
    PyObject *par_out_channels = python_pars[2];
    PyObject *par_kernel_size = python_pars[3];
    PyObject *par_stride = python_pars[4];
    PyObject *par_padding = python_pars[5];
    PyObject *par_groups = python_pars[6];
    PyObject *par_norm_layer = python_pars[7];
    PyObject *par_activation_layer = python_pars[8];
    PyObject *par_dilation = python_pars[9];
    PyObject *par_inplace = python_pars[10];
    PyObject *par_bias = python_pars[11];
    PyObject *var_layers = NULL;
    PyObject *var_params = NULL;
    struct Nuitka_FrameObject *frame_eb6f4e920491460c25e402e7ca2d688d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_eb6f4e920491460c25e402e7ca2d688d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_eb6f4e920491460c25e402e7ca2d688d)) {
        Py_XDECREF(cache_frame_eb6f4e920491460c25e402e7ca2d688d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_eb6f4e920491460c25e402e7ca2d688d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_eb6f4e920491460c25e402e7ca2d688d = MAKE_FUNCTION_FRAME(codeobj_eb6f4e920491460c25e402e7ca2d688d, module_torchvision$ops$misc, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_eb6f4e920491460c25e402e7ca2d688d->m_type_description == NULL);
    frame_eb6f4e920491460c25e402e7ca2d688d = cache_frame_eb6f4e920491460c25e402e7ca2d688d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_eb6f4e920491460c25e402e7ca2d688d);
    assert(Py_REFCNT(frame_eb6f4e920491460c25e402e7ca2d688d) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_padding);
        tmp_cmp_expr_left_1 = par_padding;
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
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_floordiv_expr_left_1;
        PyObject *tmp_floordiv_expr_right_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        CHECK_OBJECT(par_kernel_size);
        tmp_sub_expr_left_1 = par_kernel_size;
        tmp_sub_expr_right_1 = mod_consts[24];
        tmp_floordiv_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_floordiv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_floordiv_expr_right_1 = mod_consts[25];
        tmp_mult_expr_left_1 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
        Py_DECREF(tmp_floordiv_expr_left_1);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dilation);
        tmp_mult_expr_right_1 = par_dilation;
        tmp_assign_source_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooooooooooooooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_padding;
            assert(old != NULL);
            par_padding = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_bias);
        tmp_cmp_expr_left_2 = par_bias;
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_norm_layer);
        tmp_cmp_expr_left_3 = par_norm_layer;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_assign_source_2 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? Py_True : Py_False;
        {
            PyObject *old = par_bias;
            assert(old != NULL);
            par_bias = tmp_assign_source_2;
            Py_INCREF(par_bias);
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_kw_call_arg_value_4_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[26]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[27]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_in_channels);
        tmp_kw_call_arg_value_0_1 = par_in_channels;
        CHECK_OBJECT(par_out_channels);
        tmp_kw_call_arg_value_1_1 = par_out_channels;
        if (par_kernel_size == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 109;
            type_description_1 = "ooooooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_2_1 = par_kernel_size;
        CHECK_OBJECT(par_stride);
        tmp_kw_call_arg_value_3_1 = par_stride;
        CHECK_OBJECT(par_padding);
        tmp_kw_call_arg_value_4_1 = par_padding;
        if (par_dilation == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 112;
            type_description_1 = "ooooooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_0_1 = par_dilation;
        CHECK_OBJECT(par_groups);
        tmp_kw_call_dict_value_1_1 = par_groups;
        CHECK_OBJECT(par_bias);
        tmp_kw_call_dict_value_2_1 = par_bias;
        frame_eb6f4e920491460c25e402e7ca2d688d->m_frame.f_lineno = 106;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS5_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[30]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
        assert(var_layers == NULL);
        var_layers = tmp_assign_source_3;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_norm_layer);
        tmp_cmp_expr_left_4 = par_norm_layer;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_list_arg_value_1;
        PyObject *tmp_item_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_layers);
        tmp_list_arg_value_1 = var_layers;
        CHECK_OBJECT(par_norm_layer);
        tmp_called_value_2 = par_norm_layer;
        CHECK_OBJECT(par_out_channels);
        tmp_args_element_value_1 = par_out_channels;
        frame_eb6f4e920491460c25e402e7ca2d688d->m_frame.f_lineno = 118;
        tmp_item_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_item_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
        assert(!(tmp_result == false));
    }
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(par_activation_layer);
        tmp_cmp_expr_left_5 = par_activation_layer;
        tmp_cmp_expr_right_5 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_4;
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT(par_inplace);
        tmp_cmp_expr_left_6 = par_inplace;
        tmp_cmp_expr_right_6 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assign_source_4 = MAKE_DICT_EMPTY();
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_dict_key_1 = mod_consts[31];
        CHECK_OBJECT(par_inplace);
        tmp_dict_value_1 = par_inplace;
        tmp_assign_source_4 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_4, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        condexpr_end_1:;
        assert(var_params == NULL);
        var_params = tmp_assign_source_4;
    }
    {
        PyObject *tmp_list_arg_value_2;
        PyObject *tmp_item_value_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        if (var_layers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 121;
            type_description_1 = "ooooooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_list_arg_value_2 = var_layers;
        CHECK_OBJECT(par_activation_layer);
        tmp_dircall_arg1_1 = par_activation_layer;
        CHECK_OBJECT(var_params);
        tmp_dircall_arg2_1 = var_params;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_item_value_2 = impl___main__$$$function__8_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_item_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_2, tmp_item_value_2);
        assert(!(tmp_result == false));
    }
    branch_no_4:;
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 122;
            type_description_1 = "ooooooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_3 = BUILTIN_SUPER0(moduledict_torchvision$ops$misc, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[1]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooooooooooc";
            goto frame_exception_exit_1;
        }
        if (var_layers == NULL) {
            Py_DECREF(tmp_dircall_arg1_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 122;
            type_description_1 = "ooooooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg2_2 = var_layers;
        Py_INCREF(tmp_dircall_arg2_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2};
            tmp_call_result_1 = impl___main__$$$function__4_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_2 = par_self;
        frame_eb6f4e920491460c25e402e7ca2d688d->m_frame.f_lineno = 123;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_out_channels);
        tmp_assattr_value_1 = par_out_channels;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[33], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_eb6f4e920491460c25e402e7ca2d688d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_eb6f4e920491460c25e402e7ca2d688d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_eb6f4e920491460c25e402e7ca2d688d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_eb6f4e920491460c25e402e7ca2d688d,
        type_description_1,
        par_self,
        par_in_channels,
        par_out_channels,
        par_kernel_size,
        par_stride,
        par_padding,
        par_groups,
        par_norm_layer,
        par_activation_layer,
        par_dilation,
        par_inplace,
        par_bias,
        var_layers,
        var_params,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_eb6f4e920491460c25e402e7ca2d688d == cache_frame_eb6f4e920491460c25e402e7ca2d688d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_eb6f4e920491460c25e402e7ca2d688d);
        cache_frame_eb6f4e920491460c25e402e7ca2d688d = NULL;
    }

    assertFrameObject(frame_eb6f4e920491460c25e402e7ca2d688d);

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
    CHECK_OBJECT(par_padding);
    Py_DECREF(par_padding);
    par_padding = NULL;
    CHECK_OBJECT(par_bias);
    Py_DECREF(par_bias);
    par_bias = NULL;
    Py_XDECREF(var_layers);
    var_layers = NULL;
    Py_XDECREF(var_params);
    var_params = NULL;
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

    Py_XDECREF(par_padding);
    par_padding = NULL;
    Py_XDECREF(par_bias);
    par_bias = NULL;
    Py_XDECREF(var_layers);
    var_layers = NULL;
    Py_XDECREF(var_params);
    var_params = NULL;
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
    CHECK_OBJECT(par_out_channels);
    Py_DECREF(par_out_channels);
    CHECK_OBJECT(par_kernel_size);
    Py_DECREF(par_kernel_size);
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    CHECK_OBJECT(par_groups);
    Py_DECREF(par_groups);
    CHECK_OBJECT(par_norm_layer);
    Py_DECREF(par_norm_layer);
    CHECK_OBJECT(par_activation_layer);
    Py_DECREF(par_activation_layer);
    CHECK_OBJECT(par_dilation);
    Py_DECREF(par_dilation);
    CHECK_OBJECT(par_inplace);
    Py_DECREF(par_inplace);
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
    CHECK_OBJECT(par_kernel_size);
    Py_DECREF(par_kernel_size);
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    CHECK_OBJECT(par_groups);
    Py_DECREF(par_groups);
    CHECK_OBJECT(par_norm_layer);
    Py_DECREF(par_norm_layer);
    CHECK_OBJECT(par_activation_layer);
    Py_DECREF(par_activation_layer);
    CHECK_OBJECT(par_dilation);
    Py_DECREF(par_dilation);
    CHECK_OBJECT(par_inplace);
    Py_DECREF(par_inplace);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$ops$misc$$$function__6___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_input_channels = python_pars[1];
    PyObject *par_squeeze_channels = python_pars[2];
    PyObject *par_activation = python_pars[3];
    PyObject *par_scale_activation = python_pars[4];
    struct Nuitka_FrameObject *frame_e4d731f63562f27c16908375012882f3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_e4d731f63562f27c16908375012882f3 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e4d731f63562f27c16908375012882f3)) {
        Py_XDECREF(cache_frame_e4d731f63562f27c16908375012882f3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e4d731f63562f27c16908375012882f3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e4d731f63562f27c16908375012882f3 = MAKE_FUNCTION_FRAME(codeobj_e4d731f63562f27c16908375012882f3, module_torchvision$ops$misc, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e4d731f63562f27c16908375012882f3->m_type_description == NULL);
    frame_e4d731f63562f27c16908375012882f3 = cache_frame_e4d731f63562f27c16908375012882f3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e4d731f63562f27c16908375012882f3);
    assert(Py_REFCNT(frame_e4d731f63562f27c16908375012882f3) == 2);

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

            exception_lineno = 146;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_torchvision$ops$misc, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        frame_e4d731f63562f27c16908375012882f3->m_frame.f_lineno = 146;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[1]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_e4d731f63562f27c16908375012882f3->m_frame.f_lineno = 147;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[26]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        frame_e4d731f63562f27c16908375012882f3->m_frame.f_lineno = 148;
        tmp_assattr_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[34],
            PyTuple_GET_ITEM(mod_consts[35], 0)
        );

        Py_DECREF(tmp_called_instance_2);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[36], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_assattr_target_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[26]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_input_channels);
        tmp_args_element_value_2 = par_input_channels;
        CHECK_OBJECT(par_squeeze_channels);
        tmp_args_element_value_3 = par_squeeze_channels;
        tmp_args_element_value_4 = mod_consts[24];
        frame_e4d731f63562f27c16908375012882f3->m_frame.f_lineno = 149;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assattr_value_2 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_3,
                mod_consts[27],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_3);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[37], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_assattr_target_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[26]);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_squeeze_channels);
        tmp_args_element_value_5 = par_squeeze_channels;
        CHECK_OBJECT(par_input_channels);
        tmp_args_element_value_6 = par_input_channels;
        tmp_args_element_value_7 = mod_consts[24];
        frame_e4d731f63562f27c16908375012882f3->m_frame.f_lineno = 150;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assattr_value_3 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_4,
                mod_consts[27],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_4);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[38], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_activation);
        tmp_called_value_2 = par_activation;
        frame_e4d731f63562f27c16908375012882f3->m_frame.f_lineno = 151;
        tmp_assattr_value_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[39], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_called_value_3;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_scale_activation);
        tmp_called_value_3 = par_scale_activation;
        frame_e4d731f63562f27c16908375012882f3->m_frame.f_lineno = 152;
        tmp_assattr_value_5 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_assattr_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[40], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e4d731f63562f27c16908375012882f3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e4d731f63562f27c16908375012882f3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e4d731f63562f27c16908375012882f3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e4d731f63562f27c16908375012882f3,
        type_description_1,
        par_self,
        par_input_channels,
        par_squeeze_channels,
        par_activation,
        par_scale_activation,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_e4d731f63562f27c16908375012882f3 == cache_frame_e4d731f63562f27c16908375012882f3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e4d731f63562f27c16908375012882f3);
        cache_frame_e4d731f63562f27c16908375012882f3 = NULL;
    }

    assertFrameObject(frame_e4d731f63562f27c16908375012882f3);

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
    CHECK_OBJECT(par_input_channels);
    Py_DECREF(par_input_channels);
    CHECK_OBJECT(par_squeeze_channels);
    Py_DECREF(par_squeeze_channels);
    CHECK_OBJECT(par_activation);
    Py_DECREF(par_activation);
    CHECK_OBJECT(par_scale_activation);
    Py_DECREF(par_scale_activation);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_input_channels);
    Py_DECREF(par_input_channels);
    CHECK_OBJECT(par_squeeze_channels);
    Py_DECREF(par_squeeze_channels);
    CHECK_OBJECT(par_activation);
    Py_DECREF(par_activation);
    CHECK_OBJECT(par_scale_activation);
    Py_DECREF(par_scale_activation);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$ops$misc$$$function__7__scale(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_input = python_pars[1];
    PyObject *var_scale = NULL;
    struct Nuitka_FrameObject *frame_1df1a41bd4cc749b98a155b1ef5441e6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1df1a41bd4cc749b98a155b1ef5441e6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1df1a41bd4cc749b98a155b1ef5441e6)) {
        Py_XDECREF(cache_frame_1df1a41bd4cc749b98a155b1ef5441e6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1df1a41bd4cc749b98a155b1ef5441e6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1df1a41bd4cc749b98a155b1ef5441e6 = MAKE_FUNCTION_FRAME(codeobj_1df1a41bd4cc749b98a155b1ef5441e6, module_torchvision$ops$misc, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1df1a41bd4cc749b98a155b1ef5441e6->m_type_description == NULL);
    frame_1df1a41bd4cc749b98a155b1ef5441e6 = cache_frame_1df1a41bd4cc749b98a155b1ef5441e6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1df1a41bd4cc749b98a155b1ef5441e6);
    assert(Py_REFCNT(frame_1df1a41bd4cc749b98a155b1ef5441e6) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_input);
        tmp_args_element_value_1 = par_input;
        frame_1df1a41bd4cc749b98a155b1ef5441e6->m_frame.f_lineno = 155;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[36], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_scale == NULL);
        var_scale = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(var_scale);
        tmp_args_element_value_2 = var_scale;
        frame_1df1a41bd4cc749b98a155b1ef5441e6->m_frame.f_lineno = 156;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[37], tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_scale;
            assert(old != NULL);
            var_scale = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(var_scale);
        tmp_args_element_value_3 = var_scale;
        frame_1df1a41bd4cc749b98a155b1ef5441e6->m_frame.f_lineno = 157;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[39], tmp_args_element_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_scale;
            assert(old != NULL);
            var_scale = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        CHECK_OBJECT(var_scale);
        tmp_args_element_value_4 = var_scale;
        frame_1df1a41bd4cc749b98a155b1ef5441e6->m_frame.f_lineno = 158;
        tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[38], tmp_args_element_value_4);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_scale;
            assert(old != NULL);
            var_scale = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(par_self);
        tmp_called_instance_5 = par_self;
        CHECK_OBJECT(var_scale);
        tmp_args_element_value_5 = var_scale;
        frame_1df1a41bd4cc749b98a155b1ef5441e6->m_frame.f_lineno = 159;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[40], tmp_args_element_value_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
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
        exception_tb = MAKE_TRACEBACK(frame_1df1a41bd4cc749b98a155b1ef5441e6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1df1a41bd4cc749b98a155b1ef5441e6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1df1a41bd4cc749b98a155b1ef5441e6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1df1a41bd4cc749b98a155b1ef5441e6,
        type_description_1,
        par_self,
        par_input,
        var_scale
    );


    // Release cached frame if used for exception.
    if (frame_1df1a41bd4cc749b98a155b1ef5441e6 == cache_frame_1df1a41bd4cc749b98a155b1ef5441e6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1df1a41bd4cc749b98a155b1ef5441e6);
        cache_frame_1df1a41bd4cc749b98a155b1ef5441e6 = NULL;
    }

    assertFrameObject(frame_1df1a41bd4cc749b98a155b1ef5441e6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_scale);
    Py_DECREF(var_scale);
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$ops$misc$$$function__8_forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_input = python_pars[1];
    PyObject *var_scale = NULL;
    struct Nuitka_FrameObject *frame_2577be3906d5f8af06eb48ae6281fa46;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2577be3906d5f8af06eb48ae6281fa46 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2577be3906d5f8af06eb48ae6281fa46)) {
        Py_XDECREF(cache_frame_2577be3906d5f8af06eb48ae6281fa46);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2577be3906d5f8af06eb48ae6281fa46 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2577be3906d5f8af06eb48ae6281fa46 = MAKE_FUNCTION_FRAME(codeobj_2577be3906d5f8af06eb48ae6281fa46, module_torchvision$ops$misc, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2577be3906d5f8af06eb48ae6281fa46->m_type_description == NULL);
    frame_2577be3906d5f8af06eb48ae6281fa46 = cache_frame_2577be3906d5f8af06eb48ae6281fa46;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2577be3906d5f8af06eb48ae6281fa46);
    assert(Py_REFCNT(frame_2577be3906d5f8af06eb48ae6281fa46) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_input);
        tmp_args_element_value_1 = par_input;
        frame_2577be3906d5f8af06eb48ae6281fa46->m_frame.f_lineno = 162;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[41], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_scale == NULL);
        var_scale = tmp_assign_source_1;
    }
    {
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        CHECK_OBJECT(var_scale);
        tmp_mult_expr_left_1 = var_scale;
        CHECK_OBJECT(par_input);
        tmp_mult_expr_right_1 = par_input;
        tmp_return_value = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
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
        exception_tb = MAKE_TRACEBACK(frame_2577be3906d5f8af06eb48ae6281fa46, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2577be3906d5f8af06eb48ae6281fa46->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2577be3906d5f8af06eb48ae6281fa46, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2577be3906d5f8af06eb48ae6281fa46,
        type_description_1,
        par_self,
        par_input,
        var_scale
    );


    // Release cached frame if used for exception.
    if (frame_2577be3906d5f8af06eb48ae6281fa46 == cache_frame_2577be3906d5f8af06eb48ae6281fa46) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2577be3906d5f8af06eb48ae6281fa46);
        cache_frame_2577be3906d5f8af06eb48ae6281fa46 = NULL;
    }

    assertFrameObject(frame_2577be3906d5f8af06eb48ae6281fa46);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_scale);
    Py_DECREF(var_scale);
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_torchvision$ops$misc$$$function__1___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$ops$misc$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[71],
#endif
        codeobj_cabec8333419cf828554aae80dd55c76,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$ops$misc,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$ops$misc$$$function__2__load_from_state_dict(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$ops$misc$$$function__2__load_from_state_dict,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[82],
#endif
        codeobj_0461f5006daed7cf5ed1966aad8b76e5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$ops$misc,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$ops$misc$$$function__3_forward(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$ops$misc$$$function__3_forward,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        mod_consts[86],
#endif
        codeobj_e8e74df8b87a8d2dee370d0f7f225a36,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$ops$misc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$ops$misc$$$function__4___repr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$ops$misc$$$function__4___repr__,
        mod_consts[87],
#if PYTHON_VERSION >= 0x300
        mod_consts[88],
#endif
        codeobj_356987a201628bbe9a1809efb918ceba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$ops$misc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$ops$misc$$$function__5___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$ops$misc$$$function__5___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[102],
#endif
        codeobj_eb6f4e920491460c25e402e7ca2d688d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$ops$misc,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$ops$misc$$$function__6___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$ops$misc$$$function__6___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[108],
#endif
        codeobj_e4d731f63562f27c16908375012882f3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$ops$misc,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$ops$misc$$$function__7__scale(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$ops$misc$$$function__7__scale,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        mod_consts[110],
#endif
        codeobj_1df1a41bd4cc749b98a155b1ef5441e6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$ops$misc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$ops$misc$$$function__8_forward(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$ops$misc$$$function__8_forward,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        mod_consts[111],
#endif
        codeobj_2577be3906d5f8af06eb48ae6281fa46,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$ops$misc,
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

function_impl_code functable_torchvision$ops$misc[] = {
    impl_torchvision$ops$misc$$$function__1___init__,
    impl_torchvision$ops$misc$$$function__2__load_from_state_dict,
    impl_torchvision$ops$misc$$$function__3_forward,
    impl_torchvision$ops$misc$$$function__4___repr__,
    impl_torchvision$ops$misc$$$function__5___init__,
    impl_torchvision$ops$misc$$$function__6___init__,
    impl_torchvision$ops$misc$$$function__7__scale,
    impl_torchvision$ops$misc$$$function__8_forward,
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

    function_impl_code *current = functable_torchvision$ops$misc;
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

    if (offset > sizeof(functable_torchvision$ops$misc) || offset < 0) {
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
        functable_torchvision$ops$misc[offset],
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
        module_torchvision$ops$misc,
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
PyObject *modulecode_torchvision$ops$misc(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torchvision.ops.misc");

    // Store the module for future use.
    module_torchvision$ops$misc = module;

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
        PRINT_STRING("torchvision.ops.misc: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torchvision.ops.misc: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torchvision.ops.misc: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorchvision$ops$misc\n");

    moduledict_torchvision$ops$misc = MODULE_DICT(module_torchvision$ops$misc);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torchvision$ops$misc,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torchvision$ops$misc,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[18]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torchvision$ops$misc,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torchvision$ops$misc,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torchvision$ops$misc,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torchvision$ops$misc);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torchvision$ops$misc);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_CellObject *outline_0_var___class__ = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *outline_1_var___class__ = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *outline_2_var___class__ = Nuitka_Cell_Empty();
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
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_2972aa1654bd7e0dbf0e21aac6d48ee7;
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
    PyObject *locals_torchvision$ops$misc$$$class__1_FrozenBatchNorm2d_13 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_ae58579e18ebfed3a857f257f34b390a_2;
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
    PyObject *locals_torchvision$ops$misc$$$class__2_ConvNormActivation_68 = NULL;
    struct Nuitka_FrameObject *frame_3301e93299f690b440db026f3c11f4ab_3;
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
    PyObject *locals_torchvision$ops$misc$$$class__3_SqueezeExcitation_127 = NULL;
    struct Nuitka_FrameObject *frame_3e30df65421bcecdece9efb6c042e690_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_2);
    }
    frame_2972aa1654bd7e0dbf0e21aac6d48ee7 = MAKE_MODULE_FRAME(codeobj_2972aa1654bd7e0dbf0e21aac6d48ee7, module_torchvision$ops$misc);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2972aa1654bd7e0dbf0e21aac6d48ee7);
    assert(Py_REFCNT(frame_2972aa1654bd7e0dbf0e21aac6d48ee7) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[45], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[46], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_4 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_4);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torchvision$ops$misc,
                mod_consts[48],
                mod_consts[21]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[48]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_torchvision$ops$misc,
                mod_consts[49],
                mod_consts[21]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[49]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_torchvision$ops$misc,
                mod_consts[50],
                mod_consts[21]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[50]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_7);
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
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[6];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torchvision$ops$misc;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[21];
        frame_2972aa1654bd7e0dbf0e21aac6d48ee7->m_frame.f_lineno = 3;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[6];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torchvision$ops$misc;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[51];
        tmp_level_value_2 = mod_consts[21];
        frame_2972aa1654bd7e0dbf0e21aac6d48ee7->m_frame.f_lineno = 4;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_torchvision$ops$misc,
                mod_consts[52],
                mod_consts[21]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[52]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[53];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_torchvision$ops$misc;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[54];
        tmp_level_value_3 = mod_consts[25];
        frame_2972aa1654bd7e0dbf0e21aac6d48ee7->m_frame.f_lineno = 6;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_torchvision$ops$misc,
                mod_consts[2],
                mod_consts[21]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[2]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[26]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[55]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[56]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_11);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[26]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[57]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        tmp_assign_source_12 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_12, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_13 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

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
        tmp_expression_value_6 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[21];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_15 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_15;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_7 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_7, mod_consts[58]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_8 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[58]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = mod_consts[59];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_2972aa1654bd7e0dbf0e21aac6d48ee7->m_frame.f_lineno = 13;
        tmp_assign_source_16 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_16;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_9 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_9, mod_consts[60]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

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
        tmp_mod_expr_left_1 = mod_consts[61];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[17];
        tmp_getattr_default_1 = mod_consts[62];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_10;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_10 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_10 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[17]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;

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


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 13;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_17;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_18;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_torchvision$ops$misc$$$class__1_FrozenBatchNorm2d_13 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_torchvision$ops$misc$$$class__1_FrozenBatchNorm2d_13, mod_consts[64], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_torchvision$ops$misc$$$class__1_FrozenBatchNorm2d_13, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[59];
        tmp_res = PyObject_SetItem(locals_torchvision$ops$misc$$$class__1_FrozenBatchNorm2d_13, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_4;
        }
        frame_ae58579e18ebfed3a857f257f34b390a_2 = MAKE_CLASS_FRAME(codeobj_ae58579e18ebfed3a857f257f34b390a, module_torchvision$ops$misc, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_ae58579e18ebfed3a857f257f34b390a_2);
        assert(Py_REFCNT(frame_ae58579e18ebfed3a857f257f34b390a_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            struct Nuitka_CellObject *tmp_closure_1[1];
            tmp_defaults_1 = mod_consts[67];
            tmp_dict_key_1 = mod_consts[68];
            tmp_dict_value_1 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__1_FrozenBatchNorm2d_13, mod_consts[69]);

            if (tmp_dict_value_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_1 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_1);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_1 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[3];
            tmp_dict_value_1 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__1_FrozenBatchNorm2d_13, mod_consts[70]);

            if (tmp_dict_value_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_1 = (PyObject *)&PyFloat_Type;
                    Py_INCREF(tmp_dict_value_1);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            Py_INCREF(tmp_defaults_1);

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_torchvision$ops$misc$$$function__1___init__(tmp_defaults_1, tmp_annotations_1, tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_torchvision$ops$misc$$$class__1_FrozenBatchNorm2d_13, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            struct Nuitka_CellObject *tmp_closure_2[1];
            tmp_dict_key_2 = mod_consts[72];
            tmp_dict_value_2 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__1_FrozenBatchNorm2d_13, mod_consts[73]);

            if (tmp_dict_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_2 = (PyObject *)&PyDict_Type;
                    Py_INCREF(tmp_dict_value_2);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_2 = _PyDict_NewPresized( 7 );
            {
                PyObject *tmp_expression_value_11;
                PyObject *tmp_subscript_value_2;
                PyObject *tmp_expression_value_12;
                PyObject *tmp_subscript_value_3;
                PyObject *tmp_expression_value_13;
                PyObject *tmp_subscript_value_4;
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[74];
                tmp_dict_value_2 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__1_FrozenBatchNorm2d_13, mod_consts[75]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[76];
                tmp_dict_value_2 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__1_FrozenBatchNorm2d_13, mod_consts[73]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = (PyObject *)&PyDict_Type;
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[77];
                tmp_dict_value_2 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__1_FrozenBatchNorm2d_13, mod_consts[78]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[79];
                tmp_expression_value_11 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__1_FrozenBatchNorm2d_13, mod_consts[49]);

                if (tmp_expression_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[49]);

                        if (unlikely(tmp_expression_value_11 == NULL)) {
                            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                        }

                        if (tmp_expression_value_11 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 41;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_11);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_2 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__1_FrozenBatchNorm2d_13, mod_consts[75]);

                if (tmp_subscript_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_2 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_2);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_2);
                Py_DECREF(tmp_expression_value_11);
                Py_DECREF(tmp_subscript_value_2);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 41;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[80];
                tmp_expression_value_12 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__1_FrozenBatchNorm2d_13, mod_consts[49]);

                if (tmp_expression_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[49]);

                        if (unlikely(tmp_expression_value_12 == NULL)) {
                            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                        }

                        if (tmp_expression_value_12 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 42;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_12);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_3 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__1_FrozenBatchNorm2d_13, mod_consts[75]);

                if (tmp_subscript_value_3 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_3 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_3);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_3);
                Py_DECREF(tmp_expression_value_12);
                Py_DECREF(tmp_subscript_value_3);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 42;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[81];
                tmp_expression_value_13 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__1_FrozenBatchNorm2d_13, mod_consts[49]);

                if (tmp_expression_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[49]);

                        if (unlikely(tmp_expression_value_13 == NULL)) {
                            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                        }

                        if (tmp_expression_value_13 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 43;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_13);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_4 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__1_FrozenBatchNorm2d_13, mod_consts[75]);

                if (tmp_subscript_value_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_4 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_4);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_4);
                Py_DECREF(tmp_expression_value_13);
                Py_DECREF(tmp_subscript_value_4);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 43;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_annotations_2);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;

            tmp_closure_2[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_2[0]);

            tmp_dictset_value = MAKE_FUNCTION_torchvision$ops$misc$$$function__2__load_from_state_dict(tmp_annotations_2, tmp_closure_2);

            tmp_res = PyObject_SetItem(locals_torchvision$ops$misc$$$class__1_FrozenBatchNorm2d_13, mod_consts[13], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_dict_key_3 = mod_consts[83];
            tmp_dict_value_3 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__1_FrozenBatchNorm2d_13, mod_consts[52]);

            if (tmp_dict_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[52]);

                    if (unlikely(tmp_dict_value_3 == NULL)) {
                        tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                    }

                    if (tmp_dict_value_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 53;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_3);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_3 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[84];
            tmp_dict_value_3 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__1_FrozenBatchNorm2d_13, mod_consts[52]);

            if (tmp_dict_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[52]);

                    if (unlikely(tmp_dict_value_3 == NULL)) {
                        tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                    }

                    if (tmp_dict_value_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 53;
                        type_description_2 = "c";
                        goto dict_build_exception_2;
                    }
                    Py_INCREF(tmp_dict_value_3);
                } else {
                    goto dict_build_exception_2;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_annotations_3);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$ops$misc$$$function__3_forward(tmp_annotations_3);

            tmp_res = PyObject_SetItem(locals_torchvision$ops$misc$$$class__1_FrozenBatchNorm2d_13, mod_consts[85], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            tmp_dict_key_4 = mod_consts[84];
            tmp_dict_value_4 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__1_FrozenBatchNorm2d_13, mod_consts[75]);

            if (tmp_dict_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_4 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_4);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_4 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_torchvision$ops$misc$$$function__4___repr__(tmp_annotations_4);

            tmp_res = PyObject_SetItem(locals_torchvision$ops$misc$$$class__1_FrozenBatchNorm2d_13, mod_consts[87], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ae58579e18ebfed3a857f257f34b390a_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ae58579e18ebfed3a857f257f34b390a_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ae58579e18ebfed3a857f257f34b390a_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ae58579e18ebfed3a857f257f34b390a_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_ae58579e18ebfed3a857f257f34b390a_2);

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


                exception_lineno = 13;

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
        tmp_res = PyObject_SetItem(locals_torchvision$ops$misc$$$class__1_FrozenBatchNorm2d_13, mod_consts[89], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_4;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[59];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_torchvision$ops$misc$$$class__1_FrozenBatchNorm2d_13;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_2972aa1654bd7e0dbf0e21aac6d48ee7->m_frame.f_lineno = 13;
            tmp_assign_source_19 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;

                goto try_except_handler_4;
            }
            assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
            PyCell_SET(outline_0_var___class__, tmp_assign_source_19);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
        tmp_assign_source_18 = Nuitka_Cell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_18);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_torchvision$ops$misc$$$class__1_FrozenBatchNorm2d_13);
        locals_torchvision$ops$misc$$$class__1_FrozenBatchNorm2d_13 = NULL;
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

        Py_DECREF(locals_torchvision$ops$misc$$$class__1_FrozenBatchNorm2d_13);
        locals_torchvision$ops$misc$$$class__1_FrozenBatchNorm2d_13 = NULL;
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
        exception_lineno = 13;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_18);
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
        PyObject *tmp_assign_source_20;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_5;
        }
        tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[26]);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_5;
        }
        tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[90]);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_5;
        }
        tmp_assign_source_20 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_20, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_21 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

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
        tmp_expression_value_16 = tmp_class_creation_2__bases;
        tmp_subscript_value_5 = mod_consts[21];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_16, tmp_subscript_value_5, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_5;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_5;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_23 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_23;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_17 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_17, mod_consts[58]);
        tmp_condition_result_6 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_18 = tmp_class_creation_2__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[58]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_5;
        }
        tmp_tuple_element_6 = mod_consts[91];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_2972aa1654bd7e0dbf0e21aac6d48ee7->m_frame.f_lineno = 68;
        tmp_assign_source_24 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_24;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_19 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_19, mod_consts[60]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

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
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[61];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[17];
        tmp_getattr_default_2 = mod_consts[62];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_5;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_20;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_20 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_20 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[17]);
            Py_DECREF(tmp_expression_value_20);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
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


            exception_lineno = 68;

            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 68;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_5;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_25;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_26;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_torchvision$ops$misc$$$class__2_ConvNormActivation_68 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_torchvision$ops$misc$$$class__2_ConvNormActivation_68, mod_consts[64], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[92];
        tmp_res = PyObject_SetItem(locals_torchvision$ops$misc$$$class__2_ConvNormActivation_68, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[91];
        tmp_res = PyObject_SetItem(locals_torchvision$ops$misc$$$class__2_ConvNormActivation_68, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_7;
        }
        frame_3301e93299f690b440db026f3c11f4ab_3 = MAKE_CLASS_FRAME(codeobj_3301e93299f690b440db026f3c11f4ab, module_torchvision$ops$misc, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_3301e93299f690b440db026f3c11f4ab_3);
        assert(Py_REFCNT(frame_3301e93299f690b440db026f3c11f4ab_3) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            struct Nuitka_CellObject *tmp_closure_3[1];
            tmp_tuple_element_8 = mod_consts[93];
            tmp_defaults_2 = MAKE_TUPLE_EMPTY(9);
            {
                PyObject *tmp_expression_value_21;
                PyObject *tmp_expression_value_22;
                PyObject *tmp_expression_value_23;
                PyObject *tmp_expression_value_24;
                PyTuple_SET_ITEM0(tmp_defaults_2, 0, tmp_tuple_element_8);
                tmp_tuple_element_8 = mod_consts[24];
                PyTuple_SET_ITEM0(tmp_defaults_2, 1, tmp_tuple_element_8);
                tmp_tuple_element_8 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_2, 2, tmp_tuple_element_8);
                tmp_tuple_element_8 = mod_consts[24];
                PyTuple_SET_ITEM0(tmp_defaults_2, 3, tmp_tuple_element_8);
                tmp_expression_value_22 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__2_ConvNormActivation_68, mod_consts[6]);

                if (tmp_expression_value_22 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[6]);

                        if (unlikely(tmp_expression_value_22 == NULL)) {
                            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                        }

                        if (tmp_expression_value_22 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 95;
                            type_description_2 = "c";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_22);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[26]);
                Py_DECREF(tmp_expression_value_22);
                if (tmp_expression_value_21 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 95;
                    type_description_2 = "c";
                    goto tuple_build_exception_3;
                }
                tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[94]);
                Py_DECREF(tmp_expression_value_21);
                if (tmp_tuple_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 95;
                    type_description_2 = "c";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_defaults_2, 4, tmp_tuple_element_8);
                tmp_expression_value_24 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__2_ConvNormActivation_68, mod_consts[6]);

                if (tmp_expression_value_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[6]);

                        if (unlikely(tmp_expression_value_24 == NULL)) {
                            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                        }

                        if (tmp_expression_value_24 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 96;
                            type_description_2 = "c";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_24);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[26]);
                Py_DECREF(tmp_expression_value_24);
                if (tmp_expression_value_23 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 96;
                    type_description_2 = "c";
                    goto tuple_build_exception_3;
                }
                tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[95]);
                Py_DECREF(tmp_expression_value_23);
                if (tmp_tuple_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 96;
                    type_description_2 = "c";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_defaults_2, 5, tmp_tuple_element_8);
                tmp_tuple_element_8 = mod_consts[24];
                PyTuple_SET_ITEM0(tmp_defaults_2, 6, tmp_tuple_element_8);
                tmp_tuple_element_8 = Py_True;
                PyTuple_SET_ITEM0(tmp_defaults_2, 7, tmp_tuple_element_8);
                tmp_tuple_element_8 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_2, 8, tmp_tuple_element_8);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_defaults_2);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_dict_key_5 = mod_consts[96];
            tmp_dict_value_5 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__2_ConvNormActivation_68, mod_consts[69]);

            if (tmp_dict_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_5 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_5);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_5 = _PyDict_NewPresized( 12 );
            {
                PyObject *tmp_expression_value_25;
                PyObject *tmp_subscript_value_6;
                PyObject *tmp_expression_value_26;
                PyObject *tmp_subscript_value_7;
                PyObject *tmp_expression_value_27;
                PyObject *tmp_subscript_value_8;
                PyObject *tmp_tuple_element_9;
                PyObject *tmp_expression_value_30;
                PyObject *tmp_subscript_value_9;
                PyObject *tmp_expression_value_31;
                PyObject *tmp_subscript_value_10;
                PyObject *tmp_tuple_element_10;
                PyObject *tmp_expression_value_34;
                PyObject *tmp_subscript_value_11;
                PyObject *tmp_expression_value_35;
                PyObject *tmp_subscript_value_12;
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[33];
                tmp_dict_value_5 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__2_ConvNormActivation_68, mod_consts[69]);

                if (tmp_dict_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_5 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_5);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[28];
                tmp_dict_value_5 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__2_ConvNormActivation_68, mod_consts[69]);

                if (tmp_dict_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_5 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_5);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[97];
                tmp_dict_value_5 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__2_ConvNormActivation_68, mod_consts[69]);

                if (tmp_dict_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_5 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_5);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[98];
                tmp_expression_value_25 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__2_ConvNormActivation_68, mod_consts[50]);

                if (tmp_expression_value_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[50]);

                        if (unlikely(tmp_expression_value_25 == NULL)) {
                            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
                        }

                        if (tmp_expression_value_25 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 93;
                            type_description_2 = "c";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_25);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_subscript_value_6 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__2_ConvNormActivation_68, mod_consts[69]);

                if (tmp_subscript_value_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_6 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_6);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_6);
                Py_DECREF(tmp_expression_value_25);
                Py_DECREF(tmp_subscript_value_6);
                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 93;
                    type_description_2 = "c";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[99];
                tmp_dict_value_5 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__2_ConvNormActivation_68, mod_consts[69]);

                if (tmp_dict_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_5 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_5);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[100];
                tmp_expression_value_26 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__2_ConvNormActivation_68, mod_consts[50]);

                if (tmp_expression_value_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[50]);

                        if (unlikely(tmp_expression_value_26 == NULL)) {
                            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
                        }

                        if (tmp_expression_value_26 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 95;
                            type_description_2 = "c";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_26);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_expression_value_27 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__2_ConvNormActivation_68, mod_consts[48]);

                if (tmp_expression_value_27 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[48]);

                        if (unlikely(tmp_expression_value_27 == NULL)) {
                            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
                        }

                        if (tmp_expression_value_27 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_26);

                            exception_lineno = 95;
                            type_description_2 = "c";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_27);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_tuple_element_9 = Py_Ellipsis;
                tmp_subscript_value_8 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_28;
                    PyObject *tmp_expression_value_29;
                    PyTuple_SET_ITEM0(tmp_subscript_value_8, 0, tmp_tuple_element_9);
                    tmp_expression_value_29 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__2_ConvNormActivation_68, mod_consts[6]);

                    if (tmp_expression_value_29 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[6]);

                            if (unlikely(tmp_expression_value_29 == NULL)) {
                                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                            }

                            if (tmp_expression_value_29 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 95;
                                type_description_2 = "c";
                                goto tuple_build_exception_4;
                            }
                            Py_INCREF(tmp_expression_value_29);
                        } else {
                            goto tuple_build_exception_4;
                        }
                    }

                    tmp_expression_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[26]);
                    Py_DECREF(tmp_expression_value_29);
                    if (tmp_expression_value_28 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 95;
                        type_description_2 = "c";
                        goto tuple_build_exception_4;
                    }
                    tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[57]);
                    Py_DECREF(tmp_expression_value_28);
                    if (tmp_tuple_element_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 95;
                        type_description_2 = "c";
                        goto tuple_build_exception_4;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_8, 1, tmp_tuple_element_9);
                }
                goto tuple_build_noexception_4;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_4:;
                Py_DECREF(tmp_expression_value_26);
                Py_DECREF(tmp_expression_value_27);
                Py_DECREF(tmp_subscript_value_8);
                goto dict_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_4:;
                tmp_subscript_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_8);
                Py_DECREF(tmp_expression_value_27);
                Py_DECREF(tmp_subscript_value_8);
                if (tmp_subscript_value_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_26);

                    exception_lineno = 95;
                    type_description_2 = "c";
                    goto dict_build_exception_3;
                }
                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_7);
                Py_DECREF(tmp_expression_value_26);
                Py_DECREF(tmp_subscript_value_7);
                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 95;
                    type_description_2 = "c";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[101];
                tmp_expression_value_30 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__2_ConvNormActivation_68, mod_consts[50]);

                if (tmp_expression_value_30 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[50]);

                        if (unlikely(tmp_expression_value_30 == NULL)) {
                            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
                        }

                        if (tmp_expression_value_30 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 96;
                            type_description_2 = "c";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_30);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_expression_value_31 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__2_ConvNormActivation_68, mod_consts[48]);

                if (tmp_expression_value_31 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[48]);

                        if (unlikely(tmp_expression_value_31 == NULL)) {
                            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
                        }

                        if (tmp_expression_value_31 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_30);

                            exception_lineno = 96;
                            type_description_2 = "c";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_31);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_tuple_element_10 = Py_Ellipsis;
                tmp_subscript_value_10 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_32;
                    PyObject *tmp_expression_value_33;
                    PyTuple_SET_ITEM0(tmp_subscript_value_10, 0, tmp_tuple_element_10);
                    tmp_expression_value_33 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__2_ConvNormActivation_68, mod_consts[6]);

                    if (tmp_expression_value_33 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[6]);

                            if (unlikely(tmp_expression_value_33 == NULL)) {
                                tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                            }

                            if (tmp_expression_value_33 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 96;
                                type_description_2 = "c";
                                goto tuple_build_exception_5;
                            }
                            Py_INCREF(tmp_expression_value_33);
                        } else {
                            goto tuple_build_exception_5;
                        }
                    }

                    tmp_expression_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[26]);
                    Py_DECREF(tmp_expression_value_33);
                    if (tmp_expression_value_32 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 96;
                        type_description_2 = "c";
                        goto tuple_build_exception_5;
                    }
                    tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[57]);
                    Py_DECREF(tmp_expression_value_32);
                    if (tmp_tuple_element_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 96;
                        type_description_2 = "c";
                        goto tuple_build_exception_5;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_10, 1, tmp_tuple_element_10);
                }
                goto tuple_build_noexception_5;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_5:;
                Py_DECREF(tmp_expression_value_30);
                Py_DECREF(tmp_expression_value_31);
                Py_DECREF(tmp_subscript_value_10);
                goto dict_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_5:;
                tmp_subscript_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_10);
                Py_DECREF(tmp_expression_value_31);
                Py_DECREF(tmp_subscript_value_10);
                if (tmp_subscript_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_30);

                    exception_lineno = 96;
                    type_description_2 = "c";
                    goto dict_build_exception_3;
                }
                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_30, tmp_subscript_value_9);
                Py_DECREF(tmp_expression_value_30);
                Py_DECREF(tmp_subscript_value_9);
                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 96;
                    type_description_2 = "c";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[29];
                tmp_dict_value_5 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__2_ConvNormActivation_68, mod_consts[69]);

                if (tmp_dict_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_5 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_5);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[31];
                tmp_expression_value_34 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__2_ConvNormActivation_68, mod_consts[50]);

                if (tmp_expression_value_34 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[50]);

                        if (unlikely(tmp_expression_value_34 == NULL)) {
                            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
                        }

                        if (tmp_expression_value_34 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 98;
                            type_description_2 = "c";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_34);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_subscript_value_11 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__2_ConvNormActivation_68, mod_consts[78]);

                if (tmp_subscript_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_11 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_11);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_34, tmp_subscript_value_11);
                Py_DECREF(tmp_expression_value_34);
                Py_DECREF(tmp_subscript_value_11);
                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 98;
                    type_description_2 = "c";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[8];
                tmp_expression_value_35 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__2_ConvNormActivation_68, mod_consts[50]);

                if (tmp_expression_value_35 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[50]);

                        if (unlikely(tmp_expression_value_35 == NULL)) {
                            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
                        }

                        if (tmp_expression_value_35 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 99;
                            type_description_2 = "c";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_35);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_subscript_value_12 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__2_ConvNormActivation_68, mod_consts[78]);

                if (tmp_subscript_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_12 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_12);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_35, tmp_subscript_value_12);
                Py_DECREF(tmp_expression_value_35);
                Py_DECREF(tmp_subscript_value_12);
                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 99;
                    type_description_2 = "c";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[84];
                tmp_dict_value_5 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_3;
            // Exception handling pass through code for dict_build:
            dict_build_exception_3:;
            Py_DECREF(tmp_defaults_2);
            Py_DECREF(tmp_annotations_5);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_3:;

            tmp_closure_3[0] = outline_1_var___class__;
            Py_INCREF(tmp_closure_3[0]);

            tmp_dictset_value = MAKE_FUNCTION_torchvision$ops$misc$$$function__5___init__(tmp_defaults_2, tmp_annotations_5, tmp_closure_3);

            tmp_res = PyObject_SetItem(locals_torchvision$ops$misc$$$class__2_ConvNormActivation_68, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3301e93299f690b440db026f3c11f4ab_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3301e93299f690b440db026f3c11f4ab_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3301e93299f690b440db026f3c11f4ab_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3301e93299f690b440db026f3c11f4ab_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_3301e93299f690b440db026f3c11f4ab_3);

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


                exception_lineno = 68;

                goto try_except_handler_7;
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
        tmp_res = PyObject_SetItem(locals_torchvision$ops$misc$$$class__2_ConvNormActivation_68, mod_consts[89], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_7;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_11 = mod_consts[91];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_11 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = locals_torchvision$ops$misc$$$class__2_ConvNormActivation_68;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_2972aa1654bd7e0dbf0e21aac6d48ee7->m_frame.f_lineno = 68;
            tmp_assign_source_27 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto try_except_handler_7;
            }
            assert(Nuitka_Cell_GET(outline_1_var___class__) == NULL);
            PyCell_SET(outline_1_var___class__, tmp_assign_source_27);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_1_var___class__));
        tmp_assign_source_26 = Nuitka_Cell_GET(outline_1_var___class__);
        Py_INCREF(tmp_assign_source_26);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_torchvision$ops$misc$$$class__2_ConvNormActivation_68);
        locals_torchvision$ops$misc$$$class__2_ConvNormActivation_68 = NULL;
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

        Py_DECREF(locals_torchvision$ops$misc$$$class__2_ConvNormActivation_68);
        locals_torchvision$ops$misc$$$class__2_ConvNormActivation_68 = NULL;
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
        exception_lineno = 68;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_26);
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
        PyObject *tmp_assign_source_28;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_expression_value_37;
        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_37 == NULL)) {
            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_8;
        }
        tmp_expression_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[26]);
        if (tmp_expression_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_8;
        }
        tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[57]);
        Py_DECREF(tmp_expression_value_36);
        if (tmp_tuple_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_8;
        }
        tmp_assign_source_28 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_28, 0, tmp_tuple_element_12);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_29 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_8;
        }
        tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_38 = tmp_class_creation_3__bases;
        tmp_subscript_value_13 = mod_consts[21];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_38, tmp_subscript_value_13, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_8;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_8;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_31 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_31;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_value_39;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_39 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_39, mod_consts[58]);
        tmp_condition_result_10 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_40 = tmp_class_creation_3__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[58]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_8;
        }
        tmp_tuple_element_13 = mod_consts[103];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_13);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_13 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_13);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_2972aa1654bd7e0dbf0e21aac6d48ee7->m_frame.f_lineno = 127;
        tmp_assign_source_32 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_32;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_41;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_41 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_41, mod_consts[60]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_8;
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
        tmp_mod_expr_left_3 = mod_consts[61];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[17];
        tmp_getattr_default_3 = mod_consts[62];
        tmp_tuple_element_14 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_8;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_42;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_42 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_42 == NULL));
            tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[17]);
            Py_DECREF(tmp_expression_value_42);
            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_14);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_8;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 127;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_8;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_33;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_34;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_torchvision$ops$misc$$$class__3_SqueezeExcitation_127 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_torchvision$ops$misc$$$class__3_SqueezeExcitation_127, mod_consts[64], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[104];
        tmp_res = PyObject_SetItem(locals_torchvision$ops$misc$$$class__3_SqueezeExcitation_127, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[103];
        tmp_res = PyObject_SetItem(locals_torchvision$ops$misc$$$class__3_SqueezeExcitation_127, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_10;
        }
        frame_3e30df65421bcecdece9efb6c042e690_4 = MAKE_CLASS_FRAME(codeobj_3e30df65421bcecdece9efb6c042e690, module_torchvision$ops$misc, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_3e30df65421bcecdece9efb6c042e690_4);
        assert(Py_REFCNT(frame_3e30df65421bcecdece9efb6c042e690_4) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_3;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_expression_value_43;
            PyObject *tmp_expression_value_44;
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            struct Nuitka_CellObject *tmp_closure_4[1];
            tmp_expression_value_44 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__3_SqueezeExcitation_127, mod_consts[6]);

            if (tmp_expression_value_44 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_expression_value_44 == NULL)) {
                        tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_expression_value_44 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 143;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_44);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[26]);
            Py_DECREF(tmp_expression_value_44);
            if (tmp_expression_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[95]);
            Py_DECREF(tmp_expression_value_43);
            if (tmp_tuple_element_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_defaults_3 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_45;
                PyObject *tmp_expression_value_46;
                PyTuple_SET_ITEM(tmp_defaults_3, 0, tmp_tuple_element_15);
                tmp_expression_value_46 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__3_SqueezeExcitation_127, mod_consts[6]);

                if (tmp_expression_value_46 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[6]);

                        if (unlikely(tmp_expression_value_46 == NULL)) {
                            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                        }

                        if (tmp_expression_value_46 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 144;
                            type_description_2 = "c";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_46);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                tmp_expression_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[26]);
                Py_DECREF(tmp_expression_value_46);
                if (tmp_expression_value_45 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 144;
                    type_description_2 = "c";
                    goto tuple_build_exception_7;
                }
                tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[105]);
                Py_DECREF(tmp_expression_value_45);
                if (tmp_tuple_element_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 144;
                    type_description_2 = "c";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_defaults_3, 1, tmp_tuple_element_15);
            }
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_defaults_3);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            tmp_dict_key_6 = mod_consts[106];
            tmp_dict_value_6 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__3_SqueezeExcitation_127, mod_consts[69]);

            if (tmp_dict_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_6 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_6);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_6 = _PyDict_NewPresized( 5 );
            {
                PyObject *tmp_expression_value_47;
                PyObject *tmp_subscript_value_14;
                PyObject *tmp_tuple_element_16;
                PyObject *tmp_expression_value_50;
                PyObject *tmp_subscript_value_15;
                PyObject *tmp_tuple_element_17;
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[107];
                tmp_dict_value_6 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__3_SqueezeExcitation_127, mod_consts[69]);

                if (tmp_dict_value_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_6 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_6);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[39];
                tmp_expression_value_47 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__3_SqueezeExcitation_127, mod_consts[48]);

                if (tmp_expression_value_47 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[48]);

                        if (unlikely(tmp_expression_value_47 == NULL)) {
                            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
                        }

                        if (tmp_expression_value_47 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 143;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_47);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_tuple_element_16 = Py_Ellipsis;
                tmp_subscript_value_14 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_48;
                    PyObject *tmp_expression_value_49;
                    PyTuple_SET_ITEM0(tmp_subscript_value_14, 0, tmp_tuple_element_16);
                    tmp_expression_value_49 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__3_SqueezeExcitation_127, mod_consts[6]);

                    if (tmp_expression_value_49 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[6]);

                            if (unlikely(tmp_expression_value_49 == NULL)) {
                                tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                            }

                            if (tmp_expression_value_49 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 143;
                                type_description_2 = "c";
                                goto tuple_build_exception_8;
                            }
                            Py_INCREF(tmp_expression_value_49);
                        } else {
                            goto tuple_build_exception_8;
                        }
                    }

                    tmp_expression_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[26]);
                    Py_DECREF(tmp_expression_value_49);
                    if (tmp_expression_value_48 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 143;
                        type_description_2 = "c";
                        goto tuple_build_exception_8;
                    }
                    tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[57]);
                    Py_DECREF(tmp_expression_value_48);
                    if (tmp_tuple_element_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 143;
                        type_description_2 = "c";
                        goto tuple_build_exception_8;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_14, 1, tmp_tuple_element_16);
                }
                goto tuple_build_noexception_8;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_8:;
                Py_DECREF(tmp_expression_value_47);
                Py_DECREF(tmp_subscript_value_14);
                goto dict_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_8:;
                tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_47, tmp_subscript_value_14);
                Py_DECREF(tmp_expression_value_47);
                Py_DECREF(tmp_subscript_value_14);
                if (tmp_dict_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 143;
                    type_description_2 = "c";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[40];
                tmp_expression_value_50 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__3_SqueezeExcitation_127, mod_consts[48]);

                if (tmp_expression_value_50 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[48]);

                        if (unlikely(tmp_expression_value_50 == NULL)) {
                            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
                        }

                        if (tmp_expression_value_50 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 144;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_50);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_tuple_element_17 = Py_Ellipsis;
                tmp_subscript_value_15 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_51;
                    PyObject *tmp_expression_value_52;
                    PyTuple_SET_ITEM0(tmp_subscript_value_15, 0, tmp_tuple_element_17);
                    tmp_expression_value_52 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__3_SqueezeExcitation_127, mod_consts[6]);

                    if (tmp_expression_value_52 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[6]);

                            if (unlikely(tmp_expression_value_52 == NULL)) {
                                tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                            }

                            if (tmp_expression_value_52 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 144;
                                type_description_2 = "c";
                                goto tuple_build_exception_9;
                            }
                            Py_INCREF(tmp_expression_value_52);
                        } else {
                            goto tuple_build_exception_9;
                        }
                    }

                    tmp_expression_value_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[26]);
                    Py_DECREF(tmp_expression_value_52);
                    if (tmp_expression_value_51 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 144;
                        type_description_2 = "c";
                        goto tuple_build_exception_9;
                    }
                    tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[57]);
                    Py_DECREF(tmp_expression_value_51);
                    if (tmp_tuple_element_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 144;
                        type_description_2 = "c";
                        goto tuple_build_exception_9;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_15, 1, tmp_tuple_element_17);
                }
                goto tuple_build_noexception_9;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_9:;
                Py_DECREF(tmp_expression_value_50);
                Py_DECREF(tmp_subscript_value_15);
                goto dict_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_9:;
                tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_50, tmp_subscript_value_15);
                Py_DECREF(tmp_expression_value_50);
                Py_DECREF(tmp_subscript_value_15);
                if (tmp_dict_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 144;
                    type_description_2 = "c";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[84];
                tmp_dict_value_6 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_4;
            // Exception handling pass through code for dict_build:
            dict_build_exception_4:;
            Py_DECREF(tmp_defaults_3);
            Py_DECREF(tmp_annotations_6);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_4:;

            tmp_closure_4[0] = outline_2_var___class__;
            Py_INCREF(tmp_closure_4[0]);

            tmp_dictset_value = MAKE_FUNCTION_torchvision$ops$misc$$$function__6___init__(tmp_defaults_3, tmp_annotations_6, tmp_closure_4);

            tmp_res = PyObject_SetItem(locals_torchvision$ops$misc$$$class__3_SqueezeExcitation_127, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            tmp_dict_key_7 = mod_consts[109];
            tmp_dict_value_7 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__3_SqueezeExcitation_127, mod_consts[52]);

            if (tmp_dict_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[52]);

                    if (unlikely(tmp_dict_value_7 == NULL)) {
                        tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                    }

                    if (tmp_dict_value_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 154;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_7);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_7 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[84];
            tmp_dict_value_7 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__3_SqueezeExcitation_127, mod_consts[52]);

            if (tmp_dict_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[52]);

                    if (unlikely(tmp_dict_value_7 == NULL)) {
                        tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                    }

                    if (tmp_dict_value_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 154;
                        type_description_2 = "c";
                        goto dict_build_exception_5;
                    }
                    Py_INCREF(tmp_dict_value_7);
                } else {
                    goto dict_build_exception_5;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_5;
            // Exception handling pass through code for dict_build:
            dict_build_exception_5:;
            Py_DECREF(tmp_annotations_7);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_5:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$ops$misc$$$function__7__scale(tmp_annotations_7);

            tmp_res = PyObject_SetItem(locals_torchvision$ops$misc$$$class__3_SqueezeExcitation_127, mod_consts[41], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            tmp_dict_key_8 = mod_consts[109];
            tmp_dict_value_8 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__3_SqueezeExcitation_127, mod_consts[52]);

            if (tmp_dict_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[52]);

                    if (unlikely(tmp_dict_value_8 == NULL)) {
                        tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                    }

                    if (tmp_dict_value_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 161;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_8);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_8 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[84];
            tmp_dict_value_8 = PyObject_GetItem(locals_torchvision$ops$misc$$$class__3_SqueezeExcitation_127, mod_consts[52]);

            if (tmp_dict_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[52]);

                    if (unlikely(tmp_dict_value_8 == NULL)) {
                        tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                    }

                    if (tmp_dict_value_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 161;
                        type_description_2 = "c";
                        goto dict_build_exception_6;
                    }
                    Py_INCREF(tmp_dict_value_8);
                } else {
                    goto dict_build_exception_6;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_6;
            // Exception handling pass through code for dict_build:
            dict_build_exception_6:;
            Py_DECREF(tmp_annotations_8);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_6:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$ops$misc$$$function__8_forward(tmp_annotations_8);

            tmp_res = PyObject_SetItem(locals_torchvision$ops$misc$$$class__3_SqueezeExcitation_127, mod_consts[85], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3e30df65421bcecdece9efb6c042e690_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3e30df65421bcecdece9efb6c042e690_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3e30df65421bcecdece9efb6c042e690_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3e30df65421bcecdece9efb6c042e690_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_3e30df65421bcecdece9efb6c042e690_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_10;
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


                exception_lineno = 127;

                goto try_except_handler_10;
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
        tmp_res = PyObject_SetItem(locals_torchvision$ops$misc$$$class__3_SqueezeExcitation_127, mod_consts[89], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_10;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_6 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_18 = mod_consts[103];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_18 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_18);
            tmp_tuple_element_18 = locals_torchvision$ops$misc$$$class__3_SqueezeExcitation_127;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_2972aa1654bd7e0dbf0e21aac6d48ee7->m_frame.f_lineno = 127;
            tmp_assign_source_35 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;

                goto try_except_handler_10;
            }
            assert(Nuitka_Cell_GET(outline_2_var___class__) == NULL);
            PyCell_SET(outline_2_var___class__, tmp_assign_source_35);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_2_var___class__));
        tmp_assign_source_34 = Nuitka_Cell_GET(outline_2_var___class__);
        Py_INCREF(tmp_assign_source_34);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_torchvision$ops$misc$$$class__3_SqueezeExcitation_127);
        locals_torchvision$ops$misc$$$class__3_SqueezeExcitation_127 = NULL;
        goto try_return_handler_9;
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

        Py_DECREF(locals_torchvision$ops$misc$$$class__3_SqueezeExcitation_127);
        locals_torchvision$ops$misc$$$class__3_SqueezeExcitation_127 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
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

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 127;
        goto try_except_handler_8;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_34);
    }
    goto try_end_4;
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
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2972aa1654bd7e0dbf0e21aac6d48ee7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2972aa1654bd7e0dbf0e21aac6d48ee7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2972aa1654bd7e0dbf0e21aac6d48ee7, exception_lineno);
    }



    assertFrameObject(frame_2972aa1654bd7e0dbf0e21aac6d48ee7);

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
    PGO_onModuleExit("torchvision.ops.misc", false);

    Py_INCREF(module_torchvision$ops$misc);
    return module_torchvision$ops$misc;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$misc, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torchvision$ops$misc", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
