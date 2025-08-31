/* Generated code for Python module 'sqlalchemy.dialects.postgresql.array'
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

/* The "module_sqlalchemy$dialects$postgresql$array" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_sqlalchemy$dialects$postgresql$array;
PyDictObject *moduledict_sqlalchemy$dialects$postgresql$array;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[198];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[198];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("sqlalchemy.dialects.postgresql.array"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 198; i++) {
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
void checkModuleConstants_sqlalchemy$dialects$postgresql$array(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 198; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_4da509687f62561482a161d312235531;
static PyCodeObject *codeobj_0ca82219dba3fa1d9265d9d77d3948dc;
static PyCodeObject *codeobj_f5ad71ca86465582271315fe04db68aa;
static PyCodeObject *codeobj_2445f8fc2e3b49feac7b9c09b4294333;
static PyCodeObject *codeobj_eaecf4209cdd49004a00575b03454e92;
static PyCodeObject *codeobj_ee9503b0d007f2b04f24b7b539daf2fc;
static PyCodeObject *codeobj_31cfb7a7b2fe16ac102de006123bfd48;
static PyCodeObject *codeobj_da50aedf1961f82ec30d6142de54c020;
static PyCodeObject *codeobj_9af0eea3b3698e9f8b8441c3e3bdd8b4;
static PyCodeObject *codeobj_3c7d8cb6cf73417d64ede9ea003b78db;
static PyCodeObject *codeobj_645eefeaa9f89bf4f54dfb6341a73996;
static PyCodeObject *codeobj_6121828634bf511d54288cf109b7e2ee;
static PyCodeObject *codeobj_8f35466bdce55209097d3872b6351cd8;
static PyCodeObject *codeobj_bc4185cc54ca0825ed3985243ba79712;
static PyCodeObject *codeobj_e69b1bf6a9d35d36c67d0f0d5996448f;
static PyCodeObject *codeobj_ce74293c63bee03c5089275c884ce27e;
static PyCodeObject *codeobj_6ace61a53682e828f810a994564002cc;
static PyCodeObject *codeobj_801dbd762d73be3cf0b81165c1427b54;
static PyCodeObject *codeobj_7ce0752f345f76e747333490e834ea73;
static PyCodeObject *codeobj_17c6f96e8b433f4d9a944fcede0ac085;
static PyCodeObject *codeobj_438b3c157f1b56bec6641a336956693b;
static PyCodeObject *codeobj_90be463e7993fc1f001bc5a1cb5fc955;
static PyCodeObject *codeobj_53cd335adadf8bfd106d2677fea8d0ad;
static PyCodeObject *codeobj_630d5b74c2898be1e4125e1237ab722c;
static PyCodeObject *codeobj_746f94b2a66cbfd234bba008a780463a;
static PyCodeObject *codeobj_9a9aa814aa7da17858a46c0546bacdd8;
static PyCodeObject *codeobj_8089eaaf655df657a1d412f6ca6537d9;
static PyCodeObject *codeobj_3a5c4150bf1d3e4c731fdd62ba90f98c;
static PyCodeObject *codeobj_08c3f9e72e426144cfd27b9660a6d104;
static PyCodeObject *codeobj_defc065aa03c8c5d295f305a57d6dcc3;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[170]); CHECK_OBJECT(module_filename_obj);
    codeobj_4da509687f62561482a161d312235531 = MAKE_CODE_OBJECT(module_filename_obj, 106, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[171], mod_consts[171], mod_consts[172], NULL, 1, 0, 0);
    codeobj_0ca82219dba3fa1d9265d9d77d3948dc = MAKE_CODE_OBJECT(module_filename_obj, 144, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[171], mod_consts[171], mod_consts[173], NULL, 1, 0, 0);
    codeobj_f5ad71ca86465582271315fe04db68aa = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[174], mod_consts[174], NULL, NULL, 0, 0, 0);
    codeobj_2445f8fc2e3b49feac7b9c09b4294333 = MAKE_CODE_OBJECT(module_filename_obj, 165, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[15], mod_consts[15], mod_consts[175], NULL, 0, 0, 0);
    codeobj_eaecf4209cdd49004a00575b03454e92 = MAKE_CODE_OBJECT(module_filename_obj, 36, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[115], mod_consts[115], mod_consts[176], NULL, 3, 0, 0);
    codeobj_ee9503b0d007f2b04f24b7b539daf2fc = MAKE_CODE_OBJECT(module_filename_obj, 27, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[97], mod_consts[97], mod_consts[176], NULL, 3, 0, 0);
    codeobj_31cfb7a7b2fe16ac102de006123bfd48 = MAKE_CODE_OBJECT(module_filename_obj, 237, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[146], mod_consts[146], mod_consts[175], NULL, 0, 0, 0);
    codeobj_da50aedf1961f82ec30d6142de54c020 = MAKE_CODE_OBJECT(module_filename_obj, 101, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[6], mod_consts[6], mod_consts[177], mod_consts[175], 2, 0, 0);
    codeobj_9af0eea3b3698e9f8b8441c3e3bdd8b4 = MAKE_CODE_OBJECT(module_filename_obj, 273, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[6], mod_consts[6], mod_consts[178], NULL, 5, 0, 0);
    codeobj_3c7d8cb6cf73417d64ede9ea003b78db = MAKE_CODE_OBJECT(module_filename_obj, 338, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[64], mod_consts[64], mod_consts[179], NULL, 1, 0, 0);
    codeobj_645eefeaa9f89bf4f54dfb6341a73996 = MAKE_CODE_OBJECT(module_filename_obj, 130, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[27], mod_consts[27], mod_consts[180], NULL, 5, 0, 0);
    codeobj_6121828634bf511d54288cf109b7e2ee = MAKE_CODE_OBJECT(module_filename_obj, 126, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[132], mod_consts[132], mod_consts[179], NULL, 1, 0, 0);
    codeobj_8f35466bdce55209097d3872b6351cd8 = MAKE_CODE_OBJECT(module_filename_obj, 417, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[74], mod_consts[74], mod_consts[181], NULL, 1, 0, 0);
    codeobj_bc4185cc54ca0825ed3985243ba79712 = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[25], mod_consts[25], mod_consts[175], NULL, 0, 0, 0);
    codeobj_e69b1bf6a9d35d36c67d0f0d5996448f = MAKE_CODE_OBJECT(module_filename_obj, 363, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[60], mod_consts[60], mod_consts[182], NULL, 2, 0, 0);
    codeobj_ce74293c63bee03c5089275c884ce27e = MAKE_CODE_OBJECT(module_filename_obj, 335, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[163], mod_consts[163], mod_consts[183], NULL, 3, 0, 0);
    codeobj_6ace61a53682e828f810a994564002cc = MAKE_CODE_OBJECT(module_filename_obj, 257, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[151], mod_consts[151], mod_consts[184], NULL, 2, 0, 0);
    codeobj_801dbd762d73be3cf0b81165c1427b54 = MAKE_CODE_OBJECT(module_filename_obj, 248, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[149], mod_consts[149], mod_consts[185], NULL, 2, 0, 0);
    codeobj_7ce0752f345f76e747333490e834ea73 = MAKE_CODE_OBJECT(module_filename_obj, 398, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[68], mod_consts[68], mod_consts[186], mod_consts[187], 1, 0, 0);
    codeobj_17c6f96e8b433f4d9a944fcede0ac085 = MAKE_CODE_OBJECT(module_filename_obj, 327, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[159], mod_consts[159], mod_consts[179], NULL, 1, 0, 0);
    codeobj_438b3c157f1b56bec6641a336956693b = MAKE_CODE_OBJECT(module_filename_obj, 345, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[49], mod_consts[49], mod_consts[188], NULL, 2, 0, 0);
    codeobj_90be463e7993fc1f001bc5a1cb5fc955 = MAKE_CODE_OBJECT(module_filename_obj, 265, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[153], mod_consts[153], mod_consts[184], NULL, 2, 0, 0);
    codeobj_53cd335adadf8bfd106d2677fea8d0ad = MAKE_CODE_OBJECT(module_filename_obj, 355, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[52], mod_consts[52], mod_consts[189], mod_consts[190], 1, 0, 0);
    codeobj_630d5b74c2898be1e4125e1237ab722c = MAKE_CODE_OBJECT(module_filename_obj, 368, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[52], mod_consts[52], mod_consts[191], mod_consts[192], 1, 0, 0);
    codeobj_746f94b2a66cbfd234bba008a780463a = MAKE_CODE_OBJECT(module_filename_obj, 383, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[52], mod_consts[52], mod_consts[191], mod_consts[192], 1, 0, 0);
    codeobj_9a9aa814aa7da17858a46c0546bacdd8 = MAKE_CODE_OBJECT(module_filename_obj, 402, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[52], mod_consts[52], mod_consts[193], mod_consts[194], 1, 0, 0);
    codeobj_8089eaaf655df657a1d412f6ca6537d9 = MAKE_CODE_OBJECT(module_filename_obj, 331, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[161], mod_consts[161], mod_consts[179], NULL, 1, 0, 0);
    codeobj_3a5c4150bf1d3e4c731fdd62ba90f98c = MAKE_CODE_OBJECT(module_filename_obj, 378, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[62], mod_consts[62], mod_consts[195], NULL, 3, 0, 0);
    codeobj_08c3f9e72e426144cfd27b9660a6d104 = MAKE_CODE_OBJECT(module_filename_obj, 151, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[137], mod_consts[137], mod_consts[196], NULL, 2, 0, 0);
    codeobj_defc065aa03c8c5d295f305a57d6dcc3 = MAKE_CODE_OBJECT(module_filename_obj, 352, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[50], mod_consts[50], mod_consts[197], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__6_complex_call_helper_pos_star_list_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__10___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__11_hashable();


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__12_python_type();


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__13_compare_values();


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__14__against_native_enum();


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__15_literal_processor();


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__15_literal_processor$$$function__1_to_str();


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__15_literal_processor$$$function__2_process(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__16_bind_processor();


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__16_bind_processor$$$function__1_process(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__17_result_processor();


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__17_result_processor$$$function__1_process(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__17_result_processor$$$function__2_handle_raw_string(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__17_result_processor$$$function__3_process(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__18__split_enum_values();


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__1_Any(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__2_All(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__3___init__(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__4__select_iterable();


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__5__bind_param(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__6_self_group(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__7_contains();


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__8_contained_by();


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__9_overlap();


// The module function definitions.
static PyObject *impl_sqlalchemy$dialects$postgresql$array$$$function__1_Any(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_other = python_pars[0];
    PyObject *par_arrexpr = python_pars[1];
    PyObject *par_operator = python_pars[2];
    struct Nuitka_FrameObject *frame_ee9503b0d007f2b04f24b7b539daf2fc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ee9503b0d007f2b04f24b7b539daf2fc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ee9503b0d007f2b04f24b7b539daf2fc)) {
        Py_XDECREF(cache_frame_ee9503b0d007f2b04f24b7b539daf2fc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ee9503b0d007f2b04f24b7b539daf2fc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ee9503b0d007f2b04f24b7b539daf2fc = MAKE_FUNCTION_FRAME(codeobj_ee9503b0d007f2b04f24b7b539daf2fc, module_sqlalchemy$dialects$postgresql$array, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ee9503b0d007f2b04f24b7b539daf2fc->m_type_description == NULL);
    frame_ee9503b0d007f2b04f24b7b539daf2fc = cache_frame_ee9503b0d007f2b04f24b7b539daf2fc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ee9503b0d007f2b04f24b7b539daf2fc);
    assert(Py_REFCNT(frame_ee9503b0d007f2b04f24b7b539daf2fc) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_arrexpr);
        tmp_called_instance_1 = par_arrexpr;
        CHECK_OBJECT(par_other);
        tmp_args_element_value_1 = par_other;
        CHECK_OBJECT(par_operator);
        tmp_args_element_value_2 = par_operator;
        frame_ee9503b0d007f2b04f24b7b539daf2fc->m_frame.f_lineno = 33;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[0],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
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
        exception_tb = MAKE_TRACEBACK(frame_ee9503b0d007f2b04f24b7b539daf2fc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ee9503b0d007f2b04f24b7b539daf2fc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ee9503b0d007f2b04f24b7b539daf2fc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ee9503b0d007f2b04f24b7b539daf2fc,
        type_description_1,
        par_other,
        par_arrexpr,
        par_operator
    );


    // Release cached frame if used for exception.
    if (frame_ee9503b0d007f2b04f24b7b539daf2fc == cache_frame_ee9503b0d007f2b04f24b7b539daf2fc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ee9503b0d007f2b04f24b7b539daf2fc);
        cache_frame_ee9503b0d007f2b04f24b7b539daf2fc = NULL;
    }

    assertFrameObject(frame_ee9503b0d007f2b04f24b7b539daf2fc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    CHECK_OBJECT(par_arrexpr);
    Py_DECREF(par_arrexpr);
    CHECK_OBJECT(par_operator);
    Py_DECREF(par_operator);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    CHECK_OBJECT(par_arrexpr);
    Py_DECREF(par_arrexpr);
    CHECK_OBJECT(par_operator);
    Py_DECREF(par_operator);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$postgresql$array$$$function__2_All(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_other = python_pars[0];
    PyObject *par_arrexpr = python_pars[1];
    PyObject *par_operator = python_pars[2];
    struct Nuitka_FrameObject *frame_eaecf4209cdd49004a00575b03454e92;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_eaecf4209cdd49004a00575b03454e92 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_eaecf4209cdd49004a00575b03454e92)) {
        Py_XDECREF(cache_frame_eaecf4209cdd49004a00575b03454e92);

#if _DEBUG_REFCOUNTS
        if (cache_frame_eaecf4209cdd49004a00575b03454e92 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_eaecf4209cdd49004a00575b03454e92 = MAKE_FUNCTION_FRAME(codeobj_eaecf4209cdd49004a00575b03454e92, module_sqlalchemy$dialects$postgresql$array, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_eaecf4209cdd49004a00575b03454e92->m_type_description == NULL);
    frame_eaecf4209cdd49004a00575b03454e92 = cache_frame_eaecf4209cdd49004a00575b03454e92;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_eaecf4209cdd49004a00575b03454e92);
    assert(Py_REFCNT(frame_eaecf4209cdd49004a00575b03454e92) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_arrexpr);
        tmp_called_instance_1 = par_arrexpr;
        CHECK_OBJECT(par_other);
        tmp_args_element_value_1 = par_other;
        CHECK_OBJECT(par_operator);
        tmp_args_element_value_2 = par_operator;
        frame_eaecf4209cdd49004a00575b03454e92->m_frame.f_lineno = 42;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[2],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
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
        exception_tb = MAKE_TRACEBACK(frame_eaecf4209cdd49004a00575b03454e92, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_eaecf4209cdd49004a00575b03454e92->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_eaecf4209cdd49004a00575b03454e92, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_eaecf4209cdd49004a00575b03454e92,
        type_description_1,
        par_other,
        par_arrexpr,
        par_operator
    );


    // Release cached frame if used for exception.
    if (frame_eaecf4209cdd49004a00575b03454e92 == cache_frame_eaecf4209cdd49004a00575b03454e92) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_eaecf4209cdd49004a00575b03454e92);
        cache_frame_eaecf4209cdd49004a00575b03454e92 = NULL;
    }

    assertFrameObject(frame_eaecf4209cdd49004a00575b03454e92);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    CHECK_OBJECT(par_arrexpr);
    Py_DECREF(par_arrexpr);
    CHECK_OBJECT(par_operator);
    Py_DECREF(par_operator);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    CHECK_OBJECT(par_arrexpr);
    Py_DECREF(par_arrexpr);
    CHECK_OBJECT(par_operator);
    Py_DECREF(par_operator);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$postgresql$array$$$function__3___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_clauses = python_pars[1];
    PyObject *par_kw = python_pars[2];
    PyObject *var_type_arg = NULL;
    PyObject *var_main_type = NULL;
    PyObject *outline_0_var_arg = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_da50aedf1961f82ec30d6142de54c020;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_4da509687f62561482a161d312235531_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_4da509687f62561482a161d312235531_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_da50aedf1961f82ec30d6142de54c020 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_default_value_1;
        CHECK_OBJECT(par_kw);
        tmp_dict_arg_value_1 = par_kw;
        tmp_key_value_1 = mod_consts[4];
        tmp_default_value_1 = Py_None;
        tmp_assign_source_1 = DICT_POP3(tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
        assert(!(tmp_assign_source_1 == NULL));
        assert(var_type_arg == NULL);
        var_type_arg = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_da50aedf1961f82ec30d6142de54c020)) {
        Py_XDECREF(cache_frame_da50aedf1961f82ec30d6142de54c020);

#if _DEBUG_REFCOUNTS
        if (cache_frame_da50aedf1961f82ec30d6142de54c020 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_da50aedf1961f82ec30d6142de54c020 = MAKE_FUNCTION_FRAME(codeobj_da50aedf1961f82ec30d6142de54c020, module_sqlalchemy$dialects$postgresql$array, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_da50aedf1961f82ec30d6142de54c020->m_type_description == NULL);
    frame_da50aedf1961f82ec30d6142de54c020 = cache_frame_da50aedf1961f82ec30d6142de54c020;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_da50aedf1961f82ec30d6142de54c020);
    assert(Py_REFCNT(frame_da50aedf1961f82ec30d6142de54c020) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 104;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(moduledict_sqlalchemy$dialects$postgresql$array, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 104;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[8]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 104;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_clauses);
        tmp_dircall_arg3_1 = par_clauses;
        CHECK_OBJECT(par_kw);
        tmp_dircall_arg4_1 = par_kw;
        Py_INCREF(tmp_dircall_arg3_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_call_result_1 = impl___main__$$$function__6_complex_call_helper_pos_star_list_star_dict(dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_expression_value_3;
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[9]);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_1 = "oooooc";
                goto try_except_handler_2;
            }
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_1 = "oooooc";
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
        if (isFrameUnusable(cache_frame_4da509687f62561482a161d312235531_2)) {
            Py_XDECREF(cache_frame_4da509687f62561482a161d312235531_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_4da509687f62561482a161d312235531_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_4da509687f62561482a161d312235531_2 = MAKE_FUNCTION_FRAME(codeobj_4da509687f62561482a161d312235531, module_sqlalchemy$dialects$postgresql$array, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_4da509687f62561482a161d312235531_2->m_type_description == NULL);
        frame_4da509687f62561482a161d312235531_2 = cache_frame_4da509687f62561482a161d312235531_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_4da509687f62561482a161d312235531_2);
        assert(Py_REFCNT(frame_4da509687f62561482a161d312235531_2) == 2);

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
                    exception_lineno = 106;
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
                PyObject *old = outline_0_var_arg;
                outline_0_var_arg = tmp_assign_source_5;
                Py_INCREF(outline_0_var_arg);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_expression_value_4;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_arg);
            tmp_expression_value_4 = outline_0_var_arg;
            tmp_append_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[10]);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assattr_value_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assattr_value_1);
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
            exception_tb = MAKE_TRACEBACK(frame_4da509687f62561482a161d312235531_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_4da509687f62561482a161d312235531_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_4da509687f62561482a161d312235531_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_4da509687f62561482a161d312235531_2,
            type_description_2,
            outline_0_var_arg
        );


        // Release cached frame if used for exception.
        if (frame_4da509687f62561482a161d312235531_2 == cache_frame_4da509687f62561482a161d312235531_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_4da509687f62561482a161d312235531_2);
            cache_frame_4da509687f62561482a161d312235531_2 = NULL;
        }

        assertFrameObject(frame_4da509687f62561482a161d312235531_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooooc";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_arg);
        outline_0_var_arg = NULL;
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

        Py_XDECREF(outline_0_var_arg);
        outline_0_var_arg = NULL;
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
        exception_lineno = 106;
        goto frame_exception_exit_1;
        outline_result_1:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[11], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_6;
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(var_type_arg);
        tmp_cmp_expr_left_1 = var_type_arg;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(var_type_arg);
        tmp_assign_source_6 = var_type_arg;
        Py_INCREF(tmp_assign_source_6);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[11]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 112;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[11]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[12];
        tmp_assign_source_6 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[14]);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        condexpr_end_2:;
        condexpr_end_1:;
        assert(var_main_type == NULL);
        var_main_type = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(var_main_type);
        tmp_isinstance_inst_1 = var_main_type;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_kw_call_dict_value_0_1;
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_assattr_target_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_main_type);
        tmp_expression_value_9 = var_main_type;
        tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[16]);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_main_type);
        tmp_expression_value_10 = var_main_type;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[17]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 120;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_4 != false) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(var_main_type);
        tmp_expression_value_11 = var_main_type;
        tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[17]);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 119;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[18];
        tmp_kw_call_dict_value_0_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 119;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_kw_call_dict_value_0_1 = mod_consts[19];
        Py_INCREF(tmp_kw_call_dict_value_0_1);
        condexpr_end_3:;
        frame_da50aedf1961f82ec30d6142de54c020->m_frame.f_lineno = 117;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assattr_value_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[20]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[10], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_assattr_target_3;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_main_type);
        tmp_args_element_value_1 = var_main_type;
        frame_da50aedf1961f82ec30d6142de54c020->m_frame.f_lineno = 124;
        tmp_assattr_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[10], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_da50aedf1961f82ec30d6142de54c020, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_da50aedf1961f82ec30d6142de54c020->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_da50aedf1961f82ec30d6142de54c020, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_da50aedf1961f82ec30d6142de54c020,
        type_description_1,
        par_self,
        par_clauses,
        par_kw,
        var_type_arg,
        var_main_type,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_da50aedf1961f82ec30d6142de54c020 == cache_frame_da50aedf1961f82ec30d6142de54c020) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_da50aedf1961f82ec30d6142de54c020);
        cache_frame_da50aedf1961f82ec30d6142de54c020 = NULL;
    }

    assertFrameObject(frame_da50aedf1961f82ec30d6142de54c020);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_type_arg);
    Py_DECREF(var_type_arg);
    var_type_arg = NULL;
    Py_XDECREF(var_main_type);
    var_main_type = NULL;
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

    CHECK_OBJECT(var_type_arg);
    Py_DECREF(var_type_arg);
    var_type_arg = NULL;
    Py_XDECREF(var_main_type);
    var_main_type = NULL;
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
    CHECK_OBJECT(par_clauses);
    Py_DECREF(par_clauses);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_clauses);
    Py_DECREF(par_clauses);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$postgresql$array$$$function__4__select_iterable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_self);
        tmp_tuple_element_1 = par_self;
        tmp_return_value = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
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


static PyObject *impl_sqlalchemy$dialects$postgresql$array$$$function__5__bind_param(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_operator = python_pars[1];
    PyObject *par_obj = python_pars[2];
    PyObject *par__assume_scalar = python_pars[3];
    PyObject *par_type_ = python_pars[4];
    PyObject *outline_0_var_o = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_645eefeaa9f89bf4f54dfb6341a73996;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_0ca82219dba3fa1d9265d9d77d3948dc_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_0ca82219dba3fa1d9265d9d77d3948dc_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_645eefeaa9f89bf4f54dfb6341a73996 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_645eefeaa9f89bf4f54dfb6341a73996)) {
        Py_XDECREF(cache_frame_645eefeaa9f89bf4f54dfb6341a73996);

#if _DEBUG_REFCOUNTS
        if (cache_frame_645eefeaa9f89bf4f54dfb6341a73996 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_645eefeaa9f89bf4f54dfb6341a73996 = MAKE_FUNCTION_FRAME(codeobj_645eefeaa9f89bf4f54dfb6341a73996, module_sqlalchemy$dialects$postgresql$array, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_645eefeaa9f89bf4f54dfb6341a73996->m_type_description == NULL);
    frame_645eefeaa9f89bf4f54dfb6341a73996 = cache_frame_645eefeaa9f89bf4f54dfb6341a73996;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_645eefeaa9f89bf4f54dfb6341a73996);
    assert(Py_REFCNT(frame_645eefeaa9f89bf4f54dfb6341a73996) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par__assume_scalar);
        tmp_truth_name_1 = CHECK_IF_TRUE(par__assume_scalar);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_operator);
        tmp_cmp_expr_left_1 = par_operator;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[21]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_cmp_expr_right_1);
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_dict_value_3_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[23]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = Py_None;
        CHECK_OBJECT(par_obj);
        tmp_kw_call_arg_value_1_1 = par_obj;
        CHECK_OBJECT(par_operator);
        tmp_kw_call_dict_value_0_1 = par_operator;
        CHECK_OBJECT(par_type_);
        tmp_kw_call_dict_value_1_1 = par_type_;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_kw_call_dict_value_2_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[10]);
        if (tmp_kw_call_dict_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 137;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_3_1 = Py_True;
        frame_645eefeaa9f89bf4f54dfb6341a73996->m_frame.f_lineno = 132;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[24]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_dict_value_2_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_obj);
            tmp_iter_arg_1 = par_obj;
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_1 = "ooooo";
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
        if (isFrameUnusable(cache_frame_0ca82219dba3fa1d9265d9d77d3948dc_2)) {
            Py_XDECREF(cache_frame_0ca82219dba3fa1d9265d9d77d3948dc_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_0ca82219dba3fa1d9265d9d77d3948dc_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_0ca82219dba3fa1d9265d9d77d3948dc_2 = MAKE_FUNCTION_FRAME(codeobj_0ca82219dba3fa1d9265d9d77d3948dc, module_sqlalchemy$dialects$postgresql$array, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_0ca82219dba3fa1d9265d9d77d3948dc_2->m_type_description == NULL);
        frame_0ca82219dba3fa1d9265d9d77d3948dc_2 = cache_frame_0ca82219dba3fa1d9265d9d77d3948dc_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_0ca82219dba3fa1d9265d9d77d3948dc_2);
        assert(Py_REFCNT(frame_0ca82219dba3fa1d9265d9d77d3948dc_2) == 2);

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
                    type_description_2 = "oooo";
                    exception_lineno = 144;
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
                PyObject *old = outline_0_var_o;
                outline_0_var_o = tmp_assign_source_4;
                Py_INCREF(outline_0_var_o);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_kw_call_arg_value_0_2;
            PyObject *tmp_kw_call_arg_value_1_2;
            PyObject *tmp_kw_call_dict_value_0_2;
            PyObject *tmp_kw_call_dict_value_1_2;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            if (par_self == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[26]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 144;
                type_description_2 = "oooo";
                goto try_except_handler_2;
            }

            tmp_expression_value_4 = par_self;
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[27]);
            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "oooo";
                goto try_except_handler_2;
            }
            if (par_operator == NULL) {
                Py_DECREF(tmp_called_value_3);
                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[28]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 145;
                type_description_2 = "oooo";
                goto try_except_handler_2;
            }

            tmp_kw_call_arg_value_0_2 = par_operator;
            CHECK_OBJECT(outline_0_var_o);
            tmp_kw_call_arg_value_1_2 = outline_0_var_o;
            tmp_kw_call_dict_value_0_2 = Py_True;
            if (par_type_ == NULL) {
                Py_DECREF(tmp_called_value_3);
                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[4]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 145;
                type_description_2 = "oooo";
                goto try_except_handler_2;
            }

            tmp_kw_call_dict_value_1_2 = par_type_;
            frame_0ca82219dba3fa1d9265d9d77d3948dc_2->m_frame.f_lineno = 144;
            {
                PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
                PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
                tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[29]);
            }

            Py_DECREF(tmp_called_value_3);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "oooo";
                goto try_except_handler_2;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "oooo";
                goto try_except_handler_2;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_2 = "oooo";
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
            exception_tb = MAKE_TRACEBACK(frame_0ca82219dba3fa1d9265d9d77d3948dc_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0ca82219dba3fa1d9265d9d77d3948dc_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0ca82219dba3fa1d9265d9d77d3948dc_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0ca82219dba3fa1d9265d9d77d3948dc_2,
            type_description_2,
            outline_0_var_o,
            par_self,
            par_operator,
            par_type_
        );


        // Release cached frame if used for exception.
        if (frame_0ca82219dba3fa1d9265d9d77d3948dc_2 == cache_frame_0ca82219dba3fa1d9265d9d77d3948dc_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_0ca82219dba3fa1d9265d9d77d3948dc_2);
            cache_frame_0ca82219dba3fa1d9265d9d77d3948dc_2 = NULL;
        }

        assertFrameObject(frame_0ca82219dba3fa1d9265d9d77d3948dc_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooo";
        goto try_except_handler_1;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        Py_XDECREF(outline_0_var_o);
        outline_0_var_o = NULL;
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

        Py_XDECREF(outline_0_var_o);
        outline_0_var_o = NULL;
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
        exception_lineno = 144;
        goto frame_exception_exit_1;
        outline_result_1:;
        frame_645eefeaa9f89bf4f54dfb6341a73996->m_frame.f_lineno = 142;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_645eefeaa9f89bf4f54dfb6341a73996, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_645eefeaa9f89bf4f54dfb6341a73996->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_645eefeaa9f89bf4f54dfb6341a73996, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_645eefeaa9f89bf4f54dfb6341a73996,
        type_description_1,
        par_self,
        par_operator,
        par_obj,
        par__assume_scalar,
        par_type_
    );


    // Release cached frame if used for exception.
    if (frame_645eefeaa9f89bf4f54dfb6341a73996 == cache_frame_645eefeaa9f89bf4f54dfb6341a73996) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_645eefeaa9f89bf4f54dfb6341a73996);
        cache_frame_645eefeaa9f89bf4f54dfb6341a73996 = NULL;
    }

    assertFrameObject(frame_645eefeaa9f89bf4f54dfb6341a73996);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_2:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_operator);
    Py_DECREF(par_operator);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par__assume_scalar);
    Py_DECREF(par__assume_scalar);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_operator);
    Py_DECREF(par_operator);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par__assume_scalar);
    Py_DECREF(par__assume_scalar);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$postgresql$array$$$function__6_self_group(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_against = python_pars[1];
    struct Nuitka_FrameObject *frame_08c3f9e72e426144cfd27b9660a6d104;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_08c3f9e72e426144cfd27b9660a6d104 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_08c3f9e72e426144cfd27b9660a6d104)) {
        Py_XDECREF(cache_frame_08c3f9e72e426144cfd27b9660a6d104);

#if _DEBUG_REFCOUNTS
        if (cache_frame_08c3f9e72e426144cfd27b9660a6d104 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_08c3f9e72e426144cfd27b9660a6d104 = MAKE_FUNCTION_FRAME(codeobj_08c3f9e72e426144cfd27b9660a6d104, module_sqlalchemy$dialects$postgresql$array, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_08c3f9e72e426144cfd27b9660a6d104->m_type_description == NULL);
    frame_08c3f9e72e426144cfd27b9660a6d104 = cache_frame_08c3f9e72e426144cfd27b9660a6d104;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_08c3f9e72e426144cfd27b9660a6d104);
    assert(Py_REFCNT(frame_08c3f9e72e426144cfd27b9660a6d104) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_against);
        tmp_cmp_expr_left_1 = par_against;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_expression_value_3;
            PyTuple_SET_ITEM(tmp_cmp_expr_right_1, 0, tmp_tuple_element_1);
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[31]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_cmp_expr_right_1, 1, tmp_tuple_element_1);
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[21]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_cmp_expr_right_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_cmp_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oo";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_08c3f9e72e426144cfd27b9660a6d104->m_frame.f_lineno = 153;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[32], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    CHECK_OBJECT(par_self);
    tmp_return_value = par_self;
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
        exception_tb = MAKE_TRACEBACK(frame_08c3f9e72e426144cfd27b9660a6d104, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_08c3f9e72e426144cfd27b9660a6d104->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_08c3f9e72e426144cfd27b9660a6d104, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_08c3f9e72e426144cfd27b9660a6d104,
        type_description_1,
        par_self,
        par_against
    );


    // Release cached frame if used for exception.
    if (frame_08c3f9e72e426144cfd27b9660a6d104 == cache_frame_08c3f9e72e426144cfd27b9660a6d104) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_08c3f9e72e426144cfd27b9660a6d104);
        cache_frame_08c3f9e72e426144cfd27b9660a6d104 = NULL;
    }

    assertFrameObject(frame_08c3f9e72e426144cfd27b9660a6d104);

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
    CHECK_OBJECT(par_against);
    Py_DECREF(par_against);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_against);
    Py_DECREF(par_against);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$postgresql$array$$$function__7_contains(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    struct Nuitka_FrameObject *frame_801dbd762d73be3cf0b81165c1427b54;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_801dbd762d73be3cf0b81165c1427b54 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_801dbd762d73be3cf0b81165c1427b54)) {
        Py_XDECREF(cache_frame_801dbd762d73be3cf0b81165c1427b54);

#if _DEBUG_REFCOUNTS
        if (cache_frame_801dbd762d73be3cf0b81165c1427b54 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_801dbd762d73be3cf0b81165c1427b54 = MAKE_FUNCTION_FRAME(codeobj_801dbd762d73be3cf0b81165c1427b54, module_sqlalchemy$dialects$postgresql$array, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_801dbd762d73be3cf0b81165c1427b54->m_type_description == NULL);
    frame_801dbd762d73be3cf0b81165c1427b54 = cache_frame_801dbd762d73be3cf0b81165c1427b54;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_801dbd762d73be3cf0b81165c1427b54);
    assert(Py_REFCNT(frame_801dbd762d73be3cf0b81165c1427b54) == 2);

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
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[33]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_kw_call_arg_value_0_1 == NULL)) {
            tmp_kw_call_arg_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 255;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_kw_call_arg_value_1_1 = par_other;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 255;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[35]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 255;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_801dbd762d73be3cf0b81165c1427b54->m_frame.f_lineno = 255;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[36]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
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
        exception_tb = MAKE_TRACEBACK(frame_801dbd762d73be3cf0b81165c1427b54, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_801dbd762d73be3cf0b81165c1427b54->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_801dbd762d73be3cf0b81165c1427b54, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_801dbd762d73be3cf0b81165c1427b54,
        type_description_1,
        par_self,
        par_other,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_801dbd762d73be3cf0b81165c1427b54 == cache_frame_801dbd762d73be3cf0b81165c1427b54) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_801dbd762d73be3cf0b81165c1427b54);
        cache_frame_801dbd762d73be3cf0b81165c1427b54 = NULL;
    }

    assertFrameObject(frame_801dbd762d73be3cf0b81165c1427b54);

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


static PyObject *impl_sqlalchemy$dialects$postgresql$array$$$function__8_contained_by(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_6ace61a53682e828f810a994564002cc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6ace61a53682e828f810a994564002cc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6ace61a53682e828f810a994564002cc)) {
        Py_XDECREF(cache_frame_6ace61a53682e828f810a994564002cc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6ace61a53682e828f810a994564002cc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6ace61a53682e828f810a994564002cc = MAKE_FUNCTION_FRAME(codeobj_6ace61a53682e828f810a994564002cc, module_sqlalchemy$dialects$postgresql$array, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6ace61a53682e828f810a994564002cc->m_type_description == NULL);
    frame_6ace61a53682e828f810a994564002cc = cache_frame_6ace61a53682e828f810a994564002cc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6ace61a53682e828f810a994564002cc);
    assert(Py_REFCNT(frame_6ace61a53682e828f810a994564002cc) == 2);

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
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[33]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_kw_call_arg_value_0_1 == NULL)) {
            tmp_kw_call_arg_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 262;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_kw_call_arg_value_1_1 = par_other;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 262;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[35]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 262;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_6ace61a53682e828f810a994564002cc->m_frame.f_lineno = 261;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[36]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
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
        exception_tb = MAKE_TRACEBACK(frame_6ace61a53682e828f810a994564002cc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6ace61a53682e828f810a994564002cc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6ace61a53682e828f810a994564002cc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6ace61a53682e828f810a994564002cc,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_6ace61a53682e828f810a994564002cc == cache_frame_6ace61a53682e828f810a994564002cc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6ace61a53682e828f810a994564002cc);
        cache_frame_6ace61a53682e828f810a994564002cc = NULL;
    }

    assertFrameObject(frame_6ace61a53682e828f810a994564002cc);

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


static PyObject *impl_sqlalchemy$dialects$postgresql$array$$$function__9_overlap(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_90be463e7993fc1f001bc5a1cb5fc955;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_90be463e7993fc1f001bc5a1cb5fc955 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_90be463e7993fc1f001bc5a1cb5fc955)) {
        Py_XDECREF(cache_frame_90be463e7993fc1f001bc5a1cb5fc955);

#if _DEBUG_REFCOUNTS
        if (cache_frame_90be463e7993fc1f001bc5a1cb5fc955 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_90be463e7993fc1f001bc5a1cb5fc955 = MAKE_FUNCTION_FRAME(codeobj_90be463e7993fc1f001bc5a1cb5fc955, module_sqlalchemy$dialects$postgresql$array, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_90be463e7993fc1f001bc5a1cb5fc955->m_type_description == NULL);
    frame_90be463e7993fc1f001bc5a1cb5fc955 = cache_frame_90be463e7993fc1f001bc5a1cb5fc955;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_90be463e7993fc1f001bc5a1cb5fc955);
    assert(Py_REFCNT(frame_90be463e7993fc1f001bc5a1cb5fc955) == 2);

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
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[33]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_kw_call_arg_value_0_1 == NULL)) {
            tmp_kw_call_arg_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 269;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_kw_call_arg_value_1_1 = par_other;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 269;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[35]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 269;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_90be463e7993fc1f001bc5a1cb5fc955->m_frame.f_lineno = 269;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[36]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
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
        exception_tb = MAKE_TRACEBACK(frame_90be463e7993fc1f001bc5a1cb5fc955, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_90be463e7993fc1f001bc5a1cb5fc955->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_90be463e7993fc1f001bc5a1cb5fc955, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_90be463e7993fc1f001bc5a1cb5fc955,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_90be463e7993fc1f001bc5a1cb5fc955 == cache_frame_90be463e7993fc1f001bc5a1cb5fc955) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_90be463e7993fc1f001bc5a1cb5fc955);
        cache_frame_90be463e7993fc1f001bc5a1cb5fc955 = NULL;
    }

    assertFrameObject(frame_90be463e7993fc1f001bc5a1cb5fc955);

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


static PyObject *impl_sqlalchemy$dialects$postgresql$array$$$function__10___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_item_type = python_pars[1];
    PyObject *par_as_tuple = python_pars[2];
    PyObject *par_dimensions = python_pars[3];
    PyObject *par_zero_indexes = python_pars[4];
    struct Nuitka_FrameObject *frame_9af0eea3b3698e9f8b8441c3e3bdd8b4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_9af0eea3b3698e9f8b8441c3e3bdd8b4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9af0eea3b3698e9f8b8441c3e3bdd8b4)) {
        Py_XDECREF(cache_frame_9af0eea3b3698e9f8b8441c3e3bdd8b4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9af0eea3b3698e9f8b8441c3e3bdd8b4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9af0eea3b3698e9f8b8441c3e3bdd8b4 = MAKE_FUNCTION_FRAME(codeobj_9af0eea3b3698e9f8b8441c3e3bdd8b4, module_sqlalchemy$dialects$postgresql$array, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9af0eea3b3698e9f8b8441c3e3bdd8b4->m_type_description == NULL);
    frame_9af0eea3b3698e9f8b8441c3e3bdd8b4 = cache_frame_9af0eea3b3698e9f8b8441c3e3bdd8b4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9af0eea3b3698e9f8b8441c3e3bdd8b4);
    assert(Py_REFCNT(frame_9af0eea3b3698e9f8b8441c3e3bdd8b4) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_item_type);
        tmp_isinstance_inst_1 = par_item_type;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ooooo";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[42];
        frame_9af0eea3b3698e9f8b8441c3e3bdd8b4->m_frame.f_lineno = 316;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 316;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(par_item_type);
        tmp_isinstance_inst_2 = par_item_type;
        tmp_isinstance_cls_2 = (PyObject *)&PyType_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "ooooo";
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
        PyObject *tmp_called_value_1;
        CHECK_OBJECT(par_item_type);
        tmp_called_value_1 = par_item_type;
        frame_9af0eea3b3698e9f8b8441c3e3bdd8b4->m_frame.f_lineno = 321;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_item_type;
            assert(old != NULL);
            par_item_type = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_item_type);
        tmp_assattr_value_1 = par_item_type;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[16], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_as_tuple);
        tmp_assattr_value_2 = par_as_tuple;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[43], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_dimensions);
        tmp_assattr_value_3 = par_dimensions;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[17], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_zero_indexes);
        tmp_assattr_value_4 = par_zero_indexes;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[44], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9af0eea3b3698e9f8b8441c3e3bdd8b4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9af0eea3b3698e9f8b8441c3e3bdd8b4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9af0eea3b3698e9f8b8441c3e3bdd8b4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9af0eea3b3698e9f8b8441c3e3bdd8b4,
        type_description_1,
        par_self,
        par_item_type,
        par_as_tuple,
        par_dimensions,
        par_zero_indexes
    );


    // Release cached frame if used for exception.
    if (frame_9af0eea3b3698e9f8b8441c3e3bdd8b4 == cache_frame_9af0eea3b3698e9f8b8441c3e3bdd8b4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9af0eea3b3698e9f8b8441c3e3bdd8b4);
        cache_frame_9af0eea3b3698e9f8b8441c3e3bdd8b4 = NULL;
    }

    assertFrameObject(frame_9af0eea3b3698e9f8b8441c3e3bdd8b4);

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
    CHECK_OBJECT(par_item_type);
    Py_DECREF(par_item_type);
    par_item_type = NULL;
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

    Py_XDECREF(par_item_type);
    par_item_type = NULL;
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
    CHECK_OBJECT(par_as_tuple);
    Py_DECREF(par_as_tuple);
    CHECK_OBJECT(par_dimensions);
    Py_DECREF(par_dimensions);
    CHECK_OBJECT(par_zero_indexes);
    Py_DECREF(par_zero_indexes);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_as_tuple);
    Py_DECREF(par_as_tuple);
    CHECK_OBJECT(par_dimensions);
    Py_DECREF(par_dimensions);
    CHECK_OBJECT(par_zero_indexes);
    Py_DECREF(par_zero_indexes);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$postgresql$array$$$function__11_hashable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_17c6f96e8b433f4d9a944fcede0ac085;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_17c6f96e8b433f4d9a944fcede0ac085 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_17c6f96e8b433f4d9a944fcede0ac085)) {
        Py_XDECREF(cache_frame_17c6f96e8b433f4d9a944fcede0ac085);

#if _DEBUG_REFCOUNTS
        if (cache_frame_17c6f96e8b433f4d9a944fcede0ac085 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_17c6f96e8b433f4d9a944fcede0ac085 = MAKE_FUNCTION_FRAME(codeobj_17c6f96e8b433f4d9a944fcede0ac085, module_sqlalchemy$dialects$postgresql$array, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_17c6f96e8b433f4d9a944fcede0ac085->m_type_description == NULL);
    frame_17c6f96e8b433f4d9a944fcede0ac085 = cache_frame_17c6f96e8b433f4d9a944fcede0ac085;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_17c6f96e8b433f4d9a944fcede0ac085);
    assert(Py_REFCNT(frame_17c6f96e8b433f4d9a944fcede0ac085) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[43]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
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
        exception_tb = MAKE_TRACEBACK(frame_17c6f96e8b433f4d9a944fcede0ac085, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_17c6f96e8b433f4d9a944fcede0ac085->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_17c6f96e8b433f4d9a944fcede0ac085, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_17c6f96e8b433f4d9a944fcede0ac085,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_17c6f96e8b433f4d9a944fcede0ac085 == cache_frame_17c6f96e8b433f4d9a944fcede0ac085) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_17c6f96e8b433f4d9a944fcede0ac085);
        cache_frame_17c6f96e8b433f4d9a944fcede0ac085 = NULL;
    }

    assertFrameObject(frame_17c6f96e8b433f4d9a944fcede0ac085);

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


static PyObject *impl_sqlalchemy$dialects$postgresql$array$$$function__13_compare_values(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *par_y = python_pars[2];
    struct Nuitka_FrameObject *frame_ce74293c63bee03c5089275c884ce27e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ce74293c63bee03c5089275c884ce27e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ce74293c63bee03c5089275c884ce27e)) {
        Py_XDECREF(cache_frame_ce74293c63bee03c5089275c884ce27e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ce74293c63bee03c5089275c884ce27e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ce74293c63bee03c5089275c884ce27e = MAKE_FUNCTION_FRAME(codeobj_ce74293c63bee03c5089275c884ce27e, module_sqlalchemy$dialects$postgresql$array, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ce74293c63bee03c5089275c884ce27e->m_type_description == NULL);
    frame_ce74293c63bee03c5089275c884ce27e = cache_frame_ce74293c63bee03c5089275c884ce27e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ce74293c63bee03c5089275c884ce27e);
    assert(Py_REFCNT(frame_ce74293c63bee03c5089275c884ce27e) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_x);
        tmp_cmp_expr_left_1 = par_x;
        CHECK_OBJECT(par_y);
        tmp_cmp_expr_right_1 = par_y;
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
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
        exception_tb = MAKE_TRACEBACK(frame_ce74293c63bee03c5089275c884ce27e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ce74293c63bee03c5089275c884ce27e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ce74293c63bee03c5089275c884ce27e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ce74293c63bee03c5089275c884ce27e,
        type_description_1,
        par_self,
        par_x,
        par_y
    );


    // Release cached frame if used for exception.
    if (frame_ce74293c63bee03c5089275c884ce27e == cache_frame_ce74293c63bee03c5089275c884ce27e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ce74293c63bee03c5089275c884ce27e);
        cache_frame_ce74293c63bee03c5089275c884ce27e = NULL;
    }

    assertFrameObject(frame_ce74293c63bee03c5089275c884ce27e);

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
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$postgresql$array$$$function__14__against_native_enum(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_3c7d8cb6cf73417d64ede9ea003b78db;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_3c7d8cb6cf73417d64ede9ea003b78db = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3c7d8cb6cf73417d64ede9ea003b78db)) {
        Py_XDECREF(cache_frame_3c7d8cb6cf73417d64ede9ea003b78db);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3c7d8cb6cf73417d64ede9ea003b78db == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3c7d8cb6cf73417d64ede9ea003b78db = MAKE_FUNCTION_FRAME(codeobj_3c7d8cb6cf73417d64ede9ea003b78db, module_sqlalchemy$dialects$postgresql$array, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3c7d8cb6cf73417d64ede9ea003b78db->m_type_description == NULL);
    frame_3c7d8cb6cf73417d64ede9ea003b78db = cache_frame_3c7d8cb6cf73417d64ede9ea003b78db;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3c7d8cb6cf73417d64ede9ea003b78db);
    assert(Py_REFCNT(frame_3c7d8cb6cf73417d64ede9ea003b78db) == 2);

    // Framed code:
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[16]);
        if (tmp_isinstance_inst_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_1);

            exception_lineno = 341;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[46]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_1);

            exception_lineno = 341;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_inst_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
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
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[16]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[47]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_and_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        Py_INCREF(tmp_and_left_value_1);
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_3c7d8cb6cf73417d64ede9ea003b78db, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3c7d8cb6cf73417d64ede9ea003b78db->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3c7d8cb6cf73417d64ede9ea003b78db, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3c7d8cb6cf73417d64ede9ea003b78db,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_3c7d8cb6cf73417d64ede9ea003b78db == cache_frame_3c7d8cb6cf73417d64ede9ea003b78db) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3c7d8cb6cf73417d64ede9ea003b78db);
        cache_frame_3c7d8cb6cf73417d64ede9ea003b78db = NULL;
    }

    assertFrameObject(frame_3c7d8cb6cf73417d64ede9ea003b78db);

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


static PyObject *impl_sqlalchemy$dialects$postgresql$array$$$function__15_literal_processor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    PyObject *par_dialect = python_pars[1];
    struct Nuitka_CellObject *var_item_proc = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_to_str = Nuitka_Cell_Empty();
    PyObject *var_process = NULL;
    struct Nuitka_FrameObject *frame_438b3c157f1b56bec6641a336956693b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_438b3c157f1b56bec6641a336956693b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_438b3c157f1b56bec6641a336956693b)) {
        Py_XDECREF(cache_frame_438b3c157f1b56bec6641a336956693b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_438b3c157f1b56bec6641a336956693b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_438b3c157f1b56bec6641a336956693b = MAKE_FUNCTION_FRAME(codeobj_438b3c157f1b56bec6641a336956693b, module_sqlalchemy$dialects$postgresql$array, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_438b3c157f1b56bec6641a336956693b->m_type_description == NULL);
    frame_438b3c157f1b56bec6641a336956693b = cache_frame_438b3c157f1b56bec6641a336956693b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_438b3c157f1b56bec6641a336956693b);
    assert(Py_REFCNT(frame_438b3c157f1b56bec6641a336956693b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_1 = Nuitka_Cell_GET(par_self);
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[16]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "cocco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dialect);
        tmp_args_element_value_1 = par_dialect;
        frame_438b3c157f1b56bec6641a336956693b->m_frame.f_lineno = 346;
        tmp_called_instance_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[48], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "cocco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dialect);
        tmp_args_element_value_2 = par_dialect;
        frame_438b3c157f1b56bec6641a336956693b->m_frame.f_lineno = 346;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[49], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "cocco";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_item_proc) == NULL);
        PyCell_SET(var_item_proc, tmp_assign_source_1);

    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_438b3c157f1b56bec6641a336956693b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_438b3c157f1b56bec6641a336956693b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_438b3c157f1b56bec6641a336956693b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_438b3c157f1b56bec6641a336956693b,
        type_description_1,
        par_self,
        par_dialect,
        var_item_proc,
        var_to_str,
        var_process
    );


    // Release cached frame if used for exception.
    if (frame_438b3c157f1b56bec6641a336956693b == cache_frame_438b3c157f1b56bec6641a336956693b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_438b3c157f1b56bec6641a336956693b);
        cache_frame_438b3c157f1b56bec6641a336956693b = NULL;
    }

    assertFrameObject(frame_438b3c157f1b56bec6641a336956693b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(Nuitka_Cell_GET(var_item_proc));
        tmp_cmp_expr_left_1 = Nuitka_Cell_GET(var_item_proc);
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
    goto try_return_handler_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;


        tmp_assign_source_2 = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__15_literal_processor$$$function__1_to_str();

        assert(Nuitka_Cell_GET(var_to_str) == NULL);
        PyCell_SET(var_to_str, tmp_assign_source_2);

    }
    {
        PyObject *tmp_assign_source_3;
        struct Nuitka_CellObject *tmp_closure_1[3];

        tmp_closure_1[0] = var_item_proc;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_self;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = var_to_str;
        Py_INCREF(tmp_closure_1[2]);

        tmp_assign_source_3 = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__15_literal_processor$$$function__2_process(tmp_closure_1);

        assert(var_process == NULL);
        var_process = tmp_assign_source_3;
    }
    CHECK_OBJECT(var_process);
    tmp_return_value = var_process;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_item_proc);
    Py_DECREF(var_item_proc);
    var_item_proc = NULL;
    CHECK_OBJECT(var_to_str);
    Py_DECREF(var_to_str);
    var_to_str = NULL;
    Py_XDECREF(var_process);
    var_process = NULL;
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


static PyObject *impl_sqlalchemy$dialects$postgresql$array$$$function__15_literal_processor$$$function__1_to_str(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_elements = python_pars[0];
    struct Nuitka_FrameObject *frame_defc065aa03c8c5d295f305a57d6dcc3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_defc065aa03c8c5d295f305a57d6dcc3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_defc065aa03c8c5d295f305a57d6dcc3)) {
        Py_XDECREF(cache_frame_defc065aa03c8c5d295f305a57d6dcc3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_defc065aa03c8c5d295f305a57d6dcc3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_defc065aa03c8c5d295f305a57d6dcc3 = MAKE_FUNCTION_FRAME(codeobj_defc065aa03c8c5d295f305a57d6dcc3, module_sqlalchemy$dialects$postgresql$array, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_defc065aa03c8c5d295f305a57d6dcc3->m_type_description == NULL);
    frame_defc065aa03c8c5d295f305a57d6dcc3 = cache_frame_defc065aa03c8c5d295f305a57d6dcc3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_defc065aa03c8c5d295f305a57d6dcc3);
    assert(Py_REFCNT(frame_defc065aa03c8c5d295f305a57d6dcc3) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[54];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_str_arg_value_1;
            PyObject *tmp_iterable_value_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_str_arg_value_1 = mod_consts[55];
            CHECK_OBJECT(par_elements);
            tmp_iterable_value_1 = par_elements;
            tmp_tuple_element_1 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 353;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[56];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[57], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
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
        exception_tb = MAKE_TRACEBACK(frame_defc065aa03c8c5d295f305a57d6dcc3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_defc065aa03c8c5d295f305a57d6dcc3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_defc065aa03c8c5d295f305a57d6dcc3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_defc065aa03c8c5d295f305a57d6dcc3,
        type_description_1,
        par_elements
    );


    // Release cached frame if used for exception.
    if (frame_defc065aa03c8c5d295f305a57d6dcc3 == cache_frame_defc065aa03c8c5d295f305a57d6dcc3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_defc065aa03c8c5d295f305a57d6dcc3);
        cache_frame_defc065aa03c8c5d295f305a57d6dcc3 = NULL;
    }

    assertFrameObject(frame_defc065aa03c8c5d295f305a57d6dcc3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_elements);
    Py_DECREF(par_elements);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_elements);
    Py_DECREF(par_elements);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$postgresql$array$$$function__15_literal_processor$$$function__2_process(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *var_inner = NULL;
    struct Nuitka_FrameObject *frame_53cd335adadf8bfd106d2677fea8d0ad;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_53cd335adadf8bfd106d2677fea8d0ad = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_53cd335adadf8bfd106d2677fea8d0ad)) {
        Py_XDECREF(cache_frame_53cd335adadf8bfd106d2677fea8d0ad);

#if _DEBUG_REFCOUNTS
        if (cache_frame_53cd335adadf8bfd106d2677fea8d0ad == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_53cd335adadf8bfd106d2677fea8d0ad = MAKE_FUNCTION_FRAME(codeobj_53cd335adadf8bfd106d2677fea8d0ad, module_sqlalchemy$dialects$postgresql$array, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_53cd335adadf8bfd106d2677fea8d0ad->m_type_description == NULL);
    frame_53cd335adadf8bfd106d2677fea8d0ad = cache_frame_53cd335adadf8bfd106d2677fea8d0ad;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_53cd335adadf8bfd106d2677fea8d0ad);
    assert(Py_REFCNT(frame_53cd335adadf8bfd106d2677fea8d0ad) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_4;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 356;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[58]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_args_element_value_1 = par_value;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 357;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 357;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[17]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 357;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 357;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_4 = Nuitka_Cell_GET(self->m_closure[2]);
        frame_53cd335adadf8bfd106d2677fea8d0ad->m_frame.f_lineno = 356;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "ooccc";
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
        exception_tb = MAKE_TRACEBACK(frame_53cd335adadf8bfd106d2677fea8d0ad, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_53cd335adadf8bfd106d2677fea8d0ad->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_53cd335adadf8bfd106d2677fea8d0ad, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_53cd335adadf8bfd106d2677fea8d0ad,
        type_description_1,
        par_value,
        var_inner,
        self->m_closure[1],
        self->m_closure[0],
        self->m_closure[2]
    );


    // Release cached frame if used for exception.
    if (frame_53cd335adadf8bfd106d2677fea8d0ad == cache_frame_53cd335adadf8bfd106d2677fea8d0ad) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_53cd335adadf8bfd106d2677fea8d0ad);
        cache_frame_53cd335adadf8bfd106d2677fea8d0ad = NULL;
    }

    assertFrameObject(frame_53cd335adadf8bfd106d2677fea8d0ad);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$postgresql$array$$$function__16_bind_processor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    PyObject *par_dialect = python_pars[1];
    struct Nuitka_CellObject *var_item_proc = Nuitka_Cell_Empty();
    PyObject *var_process = NULL;
    struct Nuitka_FrameObject *frame_e69b1bf6a9d35d36c67d0f0d5996448f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e69b1bf6a9d35d36c67d0f0d5996448f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e69b1bf6a9d35d36c67d0f0d5996448f)) {
        Py_XDECREF(cache_frame_e69b1bf6a9d35d36c67d0f0d5996448f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e69b1bf6a9d35d36c67d0f0d5996448f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e69b1bf6a9d35d36c67d0f0d5996448f = MAKE_FUNCTION_FRAME(codeobj_e69b1bf6a9d35d36c67d0f0d5996448f, module_sqlalchemy$dialects$postgresql$array, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e69b1bf6a9d35d36c67d0f0d5996448f->m_type_description == NULL);
    frame_e69b1bf6a9d35d36c67d0f0d5996448f = cache_frame_e69b1bf6a9d35d36c67d0f0d5996448f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e69b1bf6a9d35d36c67d0f0d5996448f);
    assert(Py_REFCNT(frame_e69b1bf6a9d35d36c67d0f0d5996448f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_1 = Nuitka_Cell_GET(par_self);
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[16]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "coco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dialect);
        tmp_args_element_value_1 = par_dialect;
        frame_e69b1bf6a9d35d36c67d0f0d5996448f->m_frame.f_lineno = 364;
        tmp_called_instance_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[48], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "coco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dialect);
        tmp_args_element_value_2 = par_dialect;
        frame_e69b1bf6a9d35d36c67d0f0d5996448f->m_frame.f_lineno = 364;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[60], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "coco";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_item_proc) == NULL);
        PyCell_SET(var_item_proc, tmp_assign_source_1);

    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e69b1bf6a9d35d36c67d0f0d5996448f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e69b1bf6a9d35d36c67d0f0d5996448f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e69b1bf6a9d35d36c67d0f0d5996448f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e69b1bf6a9d35d36c67d0f0d5996448f,
        type_description_1,
        par_self,
        par_dialect,
        var_item_proc,
        var_process
    );


    // Release cached frame if used for exception.
    if (frame_e69b1bf6a9d35d36c67d0f0d5996448f == cache_frame_e69b1bf6a9d35d36c67d0f0d5996448f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e69b1bf6a9d35d36c67d0f0d5996448f);
        cache_frame_e69b1bf6a9d35d36c67d0f0d5996448f = NULL;
    }

    assertFrameObject(frame_e69b1bf6a9d35d36c67d0f0d5996448f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_2;
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = var_item_proc;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_self;
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_2 = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__16_bind_processor$$$function__1_process(tmp_closure_1);

        assert(var_process == NULL);
        var_process = tmp_assign_source_2;
    }
    CHECK_OBJECT(var_process);
    tmp_return_value = var_process;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_item_proc);
    Py_DECREF(var_item_proc);
    var_item_proc = NULL;
    CHECK_OBJECT(var_process);
    Py_DECREF(var_process);
    var_process = NULL;
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


static PyObject *impl_sqlalchemy$dialects$postgresql$array$$$function__16_bind_processor$$$function__1_process(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_630d5b74c2898be1e4125e1237ab722c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_630d5b74c2898be1e4125e1237ab722c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_630d5b74c2898be1e4125e1237ab722c)) {
        Py_XDECREF(cache_frame_630d5b74c2898be1e4125e1237ab722c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_630d5b74c2898be1e4125e1237ab722c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_630d5b74c2898be1e4125e1237ab722c = MAKE_FUNCTION_FRAME(codeobj_630d5b74c2898be1e4125e1237ab722c, module_sqlalchemy$dialects$postgresql$array, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_630d5b74c2898be1e4125e1237ab722c->m_type_description == NULL);
    frame_630d5b74c2898be1e4125e1237ab722c = cache_frame_630d5b74c2898be1e4125e1237ab722c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_630d5b74c2898be1e4125e1237ab722c);
    assert(Py_REFCNT(frame_630d5b74c2898be1e4125e1237ab722c) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_4;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 372;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[58]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_args_element_value_1 = par_value;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 373;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 373;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[17]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 373;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = (PyObject *)&PyList_Type;
        frame_630d5b74c2898be1e4125e1237ab722c->m_frame.f_lineno = 372;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "occ";
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
        exception_tb = MAKE_TRACEBACK(frame_630d5b74c2898be1e4125e1237ab722c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_630d5b74c2898be1e4125e1237ab722c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_630d5b74c2898be1e4125e1237ab722c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_630d5b74c2898be1e4125e1237ab722c,
        type_description_1,
        par_value,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_630d5b74c2898be1e4125e1237ab722c == cache_frame_630d5b74c2898be1e4125e1237ab722c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_630d5b74c2898be1e4125e1237ab722c);
        cache_frame_630d5b74c2898be1e4125e1237ab722c = NULL;
    }

    assertFrameObject(frame_630d5b74c2898be1e4125e1237ab722c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$postgresql$array$$$function__17_result_processor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    PyObject *par_dialect = python_pars[1];
    PyObject *par_coltype = python_pars[2];
    struct Nuitka_CellObject *var_item_proc = Nuitka_Cell_Empty();
    PyObject *var_process = NULL;
    struct Nuitka_CellObject *var_super_rp = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_pattern = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_handle_raw_string = Nuitka_Cell_Empty();
    struct Nuitka_FrameObject *frame_3a5c4150bf1d3e4c731fdd62ba90f98c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3a5c4150bf1d3e4c731fdd62ba90f98c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3a5c4150bf1d3e4c731fdd62ba90f98c)) {
        Py_XDECREF(cache_frame_3a5c4150bf1d3e4c731fdd62ba90f98c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3a5c4150bf1d3e4c731fdd62ba90f98c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3a5c4150bf1d3e4c731fdd62ba90f98c = MAKE_FUNCTION_FRAME(codeobj_3a5c4150bf1d3e4c731fdd62ba90f98c, module_sqlalchemy$dialects$postgresql$array, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3a5c4150bf1d3e4c731fdd62ba90f98c->m_type_description == NULL);
    frame_3a5c4150bf1d3e4c731fdd62ba90f98c = cache_frame_3a5c4150bf1d3e4c731fdd62ba90f98c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3a5c4150bf1d3e4c731fdd62ba90f98c);
    assert(Py_REFCNT(frame_3a5c4150bf1d3e4c731fdd62ba90f98c) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_1 = Nuitka_Cell_GET(par_self);
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[16]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "coococcc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dialect);
        tmp_args_element_value_1 = par_dialect;
        frame_3a5c4150bf1d3e4c731fdd62ba90f98c->m_frame.f_lineno = 379;
        tmp_called_instance_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[48], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "coococcc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dialect);
        tmp_args_element_value_2 = par_dialect;
        CHECK_OBJECT(par_coltype);
        tmp_args_element_value_3 = par_coltype;
        frame_3a5c4150bf1d3e4c731fdd62ba90f98c->m_frame.f_lineno = 379;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[62],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "coococcc";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_item_proc) == NULL);
        PyCell_SET(var_item_proc, tmp_assign_source_1);

    }
    {
        PyObject *tmp_assign_source_2;
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = var_item_proc;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_self;
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_2 = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__17_result_processor$$$function__1_process(tmp_closure_1);

        assert(var_process == NULL);
        var_process = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_2 = Nuitka_Cell_GET(par_self);
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[64]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "coococcc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 394;
            type_description_1 = "coococcc";
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
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(var_process);
        tmp_assign_source_3 = var_process;
        assert(Nuitka_Cell_GET(var_super_rp) == NULL);
        Py_INCREF(tmp_assign_source_3);
        PyCell_SET(var_super_rp, tmp_assign_source_3);

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "coococcc";
            goto frame_exception_exit_1;
        }
        frame_3a5c4150bf1d3e4c731fdd62ba90f98c->m_frame.f_lineno = 396;
        tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[66],
            PyTuple_GET_ITEM(mod_consts[67], 0)
        );

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "coococcc";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_pattern) == NULL);
        PyCell_SET(var_pattern, tmp_assign_source_4);

    }
    {
        PyObject *tmp_assign_source_5;
        struct Nuitka_CellObject *tmp_closure_2[1];

        tmp_closure_2[0] = var_pattern;
        Py_INCREF(tmp_closure_2[0]);

        tmp_assign_source_5 = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__17_result_processor$$$function__2_handle_raw_string(tmp_closure_2);

        assert(Nuitka_Cell_GET(var_handle_raw_string) == NULL);
        PyCell_SET(var_handle_raw_string, tmp_assign_source_5);

    }
    {
        PyObject *tmp_assign_source_6;
        struct Nuitka_CellObject *tmp_closure_3[2];

        tmp_closure_3[0] = var_handle_raw_string;
        Py_INCREF(tmp_closure_3[0]);
        tmp_closure_3[1] = var_super_rp;
        Py_INCREF(tmp_closure_3[1]);

        tmp_assign_source_6 = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__17_result_processor$$$function__3_process(tmp_closure_3);

        {
            PyObject *old = var_process;
            assert(old != NULL);
            var_process = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3a5c4150bf1d3e4c731fdd62ba90f98c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3a5c4150bf1d3e4c731fdd62ba90f98c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3a5c4150bf1d3e4c731fdd62ba90f98c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3a5c4150bf1d3e4c731fdd62ba90f98c,
        type_description_1,
        par_self,
        par_dialect,
        par_coltype,
        var_item_proc,
        var_process,
        var_super_rp,
        var_pattern,
        var_handle_raw_string
    );


    // Release cached frame if used for exception.
    if (frame_3a5c4150bf1d3e4c731fdd62ba90f98c == cache_frame_3a5c4150bf1d3e4c731fdd62ba90f98c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3a5c4150bf1d3e4c731fdd62ba90f98c);
        cache_frame_3a5c4150bf1d3e4c731fdd62ba90f98c = NULL;
    }

    assertFrameObject(frame_3a5c4150bf1d3e4c731fdd62ba90f98c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_process);
    tmp_return_value = var_process;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_item_proc);
    Py_DECREF(var_item_proc);
    var_item_proc = NULL;
    CHECK_OBJECT(var_process);
    Py_DECREF(var_process);
    var_process = NULL;
    CHECK_OBJECT(var_super_rp);
    Py_DECREF(var_super_rp);
    var_super_rp = NULL;
    CHECK_OBJECT(var_pattern);
    Py_DECREF(var_pattern);
    var_pattern = NULL;
    CHECK_OBJECT(var_handle_raw_string);
    Py_DECREF(var_handle_raw_string);
    var_handle_raw_string = NULL;
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

    CHECK_OBJECT(var_item_proc);
    Py_DECREF(var_item_proc);
    var_item_proc = NULL;
    Py_XDECREF(var_process);
    var_process = NULL;
    CHECK_OBJECT(var_super_rp);
    Py_DECREF(var_super_rp);
    var_super_rp = NULL;
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
    CHECK_OBJECT(par_dialect);
    Py_DECREF(par_dialect);
    CHECK_OBJECT(par_coltype);
    Py_DECREF(par_coltype);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dialect);
    Py_DECREF(par_dialect);
    CHECK_OBJECT(par_coltype);
    Py_DECREF(par_coltype);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$postgresql$array$$$function__17_result_processor$$$function__1_process(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_746f94b2a66cbfd234bba008a780463a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_746f94b2a66cbfd234bba008a780463a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_746f94b2a66cbfd234bba008a780463a)) {
        Py_XDECREF(cache_frame_746f94b2a66cbfd234bba008a780463a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_746f94b2a66cbfd234bba008a780463a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_746f94b2a66cbfd234bba008a780463a = MAKE_FUNCTION_FRAME(codeobj_746f94b2a66cbfd234bba008a780463a, module_sqlalchemy$dialects$postgresql$array, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_746f94b2a66cbfd234bba008a780463a->m_type_description == NULL);
    frame_746f94b2a66cbfd234bba008a780463a = cache_frame_746f94b2a66cbfd234bba008a780463a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_746f94b2a66cbfd234bba008a780463a);
    assert(Py_REFCNT(frame_746f94b2a66cbfd234bba008a780463a) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_4;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 387;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[58]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_args_element_value_1 = par_value;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 389;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 390;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[17]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 390;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 391;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[43]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 391;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 391;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_args_element_value_4 = (PyObject *)&PyTuple_Type;
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_args_element_value_4 = (PyObject *)&PyList_Type;
        condexpr_end_1:;
        frame_746f94b2a66cbfd234bba008a780463a->m_frame.f_lineno = 387;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "occ";
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
        exception_tb = MAKE_TRACEBACK(frame_746f94b2a66cbfd234bba008a780463a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_746f94b2a66cbfd234bba008a780463a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_746f94b2a66cbfd234bba008a780463a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_746f94b2a66cbfd234bba008a780463a,
        type_description_1,
        par_value,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_746f94b2a66cbfd234bba008a780463a == cache_frame_746f94b2a66cbfd234bba008a780463a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_746f94b2a66cbfd234bba008a780463a);
        cache_frame_746f94b2a66cbfd234bba008a780463a = NULL;
    }

    assertFrameObject(frame_746f94b2a66cbfd234bba008a780463a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$postgresql$array$$$function__17_result_processor$$$function__2_handle_raw_string(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *var_inner = NULL;
    struct Nuitka_FrameObject *frame_7ce0752f345f76e747333490e834ea73;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7ce0752f345f76e747333490e834ea73 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7ce0752f345f76e747333490e834ea73)) {
        Py_XDECREF(cache_frame_7ce0752f345f76e747333490e834ea73);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7ce0752f345f76e747333490e834ea73 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7ce0752f345f76e747333490e834ea73 = MAKE_FUNCTION_FRAME(codeobj_7ce0752f345f76e747333490e834ea73, module_sqlalchemy$dialects$postgresql$array, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7ce0752f345f76e747333490e834ea73->m_type_description == NULL);
    frame_7ce0752f345f76e747333490e834ea73 = cache_frame_7ce0752f345f76e747333490e834ea73;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7ce0752f345f76e747333490e834ea73);
    assert(Py_REFCNT(frame_7ce0752f345f76e747333490e834ea73) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[70]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 399;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_value);
        tmp_args_element_value_1 = par_value;
        frame_7ce0752f345f76e747333490e834ea73->m_frame.f_lineno = 399;
        tmp_called_instance_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[71], tmp_args_element_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_7ce0752f345f76e747333490e834ea73->m_frame.f_lineno = 399;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[72],
            PyTuple_GET_ITEM(mod_consts[73], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        assert(var_inner == NULL);
        var_inner = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_inner);
        tmp_args_element_value_2 = var_inner;
        frame_7ce0752f345f76e747333490e834ea73->m_frame.f_lineno = 400;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "ooc";
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
        exception_tb = MAKE_TRACEBACK(frame_7ce0752f345f76e747333490e834ea73, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7ce0752f345f76e747333490e834ea73->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7ce0752f345f76e747333490e834ea73, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7ce0752f345f76e747333490e834ea73,
        type_description_1,
        par_value,
        var_inner,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_7ce0752f345f76e747333490e834ea73 == cache_frame_7ce0752f345f76e747333490e834ea73) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7ce0752f345f76e747333490e834ea73);
        cache_frame_7ce0752f345f76e747333490e834ea73 = NULL;
    }

    assertFrameObject(frame_7ce0752f345f76e747333490e834ea73);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
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

    Py_XDECREF(var_inner);
    var_inner = NULL;
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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$postgresql$array$$$function__17_result_processor$$$function__3_process(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_9a9aa814aa7da17858a46c0546bacdd8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_9a9aa814aa7da17858a46c0546bacdd8 = NULL;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(par_value);
    tmp_return_value = par_value;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;
    branch_no_1:;
    if (isFrameUnusable(cache_frame_9a9aa814aa7da17858a46c0546bacdd8)) {
        Py_XDECREF(cache_frame_9a9aa814aa7da17858a46c0546bacdd8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9a9aa814aa7da17858a46c0546bacdd8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9a9aa814aa7da17858a46c0546bacdd8 = MAKE_FUNCTION_FRAME(codeobj_9a9aa814aa7da17858a46c0546bacdd8, module_sqlalchemy$dialects$postgresql$array, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9a9aa814aa7da17858a46c0546bacdd8->m_type_description == NULL);
    frame_9a9aa814aa7da17858a46c0546bacdd8 = cache_frame_9a9aa814aa7da17858a46c0546bacdd8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9a9aa814aa7da17858a46c0546bacdd8);
    assert(Py_REFCNT(frame_9a9aa814aa7da17858a46c0546bacdd8) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 408;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 409;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_9a9aa814aa7da17858a46c0546bacdd8->m_frame.f_lineno = 409;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_value);
        tmp_args_element_value_1 = par_value;
        Py_INCREF(tmp_args_element_value_1);
        condexpr_end_1:;
        frame_9a9aa814aa7da17858a46c0546bacdd8->m_frame.f_lineno = 408;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
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
        exception_tb = MAKE_TRACEBACK(frame_9a9aa814aa7da17858a46c0546bacdd8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9a9aa814aa7da17858a46c0546bacdd8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9a9aa814aa7da17858a46c0546bacdd8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9a9aa814aa7da17858a46c0546bacdd8,
        type_description_1,
        par_value,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_9a9aa814aa7da17858a46c0546bacdd8 == cache_frame_9a9aa814aa7da17858a46c0546bacdd8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9a9aa814aa7da17858a46c0546bacdd8);
        cache_frame_9a9aa814aa7da17858a46c0546bacdd8 = NULL;
    }

    assertFrameObject(frame_9a9aa814aa7da17858a46c0546bacdd8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$postgresql$array$$$function__18__split_enum_values(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_array_string = python_pars[0];
    PyObject *var_text = NULL;
    PyObject *var_result = NULL;
    PyObject *var_on_quotes = NULL;
    PyObject *var_in_quotes = NULL;
    PyObject *var_tok = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_8f35466bdce55209097d3872b6351cd8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
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
    static struct Nuitka_FrameObject *cache_frame_8f35466bdce55209097d3872b6351cd8 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8f35466bdce55209097d3872b6351cd8)) {
        Py_XDECREF(cache_frame_8f35466bdce55209097d3872b6351cd8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8f35466bdce55209097d3872b6351cd8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8f35466bdce55209097d3872b6351cd8 = MAKE_FUNCTION_FRAME(codeobj_8f35466bdce55209097d3872b6351cd8, module_sqlalchemy$dialects$postgresql$array, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8f35466bdce55209097d3872b6351cd8->m_type_description == NULL);
    frame_8f35466bdce55209097d3872b6351cd8 = cache_frame_8f35466bdce55209097d3872b6351cd8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8f35466bdce55209097d3872b6351cd8);
    assert(Py_REFCNT(frame_8f35466bdce55209097d3872b6351cd8) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = mod_consts[76];
        CHECK_OBJECT(par_array_string);
        tmp_cmp_expr_right_1 = par_array_string;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
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
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_array_string);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_array_string);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_array_string);
        tmp_expression_value_1 = par_array_string;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[77]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_8f35466bdce55209097d3872b6351cd8->m_frame.f_lineno = 421;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[78]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_return_value = MAKE_LIST_EMPTY(0);
        condexpr_end_1:;
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_array_string);
        tmp_expression_value_2 = par_array_string;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[79]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_8f35466bdce55209097d3872b6351cd8->m_frame.f_lineno = 427;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[80]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_text == NULL);
        var_text = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_text);
        tmp_expression_value_3 = var_text;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[79]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_8f35466bdce55209097d3872b6351cd8->m_frame.f_lineno = 428;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_3, mod_consts[81]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_text;
            assert(old != NULL);
            var_text = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = MAKE_LIST_EMPTY(0);
        assert(var_result == NULL);
        var_result = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[77]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[82];
        CHECK_OBJECT(var_text);
        tmp_args_element_value_2 = var_text;
        frame_8f35466bdce55209097d3872b6351cd8->m_frame.f_lineno = 430;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_on_quotes == NULL);
        var_on_quotes = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = Py_False;
        assert(var_in_quotes == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_in_quotes = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_on_quotes);
        tmp_iter_arg_1 = var_on_quotes;
        tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_6;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_7 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooo";
                exception_lineno = 432;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_8 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_tok;
            var_tok = tmp_assign_source_8;
            Py_INCREF(var_tok);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_tok);
        tmp_cmp_expr_left_2 = var_tok;
        tmp_cmp_expr_right_2 = mod_consts[76];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_operand_value_1;
        if (var_in_quotes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[83]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 434;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_operand_value_1 = var_in_quotes;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_9 = (tmp_res == 0) ? Py_True : Py_False;
        {
            PyObject *old = var_in_quotes;
            var_in_quotes = tmp_assign_source_9;
            Py_INCREF(var_in_quotes);
            Py_XDECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_2;
        if (var_in_quotes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[83]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 435;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_truth_name_2 = CHECK_IF_TRUE(var_in_quotes);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_6;
        if (var_result == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[84]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 436;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_5 = var_result;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[85]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_tok);
        tmp_expression_value_6 = var_tok;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[79]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 436;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_8f35466bdce55209097d3872b6351cd8->m_frame.f_lineno = 436;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_6, mod_consts[86]);

        Py_DECREF(tmp_called_value_6);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 436;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_8f35466bdce55209097d3872b6351cd8->m_frame.f_lineno = 436;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        if (var_result == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[84]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 438;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_7 = var_result;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[87]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 438;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_5 = mod_consts[89];
        CHECK_OBJECT(var_tok);
        tmp_args_element_value_6 = var_tok;
        frame_8f35466bdce55209097d3872b6351cd8->m_frame.f_lineno = 438;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_args_element_value_4 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[88],
                call_args
            );
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 438;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_8f35466bdce55209097d3872b6351cd8->m_frame.f_lineno = 438;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_end_3:;
    branch_end_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 432;
        type_description_1 = "oooooo";
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
    if (var_result == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[84]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 439;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_result;
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
        exception_tb = MAKE_TRACEBACK(frame_8f35466bdce55209097d3872b6351cd8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8f35466bdce55209097d3872b6351cd8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8f35466bdce55209097d3872b6351cd8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8f35466bdce55209097d3872b6351cd8,
        type_description_1,
        par_array_string,
        var_text,
        var_result,
        var_on_quotes,
        var_in_quotes,
        var_tok
    );


    // Release cached frame if used for exception.
    if (frame_8f35466bdce55209097d3872b6351cd8 == cache_frame_8f35466bdce55209097d3872b6351cd8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8f35466bdce55209097d3872b6351cd8);
        cache_frame_8f35466bdce55209097d3872b6351cd8 = NULL;
    }

    assertFrameObject(frame_8f35466bdce55209097d3872b6351cd8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_text);
    var_text = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_on_quotes);
    var_on_quotes = NULL;
    Py_XDECREF(var_in_quotes);
    var_in_quotes = NULL;
    Py_XDECREF(var_tok);
    var_tok = NULL;
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

    Py_XDECREF(var_text);
    var_text = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_on_quotes);
    var_on_quotes = NULL;
    Py_XDECREF(var_in_quotes);
    var_in_quotes = NULL;
    Py_XDECREF(var_tok);
    var_tok = NULL;
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
    CHECK_OBJECT(par_array_string);
    Py_DECREF(par_array_string);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_array_string);
    Py_DECREF(par_array_string);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__10___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$postgresql$array$$$function__10___init__,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[158],
#endif
        codeobj_9af0eea3b3698e9f8b8441c3e3bdd8b4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$dialects$postgresql$array,
        mod_consts[45],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__11_hashable() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$postgresql$array$$$function__11_hashable,
        mod_consts[159],
#if PYTHON_VERSION >= 0x300
        mod_consts[160],
#endif
        codeobj_17c6f96e8b433f4d9a944fcede0ac085,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$postgresql$array,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__12_python_type() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[161],
#if PYTHON_VERSION >= 0x300
        mod_consts[162],
#endif
        codeobj_8089eaaf655df657a1d412f6ca6537d9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$postgresql$array,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, (PyObject *)&PyList_Type);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__13_compare_values() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$postgresql$array$$$function__13_compare_values,
        mod_consts[163],
#if PYTHON_VERSION >= 0x300
        mod_consts[164],
#endif
        codeobj_ce74293c63bee03c5089275c884ce27e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$postgresql$array,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__14__against_native_enum() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$postgresql$array$$$function__14__against_native_enum,
        mod_consts[64],
#if PYTHON_VERSION >= 0x300
        mod_consts[166],
#endif
        codeobj_3c7d8cb6cf73417d64ede9ea003b78db,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$postgresql$array,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__15_literal_processor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$postgresql$array$$$function__15_literal_processor,
        mod_consts[49],
#if PYTHON_VERSION >= 0x300
        mod_consts[167],
#endif
        codeobj_438b3c157f1b56bec6641a336956693b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$postgresql$array,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__15_literal_processor$$$function__1_to_str() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$postgresql$array$$$function__15_literal_processor$$$function__1_to_str,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        mod_consts[51],
#endif
        codeobj_defc065aa03c8c5d295f305a57d6dcc3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$postgresql$array,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__15_literal_processor$$$function__2_process(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$postgresql$array$$$function__15_literal_processor$$$function__2_process,
        mod_consts[52],
#if PYTHON_VERSION >= 0x300
        mod_consts[53],
#endif
        codeobj_53cd335adadf8bfd106d2677fea8d0ad,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$postgresql$array,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__16_bind_processor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$postgresql$array$$$function__16_bind_processor,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        mod_consts[168],
#endif
        codeobj_e69b1bf6a9d35d36c67d0f0d5996448f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$postgresql$array,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__16_bind_processor$$$function__1_process(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$postgresql$array$$$function__16_bind_processor$$$function__1_process,
        mod_consts[52],
#if PYTHON_VERSION >= 0x300
        mod_consts[61],
#endif
        codeobj_630d5b74c2898be1e4125e1237ab722c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$postgresql$array,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__17_result_processor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$postgresql$array$$$function__17_result_processor,
        mod_consts[62],
#if PYTHON_VERSION >= 0x300
        mod_consts[169],
#endif
        codeobj_3a5c4150bf1d3e4c731fdd62ba90f98c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$postgresql$array,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__17_result_processor$$$function__1_process(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$postgresql$array$$$function__17_result_processor$$$function__1_process,
        mod_consts[52],
#if PYTHON_VERSION >= 0x300
        mod_consts[63],
#endif
        codeobj_746f94b2a66cbfd234bba008a780463a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$postgresql$array,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__17_result_processor$$$function__2_handle_raw_string(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$postgresql$array$$$function__17_result_processor$$$function__2_handle_raw_string,
        mod_consts[68],
#if PYTHON_VERSION >= 0x300
        mod_consts[69],
#endif
        codeobj_7ce0752f345f76e747333490e834ea73,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$postgresql$array,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__17_result_processor$$$function__3_process(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$postgresql$array$$$function__17_result_processor$$$function__3_process,
        mod_consts[52],
#if PYTHON_VERSION >= 0x300
        mod_consts[63],
#endif
        codeobj_9a9aa814aa7da17858a46c0546bacdd8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$postgresql$array,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__18__split_enum_values() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$postgresql$array$$$function__18__split_enum_values,
        mod_consts[74],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8f35466bdce55209097d3872b6351cd8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$postgresql$array,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__1_Any(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$postgresql$array$$$function__1_Any,
        mod_consts[97],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ee9503b0d007f2b04f24b7b539daf2fc,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$postgresql$array,
        mod_consts[1],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__2_All(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$postgresql$array$$$function__2_All,
        mod_consts[115],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_eaecf4209cdd49004a00575b03454e92,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$postgresql$array,
        mod_consts[3],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__3___init__(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$postgresql$array$$$function__3___init__,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[130],
#endif
        codeobj_da50aedf1961f82ec30d6142de54c020,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$postgresql$array,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__4__select_iterable() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$postgresql$array$$$function__4__select_iterable,
        mod_consts[132],
#if PYTHON_VERSION >= 0x300
        mod_consts[133],
#endif
        codeobj_6121828634bf511d54288cf109b7e2ee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$postgresql$array,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__5__bind_param(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$postgresql$array$$$function__5__bind_param,
        mod_consts[27],
#if PYTHON_VERSION >= 0x300
        mod_consts[135],
#endif
        codeobj_645eefeaa9f89bf4f54dfb6341a73996,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$postgresql$array,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__6_self_group(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$postgresql$array$$$function__6_self_group,
        mod_consts[137],
#if PYTHON_VERSION >= 0x300
        mod_consts[138],
#endif
        codeobj_08c3f9e72e426144cfd27b9660a6d104,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$postgresql$array,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__7_contains() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$postgresql$array$$$function__7_contains,
        mod_consts[149],
#if PYTHON_VERSION >= 0x300
        mod_consts[150],
#endif
        codeobj_801dbd762d73be3cf0b81165c1427b54,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$postgresql$array,
        mod_consts[37],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__8_contained_by() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$postgresql$array$$$function__8_contained_by,
        mod_consts[151],
#if PYTHON_VERSION >= 0x300
        mod_consts[152],
#endif
        codeobj_6ace61a53682e828f810a994564002cc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$postgresql$array,
        mod_consts[39],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__9_overlap() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$postgresql$array$$$function__9_overlap,
        mod_consts[153],
#if PYTHON_VERSION >= 0x300
        mod_consts[154],
#endif
        codeobj_90be463e7993fc1f001bc5a1cb5fc955,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$postgresql$array,
        mod_consts[41],
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

function_impl_code functable_sqlalchemy$dialects$postgresql$array[] = {
    impl_sqlalchemy$dialects$postgresql$array$$$function__15_literal_processor$$$function__1_to_str,
    impl_sqlalchemy$dialects$postgresql$array$$$function__15_literal_processor$$$function__2_process,
    impl_sqlalchemy$dialects$postgresql$array$$$function__16_bind_processor$$$function__1_process,
    impl_sqlalchemy$dialects$postgresql$array$$$function__17_result_processor$$$function__1_process,
    impl_sqlalchemy$dialects$postgresql$array$$$function__17_result_processor$$$function__2_handle_raw_string,
    impl_sqlalchemy$dialects$postgresql$array$$$function__17_result_processor$$$function__3_process,
    impl_sqlalchemy$dialects$postgresql$array$$$function__1_Any,
    impl_sqlalchemy$dialects$postgresql$array$$$function__2_All,
    impl_sqlalchemy$dialects$postgresql$array$$$function__3___init__,
    impl_sqlalchemy$dialects$postgresql$array$$$function__4__select_iterable,
    impl_sqlalchemy$dialects$postgresql$array$$$function__5__bind_param,
    impl_sqlalchemy$dialects$postgresql$array$$$function__6_self_group,
    impl_sqlalchemy$dialects$postgresql$array$$$function__7_contains,
    impl_sqlalchemy$dialects$postgresql$array$$$function__8_contained_by,
    impl_sqlalchemy$dialects$postgresql$array$$$function__9_overlap,
    impl_sqlalchemy$dialects$postgresql$array$$$function__10___init__,
    impl_sqlalchemy$dialects$postgresql$array$$$function__11_hashable,
    NULL,
    impl_sqlalchemy$dialects$postgresql$array$$$function__13_compare_values,
    impl_sqlalchemy$dialects$postgresql$array$$$function__14__against_native_enum,
    impl_sqlalchemy$dialects$postgresql$array$$$function__15_literal_processor,
    impl_sqlalchemy$dialects$postgresql$array$$$function__16_bind_processor,
    impl_sqlalchemy$dialects$postgresql$array$$$function__17_result_processor,
    impl_sqlalchemy$dialects$postgresql$array$$$function__18__split_enum_values,
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

    function_impl_code *current = functable_sqlalchemy$dialects$postgresql$array;
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

    if (offset > sizeof(functable_sqlalchemy$dialects$postgresql$array) || offset < 0) {
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
        functable_sqlalchemy$dialects$postgresql$array[offset],
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
        module_sqlalchemy$dialects$postgresql$array,
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
PyObject *modulecode_sqlalchemy$dialects$postgresql$array(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("sqlalchemy.dialects.postgresql.array");

    // Store the module for future use.
    module_sqlalchemy$dialects$postgresql$array = module;

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
        PRINT_STRING("sqlalchemy.dialects.postgresql.array: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("sqlalchemy.dialects.postgresql.array: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("sqlalchemy.dialects.postgresql.array: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initsqlalchemy$dialects$postgresql$array\n");

    moduledict_sqlalchemy$dialects$postgresql$array = MODULE_DICT(module_sqlalchemy$dialects$postgresql$array);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_sqlalchemy$dialects$postgresql$array,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_sqlalchemy$dialects$postgresql$array,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[57]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_sqlalchemy$dialects$postgresql$array,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_sqlalchemy$dialects$postgresql$array,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_sqlalchemy$dialects$postgresql$array,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_sqlalchemy$dialects$postgresql$array);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_sqlalchemy$dialects$postgresql$array);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_CellObject *outline_0_var___class__ = Nuitka_Cell_Empty();
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *tmp_ARRAY$class_creation_1__bases = NULL;
    PyObject *tmp_ARRAY$class_creation_1__bases_orig = NULL;
    PyObject *tmp_ARRAY$class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_ARRAY$class_creation_1__metaclass = NULL;
    PyObject *tmp_ARRAY$class_creation_1__prepared = NULL;
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
    struct Nuitka_FrameObject *frame_f5ad71ca86465582271315fe04db68aa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_sqlalchemy$dialects$postgresql$array$$$class__1_array_45 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_bc4185cc54ca0825ed3985243ba79712_2;
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
    PyObject *locals_sqlalchemy$dialects$postgresql$array$$$class__2_ARRAY_165 = NULL;
    struct Nuitka_FrameObject *frame_2445f8fc2e3b49feac7b9c09b4294333_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *locals_sqlalchemy$dialects$postgresql$array$$$class__3_Comparator_237 = NULL;
    struct Nuitka_FrameObject *frame_31cfb7a7b2fe16ac102de006123bfd48_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_2);
    }
    frame_f5ad71ca86465582271315fe04db68aa = MAKE_MODULE_FRAME(codeobj_f5ad71ca86465582271315fe04db68aa, module_sqlalchemy$dialects$postgresql$array);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f5ad71ca86465582271315fe04db68aa);
    assert(Py_REFCNT(frame_f5ad71ca86465582271315fe04db68aa) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[93], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[94], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[96]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[65];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_sqlalchemy$dialects$postgresql$array;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[12];
        frame_f5ad71ca86465582271315fe04db68aa->m_frame.f_lineno = 12;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        tmp_import_name_from_1 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_sqlalchemy$dialects$postgresql$array,
                mod_consts[97],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[97]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        tmp_import_name_from_2 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_2 == NULL));
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_sqlalchemy$dialects$postgresql$array,
                mod_consts[98],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[98]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        tmp_import_name_from_3 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_3 == NULL));
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_sqlalchemy$dialects$postgresql$array,
                mod_consts[99],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[99]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[57];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_sqlalchemy$dialects$postgresql$array;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[100];
        tmp_level_value_2 = mod_consts[101];
        frame_f5ad71ca86465582271315fe04db68aa->m_frame.f_lineno = 17;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_sqlalchemy$dialects$postgresql$array,
                mod_consts[102],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[102]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[57];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_sqlalchemy$dialects$postgresql$array;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[103];
        tmp_level_value_3 = mod_consts[101];
        frame_f5ad71ca86465582271315fe04db68aa->m_frame.f_lineno = 18;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_sqlalchemy$dialects$postgresql$array,
                mod_consts[104],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[104]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[105];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_sqlalchemy$dialects$postgresql$array;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[106];
        tmp_level_value_4 = mod_consts[101];
        frame_f5ad71ca86465582271315fe04db68aa->m_frame.f_lineno = 19;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_sqlalchemy$dialects$postgresql$array,
                mod_consts[22],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[22]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[105];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_sqlalchemy$dialects$postgresql$array;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[107];
        tmp_level_value_5 = mod_consts[101];
        frame_f5ad71ca86465582271315fe04db68aa->m_frame.f_lineno = 20;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_sqlalchemy$dialects$postgresql$array,
                mod_consts[7],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[7]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[108];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_sqlalchemy$dialects$postgresql$array;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[109];
        tmp_level_value_6 = mod_consts[101];
        frame_f5ad71ca86465582271315fe04db68aa->m_frame.f_lineno = 21;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_sqlalchemy$dialects$postgresql$array,
                mod_consts[110],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[110]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
            tmp_kw_call_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        frame_f5ad71ca86465582271315fe04db68aa->m_frame.f_lineno = 24;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_assign_source_14 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_1, mod_consts[111], kw_values, mod_consts[112]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[114]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        tmp_defaults_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_defaults_1, 0, tmp_tuple_element_1);


        tmp_assign_source_15 = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__1_Any(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_defaults_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[114]);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_defaults_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_defaults_2, 0, tmp_tuple_element_2);


        tmp_assign_source_16 = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__2_All(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_16);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_1;
        }
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[116]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_1;
        }
        tmp_subscript_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_subscript_value_1 == NULL)) {
            tmp_subscript_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
        }

        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_3);

            exception_lineno = 45;

            goto try_except_handler_1;
        }
        tmp_tuple_element_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_1;
        }
        tmp_assign_source_17 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_17, 0, tmp_tuple_element_3);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_18 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

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
        tmp_expression_value_5 = tmp_class_creation_1__bases;
        tmp_subscript_value_2 = mod_consts[12];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_2, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_20 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_20;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_6 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_6, mod_consts[117]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_7 = tmp_class_creation_1__metaclass;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[117]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_1;
        }
        tmp_tuple_element_4 = mod_consts[25];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_4 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_f5ad71ca86465582271315fe04db68aa->m_frame.f_lineno = 45;
        tmp_assign_source_21 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_21;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_8 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_8, mod_consts[118]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

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
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[119];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[120];
        tmp_getattr_default_1 = mod_consts[121];
        tmp_tuple_element_5 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_9;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_9 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_9 == NULL));
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[120]);
            Py_DECREF(tmp_expression_value_9);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_5);
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


            exception_lineno = 45;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 45;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_22;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_23;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_sqlalchemy$dialects$postgresql$array$$$class__1_array_45 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[122];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$array$$$class__1_array_45, mod_consts[123], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[124];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$array$$$class__1_array_45, mod_consts[90], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[25];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$array$$$class__1_array_45, mod_consts[125], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_3;
        }
        frame_bc4185cc54ca0825ed3985243ba79712_2 = MAKE_CLASS_FRAME(codeobj_bc4185cc54ca0825ed3985243ba79712, module_sqlalchemy$dialects$postgresql$array, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_bc4185cc54ca0825ed3985243ba79712_2);
        assert(Py_REFCNT(frame_bc4185cc54ca0825ed3985243ba79712_2) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[25];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$array$$$class__1_array_45, mod_consts[126], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[127];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$array$$$class__1_array_45, mod_consts[128], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = Py_True;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$array$$$class__1_array_45, mod_consts[129], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__3___init__(tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$array$$$class__1_array_45, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_2;
            tmp_res = MAPPING_HAS_ITEM(locals_sqlalchemy$dialects$postgresql$array$$$class__1_array_45, mod_consts[131]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_4 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_called_value_3 = PyObject_GetItem(locals_sqlalchemy$dialects$postgresql$array$$$class__1_array_45, mod_consts[131]);

            if (unlikely(tmp_called_value_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[131]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 126;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_1 = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__4__select_iterable();

            frame_bc4185cc54ca0825ed3985243ba79712_2->m_frame.f_lineno = 126;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_called_value_4 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_2 = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__4__select_iterable();

            frame_bc4185cc54ca0825ed3985243ba79712_2->m_frame.f_lineno = 126;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$array$$$class__1_array_45, mod_consts[132], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = mod_consts[134];
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__5__bind_param(tmp_defaults_3);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$array$$$class__1_array_45, mod_consts[27], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = mod_consts[136];
            Py_INCREF(tmp_defaults_4);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__6_self_group(tmp_defaults_4);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$array$$$class__1_array_45, mod_consts[137], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_bc4185cc54ca0825ed3985243ba79712_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_bc4185cc54ca0825ed3985243ba79712_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_bc4185cc54ca0825ed3985243ba79712_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_bc4185cc54ca0825ed3985243ba79712_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_bc4185cc54ca0825ed3985243ba79712_2);

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
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;

                goto try_except_handler_3;
            }
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$array$$$class__1_array_45, mod_consts[139], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_3;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_5 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_6 = mod_consts[25];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_6 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_sqlalchemy$dialects$postgresql$array$$$class__1_array_45;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_f5ad71ca86465582271315fe04db68aa->m_frame.f_lineno = 45;
            tmp_assign_source_24 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;

                goto try_except_handler_3;
            }
            assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
            PyCell_SET(outline_0_var___class__, tmp_assign_source_24);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
        tmp_assign_source_23 = Nuitka_Cell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_23);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_sqlalchemy$dialects$postgresql$array$$$class__1_array_45);
        locals_sqlalchemy$dialects$postgresql$array$$$class__1_array_45 = NULL;
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

        Py_DECREF(locals_sqlalchemy$dialects$postgresql$array$$$class__1_array_45);
        locals_sqlalchemy$dialects$postgresql$array$$$class__1_array_45 = NULL;
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
        exception_lineno = 45;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_23);
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
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_10;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[140]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        frame_f5ad71ca86465582271315fe04db68aa->m_frame.f_lineno = 158;
        tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_6, &PyTuple_GET_ITEM(mod_consts[141], 0), mod_consts[142]);
        Py_DECREF(tmp_called_value_6);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_11;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[140]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        frame_f5ad71ca86465582271315fe04db68aa->m_frame.f_lineno = 160;
        tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_7, &PyTuple_GET_ITEM(mod_consts[143], 0), mod_consts[142]);
        Py_DECREF(tmp_called_value_7);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_12;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[140]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        frame_f5ad71ca86465582271315fe04db68aa->m_frame.f_lineno = 162;
        tmp_assign_source_27 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_8, &PyTuple_GET_ITEM(mod_consts[144], 0), mod_consts[142]);
        Py_DECREF(tmp_called_value_8);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_27);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_expression_value_13;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto try_except_handler_4;
        }
        tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[15]);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto try_except_handler_4;
        }
        tmp_assign_source_28 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_28, 0, tmp_tuple_element_7);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_29 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto try_except_handler_4;
        }
        tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_14 = tmp_class_creation_2__bases;
        tmp_subscript_value_3 = mod_consts[12];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_14, tmp_subscript_value_3, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto try_except_handler_4;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_31 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_31;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_15 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_15, mod_consts[117]);
        tmp_condition_result_7 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_16 = tmp_class_creation_2__metaclass;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[117]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto try_except_handler_4;
        }
        tmp_tuple_element_8 = mod_consts[15];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_8 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_f5ad71ca86465582271315fe04db68aa->m_frame.f_lineno = 165;
        tmp_assign_source_32 = CALL_FUNCTION(tmp_called_value_9, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_32;
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_17 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_17, mod_consts[118]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto try_except_handler_4;
        }
        tmp_condition_result_8 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_8 != false) {
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
        tmp_mod_expr_left_2 = mod_consts[119];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[120];
        tmp_getattr_default_2 = mod_consts[121];
        tmp_tuple_element_9 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_18;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_18 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_18 == NULL));
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[120]);
            Py_DECREF(tmp_expression_value_18);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_9);
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


            exception_lineno = 165;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 165;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_33;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_34;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_sqlalchemy$dialects$postgresql$array$$$class__2_ARRAY_165 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[122];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$array$$$class__2_ARRAY_165, mod_consts[123], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[145];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$array$$$class__2_ARRAY_165, mod_consts[90], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[15];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$array$$$class__2_ARRAY_165, mod_consts[125], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto try_except_handler_6;
        }
        frame_2445f8fc2e3b49feac7b9c09b4294333_3 = MAKE_CLASS_FRAME(codeobj_2445f8fc2e3b49feac7b9c09b4294333, module_sqlalchemy$dialects$postgresql$array, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_2445f8fc2e3b49feac7b9c09b4294333_3);
        assert(Py_REFCNT(frame_2445f8fc2e3b49feac7b9c09b4294333_3) == 2);

        // Framed code:
        // Tried code:
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_expression_value_20;
            tmp_expression_value_20 = PyObject_GetItem(locals_sqlalchemy$dialects$postgresql$array$$$class__2_ARRAY_165, mod_consts[13]);

            if (tmp_expression_value_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_expression_value_20 == NULL)) {
                        tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_expression_value_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 237;
                        type_description_2 = "o";
                        goto try_except_handler_7;
                    }
                    Py_INCREF(tmp_expression_value_20);
                } else {
                    goto try_except_handler_7;
                }
            }

            tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[15]);
            Py_DECREF(tmp_expression_value_20);
            if (tmp_expression_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[146]);
            Py_DECREF(tmp_expression_value_19);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            tmp_assign_source_35 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_35, 0, tmp_tuple_element_10);
            assert(tmp_ARRAY$class_creation_1__bases_orig == NULL);
            tmp_ARRAY$class_creation_1__bases_orig = tmp_assign_source_35;
        }
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_dircall_arg1_3;
            CHECK_OBJECT(tmp_ARRAY$class_creation_1__bases_orig);
            tmp_dircall_arg1_3 = tmp_ARRAY$class_creation_1__bases_orig;
            Py_INCREF(tmp_dircall_arg1_3);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
                tmp_assign_source_36 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
            }
            if (tmp_assign_source_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            assert(tmp_ARRAY$class_creation_1__bases == NULL);
            tmp_ARRAY$class_creation_1__bases = tmp_assign_source_36;
        }
        {
            PyObject *tmp_assign_source_37;
            tmp_assign_source_37 = MAKE_DICT_EMPTY();
            assert(tmp_ARRAY$class_creation_1__class_decl_dict == NULL);
            tmp_ARRAY$class_creation_1__class_decl_dict = tmp_assign_source_37;
        }
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_metaclass_value_3;
            nuitka_bool tmp_condition_result_9;
            int tmp_truth_name_3;
            PyObject *tmp_type_arg_5;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_bases_value_3;
            CHECK_OBJECT(tmp_ARRAY$class_creation_1__bases);
            tmp_truth_name_3 = CHECK_IF_TRUE(tmp_ARRAY$class_creation_1__bases);
            if (tmp_truth_name_3 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            CHECK_OBJECT(tmp_ARRAY$class_creation_1__bases);
            tmp_expression_value_21 = tmp_ARRAY$class_creation_1__bases;
            tmp_subscript_value_4 = mod_consts[12];
            tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_21, tmp_subscript_value_4, 0);
            if (tmp_type_arg_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
            Py_DECREF(tmp_type_arg_5);
            if (tmp_metaclass_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_3);
            condexpr_end_4:;
            CHECK_OBJECT(tmp_ARRAY$class_creation_1__bases);
            tmp_bases_value_3 = tmp_ARRAY$class_creation_1__bases;
            tmp_assign_source_38 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
            Py_DECREF(tmp_metaclass_value_3);
            if (tmp_assign_source_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            assert(tmp_ARRAY$class_creation_1__metaclass == NULL);
            tmp_ARRAY$class_creation_1__metaclass = tmp_assign_source_38;
        }
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_expression_value_22;
            CHECK_OBJECT(tmp_ARRAY$class_creation_1__metaclass);
            tmp_expression_value_22 = tmp_ARRAY$class_creation_1__metaclass;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_22, mod_consts[117]);
            tmp_condition_result_10 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_called_value_10;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_ARRAY$class_creation_1__metaclass);
            tmp_expression_value_23 = tmp_ARRAY$class_creation_1__metaclass;
            tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[117]);
            if (tmp_called_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            tmp_tuple_element_11 = mod_consts[146];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_ARRAY$class_creation_1__bases);
            tmp_tuple_element_11 = tmp_ARRAY$class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_ARRAY$class_creation_1__class_decl_dict);
            tmp_kwargs_value_4 = tmp_ARRAY$class_creation_1__class_decl_dict;
            frame_2445f8fc2e3b49feac7b9c09b4294333_3->m_frame.f_lineno = 237;
            tmp_assign_source_39 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            assert(tmp_ARRAY$class_creation_1__prepared == NULL);
            tmp_ARRAY$class_creation_1__prepared = tmp_assign_source_39;
        }
        {
            bool tmp_condition_result_11;
            PyObject *tmp_operand_value_3;
            PyObject *tmp_expression_value_24;
            CHECK_OBJECT(tmp_ARRAY$class_creation_1__prepared);
            tmp_expression_value_24 = tmp_ARRAY$class_creation_1__prepared;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_24, mod_consts[118]);
            tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            tmp_condition_result_11 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_11 != false) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
        }
        branch_yes_7:;
        {
            PyObject *tmp_raise_type_3;
            PyObject *tmp_raise_value_3;
            PyObject *tmp_mod_expr_left_3;
            PyObject *tmp_mod_expr_right_3;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_getattr_target_3;
            PyObject *tmp_getattr_attr_3;
            PyObject *tmp_getattr_default_3;
            tmp_raise_type_3 = PyExc_TypeError;
            tmp_mod_expr_left_3 = mod_consts[119];
            CHECK_OBJECT(tmp_ARRAY$class_creation_1__metaclass);
            tmp_getattr_target_3 = tmp_ARRAY$class_creation_1__metaclass;
            tmp_getattr_attr_3 = mod_consts[120];
            tmp_getattr_default_3 = mod_consts[121];
            tmp_tuple_element_12 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
            if (tmp_tuple_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_25;
                PyObject *tmp_type_arg_6;
                PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_12);
                CHECK_OBJECT(tmp_ARRAY$class_creation_1__prepared);
                tmp_type_arg_6 = tmp_ARRAY$class_creation_1__prepared;
                tmp_expression_value_25 = BUILTIN_TYPE1(tmp_type_arg_6);
                assert(!(tmp_expression_value_25 == NULL));
                tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[120]);
                Py_DECREF(tmp_expression_value_25);
                if (tmp_tuple_element_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 237;
                    type_description_2 = "o";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_12);
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


                exception_lineno = 237;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            exception_type = tmp_raise_type_3;
            Py_INCREF(tmp_raise_type_3);
            exception_value = tmp_raise_value_3;
            exception_lineno = 237;
            RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_7;
        }
        branch_no_7:;
        goto branch_end_6;
        branch_no_6:;
        {
            PyObject *tmp_assign_source_40;
            tmp_assign_source_40 = MAKE_DICT_EMPTY();
            assert(tmp_ARRAY$class_creation_1__prepared == NULL);
            tmp_ARRAY$class_creation_1__prepared = tmp_assign_source_40;
        }
        branch_end_6:;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_ARRAY$class_creation_1__prepared);
            tmp_set_locals_3 = tmp_ARRAY$class_creation_1__prepared;
            locals_sqlalchemy$dialects$postgresql$array$$$class__3_Comparator_237 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[122];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$array$$$class__3_Comparator_237, mod_consts[123], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_2 = "o";
            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[147];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$array$$$class__3_Comparator_237, mod_consts[90], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_2 = "o";
            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[148];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$array$$$class__3_Comparator_237, mod_consts[125], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_2 = "o";
            goto try_except_handler_9;
        }
        frame_31cfb7a7b2fe16ac102de006123bfd48_4 = MAKE_CLASS_FRAME(codeobj_31cfb7a7b2fe16ac102de006123bfd48, module_sqlalchemy$dialects$postgresql$array, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_31cfb7a7b2fe16ac102de006123bfd48_4);
        assert(Py_REFCNT(frame_31cfb7a7b2fe16ac102de006123bfd48_4) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__7_contains();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$array$$$class__3_Comparator_237, mod_consts[149], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_3 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__8_contained_by();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$array$$$class__3_Comparator_237, mod_consts[151], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_3 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__9_overlap();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$array$$$class__3_Comparator_237, mod_consts[153], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_3 = "o";
            goto frame_exception_exit_4;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_31cfb7a7b2fe16ac102de006123bfd48_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_31cfb7a7b2fe16ac102de006123bfd48_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_31cfb7a7b2fe16ac102de006123bfd48_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_31cfb7a7b2fe16ac102de006123bfd48_4,
            type_description_3,
            outline_2_var___class__
        );



        assertFrameObject(frame_31cfb7a7b2fe16ac102de006123bfd48_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_3:;
        type_description_2 = "o";
        goto try_except_handler_9;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_ARRAY$class_creation_1__bases);
            tmp_cmp_expr_left_2 = tmp_ARRAY$class_creation_1__bases;
            CHECK_OBJECT(tmp_ARRAY$class_creation_1__bases_orig);
            tmp_cmp_expr_right_2 = tmp_ARRAY$class_creation_1__bases_orig;
            tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;
                type_description_2 = "o";
                goto try_except_handler_9;
            }
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
        }
        branch_yes_8:;
        CHECK_OBJECT(tmp_ARRAY$class_creation_1__bases_orig);
        tmp_dictset_value = tmp_ARRAY$class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$array$$$class__3_Comparator_237, mod_consts[139], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_2 = "o";
            goto try_except_handler_9;
        }
        branch_no_8:;
        {
            PyObject *tmp_assign_source_41;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_value_5;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_kwargs_value_5;
            CHECK_OBJECT(tmp_ARRAY$class_creation_1__metaclass);
            tmp_called_value_11 = tmp_ARRAY$class_creation_1__metaclass;
            tmp_tuple_element_13 = mod_consts[146];
            tmp_args_value_5 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_ARRAY$class_creation_1__bases);
            tmp_tuple_element_13 = tmp_ARRAY$class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_13);
            tmp_tuple_element_13 = locals_sqlalchemy$dialects$postgresql$array$$$class__3_Comparator_237;
            PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_ARRAY$class_creation_1__class_decl_dict);
            tmp_kwargs_value_5 = tmp_ARRAY$class_creation_1__class_decl_dict;
            frame_2445f8fc2e3b49feac7b9c09b4294333_3->m_frame.f_lineno = 237;
            tmp_assign_source_41 = CALL_FUNCTION(tmp_called_value_11, tmp_args_value_5, tmp_kwargs_value_5);
            Py_DECREF(tmp_args_value_5);
            if (tmp_assign_source_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;
                type_description_2 = "o";
                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_41;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_dictset_value = outline_2_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_sqlalchemy$dialects$postgresql$array$$$class__3_Comparator_237);
        locals_sqlalchemy$dialects$postgresql$array$$$class__3_Comparator_237 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_sqlalchemy$dialects$postgresql$array$$$class__3_Comparator_237);
        locals_sqlalchemy$dialects$postgresql$array$$$class__3_Comparator_237 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

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

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 237;
        goto try_except_handler_7;
        outline_result_3:;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$array$$$class__2_ARRAY_165, mod_consts[146], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_2 = "o";
            goto try_except_handler_7;
        }
        goto try_end_2;
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

        Py_XDECREF(tmp_ARRAY$class_creation_1__bases_orig);
        tmp_ARRAY$class_creation_1__bases_orig = NULL;
        Py_XDECREF(tmp_ARRAY$class_creation_1__bases);
        tmp_ARRAY$class_creation_1__bases = NULL;
        Py_XDECREF(tmp_ARRAY$class_creation_1__class_decl_dict);
        tmp_ARRAY$class_creation_1__class_decl_dict = NULL;
        Py_XDECREF(tmp_ARRAY$class_creation_1__metaclass);
        tmp_ARRAY$class_creation_1__metaclass = NULL;
        Py_XDECREF(tmp_ARRAY$class_creation_1__prepared);
        tmp_ARRAY$class_creation_1__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto frame_exception_exit_3;
        // End of try:
        try_end_2:;
        CHECK_OBJECT(tmp_ARRAY$class_creation_1__bases_orig);
        Py_DECREF(tmp_ARRAY$class_creation_1__bases_orig);
        tmp_ARRAY$class_creation_1__bases_orig = NULL;
        CHECK_OBJECT(tmp_ARRAY$class_creation_1__bases);
        Py_DECREF(tmp_ARRAY$class_creation_1__bases);
        tmp_ARRAY$class_creation_1__bases = NULL;
        CHECK_OBJECT(tmp_ARRAY$class_creation_1__class_decl_dict);
        Py_DECREF(tmp_ARRAY$class_creation_1__class_decl_dict);
        tmp_ARRAY$class_creation_1__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_ARRAY$class_creation_1__metaclass);
        Py_DECREF(tmp_ARRAY$class_creation_1__metaclass);
        tmp_ARRAY$class_creation_1__metaclass = NULL;
        CHECK_OBJECT(tmp_ARRAY$class_creation_1__prepared);
        Py_DECREF(tmp_ARRAY$class_creation_1__prepared);
        tmp_ARRAY$class_creation_1__prepared = NULL;
        tmp_dictset_value = PyObject_GetItem(locals_sqlalchemy$dialects$postgresql$array$$$class__2_ARRAY_165, mod_consts[146]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[146]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 271;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$array$$$class__2_ARRAY_165, mod_consts[155], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_defaults_5;
            PyObject *tmp_annotations_1;
            tmp_defaults_5 = mod_consts[156];
            tmp_annotations_1 = DICT_COPY(mod_consts[157]);
            Py_INCREF(tmp_defaults_5);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__10___init__(tmp_defaults_5, tmp_annotations_1);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$array$$$class__2_ARRAY_165, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 273;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_element_value_4;
            tmp_res = MAPPING_HAS_ITEM(locals_sqlalchemy$dialects$postgresql$array$$$class__2_ARRAY_165, mod_consts[131]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_13 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            tmp_called_value_12 = PyObject_GetItem(locals_sqlalchemy$dialects$postgresql$array$$$class__2_ARRAY_165, mod_consts[131]);

            if (unlikely(tmp_called_value_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[131]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 327;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_3 = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__11_hashable();

            frame_2445f8fc2e3b49feac7b9c09b4294333_3->m_frame.f_lineno = 327;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_called_value_13 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_4 = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__11_hashable();

            frame_2445f8fc2e3b49feac7b9c09b4294333_3->m_frame.f_lineno = 327;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_5:;
            tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$array$$$class__2_ARRAY_165, mod_consts[159], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_element_value_6;
            tmp_res = MAPPING_HAS_ITEM(locals_sqlalchemy$dialects$postgresql$array$$$class__2_ARRAY_165, mod_consts[131]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_14 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_6;
            } else {
                goto condexpr_false_6;
            }
            condexpr_true_6:;
            tmp_called_value_14 = PyObject_GetItem(locals_sqlalchemy$dialects$postgresql$array$$$class__2_ARRAY_165, mod_consts[131]);

            if (unlikely(tmp_called_value_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[131]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 331;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_5 = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__12_python_type();

            frame_2445f8fc2e3b49feac7b9c09b4294333_3->m_frame.f_lineno = 331;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_5);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_called_value_15 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_6 = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__12_python_type();

            frame_2445f8fc2e3b49feac7b9c09b4294333_3->m_frame.f_lineno = 331;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$array$$$class__2_ARRAY_165, mod_consts[161], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__13_compare_values();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$array$$$class__2_ARRAY_165, mod_consts[163], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_7;
            tmp_called_instance_1 = PyObject_GetItem(locals_sqlalchemy$dialects$postgresql$array$$$class__2_ARRAY_165, mod_consts[104]);

            if (tmp_called_instance_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[104]);

                    if (unlikely(tmp_called_instance_1 == NULL)) {
                        tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
                    }

                    if (tmp_called_instance_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 338;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_instance_1);
                } else {
                    goto frame_exception_exit_3;
                }
            }



            tmp_args_element_value_7 = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__14__against_native_enum();

            frame_2445f8fc2e3b49feac7b9c09b4294333_3->m_frame.f_lineno = 338;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[165], tmp_args_element_value_7);
            Py_DECREF(tmp_called_instance_1);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$array$$$class__2_ARRAY_165, mod_consts[64], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__15_literal_processor();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$array$$$class__2_ARRAY_165, mod_consts[49], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__16_bind_processor();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$array$$$class__2_ARRAY_165, mod_consts[60], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__17_result_processor();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$array$$$class__2_ARRAY_165, mod_consts[62], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_2445f8fc2e3b49feac7b9c09b4294333_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_2445f8fc2e3b49feac7b9c09b4294333_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_2445f8fc2e3b49feac7b9c09b4294333_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_2445f8fc2e3b49feac7b9c09b4294333_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_2445f8fc2e3b49feac7b9c09b4294333_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_2:;

        goto try_except_handler_6;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_15 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$array$$$class__2_ARRAY_165, mod_consts[139], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto try_except_handler_6;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_42;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_16 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_14 = mod_consts[15];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_14 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_14);
            tmp_tuple_element_14 = locals_sqlalchemy$dialects$postgresql$array$$$class__2_ARRAY_165;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_2__class_decl_dict;
            frame_f5ad71ca86465582271315fe04db68aa->m_frame.f_lineno = 165;
            tmp_assign_source_42 = CALL_FUNCTION(tmp_called_value_16, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_42;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_34 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_34);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_sqlalchemy$dialects$postgresql$array$$$class__2_ARRAY_165);
        locals_sqlalchemy$dialects$postgresql$array$$$class__2_ARRAY_165 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_sqlalchemy$dialects$postgresql$array$$$class__2_ARRAY_165);
        locals_sqlalchemy$dialects$postgresql$array$$$class__2_ARRAY_165 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

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

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 165;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_34);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f5ad71ca86465582271315fe04db68aa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f5ad71ca86465582271315fe04db68aa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f5ad71ca86465582271315fe04db68aa, exception_lineno);
    }



    assertFrameObject(frame_f5ad71ca86465582271315fe04db68aa);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_4:;
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
        PyObject *tmp_assign_source_43;


        tmp_assign_source_43 = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$array$$$function__18__split_enum_values();

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_43);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("sqlalchemy.dialects.postgresql.array", false);

    Py_INCREF(module_sqlalchemy$dialects$postgresql$array);
    return module_sqlalchemy$dialects$postgresql$array;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$array, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("sqlalchemy$dialects$postgresql$array", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
