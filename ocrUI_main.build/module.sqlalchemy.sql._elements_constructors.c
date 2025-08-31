/* Generated code for Python module 'sqlalchemy.sql._elements_constructors'
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

/* The "module_sqlalchemy$sql$_elements_constructors" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_sqlalchemy$sql$_elements_constructors;
PyDictObject *moduledict_sqlalchemy$sql$_elements_constructors;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[214];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[214];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("sqlalchemy.sql._elements_constructors"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 214; i++) {
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
void checkModuleConstants_sqlalchemy$sql$_elements_constructors(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 214; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_38bfe2a39f872ae508926c863d28ccc4;
static PyCodeObject *codeobj_c63f20046f11403f9621345ef464e0b9;
static PyCodeObject *codeobj_0e6f7a52ced77b0c039336009e24974f;
static PyCodeObject *codeobj_6a9f39d3f158c55bf8b6150ccdb72979;
static PyCodeObject *codeobj_1cc655c632771fd01344b3ef477bbc1c;
static PyCodeObject *codeobj_8635cc4f2fd78a6143f5f1a5d327110f;
static PyCodeObject *codeobj_ab9261f9177e295df0a086a22829663f;
static PyCodeObject *codeobj_9e2fa664370584292bacb9dbd30fe3df;
static PyCodeObject *codeobj_d4fcdccfebeff28b8bc19ebecd4bf524;
static PyCodeObject *codeobj_d7b250bde4da854a7f9d33b4082a84a9;
static PyCodeObject *codeobj_6badf74433b650838ba8bd4257bbdb80;
static PyCodeObject *codeobj_85fc5c4548148154523ad1de592ffbee;
static PyCodeObject *codeobj_1106e1d9d668940b1c67d9849618a6f4;
static PyCodeObject *codeobj_4672a6a4bf7afb178c4a58c303cc1de6;
static PyCodeObject *codeobj_109992a36165d8b30a1d04554754af0e;
static PyCodeObject *codeobj_e627c3fd68f322f78abb5e560af004f9;
static PyCodeObject *codeobj_f37c951c44fee8c2c0879fd3075ec074;
static PyCodeObject *codeobj_d7f59d259de62296952d341f11d1cbba;
static PyCodeObject *codeobj_4b7dd82fb3c5e8fb197a2cb3eebd64d0;
static PyCodeObject *codeobj_e3f4d9e360b6dfa4170168dd11ff2c03;
static PyCodeObject *codeobj_d2bee1311cc0bc0f129f512c57e1df9a;
static PyCodeObject *codeobj_433890efcc7d2435fddccbce09088d88;
static PyCodeObject *codeobj_f421ca303c1abb78b5e273395fcb473c;
static PyCodeObject *codeobj_87e590cc345c6f96eb4432a3135fe3c0;
static PyCodeObject *codeobj_5bb2777192b71bf253a36bccc2674fd2;
static PyCodeObject *codeobj_4116da44de1a9803daa766277a1c7469;
static PyCodeObject *codeobj_aac7acefdda52c9655d3eb31d07b2b54;
static PyCodeObject *codeobj_1a5b01f760777a841c9956360a7c207d;
static PyCodeObject *codeobj_04810ccb038875323b7fafa2bdba2d20;
static PyCodeObject *codeobj_435ebafa6ed01594b81a3efd8542fce9;
static PyCodeObject *codeobj_50dec8486fa38fbe78befb49ef17f1c8;
static PyCodeObject *codeobj_a4329127af050389a8722e732cbe66f9;
static PyCodeObject *codeobj_805137bb98ba150adeed1b760ec27024;
static PyCodeObject *codeobj_86ccdca69549eab3a458829d595a32aa;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[193]); CHECK_OBJECT(module_filename_obj);
    codeobj_38bfe2a39f872ae508926c863d28ccc4 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[194], mod_consts[194], NULL, NULL, 0, 0, 0);
    codeobj_c63f20046f11403f9621345ef464e0b9 = MAKE_CODE_OBJECT(module_filename_obj, 62, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[132], mod_consts[132], mod_consts[195], NULL, 1, 0, 0);
    codeobj_0e6f7a52ced77b0c039336009e24974f = MAKE_CODE_OBJECT(module_filename_obj, 184, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[4], mod_consts[4], mod_consts[196], NULL, 0, 0, 0);
    codeobj_6a9f39d3f158c55bf8b6150ccdb72979 = MAKE_CODE_OBJECT(module_filename_obj, 116, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[4], mod_consts[4], mod_consts[197], NULL, 1, 0, 0);
    codeobj_1cc655c632771fd01344b3ef477bbc1c = MAKE_CODE_OBJECT(module_filename_obj, 247, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[135], mod_consts[135], mod_consts[195], NULL, 1, 0, 0);
    codeobj_8635cc4f2fd78a6143f5f1a5d327110f = MAKE_CODE_OBJECT(module_filename_obj, 301, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[137], mod_consts[137], mod_consts[198], NULL, 1, 0, 0);
    codeobj_ab9261f9177e295df0a086a22829663f = MAKE_CODE_OBJECT(module_filename_obj, 364, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[18], mod_consts[18], mod_consts[199], NULL, 4, 0, 0);
    codeobj_9e2fa664370584292bacb9dbd30fe3df = MAKE_CODE_OBJECT(module_filename_obj, 464, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[150], mod_consts[150], mod_consts[200], NULL, 10, 0, 0);
    codeobj_d4fcdccfebeff28b8bc19ebecd4bf524 = MAKE_CODE_OBJECT(module_filename_obj, 1092, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[162], mod_consts[162], mod_consts[195], NULL, 1, 0, 0);
    codeobj_d7b250bde4da854a7f9d33b4082a84a9 = MAKE_CODE_OBJECT(module_filename_obj, 724, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[153], mod_consts[153], mod_consts[201], NULL, 0, 2, 0);
    codeobj_6badf74433b650838ba8bd4257bbdb80 = MAKE_CODE_OBJECT(module_filename_obj, 854, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[155], mod_consts[155], mod_consts[202], NULL, 2, 0, 0);
    codeobj_85fc5c4548148154523ad1de592ffbee = MAKE_CODE_OBJECT(module_filename_obj, 341, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[139], mod_consts[139], mod_consts[203], NULL, 2, 0, 0);
    codeobj_1106e1d9d668940b1c67d9849618a6f4 = MAKE_CODE_OBJECT(module_filename_obj, 912, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[158], mod_consts[158], mod_consts[204], NULL, 4, 0, 0);
    codeobj_4672a6a4bf7afb178c4a58c303cc1de6 = MAKE_CODE_OBJECT(module_filename_obj, 1012, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[159], mod_consts[159], mod_consts[198], NULL, 1, 0, 0);
    codeobj_109992a36165d8b30a1d04554754af0e = MAKE_CODE_OBJECT(module_filename_obj, 1053, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[161], mod_consts[161], mod_consts[195], NULL, 1, 0, 0);
    codeobj_e627c3fd68f322f78abb5e560af004f9 = MAKE_CODE_OBJECT(module_filename_obj, 1109, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[164], mod_consts[164], mod_consts[205], NULL, 2, 0, 0);
    codeobj_f37c951c44fee8c2c0879fd3075ec074 = MAKE_CODE_OBJECT(module_filename_obj, 1150, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[166], mod_consts[166], NULL, NULL, 0, 0, 0);
    codeobj_d7f59d259de62296952d341f11d1cbba = MAKE_CODE_OBJECT(module_filename_obj, 1194, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[168], mod_consts[168], mod_consts[206], NULL, 1, 0, 0);
    codeobj_4b7dd82fb3c5e8fb197a2cb3eebd64d0 = MAKE_CODE_OBJECT(module_filename_obj, 1225, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[170], mod_consts[170], mod_consts[207], NULL, 3, 0, 0);
    codeobj_e3f4d9e360b6dfa4170168dd11ff2c03 = MAKE_CODE_OBJECT(module_filename_obj, 442, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[146], mod_consts[146], mod_consts[208], NULL, 1, 0, 0);
    codeobj_d2bee1311cc0bc0f129f512c57e1df9a = MAKE_CODE_OBJECT(module_filename_obj, 447, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[146], mod_consts[146], mod_consts[208], NULL, 1, 0, 0);
    codeobj_433890efcc7d2435fddccbce09088d88 = MAKE_CODE_OBJECT(module_filename_obj, 452, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[146], mod_consts[146], mod_consts[208], NULL, 1, 0, 0);
    codeobj_f421ca303c1abb78b5e273395fcb473c = MAKE_CODE_OBJECT(module_filename_obj, 1248, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[172], mod_consts[172], NULL, NULL, 0, 0, 0);
    codeobj_87e590cc345c6f96eb4432a3135fe3c0 = MAKE_CODE_OBJECT(module_filename_obj, 1254, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[174], mod_consts[174], mod_consts[198], NULL, 1, 0, 0);
    codeobj_5bb2777192b71bf253a36bccc2674fd2 = MAKE_CODE_OBJECT(module_filename_obj, 1298, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[175], mod_consts[175], mod_consts[198], NULL, 1, 0, 0);
    codeobj_4116da44de1a9803daa766277a1c7469 = MAKE_CODE_OBJECT(module_filename_obj, 1400, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[56], mod_consts[56], mod_consts[196], NULL, 0, 0, 0);
    codeobj_aac7acefdda52c9655d3eb31d07b2b54 = MAKE_CODE_OBJECT(module_filename_obj, 1342, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[56], mod_consts[56], mod_consts[197], NULL, 1, 0, 0);
    codeobj_1a5b01f760777a841c9956360a7c207d = MAKE_CODE_OBJECT(module_filename_obj, 425, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[144], mod_consts[144], mod_consts[209], NULL, 2, 0, 0);
    codeobj_04810ccb038875323b7fafa2bdba2d20 = MAKE_CODE_OBJECT(module_filename_obj, 1453, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[180], mod_consts[180], mod_consts[210], NULL, 5, 0, 0);
    codeobj_435ebafa6ed01594b81a3efd8542fce9 = MAKE_CODE_OBJECT(module_filename_obj, 1555, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[183], mod_consts[183], mod_consts[211], NULL, 1, 0, 0);
    codeobj_50dec8486fa38fbe78befb49ef17f1c8 = MAKE_CODE_OBJECT(module_filename_obj, 1633, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[185], mod_consts[185], NULL, NULL, 0, 0, 0);
    codeobj_a4329127af050389a8722e732cbe66f9 = MAKE_CODE_OBJECT(module_filename_obj, 1677, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[188], mod_consts[188], mod_consts[212], NULL, 0, 1, 0);
    codeobj_805137bb98ba150adeed1b760ec27024 = MAKE_CODE_OBJECT(module_filename_obj, 1706, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[190], mod_consts[190], mod_consts[202], NULL, 2, 0, 0);
    codeobj_86ccdca69549eab3a458829d595a32aa = MAKE_CODE_OBJECT(module_filename_obj, 1791, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[192], mod_consts[192], mod_consts[213], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4_complex_call_helper_star_list(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__13_complex_call_helper_keywords_star_list(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__2_complex_call_helper_pos_star_list(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__10_not_(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__11_not_(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__12_bindparam(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__13_case(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__14_cast(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__15_column(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__16_desc(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__17_distinct(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__18_bitwise_not(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__19_extract(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__1_all_(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__20_false(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__21_funcfilter(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__22_label(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__23_null(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__24_nulls_first(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__25_nulls_last(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__26_or_(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__27_or_();


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__28_over(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__29_text(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__2_and_(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__30_true(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__31_tuple_(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__32_type_coerce(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__33_within_group(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__3_and_();


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__4_any_(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__5_asc(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__6_collate(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__7_between(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__8_outparam(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__9_not_(PyObject *annotations);


// The module function definitions.
static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__1_all_(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_expr = python_pars[0];
    struct Nuitka_FrameObject *frame_c63f20046f11403f9621345ef464e0b9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c63f20046f11403f9621345ef464e0b9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c63f20046f11403f9621345ef464e0b9)) {
        Py_XDECREF(cache_frame_c63f20046f11403f9621345ef464e0b9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c63f20046f11403f9621345ef464e0b9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c63f20046f11403f9621345ef464e0b9 = MAKE_FUNCTION_FRAME(codeobj_c63f20046f11403f9621345ef464e0b9, module_sqlalchemy$sql$_elements_constructors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c63f20046f11403f9621345ef464e0b9->m_type_description == NULL);
    frame_c63f20046f11403f9621345ef464e0b9 = cache_frame_c63f20046f11403f9621345ef464e0b9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c63f20046f11403f9621345ef464e0b9);
    assert(Py_REFCNT(frame_c63f20046f11403f9621345ef464e0b9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_expr);
        tmp_args_element_value_1 = par_expr;
        frame_c63f20046f11403f9621345ef464e0b9->m_frame.f_lineno = 113;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[1], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
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
        exception_tb = MAKE_TRACEBACK(frame_c63f20046f11403f9621345ef464e0b9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c63f20046f11403f9621345ef464e0b9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c63f20046f11403f9621345ef464e0b9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c63f20046f11403f9621345ef464e0b9,
        type_description_1,
        par_expr
    );


    // Release cached frame if used for exception.
    if (frame_c63f20046f11403f9621345ef464e0b9 == cache_frame_c63f20046f11403f9621345ef464e0b9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c63f20046f11403f9621345ef464e0b9);
        cache_frame_c63f20046f11403f9621345ef464e0b9 = NULL;
    }

    assertFrameObject(frame_c63f20046f11403f9621345ef464e0b9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_expr);
    Py_DECREF(par_expr);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_expr);
    Py_DECREF(par_expr);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__3_and_(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_clauses = python_pars[0];
    struct Nuitka_FrameObject *frame_0e6f7a52ced77b0c039336009e24974f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0e6f7a52ced77b0c039336009e24974f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0e6f7a52ced77b0c039336009e24974f)) {
        Py_XDECREF(cache_frame_0e6f7a52ced77b0c039336009e24974f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0e6f7a52ced77b0c039336009e24974f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0e6f7a52ced77b0c039336009e24974f = MAKE_FUNCTION_FRAME(codeobj_0e6f7a52ced77b0c039336009e24974f, module_sqlalchemy$sql$_elements_constructors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0e6f7a52ced77b0c039336009e24974f->m_type_description == NULL);
    frame_0e6f7a52ced77b0c039336009e24974f = cache_frame_0e6f7a52ced77b0c039336009e24974f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0e6f7a52ced77b0c039336009e24974f);
    assert(Py_REFCNT(frame_0e6f7a52ced77b0c039336009e24974f) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_clauses);
        tmp_dircall_arg2_1 = par_clauses;
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__4_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
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
        exception_tb = MAKE_TRACEBACK(frame_0e6f7a52ced77b0c039336009e24974f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0e6f7a52ced77b0c039336009e24974f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0e6f7a52ced77b0c039336009e24974f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0e6f7a52ced77b0c039336009e24974f,
        type_description_1,
        par_clauses
    );


    // Release cached frame if used for exception.
    if (frame_0e6f7a52ced77b0c039336009e24974f == cache_frame_0e6f7a52ced77b0c039336009e24974f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0e6f7a52ced77b0c039336009e24974f);
        cache_frame_0e6f7a52ced77b0c039336009e24974f = NULL;
    }

    assertFrameObject(frame_0e6f7a52ced77b0c039336009e24974f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_clauses);
    Py_DECREF(par_clauses);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_clauses);
    Py_DECREF(par_clauses);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__4_any_(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_expr = python_pars[0];
    struct Nuitka_FrameObject *frame_1cc655c632771fd01344b3ef477bbc1c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1cc655c632771fd01344b3ef477bbc1c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1cc655c632771fd01344b3ef477bbc1c)) {
        Py_XDECREF(cache_frame_1cc655c632771fd01344b3ef477bbc1c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1cc655c632771fd01344b3ef477bbc1c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1cc655c632771fd01344b3ef477bbc1c = MAKE_FUNCTION_FRAME(codeobj_1cc655c632771fd01344b3ef477bbc1c, module_sqlalchemy$sql$_elements_constructors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1cc655c632771fd01344b3ef477bbc1c->m_type_description == NULL);
    frame_1cc655c632771fd01344b3ef477bbc1c = cache_frame_1cc655c632771fd01344b3ef477bbc1c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1cc655c632771fd01344b3ef477bbc1c);
    assert(Py_REFCNT(frame_1cc655c632771fd01344b3ef477bbc1c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_expr);
        tmp_args_element_value_1 = par_expr;
        frame_1cc655c632771fd01344b3ef477bbc1c->m_frame.f_lineno = 298;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[6], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
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
        exception_tb = MAKE_TRACEBACK(frame_1cc655c632771fd01344b3ef477bbc1c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1cc655c632771fd01344b3ef477bbc1c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1cc655c632771fd01344b3ef477bbc1c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1cc655c632771fd01344b3ef477bbc1c,
        type_description_1,
        par_expr
    );


    // Release cached frame if used for exception.
    if (frame_1cc655c632771fd01344b3ef477bbc1c == cache_frame_1cc655c632771fd01344b3ef477bbc1c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1cc655c632771fd01344b3ef477bbc1c);
        cache_frame_1cc655c632771fd01344b3ef477bbc1c = NULL;
    }

    assertFrameObject(frame_1cc655c632771fd01344b3ef477bbc1c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_expr);
    Py_DECREF(par_expr);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_expr);
    Py_DECREF(par_expr);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__5_asc(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_column = python_pars[0];
    struct Nuitka_FrameObject *frame_8635cc4f2fd78a6143f5f1a5d327110f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8635cc4f2fd78a6143f5f1a5d327110f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8635cc4f2fd78a6143f5f1a5d327110f)) {
        Py_XDECREF(cache_frame_8635cc4f2fd78a6143f5f1a5d327110f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8635cc4f2fd78a6143f5f1a5d327110f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8635cc4f2fd78a6143f5f1a5d327110f = MAKE_FUNCTION_FRAME(codeobj_8635cc4f2fd78a6143f5f1a5d327110f, module_sqlalchemy$sql$_elements_constructors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8635cc4f2fd78a6143f5f1a5d327110f->m_type_description == NULL);
    frame_8635cc4f2fd78a6143f5f1a5d327110f = cache_frame_8635cc4f2fd78a6143f5f1a5d327110f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8635cc4f2fd78a6143f5f1a5d327110f);
    assert(Py_REFCNT(frame_8635cc4f2fd78a6143f5f1a5d327110f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_column);
        tmp_args_element_value_1 = par_column;
        frame_8635cc4f2fd78a6143f5f1a5d327110f->m_frame.f_lineno = 338;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[9], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
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
        exception_tb = MAKE_TRACEBACK(frame_8635cc4f2fd78a6143f5f1a5d327110f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8635cc4f2fd78a6143f5f1a5d327110f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8635cc4f2fd78a6143f5f1a5d327110f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8635cc4f2fd78a6143f5f1a5d327110f,
        type_description_1,
        par_column
    );


    // Release cached frame if used for exception.
    if (frame_8635cc4f2fd78a6143f5f1a5d327110f == cache_frame_8635cc4f2fd78a6143f5f1a5d327110f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8635cc4f2fd78a6143f5f1a5d327110f);
        cache_frame_8635cc4f2fd78a6143f5f1a5d327110f = NULL;
    }

    assertFrameObject(frame_8635cc4f2fd78a6143f5f1a5d327110f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_column);
    Py_DECREF(par_column);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_column);
    Py_DECREF(par_column);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__6_collate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_expression = python_pars[0];
    PyObject *par_collation = python_pars[1];
    struct Nuitka_FrameObject *frame_85fc5c4548148154523ad1de592ffbee;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_85fc5c4548148154523ad1de592ffbee = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_85fc5c4548148154523ad1de592ffbee)) {
        Py_XDECREF(cache_frame_85fc5c4548148154523ad1de592ffbee);

#if _DEBUG_REFCOUNTS
        if (cache_frame_85fc5c4548148154523ad1de592ffbee == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_85fc5c4548148154523ad1de592ffbee = MAKE_FUNCTION_FRAME(codeobj_85fc5c4548148154523ad1de592ffbee, module_sqlalchemy$sql$_elements_constructors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_85fc5c4548148154523ad1de592ffbee->m_type_description == NULL);
    frame_85fc5c4548148154523ad1de592ffbee = cache_frame_85fc5c4548148154523ad1de592ffbee;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_85fc5c4548148154523ad1de592ffbee);
    assert(Py_REFCNT(frame_85fc5c4548148154523ad1de592ffbee) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_expression);
        tmp_args_element_value_1 = par_expression;
        CHECK_OBJECT(par_collation);
        tmp_args_element_value_2 = par_collation;
        frame_85fc5c4548148154523ad1de592ffbee->m_frame.f_lineno = 361;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[12],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
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
        exception_tb = MAKE_TRACEBACK(frame_85fc5c4548148154523ad1de592ffbee, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_85fc5c4548148154523ad1de592ffbee->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_85fc5c4548148154523ad1de592ffbee, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_85fc5c4548148154523ad1de592ffbee,
        type_description_1,
        par_expression,
        par_collation
    );


    // Release cached frame if used for exception.
    if (frame_85fc5c4548148154523ad1de592ffbee == cache_frame_85fc5c4548148154523ad1de592ffbee) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_85fc5c4548148154523ad1de592ffbee);
        cache_frame_85fc5c4548148154523ad1de592ffbee = NULL;
    }

    assertFrameObject(frame_85fc5c4548148154523ad1de592ffbee);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_expression);
    Py_DECREF(par_expression);
    CHECK_OBJECT(par_collation);
    Py_DECREF(par_collation);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_expression);
    Py_DECREF(par_expression);
    CHECK_OBJECT(par_collation);
    Py_DECREF(par_collation);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__7_between(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_expr = python_pars[0];
    PyObject *par_lower_bound = python_pars[1];
    PyObject *par_upper_bound = python_pars[2];
    PyObject *par_symmetric = python_pars[3];
    PyObject *var_col_expr = NULL;
    struct Nuitka_FrameObject *frame_ab9261f9177e295df0a086a22829663f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ab9261f9177e295df0a086a22829663f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ab9261f9177e295df0a086a22829663f)) {
        Py_XDECREF(cache_frame_ab9261f9177e295df0a086a22829663f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ab9261f9177e295df0a086a22829663f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ab9261f9177e295df0a086a22829663f = MAKE_FUNCTION_FRAME(codeobj_ab9261f9177e295df0a086a22829663f, module_sqlalchemy$sql$_elements_constructors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ab9261f9177e295df0a086a22829663f->m_type_description == NULL);
    frame_ab9261f9177e295df0a086a22829663f = cache_frame_ab9261f9177e295df0a086a22829663f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ab9261f9177e295df0a086a22829663f);
    assert(Py_REFCNT(frame_ab9261f9177e295df0a086a22829663f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[15]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 421;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[17]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 421;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_expr);
        tmp_args_element_value_2 = par_expr;
        frame_ab9261f9177e295df0a086a22829663f->m_frame.f_lineno = 421;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_col_expr == NULL);
        var_col_expr = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        CHECK_OBJECT(var_col_expr);
        tmp_expression_value_3 = var_col_expr;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[18]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_lower_bound);
        tmp_kw_call_arg_value_0_1 = par_lower_bound;
        CHECK_OBJECT(par_upper_bound);
        tmp_kw_call_arg_value_1_1 = par_upper_bound;
        CHECK_OBJECT(par_symmetric);
        tmp_kw_call_dict_value_0_1 = par_symmetric;
        frame_ab9261f9177e295df0a086a22829663f->m_frame.f_lineno = 422;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[19]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
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
        exception_tb = MAKE_TRACEBACK(frame_ab9261f9177e295df0a086a22829663f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ab9261f9177e295df0a086a22829663f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ab9261f9177e295df0a086a22829663f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ab9261f9177e295df0a086a22829663f,
        type_description_1,
        par_expr,
        par_lower_bound,
        par_upper_bound,
        par_symmetric,
        var_col_expr
    );


    // Release cached frame if used for exception.
    if (frame_ab9261f9177e295df0a086a22829663f == cache_frame_ab9261f9177e295df0a086a22829663f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ab9261f9177e295df0a086a22829663f);
        cache_frame_ab9261f9177e295df0a086a22829663f = NULL;
    }

    assertFrameObject(frame_ab9261f9177e295df0a086a22829663f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_col_expr);
    Py_DECREF(var_col_expr);
    var_col_expr = NULL;
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

    Py_XDECREF(var_col_expr);
    var_col_expr = NULL;
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
    CHECK_OBJECT(par_expr);
    Py_DECREF(par_expr);
    CHECK_OBJECT(par_lower_bound);
    Py_DECREF(par_lower_bound);
    CHECK_OBJECT(par_upper_bound);
    Py_DECREF(par_upper_bound);
    CHECK_OBJECT(par_symmetric);
    Py_DECREF(par_symmetric);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_expr);
    Py_DECREF(par_expr);
    CHECK_OBJECT(par_lower_bound);
    Py_DECREF(par_lower_bound);
    CHECK_OBJECT(par_upper_bound);
    Py_DECREF(par_upper_bound);
    CHECK_OBJECT(par_symmetric);
    Py_DECREF(par_symmetric);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__8_outparam(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    PyObject *par_type_ = python_pars[1];
    struct Nuitka_FrameObject *frame_1a5b01f760777a841c9956360a7c207d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1a5b01f760777a841c9956360a7c207d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1a5b01f760777a841c9956360a7c207d)) {
        Py_XDECREF(cache_frame_1a5b01f760777a841c9956360a7c207d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1a5b01f760777a841c9956360a7c207d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1a5b01f760777a841c9956360a7c207d = MAKE_FUNCTION_FRAME(codeobj_1a5b01f760777a841c9956360a7c207d, module_sqlalchemy$sql$_elements_constructors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1a5b01f760777a841c9956360a7c207d->m_type_description == NULL);
    frame_1a5b01f760777a841c9956360a7c207d = cache_frame_1a5b01f760777a841c9956360a7c207d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1a5b01f760777a841c9956360a7c207d);
    assert(Py_REFCNT(frame_1a5b01f760777a841c9956360a7c207d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_kw_call_arg_value_0_1 = par_key;
        tmp_kw_call_arg_value_1_1 = Py_None;
        CHECK_OBJECT(par_type_);
        tmp_kw_call_dict_value_0_1 = par_type_;
        tmp_kw_call_dict_value_1_1 = Py_False;
        tmp_kw_call_dict_value_2_1 = Py_True;
        frame_1a5b01f760777a841c9956360a7c207d->m_frame.f_lineno = 437;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[22]);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
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
        exception_tb = MAKE_TRACEBACK(frame_1a5b01f760777a841c9956360a7c207d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1a5b01f760777a841c9956360a7c207d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1a5b01f760777a841c9956360a7c207d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1a5b01f760777a841c9956360a7c207d,
        type_description_1,
        par_key,
        par_type_
    );


    // Release cached frame if used for exception.
    if (frame_1a5b01f760777a841c9956360a7c207d == cache_frame_1a5b01f760777a841c9956360a7c207d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1a5b01f760777a841c9956360a7c207d);
        cache_frame_1a5b01f760777a841c9956360a7c207d = NULL;
    }

    assertFrameObject(frame_1a5b01f760777a841c9956360a7c207d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__11_not_(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_clause = python_pars[0];
    struct Nuitka_FrameObject *frame_433890efcc7d2435fddccbce09088d88;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_433890efcc7d2435fddccbce09088d88 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_433890efcc7d2435fddccbce09088d88)) {
        Py_XDECREF(cache_frame_433890efcc7d2435fddccbce09088d88);

#if _DEBUG_REFCOUNTS
        if (cache_frame_433890efcc7d2435fddccbce09088d88 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_433890efcc7d2435fddccbce09088d88 = MAKE_FUNCTION_FRAME(codeobj_433890efcc7d2435fddccbce09088d88, module_sqlalchemy$sql$_elements_constructors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_433890efcc7d2435fddccbce09088d88->m_type_description == NULL);
    frame_433890efcc7d2435fddccbce09088d88 = cache_frame_433890efcc7d2435fddccbce09088d88;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_433890efcc7d2435fddccbce09088d88);
    assert(Py_REFCNT(frame_433890efcc7d2435fddccbce09088d88) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[15]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 461;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[17]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 461;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_clause);
        tmp_args_element_value_2 = par_clause;
        frame_433890efcc7d2435fddccbce09088d88->m_frame.f_lineno = 461;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_433890efcc7d2435fddccbce09088d88->m_frame.f_lineno = 461;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[24]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
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
        exception_tb = MAKE_TRACEBACK(frame_433890efcc7d2435fddccbce09088d88, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_433890efcc7d2435fddccbce09088d88->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_433890efcc7d2435fddccbce09088d88, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_433890efcc7d2435fddccbce09088d88,
        type_description_1,
        par_clause
    );


    // Release cached frame if used for exception.
    if (frame_433890efcc7d2435fddccbce09088d88 == cache_frame_433890efcc7d2435fddccbce09088d88) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_433890efcc7d2435fddccbce09088d88);
        cache_frame_433890efcc7d2435fddccbce09088d88 = NULL;
    }

    assertFrameObject(frame_433890efcc7d2435fddccbce09088d88);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_clause);
    Py_DECREF(par_clause);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_clause);
    Py_DECREF(par_clause);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__12_bindparam(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    PyObject *par_value = python_pars[1];
    PyObject *par_type_ = python_pars[2];
    PyObject *par_unique = python_pars[3];
    PyObject *par_required = python_pars[4];
    PyObject *par_quote = python_pars[5];
    PyObject *par_callable_ = python_pars[6];
    PyObject *par_expanding = python_pars[7];
    PyObject *par_isoutparam = python_pars[8];
    PyObject *par_literal_execute = python_pars[9];
    struct Nuitka_FrameObject *frame_9e2fa664370584292bacb9dbd30fe3df;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9e2fa664370584292bacb9dbd30fe3df = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9e2fa664370584292bacb9dbd30fe3df)) {
        Py_XDECREF(cache_frame_9e2fa664370584292bacb9dbd30fe3df);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9e2fa664370584292bacb9dbd30fe3df == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9e2fa664370584292bacb9dbd30fe3df = MAKE_FUNCTION_FRAME(codeobj_9e2fa664370584292bacb9dbd30fe3df, module_sqlalchemy$sql$_elements_constructors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9e2fa664370584292bacb9dbd30fe3df->m_type_description == NULL);
    frame_9e2fa664370584292bacb9dbd30fe3df = cache_frame_9e2fa664370584292bacb9dbd30fe3df;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9e2fa664370584292bacb9dbd30fe3df);
    assert(Py_REFCNT(frame_9e2fa664370584292bacb9dbd30fe3df) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 710;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_value_1 = par_key;
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        CHECK_OBJECT(par_type_);
        tmp_args_element_value_3 = par_type_;
        CHECK_OBJECT(par_unique);
        tmp_args_element_value_4 = par_unique;
        CHECK_OBJECT(par_required);
        tmp_args_element_value_5 = par_required;
        CHECK_OBJECT(par_quote);
        tmp_args_element_value_6 = par_quote;
        CHECK_OBJECT(par_callable_);
        tmp_args_element_value_7 = par_callable_;
        CHECK_OBJECT(par_expanding);
        tmp_args_element_value_8 = par_expanding;
        CHECK_OBJECT(par_isoutparam);
        tmp_args_element_value_9 = par_isoutparam;
        CHECK_OBJECT(par_literal_execute);
        tmp_args_element_value_10 = par_literal_execute;
        frame_9e2fa664370584292bacb9dbd30fe3df->m_frame.f_lineno = 710;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS10(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 710;
            type_description_1 = "oooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_9e2fa664370584292bacb9dbd30fe3df, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9e2fa664370584292bacb9dbd30fe3df->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9e2fa664370584292bacb9dbd30fe3df, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9e2fa664370584292bacb9dbd30fe3df,
        type_description_1,
        par_key,
        par_value,
        par_type_,
        par_unique,
        par_required,
        par_quote,
        par_callable_,
        par_expanding,
        par_isoutparam,
        par_literal_execute
    );


    // Release cached frame if used for exception.
    if (frame_9e2fa664370584292bacb9dbd30fe3df == cache_frame_9e2fa664370584292bacb9dbd30fe3df) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9e2fa664370584292bacb9dbd30fe3df);
        cache_frame_9e2fa664370584292bacb9dbd30fe3df = NULL;
    }

    assertFrameObject(frame_9e2fa664370584292bacb9dbd30fe3df);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);
    CHECK_OBJECT(par_unique);
    Py_DECREF(par_unique);
    CHECK_OBJECT(par_required);
    Py_DECREF(par_required);
    CHECK_OBJECT(par_quote);
    Py_DECREF(par_quote);
    CHECK_OBJECT(par_callable_);
    Py_DECREF(par_callable_);
    CHECK_OBJECT(par_expanding);
    Py_DECREF(par_expanding);
    CHECK_OBJECT(par_isoutparam);
    Py_DECREF(par_isoutparam);
    CHECK_OBJECT(par_literal_execute);
    Py_DECREF(par_literal_execute);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);
    CHECK_OBJECT(par_unique);
    Py_DECREF(par_unique);
    CHECK_OBJECT(par_required);
    Py_DECREF(par_required);
    CHECK_OBJECT(par_quote);
    Py_DECREF(par_quote);
    CHECK_OBJECT(par_callable_);
    Py_DECREF(par_callable_);
    CHECK_OBJECT(par_expanding);
    Py_DECREF(par_expanding);
    CHECK_OBJECT(par_isoutparam);
    Py_DECREF(par_isoutparam);
    CHECK_OBJECT(par_literal_execute);
    Py_DECREF(par_literal_execute);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__13_case(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *par_else_ = python_pars[1];
    PyObject *par_whens = python_pars[2];
    struct Nuitka_FrameObject *frame_d7b250bde4da854a7f9d33b4082a84a9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_d7b250bde4da854a7f9d33b4082a84a9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d7b250bde4da854a7f9d33b4082a84a9)) {
        Py_XDECREF(cache_frame_d7b250bde4da854a7f9d33b4082a84a9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d7b250bde4da854a7f9d33b4082a84a9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d7b250bde4da854a7f9d33b4082a84a9 = MAKE_FUNCTION_FRAME(codeobj_d7b250bde4da854a7f9d33b4082a84a9, module_sqlalchemy$sql$_elements_constructors, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d7b250bde4da854a7f9d33b4082a84a9->m_type_description == NULL);
    frame_d7b250bde4da854a7f9d33b4082a84a9 = cache_frame_d7b250bde4da854a7f9d33b4082a84a9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d7b250bde4da854a7f9d33b4082a84a9);
    assert(Py_REFCNT(frame_d7b250bde4da854a7f9d33b4082a84a9) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 851;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_whens);
        tmp_dircall_arg2_1 = par_whens;
        tmp_dict_key_1 = mod_consts[28];
        CHECK_OBJECT(par_value);
        tmp_dict_value_1 = par_value;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[29];
        CHECK_OBJECT(par_else_);
        tmp_dict_value_1 = par_else_;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__13_complex_call_helper_keywords_star_list(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 851;
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
        exception_tb = MAKE_TRACEBACK(frame_d7b250bde4da854a7f9d33b4082a84a9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d7b250bde4da854a7f9d33b4082a84a9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d7b250bde4da854a7f9d33b4082a84a9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d7b250bde4da854a7f9d33b4082a84a9,
        type_description_1,
        par_value,
        par_else_,
        par_whens
    );


    // Release cached frame if used for exception.
    if (frame_d7b250bde4da854a7f9d33b4082a84a9 == cache_frame_d7b250bde4da854a7f9d33b4082a84a9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d7b250bde4da854a7f9d33b4082a84a9);
        cache_frame_d7b250bde4da854a7f9d33b4082a84a9 = NULL;
    }

    assertFrameObject(frame_d7b250bde4da854a7f9d33b4082a84a9);

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
    CHECK_OBJECT(par_else_);
    Py_DECREF(par_else_);
    CHECK_OBJECT(par_whens);
    Py_DECREF(par_whens);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_else_);
    Py_DECREF(par_else_);
    CHECK_OBJECT(par_whens);
    Py_DECREF(par_whens);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__14_cast(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_expression = python_pars[0];
    PyObject *par_type_ = python_pars[1];
    struct Nuitka_FrameObject *frame_6badf74433b650838ba8bd4257bbdb80;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6badf74433b650838ba8bd4257bbdb80 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6badf74433b650838ba8bd4257bbdb80)) {
        Py_XDECREF(cache_frame_6badf74433b650838ba8bd4257bbdb80);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6badf74433b650838ba8bd4257bbdb80 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6badf74433b650838ba8bd4257bbdb80 = MAKE_FUNCTION_FRAME(codeobj_6badf74433b650838ba8bd4257bbdb80, module_sqlalchemy$sql$_elements_constructors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6badf74433b650838ba8bd4257bbdb80->m_type_description == NULL);
    frame_6badf74433b650838ba8bd4257bbdb80 = cache_frame_6badf74433b650838ba8bd4257bbdb80;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6badf74433b650838ba8bd4257bbdb80);
    assert(Py_REFCNT(frame_6badf74433b650838ba8bd4257bbdb80) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 909;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_expression);
        tmp_args_element_value_1 = par_expression;
        CHECK_OBJECT(par_type_);
        tmp_args_element_value_2 = par_type_;
        frame_6badf74433b650838ba8bd4257bbdb80->m_frame.f_lineno = 909;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 909;
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
        exception_tb = MAKE_TRACEBACK(frame_6badf74433b650838ba8bd4257bbdb80, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6badf74433b650838ba8bd4257bbdb80->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6badf74433b650838ba8bd4257bbdb80, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6badf74433b650838ba8bd4257bbdb80,
        type_description_1,
        par_expression,
        par_type_
    );


    // Release cached frame if used for exception.
    if (frame_6badf74433b650838ba8bd4257bbdb80 == cache_frame_6badf74433b650838ba8bd4257bbdb80) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6badf74433b650838ba8bd4257bbdb80);
        cache_frame_6badf74433b650838ba8bd4257bbdb80 = NULL;
    }

    assertFrameObject(frame_6badf74433b650838ba8bd4257bbdb80);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_expression);
    Py_DECREF(par_expression);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_expression);
    Py_DECREF(par_expression);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__15_column(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[0];
    PyObject *par_type_ = python_pars[1];
    PyObject *par_is_literal = python_pars[2];
    PyObject *par__selectable = python_pars[3];
    struct Nuitka_FrameObject *frame_1106e1d9d668940b1c67d9849618a6f4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1106e1d9d668940b1c67d9849618a6f4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1106e1d9d668940b1c67d9849618a6f4)) {
        Py_XDECREF(cache_frame_1106e1d9d668940b1c67d9849618a6f4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1106e1d9d668940b1c67d9849618a6f4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1106e1d9d668940b1c67d9849618a6f4 = MAKE_FUNCTION_FRAME(codeobj_1106e1d9d668940b1c67d9849618a6f4, module_sqlalchemy$sql$_elements_constructors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1106e1d9d668940b1c67d9849618a6f4->m_type_description == NULL);
    frame_1106e1d9d668940b1c67d9849618a6f4 = cache_frame_1106e1d9d668940b1c67d9849618a6f4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1106e1d9d668940b1c67d9849618a6f4);
    assert(Py_REFCNT(frame_1106e1d9d668940b1c67d9849618a6f4) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1009;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_text);
        tmp_args_element_value_1 = par_text;
        CHECK_OBJECT(par_type_);
        tmp_args_element_value_2 = par_type_;
        CHECK_OBJECT(par_is_literal);
        tmp_args_element_value_3 = par_is_literal;
        CHECK_OBJECT(par__selectable);
        tmp_args_element_value_4 = par__selectable;
        frame_1106e1d9d668940b1c67d9849618a6f4->m_frame.f_lineno = 1009;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1009;
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1106e1d9d668940b1c67d9849618a6f4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1106e1d9d668940b1c67d9849618a6f4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1106e1d9d668940b1c67d9849618a6f4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1106e1d9d668940b1c67d9849618a6f4,
        type_description_1,
        par_text,
        par_type_,
        par_is_literal,
        par__selectable
    );


    // Release cached frame if used for exception.
    if (frame_1106e1d9d668940b1c67d9849618a6f4 == cache_frame_1106e1d9d668940b1c67d9849618a6f4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1106e1d9d668940b1c67d9849618a6f4);
        cache_frame_1106e1d9d668940b1c67d9849618a6f4 = NULL;
    }

    assertFrameObject(frame_1106e1d9d668940b1c67d9849618a6f4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);
    CHECK_OBJECT(par_is_literal);
    Py_DECREF(par_is_literal);
    CHECK_OBJECT(par__selectable);
    Py_DECREF(par__selectable);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);
    CHECK_OBJECT(par_is_literal);
    Py_DECREF(par_is_literal);
    CHECK_OBJECT(par__selectable);
    Py_DECREF(par__selectable);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__16_desc(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_column = python_pars[0];
    struct Nuitka_FrameObject *frame_4672a6a4bf7afb178c4a58c303cc1de6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4672a6a4bf7afb178c4a58c303cc1de6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4672a6a4bf7afb178c4a58c303cc1de6)) {
        Py_XDECREF(cache_frame_4672a6a4bf7afb178c4a58c303cc1de6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4672a6a4bf7afb178c4a58c303cc1de6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4672a6a4bf7afb178c4a58c303cc1de6 = MAKE_FUNCTION_FRAME(codeobj_4672a6a4bf7afb178c4a58c303cc1de6, module_sqlalchemy$sql$_elements_constructors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4672a6a4bf7afb178c4a58c303cc1de6->m_type_description == NULL);
    frame_4672a6a4bf7afb178c4a58c303cc1de6 = cache_frame_4672a6a4bf7afb178c4a58c303cc1de6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4672a6a4bf7afb178c4a58c303cc1de6);
    assert(Py_REFCNT(frame_4672a6a4bf7afb178c4a58c303cc1de6) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1050;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_column);
        tmp_args_element_value_1 = par_column;
        frame_4672a6a4bf7afb178c4a58c303cc1de6->m_frame.f_lineno = 1050;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[35], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1050;
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
        exception_tb = MAKE_TRACEBACK(frame_4672a6a4bf7afb178c4a58c303cc1de6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4672a6a4bf7afb178c4a58c303cc1de6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4672a6a4bf7afb178c4a58c303cc1de6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4672a6a4bf7afb178c4a58c303cc1de6,
        type_description_1,
        par_column
    );


    // Release cached frame if used for exception.
    if (frame_4672a6a4bf7afb178c4a58c303cc1de6 == cache_frame_4672a6a4bf7afb178c4a58c303cc1de6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4672a6a4bf7afb178c4a58c303cc1de6);
        cache_frame_4672a6a4bf7afb178c4a58c303cc1de6 = NULL;
    }

    assertFrameObject(frame_4672a6a4bf7afb178c4a58c303cc1de6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_column);
    Py_DECREF(par_column);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_column);
    Py_DECREF(par_column);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__17_distinct(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_expr = python_pars[0];
    struct Nuitka_FrameObject *frame_109992a36165d8b30a1d04554754af0e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_109992a36165d8b30a1d04554754af0e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_109992a36165d8b30a1d04554754af0e)) {
        Py_XDECREF(cache_frame_109992a36165d8b30a1d04554754af0e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_109992a36165d8b30a1d04554754af0e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_109992a36165d8b30a1d04554754af0e = MAKE_FUNCTION_FRAME(codeobj_109992a36165d8b30a1d04554754af0e, module_sqlalchemy$sql$_elements_constructors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_109992a36165d8b30a1d04554754af0e->m_type_description == NULL);
    frame_109992a36165d8b30a1d04554754af0e = cache_frame_109992a36165d8b30a1d04554754af0e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_109992a36165d8b30a1d04554754af0e);
    assert(Py_REFCNT(frame_109992a36165d8b30a1d04554754af0e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1089;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_expr);
        tmp_args_element_value_1 = par_expr;
        frame_109992a36165d8b30a1d04554754af0e->m_frame.f_lineno = 1089;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[37], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1089;
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
        exception_tb = MAKE_TRACEBACK(frame_109992a36165d8b30a1d04554754af0e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_109992a36165d8b30a1d04554754af0e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_109992a36165d8b30a1d04554754af0e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_109992a36165d8b30a1d04554754af0e,
        type_description_1,
        par_expr
    );


    // Release cached frame if used for exception.
    if (frame_109992a36165d8b30a1d04554754af0e == cache_frame_109992a36165d8b30a1d04554754af0e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_109992a36165d8b30a1d04554754af0e);
        cache_frame_109992a36165d8b30a1d04554754af0e = NULL;
    }

    assertFrameObject(frame_109992a36165d8b30a1d04554754af0e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_expr);
    Py_DECREF(par_expr);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_expr);
    Py_DECREF(par_expr);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__18_bitwise_not(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_expr = python_pars[0];
    struct Nuitka_FrameObject *frame_d4fcdccfebeff28b8bc19ebecd4bf524;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d4fcdccfebeff28b8bc19ebecd4bf524 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d4fcdccfebeff28b8bc19ebecd4bf524)) {
        Py_XDECREF(cache_frame_d4fcdccfebeff28b8bc19ebecd4bf524);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d4fcdccfebeff28b8bc19ebecd4bf524 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d4fcdccfebeff28b8bc19ebecd4bf524 = MAKE_FUNCTION_FRAME(codeobj_d4fcdccfebeff28b8bc19ebecd4bf524, module_sqlalchemy$sql$_elements_constructors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d4fcdccfebeff28b8bc19ebecd4bf524->m_type_description == NULL);
    frame_d4fcdccfebeff28b8bc19ebecd4bf524 = cache_frame_d4fcdccfebeff28b8bc19ebecd4bf524;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d4fcdccfebeff28b8bc19ebecd4bf524);
    assert(Py_REFCNT(frame_d4fcdccfebeff28b8bc19ebecd4bf524) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1106;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_expr);
        tmp_args_element_value_1 = par_expr;
        frame_d4fcdccfebeff28b8bc19ebecd4bf524->m_frame.f_lineno = 1106;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[39], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1106;
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
        exception_tb = MAKE_TRACEBACK(frame_d4fcdccfebeff28b8bc19ebecd4bf524, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d4fcdccfebeff28b8bc19ebecd4bf524->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d4fcdccfebeff28b8bc19ebecd4bf524, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d4fcdccfebeff28b8bc19ebecd4bf524,
        type_description_1,
        par_expr
    );


    // Release cached frame if used for exception.
    if (frame_d4fcdccfebeff28b8bc19ebecd4bf524 == cache_frame_d4fcdccfebeff28b8bc19ebecd4bf524) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d4fcdccfebeff28b8bc19ebecd4bf524);
        cache_frame_d4fcdccfebeff28b8bc19ebecd4bf524 = NULL;
    }

    assertFrameObject(frame_d4fcdccfebeff28b8bc19ebecd4bf524);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_expr);
    Py_DECREF(par_expr);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_expr);
    Py_DECREF(par_expr);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__19_extract(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_field = python_pars[0];
    PyObject *par_expr = python_pars[1];
    struct Nuitka_FrameObject *frame_e627c3fd68f322f78abb5e560af004f9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e627c3fd68f322f78abb5e560af004f9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e627c3fd68f322f78abb5e560af004f9)) {
        Py_XDECREF(cache_frame_e627c3fd68f322f78abb5e560af004f9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e627c3fd68f322f78abb5e560af004f9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e627c3fd68f322f78abb5e560af004f9 = MAKE_FUNCTION_FRAME(codeobj_e627c3fd68f322f78abb5e560af004f9, module_sqlalchemy$sql$_elements_constructors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e627c3fd68f322f78abb5e560af004f9->m_type_description == NULL);
    frame_e627c3fd68f322f78abb5e560af004f9 = cache_frame_e627c3fd68f322f78abb5e560af004f9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e627c3fd68f322f78abb5e560af004f9);
    assert(Py_REFCNT(frame_e627c3fd68f322f78abb5e560af004f9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1147;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_field);
        tmp_args_element_value_1 = par_field;
        CHECK_OBJECT(par_expr);
        tmp_args_element_value_2 = par_expr;
        frame_e627c3fd68f322f78abb5e560af004f9->m_frame.f_lineno = 1147;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1147;
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
        exception_tb = MAKE_TRACEBACK(frame_e627c3fd68f322f78abb5e560af004f9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e627c3fd68f322f78abb5e560af004f9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e627c3fd68f322f78abb5e560af004f9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e627c3fd68f322f78abb5e560af004f9,
        type_description_1,
        par_field,
        par_expr
    );


    // Release cached frame if used for exception.
    if (frame_e627c3fd68f322f78abb5e560af004f9 == cache_frame_e627c3fd68f322f78abb5e560af004f9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e627c3fd68f322f78abb5e560af004f9);
        cache_frame_e627c3fd68f322f78abb5e560af004f9 = NULL;
    }

    assertFrameObject(frame_e627c3fd68f322f78abb5e560af004f9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_field);
    Py_DECREF(par_field);
    CHECK_OBJECT(par_expr);
    Py_DECREF(par_expr);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_field);
    Py_DECREF(par_field);
    CHECK_OBJECT(par_expr);
    Py_DECREF(par_expr);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__20_false(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_f37c951c44fee8c2c0879fd3075ec074;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f37c951c44fee8c2c0879fd3075ec074 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f37c951c44fee8c2c0879fd3075ec074)) {
        Py_XDECREF(cache_frame_f37c951c44fee8c2c0879fd3075ec074);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f37c951c44fee8c2c0879fd3075ec074 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f37c951c44fee8c2c0879fd3075ec074 = MAKE_FUNCTION_FRAME(codeobj_f37c951c44fee8c2c0879fd3075ec074, module_sqlalchemy$sql$_elements_constructors, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f37c951c44fee8c2c0879fd3075ec074->m_type_description == NULL);
    frame_f37c951c44fee8c2c0879fd3075ec074 = cache_frame_f37c951c44fee8c2c0879fd3075ec074;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f37c951c44fee8c2c0879fd3075ec074);
    assert(Py_REFCNT(frame_f37c951c44fee8c2c0879fd3075ec074) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1191;

            goto frame_exception_exit_1;
        }
        frame_f37c951c44fee8c2c0879fd3075ec074->m_frame.f_lineno = 1191;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[44]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1191;

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
        exception_tb = MAKE_TRACEBACK(frame_f37c951c44fee8c2c0879fd3075ec074, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f37c951c44fee8c2c0879fd3075ec074->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f37c951c44fee8c2c0879fd3075ec074, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f37c951c44fee8c2c0879fd3075ec074,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_f37c951c44fee8c2c0879fd3075ec074 == cache_frame_f37c951c44fee8c2c0879fd3075ec074) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f37c951c44fee8c2c0879fd3075ec074);
        cache_frame_f37c951c44fee8c2c0879fd3075ec074 = NULL;
    }

    assertFrameObject(frame_f37c951c44fee8c2c0879fd3075ec074);

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


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__21_funcfilter(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[0];
    PyObject *par_criterion = python_pars[1];
    struct Nuitka_FrameObject *frame_d7f59d259de62296952d341f11d1cbba;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d7f59d259de62296952d341f11d1cbba = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d7f59d259de62296952d341f11d1cbba)) {
        Py_XDECREF(cache_frame_d7f59d259de62296952d341f11d1cbba);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d7f59d259de62296952d341f11d1cbba == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d7f59d259de62296952d341f11d1cbba = MAKE_FUNCTION_FRAME(codeobj_d7f59d259de62296952d341f11d1cbba, module_sqlalchemy$sql$_elements_constructors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d7f59d259de62296952d341f11d1cbba->m_type_description == NULL);
    frame_d7f59d259de62296952d341f11d1cbba = cache_frame_d7f59d259de62296952d341f11d1cbba;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d7f59d259de62296952d341f11d1cbba);
    assert(Py_REFCNT(frame_d7f59d259de62296952d341f11d1cbba) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_func);
        tmp_tuple_element_1 = par_func;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_criterion);
        tmp_dircall_arg3_1 = par_criterion;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__2_complex_call_helper_pos_star_list(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1222;
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
        exception_tb = MAKE_TRACEBACK(frame_d7f59d259de62296952d341f11d1cbba, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d7f59d259de62296952d341f11d1cbba->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d7f59d259de62296952d341f11d1cbba, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d7f59d259de62296952d341f11d1cbba,
        type_description_1,
        par_func,
        par_criterion
    );


    // Release cached frame if used for exception.
    if (frame_d7f59d259de62296952d341f11d1cbba == cache_frame_d7f59d259de62296952d341f11d1cbba) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d7f59d259de62296952d341f11d1cbba);
        cache_frame_d7f59d259de62296952d341f11d1cbba = NULL;
    }

    assertFrameObject(frame_d7f59d259de62296952d341f11d1cbba);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_criterion);
    Py_DECREF(par_criterion);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_criterion);
    Py_DECREF(par_criterion);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__22_label(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[0];
    PyObject *par_element = python_pars[1];
    PyObject *par_type_ = python_pars[2];
    struct Nuitka_FrameObject *frame_4b7dd82fb3c5e8fb197a2cb3eebd64d0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4b7dd82fb3c5e8fb197a2cb3eebd64d0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4b7dd82fb3c5e8fb197a2cb3eebd64d0)) {
        Py_XDECREF(cache_frame_4b7dd82fb3c5e8fb197a2cb3eebd64d0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4b7dd82fb3c5e8fb197a2cb3eebd64d0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4b7dd82fb3c5e8fb197a2cb3eebd64d0 = MAKE_FUNCTION_FRAME(codeobj_4b7dd82fb3c5e8fb197a2cb3eebd64d0, module_sqlalchemy$sql$_elements_constructors, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4b7dd82fb3c5e8fb197a2cb3eebd64d0->m_type_description == NULL);
    frame_4b7dd82fb3c5e8fb197a2cb3eebd64d0 = cache_frame_4b7dd82fb3c5e8fb197a2cb3eebd64d0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4b7dd82fb3c5e8fb197a2cb3eebd64d0);
    assert(Py_REFCNT(frame_4b7dd82fb3c5e8fb197a2cb3eebd64d0) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1245;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_name);
        tmp_args_element_value_1 = par_name;
        CHECK_OBJECT(par_element);
        tmp_args_element_value_2 = par_element;
        CHECK_OBJECT(par_type_);
        tmp_args_element_value_3 = par_type_;
        frame_4b7dd82fb3c5e8fb197a2cb3eebd64d0->m_frame.f_lineno = 1245;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1245;
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
        exception_tb = MAKE_TRACEBACK(frame_4b7dd82fb3c5e8fb197a2cb3eebd64d0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4b7dd82fb3c5e8fb197a2cb3eebd64d0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4b7dd82fb3c5e8fb197a2cb3eebd64d0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4b7dd82fb3c5e8fb197a2cb3eebd64d0,
        type_description_1,
        par_name,
        par_element,
        par_type_
    );


    // Release cached frame if used for exception.
    if (frame_4b7dd82fb3c5e8fb197a2cb3eebd64d0 == cache_frame_4b7dd82fb3c5e8fb197a2cb3eebd64d0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4b7dd82fb3c5e8fb197a2cb3eebd64d0);
        cache_frame_4b7dd82fb3c5e8fb197a2cb3eebd64d0 = NULL;
    }

    assertFrameObject(frame_4b7dd82fb3c5e8fb197a2cb3eebd64d0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__23_null(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_f421ca303c1abb78b5e273395fcb473c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f421ca303c1abb78b5e273395fcb473c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f421ca303c1abb78b5e273395fcb473c)) {
        Py_XDECREF(cache_frame_f421ca303c1abb78b5e273395fcb473c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f421ca303c1abb78b5e273395fcb473c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f421ca303c1abb78b5e273395fcb473c = MAKE_FUNCTION_FRAME(codeobj_f421ca303c1abb78b5e273395fcb473c, module_sqlalchemy$sql$_elements_constructors, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f421ca303c1abb78b5e273395fcb473c->m_type_description == NULL);
    frame_f421ca303c1abb78b5e273395fcb473c = cache_frame_f421ca303c1abb78b5e273395fcb473c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f421ca303c1abb78b5e273395fcb473c);
    assert(Py_REFCNT(frame_f421ca303c1abb78b5e273395fcb473c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1251;

            goto frame_exception_exit_1;
        }
        frame_f421ca303c1abb78b5e273395fcb473c->m_frame.f_lineno = 1251;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[44]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1251;

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
        exception_tb = MAKE_TRACEBACK(frame_f421ca303c1abb78b5e273395fcb473c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f421ca303c1abb78b5e273395fcb473c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f421ca303c1abb78b5e273395fcb473c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f421ca303c1abb78b5e273395fcb473c,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_f421ca303c1abb78b5e273395fcb473c == cache_frame_f421ca303c1abb78b5e273395fcb473c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f421ca303c1abb78b5e273395fcb473c);
        cache_frame_f421ca303c1abb78b5e273395fcb473c = NULL;
    }

    assertFrameObject(frame_f421ca303c1abb78b5e273395fcb473c);

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


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__24_nulls_first(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_column = python_pars[0];
    struct Nuitka_FrameObject *frame_87e590cc345c6f96eb4432a3135fe3c0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_87e590cc345c6f96eb4432a3135fe3c0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_87e590cc345c6f96eb4432a3135fe3c0)) {
        Py_XDECREF(cache_frame_87e590cc345c6f96eb4432a3135fe3c0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_87e590cc345c6f96eb4432a3135fe3c0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_87e590cc345c6f96eb4432a3135fe3c0 = MAKE_FUNCTION_FRAME(codeobj_87e590cc345c6f96eb4432a3135fe3c0, module_sqlalchemy$sql$_elements_constructors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_87e590cc345c6f96eb4432a3135fe3c0->m_type_description == NULL);
    frame_87e590cc345c6f96eb4432a3135fe3c0 = cache_frame_87e590cc345c6f96eb4432a3135fe3c0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_87e590cc345c6f96eb4432a3135fe3c0);
    assert(Py_REFCNT(frame_87e590cc345c6f96eb4432a3135fe3c0) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1295;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_column);
        tmp_args_element_value_1 = par_column;
        frame_87e590cc345c6f96eb4432a3135fe3c0->m_frame.f_lineno = 1295;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[52], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1295;
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
        exception_tb = MAKE_TRACEBACK(frame_87e590cc345c6f96eb4432a3135fe3c0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_87e590cc345c6f96eb4432a3135fe3c0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_87e590cc345c6f96eb4432a3135fe3c0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_87e590cc345c6f96eb4432a3135fe3c0,
        type_description_1,
        par_column
    );


    // Release cached frame if used for exception.
    if (frame_87e590cc345c6f96eb4432a3135fe3c0 == cache_frame_87e590cc345c6f96eb4432a3135fe3c0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_87e590cc345c6f96eb4432a3135fe3c0);
        cache_frame_87e590cc345c6f96eb4432a3135fe3c0 = NULL;
    }

    assertFrameObject(frame_87e590cc345c6f96eb4432a3135fe3c0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_column);
    Py_DECREF(par_column);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_column);
    Py_DECREF(par_column);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__25_nulls_last(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_column = python_pars[0];
    struct Nuitka_FrameObject *frame_5bb2777192b71bf253a36bccc2674fd2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5bb2777192b71bf253a36bccc2674fd2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5bb2777192b71bf253a36bccc2674fd2)) {
        Py_XDECREF(cache_frame_5bb2777192b71bf253a36bccc2674fd2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5bb2777192b71bf253a36bccc2674fd2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5bb2777192b71bf253a36bccc2674fd2 = MAKE_FUNCTION_FRAME(codeobj_5bb2777192b71bf253a36bccc2674fd2, module_sqlalchemy$sql$_elements_constructors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5bb2777192b71bf253a36bccc2674fd2->m_type_description == NULL);
    frame_5bb2777192b71bf253a36bccc2674fd2 = cache_frame_5bb2777192b71bf253a36bccc2674fd2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5bb2777192b71bf253a36bccc2674fd2);
    assert(Py_REFCNT(frame_5bb2777192b71bf253a36bccc2674fd2) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1339;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_column);
        tmp_args_element_value_1 = par_column;
        frame_5bb2777192b71bf253a36bccc2674fd2->m_frame.f_lineno = 1339;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[54], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1339;
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
        exception_tb = MAKE_TRACEBACK(frame_5bb2777192b71bf253a36bccc2674fd2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5bb2777192b71bf253a36bccc2674fd2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5bb2777192b71bf253a36bccc2674fd2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5bb2777192b71bf253a36bccc2674fd2,
        type_description_1,
        par_column
    );


    // Release cached frame if used for exception.
    if (frame_5bb2777192b71bf253a36bccc2674fd2 == cache_frame_5bb2777192b71bf253a36bccc2674fd2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5bb2777192b71bf253a36bccc2674fd2);
        cache_frame_5bb2777192b71bf253a36bccc2674fd2 = NULL;
    }

    assertFrameObject(frame_5bb2777192b71bf253a36bccc2674fd2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_column);
    Py_DECREF(par_column);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_column);
    Py_DECREF(par_column);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__27_or_(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_clauses = python_pars[0];
    struct Nuitka_FrameObject *frame_4116da44de1a9803daa766277a1c7469;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4116da44de1a9803daa766277a1c7469 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4116da44de1a9803daa766277a1c7469)) {
        Py_XDECREF(cache_frame_4116da44de1a9803daa766277a1c7469);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4116da44de1a9803daa766277a1c7469 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4116da44de1a9803daa766277a1c7469 = MAKE_FUNCTION_FRAME(codeobj_4116da44de1a9803daa766277a1c7469, module_sqlalchemy$sql$_elements_constructors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4116da44de1a9803daa766277a1c7469->m_type_description == NULL);
    frame_4116da44de1a9803daa766277a1c7469 = cache_frame_4116da44de1a9803daa766277a1c7469;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4116da44de1a9803daa766277a1c7469);
    assert(Py_REFCNT(frame_4116da44de1a9803daa766277a1c7469) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1450;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[56]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1450;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_clauses);
        tmp_dircall_arg2_1 = par_clauses;
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__4_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1450;
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
        exception_tb = MAKE_TRACEBACK(frame_4116da44de1a9803daa766277a1c7469, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4116da44de1a9803daa766277a1c7469->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4116da44de1a9803daa766277a1c7469, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4116da44de1a9803daa766277a1c7469,
        type_description_1,
        par_clauses
    );


    // Release cached frame if used for exception.
    if (frame_4116da44de1a9803daa766277a1c7469 == cache_frame_4116da44de1a9803daa766277a1c7469) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4116da44de1a9803daa766277a1c7469);
        cache_frame_4116da44de1a9803daa766277a1c7469 = NULL;
    }

    assertFrameObject(frame_4116da44de1a9803daa766277a1c7469);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_clauses);
    Py_DECREF(par_clauses);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_clauses);
    Py_DECREF(par_clauses);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__28_over(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_element = python_pars[0];
    PyObject *par_partition_by = python_pars[1];
    PyObject *par_order_by = python_pars[2];
    PyObject *par_range_ = python_pars[3];
    PyObject *par_rows = python_pars[4];
    struct Nuitka_FrameObject *frame_04810ccb038875323b7fafa2bdba2d20;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_04810ccb038875323b7fafa2bdba2d20 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_04810ccb038875323b7fafa2bdba2d20)) {
        Py_XDECREF(cache_frame_04810ccb038875323b7fafa2bdba2d20);

#if _DEBUG_REFCOUNTS
        if (cache_frame_04810ccb038875323b7fafa2bdba2d20 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_04810ccb038875323b7fafa2bdba2d20 = MAKE_FUNCTION_FRAME(codeobj_04810ccb038875323b7fafa2bdba2d20, module_sqlalchemy$sql$_elements_constructors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_04810ccb038875323b7fafa2bdba2d20->m_type_description == NULL);
    frame_04810ccb038875323b7fafa2bdba2d20 = cache_frame_04810ccb038875323b7fafa2bdba2d20;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_04810ccb038875323b7fafa2bdba2d20);
    assert(Py_REFCNT(frame_04810ccb038875323b7fafa2bdba2d20) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1552;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_element);
        tmp_args_element_value_1 = par_element;
        CHECK_OBJECT(par_partition_by);
        tmp_args_element_value_2 = par_partition_by;
        CHECK_OBJECT(par_order_by);
        tmp_args_element_value_3 = par_order_by;
        CHECK_OBJECT(par_range_);
        tmp_args_element_value_4 = par_range_;
        CHECK_OBJECT(par_rows);
        tmp_args_element_value_5 = par_rows;
        frame_04810ccb038875323b7fafa2bdba2d20->m_frame.f_lineno = 1552;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1552;
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_04810ccb038875323b7fafa2bdba2d20, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_04810ccb038875323b7fafa2bdba2d20->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_04810ccb038875323b7fafa2bdba2d20, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_04810ccb038875323b7fafa2bdba2d20,
        type_description_1,
        par_element,
        par_partition_by,
        par_order_by,
        par_range_,
        par_rows
    );


    // Release cached frame if used for exception.
    if (frame_04810ccb038875323b7fafa2bdba2d20 == cache_frame_04810ccb038875323b7fafa2bdba2d20) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_04810ccb038875323b7fafa2bdba2d20);
        cache_frame_04810ccb038875323b7fafa2bdba2d20 = NULL;
    }

    assertFrameObject(frame_04810ccb038875323b7fafa2bdba2d20);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);
    CHECK_OBJECT(par_partition_by);
    Py_DECREF(par_partition_by);
    CHECK_OBJECT(par_order_by);
    Py_DECREF(par_order_by);
    CHECK_OBJECT(par_range_);
    Py_DECREF(par_range_);
    CHECK_OBJECT(par_rows);
    Py_DECREF(par_rows);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);
    CHECK_OBJECT(par_partition_by);
    Py_DECREF(par_partition_by);
    CHECK_OBJECT(par_order_by);
    Py_DECREF(par_order_by);
    CHECK_OBJECT(par_range_);
    Py_DECREF(par_range_);
    CHECK_OBJECT(par_rows);
    Py_DECREF(par_rows);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__29_text(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[0];
    struct Nuitka_FrameObject *frame_435ebafa6ed01594b81a3efd8542fce9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_435ebafa6ed01594b81a3efd8542fce9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_435ebafa6ed01594b81a3efd8542fce9)) {
        Py_XDECREF(cache_frame_435ebafa6ed01594b81a3efd8542fce9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_435ebafa6ed01594b81a3efd8542fce9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_435ebafa6ed01594b81a3efd8542fce9 = MAKE_FUNCTION_FRAME(codeobj_435ebafa6ed01594b81a3efd8542fce9, module_sqlalchemy$sql$_elements_constructors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_435ebafa6ed01594b81a3efd8542fce9->m_type_description == NULL);
    frame_435ebafa6ed01594b81a3efd8542fce9 = cache_frame_435ebafa6ed01594b81a3efd8542fce9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_435ebafa6ed01594b81a3efd8542fce9);
    assert(Py_REFCNT(frame_435ebafa6ed01594b81a3efd8542fce9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1630;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_text);
        tmp_args_element_value_1 = par_text;
        frame_435ebafa6ed01594b81a3efd8542fce9->m_frame.f_lineno = 1630;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1630;
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
        exception_tb = MAKE_TRACEBACK(frame_435ebafa6ed01594b81a3efd8542fce9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_435ebafa6ed01594b81a3efd8542fce9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_435ebafa6ed01594b81a3efd8542fce9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_435ebafa6ed01594b81a3efd8542fce9,
        type_description_1,
        par_text
    );


    // Release cached frame if used for exception.
    if (frame_435ebafa6ed01594b81a3efd8542fce9 == cache_frame_435ebafa6ed01594b81a3efd8542fce9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_435ebafa6ed01594b81a3efd8542fce9);
        cache_frame_435ebafa6ed01594b81a3efd8542fce9 = NULL;
    }

    assertFrameObject(frame_435ebafa6ed01594b81a3efd8542fce9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__30_true(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_50dec8486fa38fbe78befb49ef17f1c8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_50dec8486fa38fbe78befb49ef17f1c8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_50dec8486fa38fbe78befb49ef17f1c8)) {
        Py_XDECREF(cache_frame_50dec8486fa38fbe78befb49ef17f1c8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_50dec8486fa38fbe78befb49ef17f1c8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_50dec8486fa38fbe78befb49ef17f1c8 = MAKE_FUNCTION_FRAME(codeobj_50dec8486fa38fbe78befb49ef17f1c8, module_sqlalchemy$sql$_elements_constructors, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_50dec8486fa38fbe78befb49ef17f1c8->m_type_description == NULL);
    frame_50dec8486fa38fbe78befb49ef17f1c8 = cache_frame_50dec8486fa38fbe78befb49ef17f1c8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_50dec8486fa38fbe78befb49ef17f1c8);
    assert(Py_REFCNT(frame_50dec8486fa38fbe78befb49ef17f1c8) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1674;

            goto frame_exception_exit_1;
        }
        frame_50dec8486fa38fbe78befb49ef17f1c8->m_frame.f_lineno = 1674;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[44]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1674;

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
        exception_tb = MAKE_TRACEBACK(frame_50dec8486fa38fbe78befb49ef17f1c8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_50dec8486fa38fbe78befb49ef17f1c8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_50dec8486fa38fbe78befb49ef17f1c8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_50dec8486fa38fbe78befb49ef17f1c8,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_50dec8486fa38fbe78befb49ef17f1c8 == cache_frame_50dec8486fa38fbe78befb49ef17f1c8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_50dec8486fa38fbe78befb49ef17f1c8);
        cache_frame_50dec8486fa38fbe78befb49ef17f1c8 = NULL;
    }

    assertFrameObject(frame_50dec8486fa38fbe78befb49ef17f1c8);

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


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__31_tuple_(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_types = python_pars[0];
    PyObject *par_clauses = python_pars[1];
    struct Nuitka_FrameObject *frame_a4329127af050389a8722e732cbe66f9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_a4329127af050389a8722e732cbe66f9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a4329127af050389a8722e732cbe66f9)) {
        Py_XDECREF(cache_frame_a4329127af050389a8722e732cbe66f9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a4329127af050389a8722e732cbe66f9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a4329127af050389a8722e732cbe66f9 = MAKE_FUNCTION_FRAME(codeobj_a4329127af050389a8722e732cbe66f9, module_sqlalchemy$sql$_elements_constructors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a4329127af050389a8722e732cbe66f9->m_type_description == NULL);
    frame_a4329127af050389a8722e732cbe66f9 = cache_frame_a4329127af050389a8722e732cbe66f9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a4329127af050389a8722e732cbe66f9);
    assert(Py_REFCNT(frame_a4329127af050389a8722e732cbe66f9) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1703;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_clauses);
        tmp_dircall_arg2_1 = par_clauses;
        tmp_dict_key_1 = mod_consts[65];
        CHECK_OBJECT(par_types);
        tmp_dict_value_1 = par_types;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__13_complex_call_helper_keywords_star_list(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1703;
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
        exception_tb = MAKE_TRACEBACK(frame_a4329127af050389a8722e732cbe66f9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a4329127af050389a8722e732cbe66f9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a4329127af050389a8722e732cbe66f9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a4329127af050389a8722e732cbe66f9,
        type_description_1,
        par_types,
        par_clauses
    );


    // Release cached frame if used for exception.
    if (frame_a4329127af050389a8722e732cbe66f9 == cache_frame_a4329127af050389a8722e732cbe66f9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a4329127af050389a8722e732cbe66f9);
        cache_frame_a4329127af050389a8722e732cbe66f9 = NULL;
    }

    assertFrameObject(frame_a4329127af050389a8722e732cbe66f9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_types);
    Py_DECREF(par_types);
    CHECK_OBJECT(par_clauses);
    Py_DECREF(par_clauses);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_types);
    Py_DECREF(par_types);
    CHECK_OBJECT(par_clauses);
    Py_DECREF(par_clauses);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__32_type_coerce(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_expression = python_pars[0];
    PyObject *par_type_ = python_pars[1];
    struct Nuitka_FrameObject *frame_805137bb98ba150adeed1b760ec27024;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_805137bb98ba150adeed1b760ec27024 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_805137bb98ba150adeed1b760ec27024)) {
        Py_XDECREF(cache_frame_805137bb98ba150adeed1b760ec27024);

#if _DEBUG_REFCOUNTS
        if (cache_frame_805137bb98ba150adeed1b760ec27024 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_805137bb98ba150adeed1b760ec27024 = MAKE_FUNCTION_FRAME(codeobj_805137bb98ba150adeed1b760ec27024, module_sqlalchemy$sql$_elements_constructors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_805137bb98ba150adeed1b760ec27024->m_type_description == NULL);
    frame_805137bb98ba150adeed1b760ec27024 = cache_frame_805137bb98ba150adeed1b760ec27024;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_805137bb98ba150adeed1b760ec27024);
    assert(Py_REFCNT(frame_805137bb98ba150adeed1b760ec27024) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1788;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_expression);
        tmp_args_element_value_1 = par_expression;
        CHECK_OBJECT(par_type_);
        tmp_args_element_value_2 = par_type_;
        frame_805137bb98ba150adeed1b760ec27024->m_frame.f_lineno = 1788;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1788;
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
        exception_tb = MAKE_TRACEBACK(frame_805137bb98ba150adeed1b760ec27024, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_805137bb98ba150adeed1b760ec27024->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_805137bb98ba150adeed1b760ec27024, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_805137bb98ba150adeed1b760ec27024,
        type_description_1,
        par_expression,
        par_type_
    );


    // Release cached frame if used for exception.
    if (frame_805137bb98ba150adeed1b760ec27024 == cache_frame_805137bb98ba150adeed1b760ec27024) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_805137bb98ba150adeed1b760ec27024);
        cache_frame_805137bb98ba150adeed1b760ec27024 = NULL;
    }

    assertFrameObject(frame_805137bb98ba150adeed1b760ec27024);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_expression);
    Py_DECREF(par_expression);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_expression);
    Py_DECREF(par_expression);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__33_within_group(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_element = python_pars[0];
    PyObject *par_order_by = python_pars[1];
    struct Nuitka_FrameObject *frame_86ccdca69549eab3a458829d595a32aa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_86ccdca69549eab3a458829d595a32aa = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_86ccdca69549eab3a458829d595a32aa)) {
        Py_XDECREF(cache_frame_86ccdca69549eab3a458829d595a32aa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_86ccdca69549eab3a458829d595a32aa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_86ccdca69549eab3a458829d595a32aa = MAKE_FUNCTION_FRAME(codeobj_86ccdca69549eab3a458829d595a32aa, module_sqlalchemy$sql$_elements_constructors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_86ccdca69549eab3a458829d595a32aa->m_type_description == NULL);
    frame_86ccdca69549eab3a458829d595a32aa = cache_frame_86ccdca69549eab3a458829d595a32aa;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_86ccdca69549eab3a458829d595a32aa);
    assert(Py_REFCNT(frame_86ccdca69549eab3a458829d595a32aa) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1832;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_element);
        tmp_tuple_element_1 = par_element;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_order_by);
        tmp_dircall_arg3_1 = par_order_by;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__2_complex_call_helper_pos_star_list(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1832;
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
        exception_tb = MAKE_TRACEBACK(frame_86ccdca69549eab3a458829d595a32aa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_86ccdca69549eab3a458829d595a32aa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_86ccdca69549eab3a458829d595a32aa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_86ccdca69549eab3a458829d595a32aa,
        type_description_1,
        par_element,
        par_order_by
    );


    // Release cached frame if used for exception.
    if (frame_86ccdca69549eab3a458829d595a32aa == cache_frame_86ccdca69549eab3a458829d595a32aa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_86ccdca69549eab3a458829d595a32aa);
        cache_frame_86ccdca69549eab3a458829d595a32aa = NULL;
    }

    assertFrameObject(frame_86ccdca69549eab3a458829d595a32aa);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);
    CHECK_OBJECT(par_order_by);
    Py_DECREF(par_order_by);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);
    CHECK_OBJECT(par_order_by);
    Py_DECREF(par_order_by);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__10_not_(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[146],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d2bee1311cc0bc0f129f512c57e1df9a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__11_not_(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__11_not_,
        mod_consts[146],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_433890efcc7d2435fddccbce09088d88,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[25],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__12_bindparam(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__12_bindparam,
        mod_consts[150],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9e2fa664370584292bacb9dbd30fe3df,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[26],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__13_case(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__13_case,
        mod_consts[153],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d7b250bde4da854a7f9d33b4082a84a9,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[30],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__14_cast(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__14_cast,
        mod_consts[155],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6badf74433b650838ba8bd4257bbdb80,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[32],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__15_column(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__15_column,
        mod_consts[158],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1106e1d9d668940b1c67d9849618a6f4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[34],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__16_desc(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__16_desc,
        mod_consts[159],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4672a6a4bf7afb178c4a58c303cc1de6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[36],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__17_distinct(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__17_distinct,
        mod_consts[161],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_109992a36165d8b30a1d04554754af0e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[38],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__18_bitwise_not(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__18_bitwise_not,
        mod_consts[162],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d4fcdccfebeff28b8bc19ebecd4bf524,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[40],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__19_extract(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__19_extract,
        mod_consts[164],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e627c3fd68f322f78abb5e560af004f9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[42],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__1_all_(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__1_all_,
        mod_consts[132],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c63f20046f11403f9621345ef464e0b9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[2],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__20_false(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__20_false,
        mod_consts[166],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f37c951c44fee8c2c0879fd3075ec074,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[45],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__21_funcfilter(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__21_funcfilter,
        mod_consts[168],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d7f59d259de62296952d341f11d1cbba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[47],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__22_label(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__22_label,
        mod_consts[170],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4b7dd82fb3c5e8fb197a2cb3eebd64d0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[49],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__23_null(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__23_null,
        mod_consts[172],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f421ca303c1abb78b5e273395fcb473c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[51],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__24_nulls_first(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__24_nulls_first,
        mod_consts[174],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_87e590cc345c6f96eb4432a3135fe3c0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[53],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__25_nulls_last(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__25_nulls_last,
        mod_consts[175],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5bb2777192b71bf253a36bccc2674fd2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[55],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__26_or_(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[56],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_aac7acefdda52c9655d3eb31d07b2b54,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[177],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__27_or_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__27_or_,
        mod_consts[56],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4116da44de1a9803daa766277a1c7469,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[57],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__28_over(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__28_over,
        mod_consts[180],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_04810ccb038875323b7fafa2bdba2d20,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[59],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__29_text(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__29_text,
        mod_consts[183],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_435ebafa6ed01594b81a3efd8542fce9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[61],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__2_and_(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6a9f39d3f158c55bf8b6150ccdb72979,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[134],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__30_true(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__30_true,
        mod_consts[185],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_50dec8486fa38fbe78befb49ef17f1c8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[63],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__31_tuple_(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__31_tuple_,
        mod_consts[188],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a4329127af050389a8722e732cbe66f9,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[66],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__32_type_coerce(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__32_type_coerce,
        mod_consts[190],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_805137bb98ba150adeed1b760ec27024,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[68],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__33_within_group(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__33_within_group,
        mod_consts[192],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_86ccdca69549eab3a458829d595a32aa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[70],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__3_and_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__3_and_,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0e6f7a52ced77b0c039336009e24974f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[5],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__4_any_(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__4_any_,
        mod_consts[135],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1cc655c632771fd01344b3ef477bbc1c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[7],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__5_asc(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__5_asc,
        mod_consts[137],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8635cc4f2fd78a6143f5f1a5d327110f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[10],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__6_collate(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__6_collate,
        mod_consts[139],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_85fc5c4548148154523ad1de592ffbee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[13],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__7_between(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__7_between,
        mod_consts[18],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ab9261f9177e295df0a086a22829663f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[20],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__8_outparam(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__8_outparam,
        mod_consts[144],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1a5b01f760777a841c9956360a7c207d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[23],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__9_not_(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[146],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e3f4d9e360b6dfa4170168dd11ff2c03,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
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

function_impl_code functable_sqlalchemy$sql$_elements_constructors[] = {
    impl_sqlalchemy$sql$_elements_constructors$$$function__1_all_,
    NULL,
    impl_sqlalchemy$sql$_elements_constructors$$$function__3_and_,
    impl_sqlalchemy$sql$_elements_constructors$$$function__4_any_,
    impl_sqlalchemy$sql$_elements_constructors$$$function__5_asc,
    impl_sqlalchemy$sql$_elements_constructors$$$function__6_collate,
    impl_sqlalchemy$sql$_elements_constructors$$$function__7_between,
    impl_sqlalchemy$sql$_elements_constructors$$$function__8_outparam,
    NULL,
    NULL,
    impl_sqlalchemy$sql$_elements_constructors$$$function__11_not_,
    impl_sqlalchemy$sql$_elements_constructors$$$function__12_bindparam,
    impl_sqlalchemy$sql$_elements_constructors$$$function__13_case,
    impl_sqlalchemy$sql$_elements_constructors$$$function__14_cast,
    impl_sqlalchemy$sql$_elements_constructors$$$function__15_column,
    impl_sqlalchemy$sql$_elements_constructors$$$function__16_desc,
    impl_sqlalchemy$sql$_elements_constructors$$$function__17_distinct,
    impl_sqlalchemy$sql$_elements_constructors$$$function__18_bitwise_not,
    impl_sqlalchemy$sql$_elements_constructors$$$function__19_extract,
    impl_sqlalchemy$sql$_elements_constructors$$$function__20_false,
    impl_sqlalchemy$sql$_elements_constructors$$$function__21_funcfilter,
    impl_sqlalchemy$sql$_elements_constructors$$$function__22_label,
    impl_sqlalchemy$sql$_elements_constructors$$$function__23_null,
    impl_sqlalchemy$sql$_elements_constructors$$$function__24_nulls_first,
    impl_sqlalchemy$sql$_elements_constructors$$$function__25_nulls_last,
    NULL,
    impl_sqlalchemy$sql$_elements_constructors$$$function__27_or_,
    impl_sqlalchemy$sql$_elements_constructors$$$function__28_over,
    impl_sqlalchemy$sql$_elements_constructors$$$function__29_text,
    impl_sqlalchemy$sql$_elements_constructors$$$function__30_true,
    impl_sqlalchemy$sql$_elements_constructors$$$function__31_tuple_,
    impl_sqlalchemy$sql$_elements_constructors$$$function__32_type_coerce,
    impl_sqlalchemy$sql$_elements_constructors$$$function__33_within_group,
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

    function_impl_code *current = functable_sqlalchemy$sql$_elements_constructors;
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

    if (offset > sizeof(functable_sqlalchemy$sql$_elements_constructors) || offset < 0) {
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
        functable_sqlalchemy$sql$_elements_constructors[offset],
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
        module_sqlalchemy$sql$_elements_constructors,
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
PyObject *modulecode_sqlalchemy$sql$_elements_constructors(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("sqlalchemy.sql._elements_constructors");

    // Store the module for future use.
    module_sqlalchemy$sql$_elements_constructors = module;

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
        PRINT_STRING("sqlalchemy.sql._elements_constructors: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("sqlalchemy.sql._elements_constructors: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("sqlalchemy.sql._elements_constructors: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initsqlalchemy$sql$_elements_constructors\n");

    moduledict_sqlalchemy$sql$_elements_constructors = MODULE_DICT(module_sqlalchemy$sql$_elements_constructors);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_sqlalchemy$sql$_elements_constructors,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_sqlalchemy$sql$_elements_constructors,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[91]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_sqlalchemy$sql$_elements_constructors,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_sqlalchemy$sql$_elements_constructors,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_sqlalchemy$sql$_elements_constructors,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_sqlalchemy$sql$_elements_constructors);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_sqlalchemy$sql$_elements_constructors);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_38bfe2a39f872ae508926c863d28ccc4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_2);
    }
    frame_38bfe2a39f872ae508926c863d28ccc4 = MAKE_MODULE_FRAME(codeobj_38bfe2a39f872ae508926c863d28ccc4, module_sqlalchemy$sql$_elements_constructors);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_38bfe2a39f872ae508926c863d28ccc4);
    assert(Py_REFCNT(frame_38bfe2a39f872ae508926c863d28ccc4) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[74], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[75], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[77]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        tmp_import_name_from_1 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[79],
                mod_consts[80]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[79]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        tmp_import_name_from_2 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_2 == NULL));
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[81],
                mod_consts[80]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[81]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        tmp_import_name_from_3 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_3 == NULL));
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[82],
                mod_consts[80]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[82]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        tmp_import_name_from_4 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_4 == NULL));
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[83],
                mod_consts[80]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[83]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        tmp_import_name_from_5 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_5 == NULL));
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[84],
                mod_consts[80]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[84]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        tmp_import_name_from_6 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_6 == NULL));
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[85],
                mod_consts[80]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[85]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        tmp_import_name_from_7 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_7 == NULL));
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[86],
                mod_consts[80]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[86]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        tmp_import_name_from_8 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_8 == NULL));
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[64],
                mod_consts[80]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[64]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = Py_False;
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        tmp_import_name_from_9 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_9 == NULL));
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[89],
                mod_consts[80]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[89]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        tmp_import_name_from_10 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_10 == NULL));
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[90],
                mod_consts[80]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[90]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[91];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[92];
        tmp_level_value_1 = mod_consts[93];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 23;
        tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[14],
                mod_consts[80]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[14]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[91];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[94];
        tmp_level_value_2 = mod_consts[93];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 24;
        tmp_import_name_from_12 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[16],
                mod_consts[80]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[16]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[95];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[96];
        tmp_level_value_3 = mod_consts[93];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 25;
        tmp_import_name_from_13 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[97],
                mod_consts[80]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[97]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[14];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[98];
        tmp_level_value_4 = mod_consts[93];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 26;
        tmp_import_name_from_14 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[99],
                mod_consts[80]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[99]);
        }

        Py_DECREF(tmp_import_name_from_14);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[100];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[101];
        tmp_level_value_5 = mod_consts[93];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 27;
        tmp_import_name_from_15 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[21],
                mod_consts[80]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[21]);
        }

        Py_DECREF(tmp_import_name_from_15);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[100];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[102];
        tmp_level_value_6 = mod_consts[93];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 28;
        tmp_import_name_from_16 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[3],
                mod_consts[80]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_16, mod_consts[3]);
        }

        Py_DECREF(tmp_import_name_from_16);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[100];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[103];
        tmp_level_value_7 = mod_consts[93];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 29;
        tmp_import_name_from_17 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[27],
                mod_consts[80]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_17, mod_consts[27]);
        }

        Py_DECREF(tmp_import_name_from_17);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_18;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[100];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[104];
        tmp_level_value_8 = mod_consts[93];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 30;
        tmp_import_name_from_18 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[31],
                mod_consts[80]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_18, mod_consts[31]);
        }

        Py_DECREF(tmp_import_name_from_18);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_19;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[100];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[105];
        tmp_level_value_9 = mod_consts[93];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 31;
        tmp_import_name_from_19 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[11],
                mod_consts[80]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME(tmp_import_name_from_19, mod_consts[11]);
        }

        Py_DECREF(tmp_import_name_from_19);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_20;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[100];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[106];
        tmp_level_value_10 = mod_consts[93];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 32;
        tmp_import_name_from_20 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_import_name_from_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[0],
                mod_consts[80]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME(tmp_import_name_from_20, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_20);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_21;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[100];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[107];
        tmp_level_value_11 = mod_consts[93];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 33;
        tmp_import_name_from_21 = IMPORT_MODULE5(tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_import_name_from_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[33],
                mod_consts[80]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME(tmp_import_name_from_21, mod_consts[33]);
        }

        Py_DECREF(tmp_import_name_from_21);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_22;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[100];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = mod_consts[108];
        tmp_level_value_12 = mod_consts[93];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 34;
        tmp_import_name_from_22 = IMPORT_MODULE5(tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_import_name_from_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[109],
                mod_consts[80]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME(tmp_import_name_from_22, mod_consts[109]);
        }

        Py_DECREF(tmp_import_name_from_22);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_23;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[100];
        tmp_globals_arg_value_13 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = mod_consts[110];
        tmp_level_value_13 = mod_consts[93];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 35;
        tmp_import_name_from_23 = IMPORT_MODULE5(tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
        if (tmp_import_name_from_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_23,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[41],
                mod_consts[80]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME(tmp_import_name_from_23, mod_consts[41]);
        }

        Py_DECREF(tmp_import_name_from_23);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_24;
        PyObject *tmp_name_value_14;
        PyObject *tmp_globals_arg_value_14;
        PyObject *tmp_locals_arg_value_14;
        PyObject *tmp_fromlist_value_14;
        PyObject *tmp_level_value_14;
        tmp_name_value_14 = mod_consts[100];
        tmp_globals_arg_value_14 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_14 = Py_None;
        tmp_fromlist_value_14 = mod_consts[111];
        tmp_level_value_14 = mod_consts[93];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 36;
        tmp_import_name_from_24 = IMPORT_MODULE5(tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
        if (tmp_import_name_from_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_24,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[43],
                mod_consts[80]
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME(tmp_import_name_from_24, mod_consts[43]);
        }

        Py_DECREF(tmp_import_name_from_24);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_25;
        PyObject *tmp_name_value_15;
        PyObject *tmp_globals_arg_value_15;
        PyObject *tmp_locals_arg_value_15;
        PyObject *tmp_fromlist_value_15;
        PyObject *tmp_level_value_15;
        tmp_name_value_15 = mod_consts[100];
        tmp_globals_arg_value_15 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_15 = Py_None;
        tmp_fromlist_value_15 = mod_consts[112];
        tmp_level_value_15 = mod_consts[93];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 37;
        tmp_import_name_from_25 = IMPORT_MODULE5(tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
        if (tmp_import_name_from_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_25)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_25,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[46],
                mod_consts[80]
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME(tmp_import_name_from_25, mod_consts[46]);
        }

        Py_DECREF(tmp_import_name_from_25);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_26;
        PyObject *tmp_name_value_16;
        PyObject *tmp_globals_arg_value_16;
        PyObject *tmp_locals_arg_value_16;
        PyObject *tmp_fromlist_value_16;
        PyObject *tmp_level_value_16;
        tmp_name_value_16 = mod_consts[100];
        tmp_globals_arg_value_16 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_16 = Py_None;
        tmp_fromlist_value_16 = mod_consts[113];
        tmp_level_value_16 = mod_consts[93];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 38;
        tmp_import_name_from_26 = IMPORT_MODULE5(tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
        if (tmp_import_name_from_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_26)) {
            tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_26,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[48],
                mod_consts[80]
            );
        } else {
            tmp_assign_source_32 = IMPORT_NAME(tmp_import_name_from_26, mod_consts[48]);
        }

        Py_DECREF(tmp_import_name_from_26);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_27;
        PyObject *tmp_name_value_17;
        PyObject *tmp_globals_arg_value_17;
        PyObject *tmp_locals_arg_value_17;
        PyObject *tmp_fromlist_value_17;
        PyObject *tmp_level_value_17;
        tmp_name_value_17 = mod_consts[100];
        tmp_globals_arg_value_17 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_17 = Py_None;
        tmp_fromlist_value_17 = mod_consts[114];
        tmp_level_value_17 = mod_consts[93];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 39;
        tmp_import_name_from_27 = IMPORT_MODULE5(tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
        if (tmp_import_name_from_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_27)) {
            tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_27,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[50],
                mod_consts[80]
            );
        } else {
            tmp_assign_source_33 = IMPORT_NAME(tmp_import_name_from_27, mod_consts[50]);
        }

        Py_DECREF(tmp_import_name_from_27);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_28;
        PyObject *tmp_name_value_18;
        PyObject *tmp_globals_arg_value_18;
        PyObject *tmp_locals_arg_value_18;
        PyObject *tmp_fromlist_value_18;
        PyObject *tmp_level_value_18;
        tmp_name_value_18 = mod_consts[100];
        tmp_globals_arg_value_18 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_18 = Py_None;
        tmp_fromlist_value_18 = mod_consts[115];
        tmp_level_value_18 = mod_consts[93];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 40;
        tmp_import_name_from_28 = IMPORT_MODULE5(tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
        if (tmp_import_name_from_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_28)) {
            tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_28,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[58],
                mod_consts[80]
            );
        } else {
            tmp_assign_source_34 = IMPORT_NAME(tmp_import_name_from_28, mod_consts[58]);
        }

        Py_DECREF(tmp_import_name_from_28);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_29;
        PyObject *tmp_name_value_19;
        PyObject *tmp_globals_arg_value_19;
        PyObject *tmp_locals_arg_value_19;
        PyObject *tmp_fromlist_value_19;
        PyObject *tmp_level_value_19;
        tmp_name_value_19 = mod_consts[100];
        tmp_globals_arg_value_19 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_19 = Py_None;
        tmp_fromlist_value_19 = mod_consts[116];
        tmp_level_value_19 = mod_consts[93];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 41;
        tmp_import_name_from_29 = IMPORT_MODULE5(tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
        if (tmp_import_name_from_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_29)) {
            tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_29,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[60],
                mod_consts[80]
            );
        } else {
            tmp_assign_source_35 = IMPORT_NAME(tmp_import_name_from_29, mod_consts[60]);
        }

        Py_DECREF(tmp_import_name_from_29);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_30;
        PyObject *tmp_name_value_20;
        PyObject *tmp_globals_arg_value_20;
        PyObject *tmp_locals_arg_value_20;
        PyObject *tmp_fromlist_value_20;
        PyObject *tmp_level_value_20;
        tmp_name_value_20 = mod_consts[100];
        tmp_globals_arg_value_20 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_20 = Py_None;
        tmp_fromlist_value_20 = mod_consts[117];
        tmp_level_value_20 = mod_consts[93];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 42;
        tmp_import_name_from_30 = IMPORT_MODULE5(tmp_name_value_20, tmp_globals_arg_value_20, tmp_locals_arg_value_20, tmp_fromlist_value_20, tmp_level_value_20);
        if (tmp_import_name_from_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_30)) {
            tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_30,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[62],
                mod_consts[80]
            );
        } else {
            tmp_assign_source_36 = IMPORT_NAME(tmp_import_name_from_30, mod_consts[62]);
        }

        Py_DECREF(tmp_import_name_from_30);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_import_name_from_31;
        PyObject *tmp_name_value_21;
        PyObject *tmp_globals_arg_value_21;
        PyObject *tmp_locals_arg_value_21;
        PyObject *tmp_fromlist_value_21;
        PyObject *tmp_level_value_21;
        tmp_name_value_21 = mod_consts[100];
        tmp_globals_arg_value_21 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_21 = Py_None;
        tmp_fromlist_value_21 = mod_consts[118];
        tmp_level_value_21 = mod_consts[93];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 43;
        tmp_import_name_from_31 = IMPORT_MODULE5(tmp_name_value_21, tmp_globals_arg_value_21, tmp_locals_arg_value_21, tmp_fromlist_value_21, tmp_level_value_21);
        if (tmp_import_name_from_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_31)) {
            tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_31,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[64],
                mod_consts[80]
            );
        } else {
            tmp_assign_source_37 = IMPORT_NAME(tmp_import_name_from_31, mod_consts[64]);
        }

        Py_DECREF(tmp_import_name_from_31);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_import_name_from_32;
        PyObject *tmp_name_value_22;
        PyObject *tmp_globals_arg_value_22;
        PyObject *tmp_locals_arg_value_22;
        PyObject *tmp_fromlist_value_22;
        PyObject *tmp_level_value_22;
        tmp_name_value_22 = mod_consts[100];
        tmp_globals_arg_value_22 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_22 = Py_None;
        tmp_fromlist_value_22 = mod_consts[119];
        tmp_level_value_22 = mod_consts[93];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 44;
        tmp_import_name_from_32 = IMPORT_MODULE5(tmp_name_value_22, tmp_globals_arg_value_22, tmp_locals_arg_value_22, tmp_fromlist_value_22, tmp_level_value_22);
        if (tmp_import_name_from_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_32)) {
            tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_32,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[67],
                mod_consts[80]
            );
        } else {
            tmp_assign_source_38 = IMPORT_NAME(tmp_import_name_from_32, mod_consts[67]);
        }

        Py_DECREF(tmp_import_name_from_32);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_import_name_from_33;
        PyObject *tmp_name_value_23;
        PyObject *tmp_globals_arg_value_23;
        PyObject *tmp_locals_arg_value_23;
        PyObject *tmp_fromlist_value_23;
        PyObject *tmp_level_value_23;
        tmp_name_value_23 = mod_consts[100];
        tmp_globals_arg_value_23 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_23 = Py_None;
        tmp_fromlist_value_23 = mod_consts[120];
        tmp_level_value_23 = mod_consts[93];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 45;
        tmp_import_name_from_33 = IMPORT_MODULE5(tmp_name_value_23, tmp_globals_arg_value_23, tmp_locals_arg_value_23, tmp_fromlist_value_23, tmp_level_value_23);
        if (tmp_import_name_from_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_33)) {
            tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_33,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[8],
                mod_consts[80]
            );
        } else {
            tmp_assign_source_39 = IMPORT_NAME(tmp_import_name_from_33, mod_consts[8]);
        }

        Py_DECREF(tmp_import_name_from_33);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_import_name_from_34;
        PyObject *tmp_name_value_24;
        PyObject *tmp_globals_arg_value_24;
        PyObject *tmp_locals_arg_value_24;
        PyObject *tmp_fromlist_value_24;
        PyObject *tmp_level_value_24;
        tmp_name_value_24 = mod_consts[100];
        tmp_globals_arg_value_24 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_24 = Py_None;
        tmp_fromlist_value_24 = mod_consts[121];
        tmp_level_value_24 = mod_consts[93];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 46;
        tmp_import_name_from_34 = IMPORT_MODULE5(tmp_name_value_24, tmp_globals_arg_value_24, tmp_locals_arg_value_24, tmp_fromlist_value_24, tmp_level_value_24);
        if (tmp_import_name_from_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_34)) {
            tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_34,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[69],
                mod_consts[80]
            );
        } else {
            tmp_assign_source_40 = IMPORT_NAME(tmp_import_name_from_34, mod_consts[69]);
        }

        Py_DECREF(tmp_import_name_from_34);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_import_name_from_35;
        PyObject *tmp_name_value_25;
        PyObject *tmp_globals_arg_value_25;
        PyObject *tmp_locals_arg_value_25;
        PyObject *tmp_fromlist_value_25;
        PyObject *tmp_level_value_25;
        tmp_name_value_25 = mod_consts[122];
        tmp_globals_arg_value_25 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_25 = Py_None;
        tmp_fromlist_value_25 = mod_consts[123];
        tmp_level_value_25 = mod_consts[93];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 47;
        tmp_import_name_from_35 = IMPORT_MODULE5(tmp_name_value_25, tmp_globals_arg_value_25, tmp_locals_arg_value_25, tmp_fromlist_value_25, tmp_level_value_25);
        if (tmp_import_name_from_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_35)) {
            tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_35,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[124],
                mod_consts[80]
            );
        } else {
            tmp_assign_source_41 = IMPORT_NAME(tmp_import_name_from_35, mod_consts[124]);
        }

        Py_DECREF(tmp_import_name_from_35);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_import_name_from_36;
        PyObject *tmp_name_value_26;
        PyObject *tmp_globals_arg_value_26;
        PyObject *tmp_locals_arg_value_26;
        PyObject *tmp_fromlist_value_26;
        PyObject *tmp_level_value_26;
        tmp_name_value_26 = mod_consts[125];
        tmp_globals_arg_value_26 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_26 = Py_None;
        tmp_fromlist_value_26 = mod_consts[126];
        tmp_level_value_26 = mod_consts[127];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 48;
        tmp_import_name_from_36 = IMPORT_MODULE5(tmp_name_value_26, tmp_globals_arg_value_26, tmp_locals_arg_value_26, tmp_fromlist_value_26, tmp_level_value_26);
        if (tmp_import_name_from_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_36)) {
            tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_36,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[128],
                mod_consts[80]
            );
        } else {
            tmp_assign_source_42 = IMPORT_NAME(tmp_import_name_from_36, mod_consts[128]);
        }

        Py_DECREF(tmp_import_name_from_36);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 59;
        tmp_assign_source_43 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[129]);

        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_annotations_1;
        tmp_annotations_1 = DICT_COPY(mod_consts[131]);


        tmp_assign_source_44 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__1_all_(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_annotations_2;
        tmp_annotations_2 = DICT_COPY(mod_consts[133]);


        tmp_assign_source_45 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__2_and_(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_45);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        tmp_operand_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_operand_value_1 == NULL)) {
            tmp_operand_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

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
        PyObject *tmp_assign_source_46;


        tmp_assign_source_46 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__3_and_();

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_46);
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_annotations_3;
        tmp_annotations_3 = DICT_COPY(mod_consts[131]);


        tmp_assign_source_47 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__4_any_(tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_annotations_4;
        tmp_annotations_4 = DICT_COPY(mod_consts[136]);


        tmp_assign_source_48 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__5_asc(tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_annotations_5;
        tmp_annotations_5 = DICT_COPY(mod_consts[138]);


        tmp_assign_source_49 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__6_collate(tmp_annotations_5);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_defaults_1;
        PyObject *tmp_annotations_6;
        tmp_defaults_1 = mod_consts[140];
        tmp_annotations_6 = DICT_COPY(mod_consts[141]);
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_50 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__7_between(tmp_defaults_1, tmp_annotations_6);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_defaults_2;
        PyObject *tmp_annotations_7;
        tmp_defaults_2 = mod_consts[142];
        tmp_annotations_7 = DICT_COPY(mod_consts[143]);
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_51 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__8_outparam(tmp_defaults_2, tmp_annotations_7);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_annotations_8;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto frame_exception_exit_1;
        }
        tmp_annotations_8 = DICT_COPY(mod_consts[145]);


        tmp_args_element_value_1 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__9_not_(tmp_annotations_8);

        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 442;
        tmp_assign_source_52 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_annotations_9;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;

            goto frame_exception_exit_1;
        }
        tmp_annotations_9 = DICT_COPY(mod_consts[147]);


        tmp_args_element_value_2 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__10_not_(tmp_annotations_9);

        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 447;
        tmp_assign_source_53 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_annotations_10;
        tmp_annotations_10 = DICT_COPY(mod_consts[147]);


        tmp_assign_source_54 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__11_not_(tmp_annotations_10);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_defaults_3;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_annotations_11;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[148]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;

            goto frame_exception_exit_1;
        }
        tmp_defaults_3 = MAKE_TUPLE_EMPTY(9);
        {
            PyObject *tmp_expression_value_2;
            PyTuple_SET_ITEM(tmp_defaults_3, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_3, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = Py_False;
            PyTuple_SET_ITEM0(tmp_defaults_3, 2, tmp_tuple_element_1);
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 469;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[148]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 469;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_defaults_3, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_3, 4, tmp_tuple_element_1);
            tmp_tuple_element_1 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_3, 5, tmp_tuple_element_1);
            tmp_tuple_element_1 = Py_False;
            PyTuple_SET_ITEM0(tmp_defaults_3, 6, tmp_tuple_element_1);
            tmp_tuple_element_1 = Py_False;
            PyTuple_SET_ITEM0(tmp_defaults_3, 7, tmp_tuple_element_1);
            tmp_tuple_element_1 = Py_False;
            PyTuple_SET_ITEM0(tmp_defaults_3, 8, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_defaults_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_annotations_11 = DICT_COPY(mod_consts[149]);


        tmp_assign_source_55 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__12_bindparam(tmp_defaults_3, tmp_annotations_11);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_kw_defaults_1;
        PyObject *tmp_annotations_12;
        tmp_kw_defaults_1 = DICT_COPY(mod_consts[151]);
        tmp_annotations_12 = DICT_COPY(mod_consts[152]);


        tmp_assign_source_56 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__13_case(tmp_kw_defaults_1, tmp_annotations_12);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_annotations_13;
        tmp_annotations_13 = DICT_COPY(mod_consts[154]);


        tmp_assign_source_57 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__14_cast(tmp_annotations_13);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_defaults_4;
        PyObject *tmp_annotations_14;
        tmp_defaults_4 = mod_consts[156];
        tmp_annotations_14 = DICT_COPY(mod_consts[157]);
        Py_INCREF(tmp_defaults_4);


        tmp_assign_source_58 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__15_column(tmp_defaults_4, tmp_annotations_14);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_annotations_15;
        tmp_annotations_15 = DICT_COPY(mod_consts[136]);


        tmp_assign_source_59 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__16_desc(tmp_annotations_15);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_annotations_16;
        tmp_annotations_16 = DICT_COPY(mod_consts[160]);


        tmp_assign_source_60 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__17_distinct(tmp_annotations_16);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_annotations_17;
        tmp_annotations_17 = DICT_COPY(mod_consts[160]);


        tmp_assign_source_61 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__18_bitwise_not(tmp_annotations_17);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_annotations_18;
        tmp_annotations_18 = DICT_COPY(mod_consts[163]);


        tmp_assign_source_62 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__19_extract(tmp_annotations_18);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_annotations_19;
        tmp_annotations_19 = DICT_COPY(mod_consts[165]);


        tmp_assign_source_63 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__20_false(tmp_annotations_19);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_annotations_20;
        tmp_annotations_20 = DICT_COPY(mod_consts[167]);


        tmp_assign_source_64 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__21_funcfilter(tmp_annotations_20);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_defaults_5;
        PyObject *tmp_annotations_21;
        tmp_defaults_5 = mod_consts[142];
        tmp_annotations_21 = DICT_COPY(mod_consts[169]);
        Py_INCREF(tmp_defaults_5);


        tmp_assign_source_65 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__22_label(tmp_defaults_5, tmp_annotations_21);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_annotations_22;
        tmp_annotations_22 = DICT_COPY(mod_consts[171]);


        tmp_assign_source_66 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__23_null(tmp_annotations_22);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_annotations_23;
        tmp_annotations_23 = DICT_COPY(mod_consts[173]);


        tmp_assign_source_67 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__24_nulls_first(tmp_annotations_23);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_annotations_24;
        tmp_annotations_24 = DICT_COPY(mod_consts[173]);


        tmp_assign_source_68 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__25_nulls_last(tmp_annotations_24);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_annotations_25;
        tmp_annotations_25 = DICT_COPY(mod_consts[176]);


        tmp_assign_source_69 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__26_or_(tmp_annotations_25);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_69);
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_2;
        tmp_operand_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_operand_value_2 == NULL)) {
            tmp_operand_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1398;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1398;

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
        PyObject *tmp_assign_source_70;


        tmp_assign_source_70 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__27_or_();

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_70);
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_defaults_6;
        PyObject *tmp_annotations_26;
        tmp_defaults_6 = mod_consts[178];
        tmp_annotations_26 = DICT_COPY(mod_consts[179]);
        Py_INCREF(tmp_defaults_6);


        tmp_assign_source_71 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__28_over(tmp_defaults_6, tmp_annotations_26);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_called_value_4;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_annotations_27;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1555;

            goto frame_exception_exit_1;
        }
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 1555;
        tmp_called_value_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_5, mod_consts[181]);

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1555;

            goto frame_exception_exit_1;
        }
        tmp_annotations_27 = DICT_COPY(mod_consts[182]);


        tmp_args_element_value_3 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__29_text(tmp_annotations_27);

        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 1555;
        tmp_assign_source_72 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1555;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_72);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_38bfe2a39f872ae508926c863d28ccc4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_38bfe2a39f872ae508926c863d28ccc4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_38bfe2a39f872ae508926c863d28ccc4, exception_lineno);
    }



    assertFrameObject(frame_38bfe2a39f872ae508926c863d28ccc4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_annotations_28;
        tmp_annotations_28 = DICT_COPY(mod_consts[184]);


        tmp_assign_source_73 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__30_true(tmp_annotations_28);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_kw_defaults_2;
        PyObject *tmp_annotations_29;
        tmp_kw_defaults_2 = DICT_COPY(mod_consts[186]);
        tmp_annotations_29 = DICT_COPY(mod_consts[187]);


        tmp_assign_source_74 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__31_tuple_(tmp_kw_defaults_2, tmp_annotations_29);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_annotations_30;
        tmp_annotations_30 = DICT_COPY(mod_consts[189]);


        tmp_assign_source_75 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__32_type_coerce(tmp_annotations_30);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_annotations_31;
        tmp_annotations_31 = DICT_COPY(mod_consts[191]);


        tmp_assign_source_76 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__33_within_group(tmp_annotations_31);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[192], tmp_assign_source_76);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("sqlalchemy.sql._elements_constructors", false);

    Py_INCREF(module_sqlalchemy$sql$_elements_constructors);
    return module_sqlalchemy$sql$_elements_constructors;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("sqlalchemy$sql$_elements_constructors", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
