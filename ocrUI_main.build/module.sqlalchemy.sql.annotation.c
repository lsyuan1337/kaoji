/* Generated code for Python module 'sqlalchemy.sql.annotation'
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

/* The "module_sqlalchemy$sql$annotation" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_sqlalchemy$sql$annotation;
PyDictObject *moduledict_sqlalchemy$sql$annotation;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[238];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[238];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("sqlalchemy.sql.annotation"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 238; i++) {
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
void checkModuleConstants_sqlalchemy$sql$annotation(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 238; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_c25ce39f8b9c317d9054ccf09e8b14f3;
static PyCodeObject *codeobj_c0a67e1da29147bbc0423b04d07e3c71;
static PyCodeObject *codeobj_795112056be360210c7154940a7aac81;
static PyCodeObject *codeobj_4ad305e9c71abfce5d9d6047d9c9af47;
static PyCodeObject *codeobj_efbdbe3d3ad0b28a755f2e2b14f4190a;
static PyCodeObject *codeobj_3a01bbc3c7756450e47e42935906b4eb;
static PyCodeObject *codeobj_538e2830aed0fecbb025d554ee6a172e;
static PyCodeObject *codeobj_922815378d18da3b476a361c7a81d5bb;
static PyCodeObject *codeobj_818e1c8970d52f6f31aed6b574e47f3e;
static PyCodeObject *codeobj_2214a4956ed2cad4880c60317313048a;
static PyCodeObject *codeobj_4d155370789fcec8fedfd575a184ab73;
static PyCodeObject *codeobj_cba7d4d941092a4588303934d7909467;
static PyCodeObject *codeobj_691c62ff4a9da2f9fb092f7d14348103;
static PyCodeObject *codeobj_b166ef3cc678c6e71ddb2705975c7ad1;
static PyCodeObject *codeobj_15c3af5a55be520cf3f423ca202fe280;
static PyCodeObject *codeobj_143b577be03b4e5270b990e95d5a5c42;
static PyCodeObject *codeobj_8456d2411853c02fb51bbd70f0ed8f06;
static PyCodeObject *codeobj_904754a54e9fefa33c1d86e16c9160e3;
static PyCodeObject *codeobj_6e1875a885c43635db0289f684960136;
static PyCodeObject *codeobj_5798fc1db9c7f4e6cbccee768e79aae9;
static PyCodeObject *codeobj_7a6e192c87f4dc2f49b223d2a75006d4;
static PyCodeObject *codeobj_51109026fabc7458616b65463513350c;
static PyCodeObject *codeobj_e3e49afdce330ef29b1c740324e68fbd;
static PyCodeObject *codeobj_09e2ea0c9909e78149e916055d9f7f61;
static PyCodeObject *codeobj_7c8949406233743cb9ecaf927decec99;
static PyCodeObject *codeobj_3b869521520a4ea949d8de4951a44269;
static PyCodeObject *codeobj_a5a3923876656ceb42a85d85fa6b461f;
static PyCodeObject *codeobj_b054420186b4382d719b1ecbe20d0ab6;
static PyCodeObject *codeobj_9363ebe55978cefad190157fb49a96e5;
static PyCodeObject *codeobj_88d231de257feab8ad73c689815267ff;
static PyCodeObject *codeobj_1ff2726df8bc1bed788a3455fb75b11c;
static PyCodeObject *codeobj_44f69d420e920ec7e65d7e2889b9fd02;
static PyCodeObject *codeobj_a21868f0dbd2d08d823d24d91f0beb73;
static PyCodeObject *codeobj_0387c84e56b3cde96d763d76d6a815ff;
static PyCodeObject *codeobj_a8080681cd2087e193a6aeefc8098cad;
static PyCodeObject *codeobj_b08b3616317d4a261083572b18f0a755;
static PyCodeObject *codeobj_bd8828b33fcdbe0c424a31dc32fe35e2;
static PyCodeObject *codeobj_5799fd4b147ef81d0e5790ee05a629f7;
static PyCodeObject *codeobj_32a0a0d43eef17f1055f908fe1585770;
static PyCodeObject *codeobj_881ad33256a620724e8e01fb5f338537;
static PyCodeObject *codeobj_f12c7c0de4a6b1479079867549d4c8a0;
static PyCodeObject *codeobj_a43a71ccd33539451e92e2f6863d3cbb;
static PyCodeObject *codeobj_9bc3cc12853c3e73a466b94a75de2228;
static PyCodeObject *codeobj_f7570cc434c9e23105e6a9541343deb3;
static PyCodeObject *codeobj_1224a6299190c7c5b5ea82738309c043;
static PyCodeObject *codeobj_b6e32e3a1334be5be8b8294396e021a2;
static PyCodeObject *codeobj_28b4785922a1ac2c34daefd2c711af19;
static PyCodeObject *codeobj_83fae5df686c79ad880e9d9a8f04a9b4;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[205]); CHECK_OBJECT(module_filename_obj);
    codeobj_c25ce39f8b9c317d9054ccf09e8b14f3 = MAKE_CODE_OBJECT(module_filename_obj, 340, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[206], mod_consts[206], mod_consts[207], NULL, 1, 0, 0);
    codeobj_c0a67e1da29147bbc0423b04d07e3c71 = MAKE_CODE_OBJECT(module_filename_obj, 100, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[8], mod_consts[8], mod_consts[208], NULL, 1, 0, 0);
    codeobj_795112056be360210c7154940a7aac81 = MAKE_CODE_OBJECT(module_filename_obj, 107, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[209], mod_consts[209], mod_consts[210], NULL, 1, 0, 0);
    codeobj_4ad305e9c71abfce5d9d6047d9c9af47 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[211], mod_consts[211], NULL, NULL, 0, 0, 0);
    codeobj_efbdbe3d3ad0b28a755f2e2b14f4190a = MAKE_CODE_OBJECT(module_filename_obj, 252, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[10], mod_consts[10], mod_consts[212], NULL, 0, 0, 0);
    codeobj_3a01bbc3c7756450e47e42935906b4eb = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[122], mod_consts[122], mod_consts[212], NULL, 0, 0, 0);
    codeobj_538e2830aed0fecbb025d554ee6a172e = MAKE_CODE_OBJECT(module_filename_obj, 175, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[151], mod_consts[151], mod_consts[212], NULL, 0, 0, 0);
    codeobj_922815378d18da3b476a361c7a81d5bb = MAKE_CODE_OBJECT(module_filename_obj, 114, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[37], mod_consts[37], mod_consts[212], NULL, 0, 0, 0);
    codeobj_818e1c8970d52f6f31aed6b574e47f3e = MAKE_CODE_OBJECT(module_filename_obj, 376, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[34], mod_consts[34], mod_consts[213], NULL, 2, 0, 0);
    codeobj_2214a4956ed2cad4880c60317313048a = MAKE_CODE_OBJECT(module_filename_obj, 373, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[182], mod_consts[182], mod_consts[214], NULL, 1, 0, 0);
    codeobj_4d155370789fcec8fedfd575a184ab73 = MAKE_CODE_OBJECT(module_filename_obj, 291, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[165], mod_consts[165], mod_consts[215], NULL, 3, 0, 0);
    codeobj_cba7d4d941092a4588303934d7909467 = MAKE_CODE_OBJECT(module_filename_obj, 288, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[24], mod_consts[24], mod_consts[216], NULL, 1, 0, 0);
    codeobj_691c62ff4a9da2f9fb092f7d14348103 = MAKE_CODE_OBJECT(module_filename_obj, 370, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[179], mod_consts[179], mod_consts[214], NULL, 1, 0, 0);
    codeobj_b166ef3cc678c6e71ddb2705975c7ad1 = MAKE_CODE_OBJECT(module_filename_obj, 62, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[51], mod_consts[51], mod_consts[217], NULL, 2, 0, 0);
    codeobj_15c3af5a55be520cf3f423ca202fe280 = MAKE_CODE_OBJECT(module_filename_obj, 125, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[51], mod_consts[51], mod_consts[217], NULL, 2, 0, 0);
    codeobj_143b577be03b4e5270b990e95d5a5c42 = MAKE_CODE_OBJECT(module_filename_obj, 301, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[51], mod_consts[51], mod_consts[218], NULL, 2, 0, 0);
    codeobj_8456d2411853c02fb51bbd70f0ed8f06 = MAKE_CODE_OBJECT(module_filename_obj, 190, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[51], mod_consts[51], mod_consts[219], NULL, 2, 0, 0);
    codeobj_904754a54e9fefa33c1d86e16c9160e3 = MAKE_CODE_OBJECT(module_filename_obj, 88, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[142], mod_consts[142], mod_consts[220], NULL, 1, 0, 0);
    codeobj_6e1875a885c43635db0289f684960136 = MAKE_CODE_OBJECT(module_filename_obj, 274, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[11], mod_consts[11], mod_consts[221], NULL, 3, 0, 0);
    codeobj_5798fc1db9c7f4e6cbccee768e79aae9 = MAKE_CODE_OBJECT(module_filename_obj, 359, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[14], mod_consts[14], mod_consts[222], NULL, 1, 0, 0);
    codeobj_7a6e192c87f4dc2f49b223d2a75006d4 = MAKE_CODE_OBJECT(module_filename_obj, 350, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[30], mod_consts[30], mod_consts[223], NULL, 2, 0, 0);
    codeobj_51109026fabc7458616b65463513350c = MAKE_CODE_OBJECT(module_filename_obj, 355, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[31], mod_consts[31], mod_consts[214], NULL, 1, 0, 0);
    codeobj_e3e49afdce330ef29b1c740324e68fbd = MAKE_CODE_OBJECT(module_filename_obj, 65, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[59], mod_consts[59], mod_consts[224], NULL, 3, 0, 0);
    codeobj_09e2ea0c9909e78149e916055d9f7f61 = MAKE_CODE_OBJECT(module_filename_obj, 73, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[59], mod_consts[59], mod_consts[224], NULL, 3, 0, 0);
    codeobj_7c8949406233743cb9ecaf927decec99 = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[59], mod_consts[59], mod_consts[224], NULL, 3, 0, 0);
    codeobj_3b869521520a4ea949d8de4951a44269 = MAKE_CODE_OBJECT(module_filename_obj, 139, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[59], mod_consts[59], mod_consts[224], NULL, 3, 0, 0);
    codeobj_a5a3923876656ceb42a85d85fa6b461f = MAKE_CODE_OBJECT(module_filename_obj, 147, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[59], mod_consts[59], mod_consts[224], NULL, 3, 0, 0);
    codeobj_b054420186b4382d719b1ecbe20d0ab6 = MAKE_CODE_OBJECT(module_filename_obj, 212, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[59], mod_consts[59], mod_consts[224], NULL, 3, 0, 0);
    codeobj_9363ebe55978cefad190157fb49a96e5 = MAKE_CODE_OBJECT(module_filename_obj, 220, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[59], mod_consts[59], mod_consts[224], NULL, 3, 0, 0);
    codeobj_88d231de257feab8ad73c689815267ff = MAKE_CODE_OBJECT(module_filename_obj, 314, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[59], mod_consts[59], mod_consts[224], NULL, 3, 0, 0);
    codeobj_1ff2726df8bc1bed788a3455fb75b11c = MAKE_CODE_OBJECT(module_filename_obj, 322, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[59], mod_consts[59], mod_consts[224], NULL, 3, 0, 0);
    codeobj_44f69d420e920ec7e65d7e2889b9fd02 = MAKE_CODE_OBJECT(module_filename_obj, 330, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[59], mod_consts[59], mod_consts[224], NULL, 3, 0, 0);
    codeobj_a21868f0dbd2d08d823d24d91f0beb73 = MAKE_CODE_OBJECT(module_filename_obj, 228, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[59], mod_consts[59], mod_consts[225], NULL, 3, 0, 0);
    codeobj_0387c84e56b3cde96d763d76d6a815ff = MAKE_CODE_OBJECT(module_filename_obj, 155, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[59], mod_consts[59], mod_consts[226], NULL, 3, 0, 0);
    codeobj_a8080681cd2087e193a6aeefc8098cad = MAKE_CODE_OBJECT(module_filename_obj, 405, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[194], mod_consts[194], mod_consts[227], NULL, 5, 0, 0);
    codeobj_b08b3616317d4a261083572b18f0a755 = MAKE_CODE_OBJECT(module_filename_obj, 468, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[197], mod_consts[197], mod_consts[228], NULL, 2, 0, 0);
    codeobj_bd8828b33fcdbe0c424a31dc32fe35e2 = MAKE_CODE_OBJECT(module_filename_obj, 475, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[197], mod_consts[197], mod_consts[228], NULL, 2, 0, 0);
    codeobj_5799fd4b147ef81d0e5790ee05a629f7 = MAKE_CODE_OBJECT(module_filename_obj, 482, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[197], mod_consts[197], mod_consts[229], NULL, 2, 0, 0);
    codeobj_32a0a0d43eef17f1055f908fe1585770 = MAKE_CODE_OBJECT(module_filename_obj, 94, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[1], mod_consts[1], mod_consts[230], NULL, 2, 0, 0);
    codeobj_881ad33256a620724e8e01fb5f338537 = MAKE_CODE_OBJECT(module_filename_obj, 523, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[23], mod_consts[23], mod_consts[231], NULL, 2, 0, 0);
    codeobj_f12c7c0de4a6b1479079867549d4c8a0 = MAKE_CODE_OBJECT(module_filename_obj, 570, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[204], mod_consts[204], mod_consts[232], NULL, 2, 0, 0);
    codeobj_a43a71ccd33539451e92e2f6863d3cbb = MAKE_CODE_OBJECT(module_filename_obj, 510, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[201], mod_consts[201], mod_consts[233], NULL, 2, 0, 0);
    codeobj_9bc3cc12853c3e73a466b94a75de2228 = MAKE_CODE_OBJECT(module_filename_obj, 132, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[28], mod_consts[28], mod_consts[217], NULL, 2, 0, 0);
    codeobj_f7570cc434c9e23105e6a9541343deb3 = MAKE_CODE_OBJECT(module_filename_obj, 306, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[28], mod_consts[28], mod_consts[224], NULL, 2, 0, 0);
    codeobj_1224a6299190c7c5b5ea82738309c043 = MAKE_CODE_OBJECT(module_filename_obj, 201, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[28], mod_consts[28], mod_consts[219], NULL, 2, 0, 0);
    codeobj_b6e32e3a1334be5be8b8294396e021a2 = MAKE_CODE_OBJECT(module_filename_obj, 424, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[39], mod_consts[39], mod_consts[234], mod_consts[235], 1, 0, 0);
    codeobj_28b4785922a1ac2c34daefd2c711af19 = MAKE_CODE_OBJECT(module_filename_obj, 489, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[39], mod_consts[39], mod_consts[236], mod_consts[237], 1, 0, 0);
    codeobj_83fae5df686c79ad880e9d9a8f04a9b4 = MAKE_CODE_OBJECT(module_filename_obj, 382, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[35], mod_consts[35], mod_consts[214], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_sqlalchemy$sql$annotation$$$function__6__gen_annotations_cache_key$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__7_complex_call_helper_pos_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__8_complex_call_helper_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__11_complex_call_helper_keywords_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__10__deannotate(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__11__deannotate(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__12__deannotate(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__13__annotate(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__14__with_annotations(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__15__deannotate(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__16__deannotate(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__17__deannotate(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__18__as_annotated_instance(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__19___new__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__1__annotate(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__20___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__21__annotate(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__22__with_annotations(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__23__deannotate(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__24__deannotate(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__25__deannotate(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__26__compiler_dispatch(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__27__constructor();


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__28__clone(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__29___reduce__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__2__deannotate(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__30___hash__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__31___eq__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__32_entity_namespace(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__33__deep_annotate(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__33__deep_annotate$$$function__1_clone(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__34__deep_deannotate(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__35__deep_deannotate(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__36__deep_deannotate(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__36__deep_deannotate$$$function__1_clone(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__37__shallow_annotate(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__38__new_annotation_type(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__39__prepare_annotations(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__3__deannotate(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__4__deannotate(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__5__annotations_cache_key(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__6__gen_annotations_cache_key(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__8__annotate(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__9__with_annotations(PyObject *annotations);


// The module function definitions.
static PyObject *impl_sqlalchemy$sql$annotation$$$function__1__annotate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_values = python_pars[1];
    struct Nuitka_FrameObject *frame_b166ef3cc678c6e71ddb2705975c7ad1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b166ef3cc678c6e71ddb2705975c7ad1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b166ef3cc678c6e71ddb2705975c7ad1)) {
        Py_XDECREF(cache_frame_b166ef3cc678c6e71ddb2705975c7ad1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b166ef3cc678c6e71ddb2705975c7ad1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b166ef3cc678c6e71ddb2705975c7ad1 = MAKE_FUNCTION_FRAME(codeobj_b166ef3cc678c6e71ddb2705975c7ad1, module_sqlalchemy$sql$annotation, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b166ef3cc678c6e71ddb2705975c7ad1->m_type_description == NULL);
    frame_b166ef3cc678c6e71ddb2705975c7ad1 = cache_frame_b166ef3cc678c6e71ddb2705975c7ad1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b166ef3cc678c6e71ddb2705975c7ad1);
    assert(Py_REFCNT(frame_b166ef3cc678c6e71ddb2705975c7ad1) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_b166ef3cc678c6e71ddb2705975c7ad1->m_frame.f_lineno = 63;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 63;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b166ef3cc678c6e71ddb2705975c7ad1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b166ef3cc678c6e71ddb2705975c7ad1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b166ef3cc678c6e71ddb2705975c7ad1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b166ef3cc678c6e71ddb2705975c7ad1,
        type_description_1,
        par_self,
        par_values
    );


    // Release cached frame if used for exception.
    if (frame_b166ef3cc678c6e71ddb2705975c7ad1 == cache_frame_b166ef3cc678c6e71ddb2705975c7ad1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b166ef3cc678c6e71ddb2705975c7ad1);
        cache_frame_b166ef3cc678c6e71ddb2705975c7ad1 = NULL;
    }

    assertFrameObject(frame_b166ef3cc678c6e71ddb2705975c7ad1);

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
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$sql$annotation$$$function__4__deannotate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_values = python_pars[1];
    PyObject *par_clone = python_pars[2];
    struct Nuitka_FrameObject *frame_7c8949406233743cb9ecaf927decec99;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7c8949406233743cb9ecaf927decec99 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7c8949406233743cb9ecaf927decec99)) {
        Py_XDECREF(cache_frame_7c8949406233743cb9ecaf927decec99);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7c8949406233743cb9ecaf927decec99 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7c8949406233743cb9ecaf927decec99 = MAKE_FUNCTION_FRAME(codeobj_7c8949406233743cb9ecaf927decec99, module_sqlalchemy$sql$annotation, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7c8949406233743cb9ecaf927decec99->m_type_description == NULL);
    frame_7c8949406233743cb9ecaf927decec99 = cache_frame_7c8949406233743cb9ecaf927decec99;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7c8949406233743cb9ecaf927decec99);
    assert(Py_REFCNT(frame_7c8949406233743cb9ecaf927decec99) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_7c8949406233743cb9ecaf927decec99->m_frame.f_lineno = 86;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 86;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7c8949406233743cb9ecaf927decec99, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7c8949406233743cb9ecaf927decec99->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7c8949406233743cb9ecaf927decec99, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7c8949406233743cb9ecaf927decec99,
        type_description_1,
        par_self,
        par_values,
        par_clone
    );


    // Release cached frame if used for exception.
    if (frame_7c8949406233743cb9ecaf927decec99 == cache_frame_7c8949406233743cb9ecaf927decec99) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7c8949406233743cb9ecaf927decec99);
        cache_frame_7c8949406233743cb9ecaf927decec99 = NULL;
    }

    assertFrameObject(frame_7c8949406233743cb9ecaf927decec99);

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
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);
    CHECK_OBJECT(par_clone);
    Py_DECREF(par_clone);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$sql$annotation$$$function__5__annotations_cache_key(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_anon_map_ = NULL;
    struct Nuitka_FrameObject *frame_904754a54e9fefa33c1d86e16c9160e3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_904754a54e9fefa33c1d86e16c9160e3 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_904754a54e9fefa33c1d86e16c9160e3)) {
        Py_XDECREF(cache_frame_904754a54e9fefa33c1d86e16c9160e3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_904754a54e9fefa33c1d86e16c9160e3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_904754a54e9fefa33c1d86e16c9160e3 = MAKE_FUNCTION_FRAME(codeobj_904754a54e9fefa33c1d86e16c9160e3, module_sqlalchemy$sql$annotation, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_904754a54e9fefa33c1d86e16c9160e3->m_type_description == NULL);
    frame_904754a54e9fefa33c1d86e16c9160e3 = cache_frame_904754a54e9fefa33c1d86e16c9160e3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_904754a54e9fefa33c1d86e16c9160e3);
    assert(Py_REFCNT(frame_904754a54e9fefa33c1d86e16c9160e3) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_904754a54e9fefa33c1d86e16c9160e3->m_frame.f_lineno = 90;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_anon_map_ == NULL);
        var_anon_map_ = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(var_anon_map_);
        tmp_args_element_value_1 = var_anon_map_;
        frame_904754a54e9fefa33c1d86e16c9160e3->m_frame.f_lineno = 92;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[1], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
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
        exception_tb = MAKE_TRACEBACK(frame_904754a54e9fefa33c1d86e16c9160e3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_904754a54e9fefa33c1d86e16c9160e3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_904754a54e9fefa33c1d86e16c9160e3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_904754a54e9fefa33c1d86e16c9160e3,
        type_description_1,
        par_self,
        var_anon_map_
    );


    // Release cached frame if used for exception.
    if (frame_904754a54e9fefa33c1d86e16c9160e3 == cache_frame_904754a54e9fefa33c1d86e16c9160e3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_904754a54e9fefa33c1d86e16c9160e3);
        cache_frame_904754a54e9fefa33c1d86e16c9160e3 = NULL;
    }

    assertFrameObject(frame_904754a54e9fefa33c1d86e16c9160e3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_anon_map_);
    Py_DECREF(var_anon_map_);
    var_anon_map_ = NULL;
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

    Py_XDECREF(var_anon_map_);
    var_anon_map_ = NULL;
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


static PyObject *impl_sqlalchemy$sql$annotation$$$function__6__gen_annotations_cache_key(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_CellObject *par_anon_map = Nuitka_Cell_New1(python_pars[1]);
    PyObject *outline_0_var_key = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_32a0a0d43eef17f1055f908fe1585770;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_795112056be360210c7154940a7aac81_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_795112056be360210c7154940a7aac81_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_32a0a0d43eef17f1055f908fe1585770 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_32a0a0d43eef17f1055f908fe1585770)) {
        Py_XDECREF(cache_frame_32a0a0d43eef17f1055f908fe1585770);

#if _DEBUG_REFCOUNTS
        if (cache_frame_32a0a0d43eef17f1055f908fe1585770 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_32a0a0d43eef17f1055f908fe1585770 = MAKE_FUNCTION_FRAME(codeobj_32a0a0d43eef17f1055f908fe1585770, module_sqlalchemy$sql$annotation, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_32a0a0d43eef17f1055f908fe1585770->m_type_description == NULL);
    frame_32a0a0d43eef17f1055f908fe1585770 = cache_frame_32a0a0d43eef17f1055f908fe1585770;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_32a0a0d43eef17f1055f908fe1585770);
    assert(Py_REFCNT(frame_32a0a0d43eef17f1055f908fe1585770) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[2];
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_tuple_arg_1;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
            {
                PyObject *tmp_assign_source_1;
                PyObject *tmp_iter_arg_1;
                // Tried code:
                {
                    PyObject *tmp_assign_source_2;
                    PyObject *tmp_iter_arg_2;
                    PyObject *tmp_called_value_1;
                    PyObject *tmp_args_element_value_1;
                    PyObject *tmp_expression_value_1;
                    tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[3]);
                    assert(tmp_called_value_1 != NULL);
                    CHECK_OBJECT(par_self);
                    tmp_expression_value_1 = par_self;
                    tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
                    if (tmp_args_element_value_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 108;
                        type_description_1 = "oc";
                        goto try_except_handler_1;
                    }
                    frame_32a0a0d43eef17f1055f908fe1585770->m_frame.f_lineno = 108;
                    tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
                    Py_DECREF(tmp_args_element_value_1);
                    if (tmp_iter_arg_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 108;
                        type_description_1 = "oc";
                        goto try_except_handler_1;
                    }
                    tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_2);
                    Py_DECREF(tmp_iter_arg_2);
                    if (tmp_assign_source_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 107;
                        type_description_1 = "oc";
                        goto try_except_handler_1;
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
                if (isFrameUnusable(cache_frame_795112056be360210c7154940a7aac81_2)) {
                    Py_XDECREF(cache_frame_795112056be360210c7154940a7aac81_2);

#if _DEBUG_REFCOUNTS
                    if (cache_frame_795112056be360210c7154940a7aac81_2 == NULL) {
                        count_active_frame_cache_instances += 1;
                    } else {
                        count_released_frame_cache_instances += 1;
                    }
                    count_allocated_frame_cache_instances += 1;
#endif
                    cache_frame_795112056be360210c7154940a7aac81_2 = MAKE_FUNCTION_FRAME(codeobj_795112056be360210c7154940a7aac81, module_sqlalchemy$sql$annotation, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
                } else {
                    count_hit_frame_cache_instances += 1;
#endif
                }

                assert(cache_frame_795112056be360210c7154940a7aac81_2->m_type_description == NULL);
                frame_795112056be360210c7154940a7aac81_2 = cache_frame_795112056be360210c7154940a7aac81_2;

                // Push the new frame as the currently active one, and we should be exclusively
                // owning it.
                pushFrameStackCompiledFrame(frame_795112056be360210c7154940a7aac81_2);
                assert(Py_REFCNT(frame_795112056be360210c7154940a7aac81_2) == 2);

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
                            type_description_2 = "oo";
                            exception_lineno = 107;
                            goto try_except_handler_2;
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
                        PyObject *old = outline_0_var_key;
                        outline_0_var_key = tmp_assign_source_5;
                        Py_INCREF(outline_0_var_key);
                        Py_XDECREF(old);
                    }

                }
                {
                    PyObject *tmp_append_list_1;
                    PyObject *tmp_append_value_1;
                    PyObject *tmp_tuple_element_2;
                    CHECK_OBJECT(tmp_listcomp_1__contraction);
                    tmp_append_list_1 = tmp_listcomp_1__contraction;
                    CHECK_OBJECT(outline_0_var_key);
                    tmp_tuple_element_2 = outline_0_var_key;
                    tmp_append_value_1 = MAKE_TUPLE_EMPTY(2);
                    {
                        PyObject *tmp_expression_value_2;
                        PyObject *tmp_expression_value_3;
                        PyObject *tmp_subscript_value_1;
                        PyTuple_SET_ITEM0(tmp_append_value_1, 0, tmp_tuple_element_2);
                        if (par_self == NULL) {

                            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[4]);
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                            CHAIN_EXCEPTION(exception_value);

                            exception_lineno = 107;
                            type_description_2 = "oo";
                            goto tuple_build_exception_2;
                        }

                        tmp_expression_value_3 = par_self;
                        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[2]);
                        if (tmp_expression_value_2 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 107;
                            type_description_2 = "oo";
                            goto tuple_build_exception_2;
                        }
                        CHECK_OBJECT(outline_0_var_key);
                        tmp_subscript_value_1 = outline_0_var_key;
                        tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
                        Py_DECREF(tmp_expression_value_2);
                        if (tmp_tuple_element_2 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 107;
                            type_description_2 = "oo";
                            goto tuple_build_exception_2;
                        }
                        PyTuple_SET_ITEM(tmp_append_value_1, 1, tmp_tuple_element_2);
                    }
                    goto tuple_build_noexception_1;
                    // Exception handling pass through code for tuple_build:
                    tuple_build_exception_2:;
                    Py_DECREF(tmp_append_value_1);
                    goto try_except_handler_2;
                    // Finished with no exception for tuple_build:
                    tuple_build_noexception_1:;
                    tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
                    if (tmp_result == false) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 107;
                        type_description_2 = "oo";
                        goto try_except_handler_2;
                    }
                }
                if (CONSIDER_THREADING() == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 107;
                    type_description_2 = "oo";
                    goto try_except_handler_2;
                }
                goto loop_start_1;
                loop_end_1:;
                CHECK_OBJECT(tmp_listcomp_1__contraction);
                tmp_iter_arg_1 = tmp_listcomp_1__contraction;
                Py_INCREF(tmp_iter_arg_1);
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
                    exception_tb = MAKE_TRACEBACK(frame_795112056be360210c7154940a7aac81_2, exception_lineno);
                } else if (exception_tb->tb_frame != &frame_795112056be360210c7154940a7aac81_2->m_frame) {
                    exception_tb = ADD_TRACEBACK(exception_tb, frame_795112056be360210c7154940a7aac81_2, exception_lineno);
                }

                // Attaches locals to frame if any.
                Nuitka_Frame_AttachLocals(
                    frame_795112056be360210c7154940a7aac81_2,
                    type_description_2,
                    outline_0_var_key,
                    par_self
                );


                // Release cached frame if used for exception.
                if (frame_795112056be360210c7154940a7aac81_2 == cache_frame_795112056be360210c7154940a7aac81_2) {
#if _DEBUG_REFCOUNTS
                    count_active_frame_cache_instances -= 1;
                    count_released_frame_cache_instances += 1;
#endif
                    Py_DECREF(cache_frame_795112056be360210c7154940a7aac81_2);
                    cache_frame_795112056be360210c7154940a7aac81_2 = NULL;
                }

                assertFrameObject(frame_795112056be360210c7154940a7aac81_2);

                // Put the previous frame back on top.
                popFrameStack();

                // Return the error.
                goto nested_frame_exit_1;
                frame_no_exception_1:;
                goto skip_nested_handling_1;
                nested_frame_exit_1:;
                type_description_1 = "oc";
                goto try_except_handler_1;
                skip_nested_handling_1:;
                NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
                return NULL;
                // Return handler code:
                try_return_handler_1:;
                Py_XDECREF(outline_0_var_key);
                outline_0_var_key = NULL;
                goto outline_result_2;
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
                exception_lineno = 107;
                goto tuple_build_exception_1;
                outline_result_2:;
                tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
                Py_DECREF(tmp_iter_arg_1);
                if (tmp_assign_source_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 100;
                    type_description_1 = "oc";
                    goto tuple_build_exception_1;
                }
                assert(tmp_genexpr_1__$0 == NULL);
                tmp_genexpr_1__$0 = tmp_assign_source_1;
            }
            // Tried code:
            {
                struct Nuitka_CellObject *tmp_closure_1[2];

                tmp_closure_1[0] = par_anon_map;
                Py_INCREF(tmp_closure_1[0]);
                tmp_closure_1[1] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

                tmp_tuple_arg_1 = MAKE_GENERATOR_sqlalchemy$sql$annotation$$$function__6__gen_annotations_cache_key$$$genexpr__1_genexpr(tmp_closure_1);

                goto try_return_handler_3;
            }
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_3:;
            CHECK_OBJECT(tmp_genexpr_1__$0);
            Py_DECREF(tmp_genexpr_1__$0);
            tmp_genexpr_1__$0 = NULL;
            goto outline_result_1;
            // End of try:
            NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
            return NULL;
            outline_result_1:;
            tmp_tuple_element_1 = PySequence_Tuple(tmp_tuple_arg_1);
            Py_DECREF(tmp_tuple_arg_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_1 = "oc";
                goto tuple_build_exception_1;
            }
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

    goto frame_no_exception_2;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_32a0a0d43eef17f1055f908fe1585770, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_32a0a0d43eef17f1055f908fe1585770->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_32a0a0d43eef17f1055f908fe1585770, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_32a0a0d43eef17f1055f908fe1585770,
        type_description_1,
        par_self,
        par_anon_map
    );


    // Release cached frame if used for exception.
    if (frame_32a0a0d43eef17f1055f908fe1585770 == cache_frame_32a0a0d43eef17f1055f908fe1585770) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_32a0a0d43eef17f1055f908fe1585770);
        cache_frame_32a0a0d43eef17f1055f908fe1585770 = NULL;
    }

    assertFrameObject(frame_32a0a0d43eef17f1055f908fe1585770);

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
    CHECK_OBJECT(par_anon_map);
    Py_DECREF(par_anon_map);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_anon_map);
    Py_DECREF(par_anon_map);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct sqlalchemy$sql$annotation$$$function__6__gen_annotations_cache_key$$$genexpr__1_genexpr_locals {
    PyObject *var_key;
    PyObject *var_value;
    PyObject *tmp_iter_value_0;
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
    int tmp_res;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
};

static PyObject *sqlalchemy$sql$annotation$$$function__6__gen_annotations_cache_key$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct sqlalchemy$sql$annotation$$$function__6__gen_annotations_cache_key$$$genexpr__1_genexpr_locals *generator_heap = (struct sqlalchemy$sql$annotation$$$function__6__gen_annotations_cache_key$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_key = NULL;
    generator_heap->var_value = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_c0a67e1da29147bbc0423b04d07e3c71, module_sqlalchemy$sql$annotation, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
                generator_heap->type_description_1 = "Nooc";
                generator_heap->exception_lineno = 100;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_iter_arg_1 = generator_heap->tmp_iter_value_0;
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 100;
            generator_heap->type_description_1 = "Nooc";
            goto try_except_handler_3;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
            generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "Nooc";
            generator_heap->exception_lineno = 100;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
            generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "Nooc";
            generator_heap->exception_lineno = 100;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
            generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
            Py_XDECREF(old);
        }

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

                    generator_heap->type_description_1 = "Nooc";
                    generator_heap->exception_lineno = 100;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[5];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "Nooc";
            generator_heap->exception_lineno = 100;
            goto try_except_handler_4;
        }
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

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
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

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = generator_heap->tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = generator_heap->var_key;
            generator_heap->var_key = tmp_assign_source_5;
            Py_INCREF(generator_heap->var_key);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = generator_heap->tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = generator_heap->var_value;
            generator_heap->var_value = tmp_assign_source_6;
            Py_INCREF(generator_heap->var_value);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_tuple_element_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_key);
        tmp_tuple_element_1 = generator_heap->var_key;
        tmp_expression_value_1 = MAKE_TUPLE_EMPTY(2);
        {
            nuitka_bool tmp_condition_result_1;
            PyObject *tmp_isinstance_inst_1;
            PyObject *tmp_isinstance_cls_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_args_element_value_2;
            PyTuple_SET_ITEM0(tmp_expression_value_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(generator_heap->var_value);
            tmp_isinstance_inst_1 = generator_heap->var_value;
            tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_isinstance_cls_1 == NULL)) {
                tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_isinstance_cls_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 103;
                generator_heap->type_description_1 = "Nooc";
                goto tuple_build_exception_1;
            }
            generator_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
            if (generator_heap->tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 103;
                generator_heap->type_description_1 = "Nooc";
                goto tuple_build_exception_1;
            }
            tmp_condition_result_1 = (generator_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_1;
            } else {
                goto condexpr_false_1;
            }
            condexpr_true_1:;
            CHECK_OBJECT(generator_heap->var_value);
            tmp_expression_value_2 = generator_heap->var_value;
            tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[7]);
            if (tmp_called_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 102;
                generator_heap->type_description_1 = "Nooc";
                goto tuple_build_exception_1;
            }
            if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
                Py_DECREF(tmp_called_value_1);
                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[0]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(generator_heap->exception_value);

                generator_heap->exception_lineno = 102;
                generator_heap->type_description_1 = "Nooc";
                goto tuple_build_exception_1;
            }

            tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
            tmp_args_element_value_2 = MAKE_LIST_EMPTY(0);
            generator->m_frame->m_frame.f_lineno = 102;
            {
                PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
                tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
            }

            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 102;
                generator_heap->type_description_1 = "Nooc";
                goto tuple_build_exception_1;
            }
            goto condexpr_end_1;
            condexpr_false_1:;
            CHECK_OBJECT(generator_heap->var_value);
            tmp_tuple_element_1 = generator_heap->var_value;
            Py_INCREF(tmp_tuple_element_1);
            condexpr_end_1:;
            PyTuple_SET_ITEM(tmp_expression_value_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_expression_value_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 101;
            generator_heap->type_description_1 = "Nooc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 100;
        generator_heap->type_description_1 = "Nooc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

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
            generator_heap->var_key,
            generator_heap->var_value,
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
    goto try_end_4;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_key);
    generator_heap->var_key = NULL;
    Py_XDECREF(generator_heap->var_value);
    generator_heap->var_value = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:
    try_end_4:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_key);
    generator_heap->var_key = NULL;
    Py_XDECREF(generator_heap->var_value);
    generator_heap->var_value = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_sqlalchemy$sql$annotation$$$function__6__gen_annotations_cache_key$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        sqlalchemy$sql$annotation$$$function__6__gen_annotations_cache_key$$$genexpr__1_genexpr_context,
        module_sqlalchemy$sql$annotation,
        mod_consts[8],
#if PYTHON_VERSION >= 0x350
        mod_consts[9],
#endif
        codeobj_c0a67e1da29147bbc0423b04d07e3c71,
        closure,
        2,
        sizeof(struct sqlalchemy$sql$annotation$$$function__6__gen_annotations_cache_key$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_sqlalchemy$sql$annotation$$$function__8__annotate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_values = python_pars[1];
    struct Nuitka_FrameObject *frame_15c3af5a55be520cf3f423ca202fe280;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_15c3af5a55be520cf3f423ca202fe280 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_15c3af5a55be520cf3f423ca202fe280)) {
        Py_XDECREF(cache_frame_15c3af5a55be520cf3f423ca202fe280);

#if _DEBUG_REFCOUNTS
        if (cache_frame_15c3af5a55be520cf3f423ca202fe280 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_15c3af5a55be520cf3f423ca202fe280 = MAKE_FUNCTION_FRAME(codeobj_15c3af5a55be520cf3f423ca202fe280, module_sqlalchemy$sql$annotation, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_15c3af5a55be520cf3f423ca202fe280->m_type_description == NULL);
    frame_15c3af5a55be520cf3f423ca202fe280 = cache_frame_15c3af5a55be520cf3f423ca202fe280;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_15c3af5a55be520cf3f423ca202fe280);
    assert(Py_REFCNT(frame_15c3af5a55be520cf3f423ca202fe280) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        CHECK_OBJECT(par_values);
        tmp_args_element_value_2 = par_values;
        frame_15c3af5a55be520cf3f423ca202fe280->m_frame.f_lineno = 130;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[11],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
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
        exception_tb = MAKE_TRACEBACK(frame_15c3af5a55be520cf3f423ca202fe280, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_15c3af5a55be520cf3f423ca202fe280->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_15c3af5a55be520cf3f423ca202fe280, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_15c3af5a55be520cf3f423ca202fe280,
        type_description_1,
        par_self,
        par_values
    );


    // Release cached frame if used for exception.
    if (frame_15c3af5a55be520cf3f423ca202fe280 == cache_frame_15c3af5a55be520cf3f423ca202fe280) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_15c3af5a55be520cf3f423ca202fe280);
        cache_frame_15c3af5a55be520cf3f423ca202fe280 = NULL;
    }

    assertFrameObject(frame_15c3af5a55be520cf3f423ca202fe280);

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
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$annotation$$$function__9__with_annotations(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_values = python_pars[1];
    struct Nuitka_FrameObject *frame_9bc3cc12853c3e73a466b94a75de2228;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9bc3cc12853c3e73a466b94a75de2228 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9bc3cc12853c3e73a466b94a75de2228)) {
        Py_XDECREF(cache_frame_9bc3cc12853c3e73a466b94a75de2228);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9bc3cc12853c3e73a466b94a75de2228 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9bc3cc12853c3e73a466b94a75de2228 = MAKE_FUNCTION_FRAME(codeobj_9bc3cc12853c3e73a466b94a75de2228, module_sqlalchemy$sql$annotation, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9bc3cc12853c3e73a466b94a75de2228->m_type_description == NULL);
    frame_9bc3cc12853c3e73a466b94a75de2228 = cache_frame_9bc3cc12853c3e73a466b94a75de2228;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9bc3cc12853c3e73a466b94a75de2228);
    assert(Py_REFCNT(frame_9bc3cc12853c3e73a466b94a75de2228) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        CHECK_OBJECT(par_values);
        tmp_args_element_value_2 = par_values;
        frame_9bc3cc12853c3e73a466b94a75de2228->m_frame.f_lineno = 137;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[11],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
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
        exception_tb = MAKE_TRACEBACK(frame_9bc3cc12853c3e73a466b94a75de2228, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9bc3cc12853c3e73a466b94a75de2228->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9bc3cc12853c3e73a466b94a75de2228, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9bc3cc12853c3e73a466b94a75de2228,
        type_description_1,
        par_self,
        par_values
    );


    // Release cached frame if used for exception.
    if (frame_9bc3cc12853c3e73a466b94a75de2228 == cache_frame_9bc3cc12853c3e73a466b94a75de2228) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9bc3cc12853c3e73a466b94a75de2228);
        cache_frame_9bc3cc12853c3e73a466b94a75de2228 = NULL;
    }

    assertFrameObject(frame_9bc3cc12853c3e73a466b94a75de2228);

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
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$annotation$$$function__12__deannotate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_values = python_pars[1];
    PyObject *par_clone = python_pars[2];
    PyObject *var_s = NULL;
    struct Nuitka_FrameObject *frame_0387c84e56b3cde96d763d76d6a815ff;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0387c84e56b3cde96d763d76d6a815ff = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0387c84e56b3cde96d763d76d6a815ff)) {
        Py_XDECREF(cache_frame_0387c84e56b3cde96d763d76d6a815ff);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0387c84e56b3cde96d763d76d6a815ff == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0387c84e56b3cde96d763d76d6a815ff = MAKE_FUNCTION_FRAME(codeobj_0387c84e56b3cde96d763d76d6a815ff, module_sqlalchemy$sql$annotation, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0387c84e56b3cde96d763d76d6a815ff->m_type_description == NULL);
    frame_0387c84e56b3cde96d763d76d6a815ff = cache_frame_0387c84e56b3cde96d763d76d6a815ff;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0387c84e56b3cde96d763d76d6a815ff);
    assert(Py_REFCNT(frame_0387c84e56b3cde96d763d76d6a815ff) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_clone);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_clone);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooo";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_0387c84e56b3cde96d763d76d6a815ff->m_frame.f_lineno = 169;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[14]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_s == NULL);
        var_s = tmp_assign_source_1;
    }
    CHECK_OBJECT(var_s);
    tmp_return_value = var_s;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0387c84e56b3cde96d763d76d6a815ff, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0387c84e56b3cde96d763d76d6a815ff->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0387c84e56b3cde96d763d76d6a815ff, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0387c84e56b3cde96d763d76d6a815ff,
        type_description_1,
        par_self,
        par_values,
        par_clone,
        var_s
    );


    // Release cached frame if used for exception.
    if (frame_0387c84e56b3cde96d763d76d6a815ff == cache_frame_0387c84e56b3cde96d763d76d6a815ff) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0387c84e56b3cde96d763d76d6a815ff);
        cache_frame_0387c84e56b3cde96d763d76d6a815ff = NULL;
    }

    assertFrameObject(frame_0387c84e56b3cde96d763d76d6a815ff);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_s);
    var_s = NULL;
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
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);
    CHECK_OBJECT(par_clone);
    Py_DECREF(par_clone);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);
    CHECK_OBJECT(par_clone);
    Py_DECREF(par_clone);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$annotation$$$function__13__annotate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_values = python_pars[1];
    PyObject *var_new = NULL;
    struct Nuitka_FrameObject *frame_8456d2411853c02fb51bbd70f0ed8f06;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_8456d2411853c02fb51bbd70f0ed8f06 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8456d2411853c02fb51bbd70f0ed8f06)) {
        Py_XDECREF(cache_frame_8456d2411853c02fb51bbd70f0ed8f06);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8456d2411853c02fb51bbd70f0ed8f06 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8456d2411853c02fb51bbd70f0ed8f06 = MAKE_FUNCTION_FRAME(codeobj_8456d2411853c02fb51bbd70f0ed8f06, module_sqlalchemy$sql$annotation, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8456d2411853c02fb51bbd70f0ed8f06->m_type_description == NULL);
    frame_8456d2411853c02fb51bbd70f0ed8f06 = cache_frame_8456d2411853c02fb51bbd70f0ed8f06;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8456d2411853c02fb51bbd70f0ed8f06);
    assert(Py_REFCNT(frame_8456d2411853c02fb51bbd70f0ed8f06) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_8456d2411853c02fb51bbd70f0ed8f06->m_frame.f_lineno = 195;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[14]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_new == NULL);
        var_new = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_new);
        tmp_expression_value_1 = var_new;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_values);
        tmp_args_element_value_1 = par_values;
        frame_8456d2411853c02fb51bbd70f0ed8f06->m_frame.f_lineno = 196;
        tmp_assattr_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[16], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_new);
        tmp_assattr_target_1 = var_new;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[2], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_new);
        tmp_expression_value_3 = var_new;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[17]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_8456d2411853c02fb51bbd70f0ed8f06->m_frame.f_lineno = 197;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[18]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_new);
        tmp_expression_value_5 = var_new;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_5);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[17]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_8456d2411853c02fb51bbd70f0ed8f06->m_frame.f_lineno = 198;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[19]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8456d2411853c02fb51bbd70f0ed8f06, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8456d2411853c02fb51bbd70f0ed8f06->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8456d2411853c02fb51bbd70f0ed8f06, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8456d2411853c02fb51bbd70f0ed8f06,
        type_description_1,
        par_self,
        par_values,
        var_new
    );


    // Release cached frame if used for exception.
    if (frame_8456d2411853c02fb51bbd70f0ed8f06 == cache_frame_8456d2411853c02fb51bbd70f0ed8f06) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8456d2411853c02fb51bbd70f0ed8f06);
        cache_frame_8456d2411853c02fb51bbd70f0ed8f06 = NULL;
    }

    assertFrameObject(frame_8456d2411853c02fb51bbd70f0ed8f06);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_new);
    tmp_return_value = var_new;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_new);
    Py_DECREF(var_new);
    var_new = NULL;
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

    Py_XDECREF(var_new);
    var_new = NULL;
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
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$annotation$$$function__14__with_annotations(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_values = python_pars[1];
    PyObject *var_new = NULL;
    struct Nuitka_FrameObject *frame_1224a6299190c7c5b5ea82738309c043;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_1224a6299190c7c5b5ea82738309c043 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1224a6299190c7c5b5ea82738309c043)) {
        Py_XDECREF(cache_frame_1224a6299190c7c5b5ea82738309c043);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1224a6299190c7c5b5ea82738309c043 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1224a6299190c7c5b5ea82738309c043 = MAKE_FUNCTION_FRAME(codeobj_1224a6299190c7c5b5ea82738309c043, module_sqlalchemy$sql$annotation, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1224a6299190c7c5b5ea82738309c043->m_type_description == NULL);
    frame_1224a6299190c7c5b5ea82738309c043 = cache_frame_1224a6299190c7c5b5ea82738309c043;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1224a6299190c7c5b5ea82738309c043);
    assert(Py_REFCNT(frame_1224a6299190c7c5b5ea82738309c043) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_1224a6299190c7c5b5ea82738309c043->m_frame.f_lineno = 206;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[14]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_new == NULL);
        var_new = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_values);
        tmp_args_element_value_1 = par_values;
        frame_1224a6299190c7c5b5ea82738309c043->m_frame.f_lineno = 207;
        tmp_assattr_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[21], tmp_args_element_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_new);
        tmp_assattr_target_1 = var_new;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[2], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_new);
        tmp_expression_value_2 = var_new;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[17]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1224a6299190c7c5b5ea82738309c043->m_frame.f_lineno = 208;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[18]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_new);
        tmp_expression_value_4 = var_new;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_4);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[17]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1224a6299190c7c5b5ea82738309c043->m_frame.f_lineno = 209;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[19]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1224a6299190c7c5b5ea82738309c043, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1224a6299190c7c5b5ea82738309c043->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1224a6299190c7c5b5ea82738309c043, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1224a6299190c7c5b5ea82738309c043,
        type_description_1,
        par_self,
        par_values,
        var_new
    );


    // Release cached frame if used for exception.
    if (frame_1224a6299190c7c5b5ea82738309c043 == cache_frame_1224a6299190c7c5b5ea82738309c043) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1224a6299190c7c5b5ea82738309c043);
        cache_frame_1224a6299190c7c5b5ea82738309c043 = NULL;
    }

    assertFrameObject(frame_1224a6299190c7c5b5ea82738309c043);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_new);
    tmp_return_value = var_new;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_new);
    Py_DECREF(var_new);
    var_new = NULL;
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

    Py_XDECREF(var_new);
    var_new = NULL;
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
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$annotation$$$function__17__deannotate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_values = python_pars[1];
    PyObject *par_clone = python_pars[2];
    PyObject *var_new = NULL;
    struct Nuitka_FrameObject *frame_a21868f0dbd2d08d823d24d91f0beb73;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a21868f0dbd2d08d823d24d91f0beb73 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a21868f0dbd2d08d823d24d91f0beb73)) {
        Py_XDECREF(cache_frame_a21868f0dbd2d08d823d24d91f0beb73);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a21868f0dbd2d08d823d24d91f0beb73 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a21868f0dbd2d08d823d24d91f0beb73 = MAKE_FUNCTION_FRAME(codeobj_a21868f0dbd2d08d823d24d91f0beb73, module_sqlalchemy$sql$annotation, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a21868f0dbd2d08d823d24d91f0beb73->m_type_description == NULL);
    frame_a21868f0dbd2d08d823d24d91f0beb73 = cache_frame_a21868f0dbd2d08d823d24d91f0beb73;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a21868f0dbd2d08d823d24d91f0beb73);
    assert(Py_REFCNT(frame_a21868f0dbd2d08d823d24d91f0beb73) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_clone);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_clone);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 241;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 244;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = par_self;
        frame_a21868f0dbd2d08d823d24d91f0beb73->m_frame.f_lineno = 244;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[14]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_new == NULL);
        var_new = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_assattr_target_1;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_a21868f0dbd2d08d823d24d91f0beb73->m_frame.f_lineno = 245;
        tmp_assattr_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[21]);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_new);
        tmp_assattr_target_1 = var_new;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[2], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_new);
        tmp_expression_value_3 = var_new;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[17]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_a21868f0dbd2d08d823d24d91f0beb73->m_frame.f_lineno = 246;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[18]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    CHECK_OBJECT(var_new);
    tmp_return_value = var_new;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    if (par_self == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 249;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a21868f0dbd2d08d823d24d91f0beb73, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a21868f0dbd2d08d823d24d91f0beb73->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a21868f0dbd2d08d823d24d91f0beb73, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a21868f0dbd2d08d823d24d91f0beb73,
        type_description_1,
        par_self,
        par_values,
        par_clone,
        var_new
    );


    // Release cached frame if used for exception.
    if (frame_a21868f0dbd2d08d823d24d91f0beb73 == cache_frame_a21868f0dbd2d08d823d24d91f0beb73) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a21868f0dbd2d08d823d24d91f0beb73);
        cache_frame_a21868f0dbd2d08d823d24d91f0beb73 = NULL;
    }

    assertFrameObject(frame_a21868f0dbd2d08d823d24d91f0beb73);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_new);
    var_new = NULL;
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

    Py_XDECREF(var_new);
    var_new = NULL;
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
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);
    CHECK_OBJECT(par_clone);
    Py_DECREF(par_clone);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);
    CHECK_OBJECT(par_clone);
    Py_DECREF(par_clone);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$annotation$$$function__18__as_annotated_instance(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_element = python_pars[1];
    PyObject *par_values = python_pars[2];
    struct Nuitka_FrameObject *frame_6e1875a885c43635db0289f684960136;
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
    static struct Nuitka_FrameObject *cache_frame_6e1875a885c43635db0289f684960136 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6e1875a885c43635db0289f684960136)) {
        Py_XDECREF(cache_frame_6e1875a885c43635db0289f684960136);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6e1875a885c43635db0289f684960136 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6e1875a885c43635db0289f684960136 = MAKE_FUNCTION_FRAME(codeobj_6e1875a885c43635db0289f684960136, module_sqlalchemy$sql$annotation, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6e1875a885c43635db0289f684960136->m_type_description == NULL);
    frame_6e1875a885c43635db0289f684960136 = cache_frame_6e1875a885c43635db0289f684960136;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6e1875a885c43635db0289f684960136);
    assert(Py_REFCNT(frame_6e1875a885c43635db0289f684960136) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_element);
        tmp_expression_value_2 = par_element;
        tmp_subscript_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_2);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = par_cls;
            assert(old != NULL);
            par_cls = tmp_assign_source_1;
            Py_DECREF(old);
        }

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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_6e1875a885c43635db0289f684960136, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_6e1875a885c43635db0289f684960136, exception_keeper_lineno_1);
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(par_element);
        tmp_expression_value_3 = par_element;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_3);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(par_cls);
        tmp_args_element_value_2 = par_cls;
        frame_6e1875a885c43635db0289f684960136->m_frame.f_lineno = 281;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = par_cls;
            assert(old != NULL);
            par_cls = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 278;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_6e1875a885c43635db0289f684960136->m_frame) frame_6e1875a885c43635db0289f684960136->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
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
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_cls);
        tmp_called_value_2 = par_cls;
        CHECK_OBJECT(par_element);
        tmp_args_element_value_3 = par_element;
        CHECK_OBJECT(par_values);
        tmp_args_element_value_4 = par_values;
        frame_6e1875a885c43635db0289f684960136->m_frame.f_lineno = 282;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
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
        exception_tb = MAKE_TRACEBACK(frame_6e1875a885c43635db0289f684960136, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6e1875a885c43635db0289f684960136->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6e1875a885c43635db0289f684960136, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6e1875a885c43635db0289f684960136,
        type_description_1,
        par_cls,
        par_element,
        par_values
    );


    // Release cached frame if used for exception.
    if (frame_6e1875a885c43635db0289f684960136 == cache_frame_6e1875a885c43635db0289f684960136) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6e1875a885c43635db0289f684960136);
        cache_frame_6e1875a885c43635db0289f684960136 = NULL;
    }

    assertFrameObject(frame_6e1875a885c43635db0289f684960136);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    par_cls = NULL;
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

    Py_XDECREF(par_cls);
    par_cls = NULL;
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
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$annotation$$$function__19___new__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_args = python_pars[1];
    struct Nuitka_FrameObject *frame_cba7d4d941092a4588303934d7909467;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cba7d4d941092a4588303934d7909467 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cba7d4d941092a4588303934d7909467)) {
        Py_XDECREF(cache_frame_cba7d4d941092a4588303934d7909467);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cba7d4d941092a4588303934d7909467 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cba7d4d941092a4588303934d7909467 = MAKE_FUNCTION_FRAME(codeobj_cba7d4d941092a4588303934d7909467, module_sqlalchemy$sql$annotation, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cba7d4d941092a4588303934d7909467->m_type_description == NULL);
    frame_cba7d4d941092a4588303934d7909467 = cache_frame_cba7d4d941092a4588303934d7909467;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cba7d4d941092a4588303934d7909467);
    assert(Py_REFCNT(frame_cba7d4d941092a4588303934d7909467) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = (PyObject *)&PyBaseObject_Type;
        CHECK_OBJECT(par_cls);
        tmp_args_element_value_1 = par_cls;
        frame_cba7d4d941092a4588303934d7909467->m_frame.f_lineno = 289;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[24], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
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
        exception_tb = MAKE_TRACEBACK(frame_cba7d4d941092a4588303934d7909467, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cba7d4d941092a4588303934d7909467->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cba7d4d941092a4588303934d7909467, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cba7d4d941092a4588303934d7909467,
        type_description_1,
        par_cls,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_cba7d4d941092a4588303934d7909467 == cache_frame_cba7d4d941092a4588303934d7909467) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cba7d4d941092a4588303934d7909467);
        cache_frame_cba7d4d941092a4588303934d7909467 = NULL;
    }

    assertFrameObject(frame_cba7d4d941092a4588303934d7909467);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$annotation$$$function__20___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_element = python_pars[1];
    PyObject *par_values = python_pars[2];
    struct Nuitka_FrameObject *frame_4d155370789fcec8fedfd575a184ab73;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_4d155370789fcec8fedfd575a184ab73 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4d155370789fcec8fedfd575a184ab73)) {
        Py_XDECREF(cache_frame_4d155370789fcec8fedfd575a184ab73);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4d155370789fcec8fedfd575a184ab73 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4d155370789fcec8fedfd575a184ab73 = MAKE_FUNCTION_FRAME(codeobj_4d155370789fcec8fedfd575a184ab73, module_sqlalchemy$sql$annotation, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4d155370789fcec8fedfd575a184ab73->m_type_description == NULL);
    frame_4d155370789fcec8fedfd575a184ab73 = cache_frame_4d155370789fcec8fedfd575a184ab73;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4d155370789fcec8fedfd575a184ab73);
    assert(Py_REFCNT(frame_4d155370789fcec8fedfd575a184ab73) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_element);
        tmp_expression_value_2 = par_element;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_4d155370789fcec8fedfd575a184ab73->m_frame.f_lineno = 294;
        tmp_assattr_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE_DICT_SLOT(tmp_assattr_target_1, tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_4);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[17]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_4d155370789fcec8fedfd575a184ab73->m_frame.f_lineno = 295;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[18]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_6);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[17]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_4d155370789fcec8fedfd575a184ab73->m_frame.f_lineno = 296;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_3, mod_consts[19]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_element);
        tmp_assattr_value_2 = par_element;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[26], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_assattr_target_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_values);
        tmp_args_element_value_1 = par_values;
        frame_4d155370789fcec8fedfd575a184ab73->m_frame.f_lineno = 298;
        tmp_assattr_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[21], tmp_args_element_value_1);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[2], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_hash_arg_1;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_element);
        tmp_hash_arg_1 = par_element;
        tmp_assattr_value_4 = BUILTIN_HASH(tmp_hash_arg_1);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[27], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4d155370789fcec8fedfd575a184ab73, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4d155370789fcec8fedfd575a184ab73->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4d155370789fcec8fedfd575a184ab73, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4d155370789fcec8fedfd575a184ab73,
        type_description_1,
        par_self,
        par_element,
        par_values
    );


    // Release cached frame if used for exception.
    if (frame_4d155370789fcec8fedfd575a184ab73 == cache_frame_4d155370789fcec8fedfd575a184ab73) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4d155370789fcec8fedfd575a184ab73);
        cache_frame_4d155370789fcec8fedfd575a184ab73 = NULL;
    }

    assertFrameObject(frame_4d155370789fcec8fedfd575a184ab73);

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
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$annotation$$$function__21__annotate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_values = python_pars[1];
    PyObject *var__values = NULL;
    PyObject *var_new = NULL;
    struct Nuitka_FrameObject *frame_143b577be03b4e5270b990e95d5a5c42;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_143b577be03b4e5270b990e95d5a5c42 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_143b577be03b4e5270b990e95d5a5c42)) {
        Py_XDECREF(cache_frame_143b577be03b4e5270b990e95d5a5c42);

#if _DEBUG_REFCOUNTS
        if (cache_frame_143b577be03b4e5270b990e95d5a5c42 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_143b577be03b4e5270b990e95d5a5c42 = MAKE_FUNCTION_FRAME(codeobj_143b577be03b4e5270b990e95d5a5c42, module_sqlalchemy$sql$annotation, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_143b577be03b4e5270b990e95d5a5c42->m_type_description == NULL);
    frame_143b577be03b4e5270b990e95d5a5c42 = cache_frame_143b577be03b4e5270b990e95d5a5c42;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_143b577be03b4e5270b990e95d5a5c42);
    assert(Py_REFCNT(frame_143b577be03b4e5270b990e95d5a5c42) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_values);
        tmp_args_element_value_1 = par_values;
        frame_143b577be03b4e5270b990e95d5a5c42->m_frame.f_lineno = 302;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[16], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var__values == NULL);
        var__values = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(var__values);
        tmp_args_element_value_2 = var__values;
        frame_143b577be03b4e5270b990e95d5a5c42->m_frame.f_lineno = 303;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[28], tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_new == NULL);
        var_new = tmp_assign_source_2;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_143b577be03b4e5270b990e95d5a5c42, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_143b577be03b4e5270b990e95d5a5c42->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_143b577be03b4e5270b990e95d5a5c42, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_143b577be03b4e5270b990e95d5a5c42,
        type_description_1,
        par_self,
        par_values,
        var__values,
        var_new
    );


    // Release cached frame if used for exception.
    if (frame_143b577be03b4e5270b990e95d5a5c42 == cache_frame_143b577be03b4e5270b990e95d5a5c42) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_143b577be03b4e5270b990e95d5a5c42);
        cache_frame_143b577be03b4e5270b990e95d5a5c42 = NULL;
    }

    assertFrameObject(frame_143b577be03b4e5270b990e95d5a5c42);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_new);
    tmp_return_value = var_new;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var__values);
    Py_DECREF(var__values);
    var__values = NULL;
    CHECK_OBJECT(var_new);
    Py_DECREF(var_new);
    var_new = NULL;
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

    Py_XDECREF(var__values);
    var__values = NULL;
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
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$annotation$$$function__22__with_annotations(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_values = python_pars[1];
    PyObject *var_clone = NULL;
    struct Nuitka_FrameObject *frame_f7570cc434c9e23105e6a9541343deb3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_f7570cc434c9e23105e6a9541343deb3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f7570cc434c9e23105e6a9541343deb3)) {
        Py_XDECREF(cache_frame_f7570cc434c9e23105e6a9541343deb3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f7570cc434c9e23105e6a9541343deb3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f7570cc434c9e23105e6a9541343deb3 = MAKE_FUNCTION_FRAME(codeobj_f7570cc434c9e23105e6a9541343deb3, module_sqlalchemy$sql$annotation, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f7570cc434c9e23105e6a9541343deb3->m_type_description == NULL);
    frame_f7570cc434c9e23105e6a9541343deb3 = cache_frame_f7570cc434c9e23105e6a9541343deb3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f7570cc434c9e23105e6a9541343deb3);
    assert(Py_REFCNT(frame_f7570cc434c9e23105e6a9541343deb3) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[24]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_3);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 307;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_f7570cc434c9e23105e6a9541343deb3->m_frame.f_lineno = 307;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_clone == NULL);
        var_clone = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_5);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[25]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_f7570cc434c9e23105e6a9541343deb3->m_frame.f_lineno = 308;
        tmp_assattr_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_clone);
        tmp_assattr_target_1 = var_clone;
        tmp_result = SET_ATTRIBUTE_DICT_SLOT(tmp_assattr_target_1, tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_clone);
        tmp_expression_value_7 = var_clone;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_7);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[17]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_f7570cc434c9e23105e6a9541343deb3->m_frame.f_lineno = 309;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_3, mod_consts[18]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_clone);
        tmp_expression_value_9 = var_clone;
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_9);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[17]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_f7570cc434c9e23105e6a9541343deb3->m_frame.f_lineno = 310;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_4, mod_consts[19]);

        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_values);
        tmp_args_element_value_2 = par_values;
        frame_f7570cc434c9e23105e6a9541343deb3->m_frame.f_lineno = 311;
        tmp_assattr_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[21], tmp_args_element_value_2);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_clone);
        tmp_assattr_target_2 = var_clone;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[2], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f7570cc434c9e23105e6a9541343deb3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f7570cc434c9e23105e6a9541343deb3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f7570cc434c9e23105e6a9541343deb3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f7570cc434c9e23105e6a9541343deb3,
        type_description_1,
        par_self,
        par_values,
        var_clone
    );


    // Release cached frame if used for exception.
    if (frame_f7570cc434c9e23105e6a9541343deb3 == cache_frame_f7570cc434c9e23105e6a9541343deb3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f7570cc434c9e23105e6a9541343deb3);
        cache_frame_f7570cc434c9e23105e6a9541343deb3 = NULL;
    }

    assertFrameObject(frame_f7570cc434c9e23105e6a9541343deb3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_clone);
    tmp_return_value = var_clone;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_clone);
    Py_DECREF(var_clone);
    var_clone = NULL;
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

    Py_XDECREF(var_clone);
    var_clone = NULL;
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
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$annotation$$$function__25__deannotate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_values = python_pars[1];
    PyObject *par_clone = python_pars[2];
    PyObject *outline_0_var_key = NULL;
    PyObject *outline_0_var_value = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_dictcontraction_1__$0 = NULL;
    PyObject *tmp_dictcontraction_1__contraction = NULL;
    PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_44f69d420e920ec7e65d7e2889b9fd02;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_c25ce39f8b9c317d9054ccf09e8b14f3_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_c25ce39f8b9c317d9054ccf09e8b14f3_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_44f69d420e920ec7e65d7e2889b9fd02 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_44f69d420e920ec7e65d7e2889b9fd02)) {
        Py_XDECREF(cache_frame_44f69d420e920ec7e65d7e2889b9fd02);

#if _DEBUG_REFCOUNTS
        if (cache_frame_44f69d420e920ec7e65d7e2889b9fd02 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_44f69d420e920ec7e65d7e2889b9fd02 = MAKE_FUNCTION_FRAME(codeobj_44f69d420e920ec7e65d7e2889b9fd02, module_sqlalchemy$sql$annotation, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_44f69d420e920ec7e65d7e2889b9fd02->m_type_description == NULL);
    frame_44f69d420e920ec7e65d7e2889b9fd02 = cache_frame_44f69d420e920ec7e65d7e2889b9fd02;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_44f69d420e920ec7e65d7e2889b9fd02);
    assert(Py_REFCNT(frame_44f69d420e920ec7e65d7e2889b9fd02) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_values);
        tmp_cmp_expr_left_1 = par_values;
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
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[26]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[28]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 339;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[21]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 339;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_expression_value_5;
            CHECK_OBJECT(par_self);
            tmp_expression_value_5 = par_self;
            tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[2]);
            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 342;
                type_description_1 = "ooo";
                goto try_except_handler_1;
            }
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[29]);
            Py_DECREF(tmp_expression_value_4);
            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 342;
                type_description_1 = "ooo";
                goto try_except_handler_1;
            }
            frame_44f69d420e920ec7e65d7e2889b9fd02->m_frame.f_lineno = 342;
            tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
            Py_DECREF(tmp_called_value_3);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 342;
                type_description_1 = "ooo";
                goto try_except_handler_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_1 = "ooo";
                goto try_except_handler_1;
            }
            assert(tmp_dictcontraction_1__$0 == NULL);
            tmp_dictcontraction_1__$0 = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = MAKE_DICT_EMPTY();
            assert(tmp_dictcontraction_1__contraction == NULL);
            tmp_dictcontraction_1__contraction = tmp_assign_source_2;
        }
        if (isFrameUnusable(cache_frame_c25ce39f8b9c317d9054ccf09e8b14f3_2)) {
            Py_XDECREF(cache_frame_c25ce39f8b9c317d9054ccf09e8b14f3_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_c25ce39f8b9c317d9054ccf09e8b14f3_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_c25ce39f8b9c317d9054ccf09e8b14f3_2 = MAKE_FUNCTION_FRAME(codeobj_c25ce39f8b9c317d9054ccf09e8b14f3, module_sqlalchemy$sql$annotation, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_c25ce39f8b9c317d9054ccf09e8b14f3_2->m_type_description == NULL);
        frame_c25ce39f8b9c317d9054ccf09e8b14f3_2 = cache_frame_c25ce39f8b9c317d9054ccf09e8b14f3_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_c25ce39f8b9c317d9054ccf09e8b14f3_2);
        assert(Py_REFCNT(frame_c25ce39f8b9c317d9054ccf09e8b14f3_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_3;
            CHECK_OBJECT(tmp_dictcontraction_1__$0);
            tmp_next_source_1 = tmp_dictcontraction_1__$0;
            tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_3 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "ooo";
                    exception_lineno = 340;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_dictcontraction_1__iter_value_0;
                tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_3;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
            tmp_iter_arg_2 = tmp_dictcontraction_1__iter_value_0;
            tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
                tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_4;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
            tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
            if (tmp_assign_source_5 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "ooo";
                exception_lineno = 340;
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
                tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_5;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_dictcontraction$tuple_unpack_1__source_iter;
            tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
            if (tmp_assign_source_6 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "ooo";
                exception_lineno = 340;
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
                tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_6;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_iterator_name_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
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

                        type_description_2 = "ooo";
                        exception_lineno = 340;
                        goto try_except_handler_4;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[5];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "ooo";
                exception_lineno = 340;
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

        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
        tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
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

        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
        tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
        tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_2;
        // End of try:
        try_end_2:;
        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
        tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_1);
            tmp_assign_source_7 = tmp_dictcontraction$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_0_var_key;
                outline_0_var_key = tmp_assign_source_7;
                Py_INCREF(outline_0_var_key);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
        tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_2);
            tmp_assign_source_8 = tmp_dictcontraction$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_0_var_value;
                outline_0_var_value = tmp_assign_source_8;
                Py_INCREF(outline_0_var_value);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
        tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

        {
            bool tmp_condition_result_2;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(outline_0_var_key);
            tmp_cmp_expr_left_2 = outline_0_var_key;
            CHECK_OBJECT(par_values);
            tmp_cmp_expr_right_2 = par_values;
            tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;
                type_description_2 = "ooo";
                goto try_except_handler_2;
            }
            tmp_condition_result_2 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_2 != false) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
        }
        branch_yes_2:;
        CHECK_OBJECT(outline_0_var_value);
        tmp_dictset_value = outline_0_var_value;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        tmp_dictset_dict = tmp_dictcontraction_1__contraction;
        CHECK_OBJECT(outline_0_var_key);
        tmp_dictset_key = outline_0_var_key;
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_2 = "ooo";
            goto try_except_handler_2;
        }
        branch_no_2:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_2 = "ooo";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        tmp_args_element_value_2 = tmp_dictcontraction_1__contraction;
        Py_INCREF(tmp_args_element_value_2);
        goto try_return_handler_2;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
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
        try_except_handler_2:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
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
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

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
            exception_tb = MAKE_TRACEBACK(frame_c25ce39f8b9c317d9054ccf09e8b14f3_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c25ce39f8b9c317d9054ccf09e8b14f3_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c25ce39f8b9c317d9054ccf09e8b14f3_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c25ce39f8b9c317d9054ccf09e8b14f3_2,
            type_description_2,
            outline_0_var_key,
            outline_0_var_value,
            par_values
        );


        // Release cached frame if used for exception.
        if (frame_c25ce39f8b9c317d9054ccf09e8b14f3_2 == cache_frame_c25ce39f8b9c317d9054ccf09e8b14f3_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_c25ce39f8b9c317d9054ccf09e8b14f3_2);
            cache_frame_c25ce39f8b9c317d9054ccf09e8b14f3_2 = NULL;
        }

        assertFrameObject(frame_c25ce39f8b9c317d9054ccf09e8b14f3_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooo";
        goto try_except_handler_1;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        Py_XDECREF(outline_0_var_key);
        outline_0_var_key = NULL;
        Py_XDECREF(outline_0_var_value);
        outline_0_var_value = NULL;
        goto outline_result_1;
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

        Py_XDECREF(outline_0_var_key);
        outline_0_var_key = NULL;
        Py_XDECREF(outline_0_var_value);
        outline_0_var_value = NULL;
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
        exception_lineno = 340;
        goto frame_exception_exit_1;
        outline_result_1:;
        frame_44f69d420e920ec7e65d7e2889b9fd02->m_frame.f_lineno = 339;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 339;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_44f69d420e920ec7e65d7e2889b9fd02->m_frame.f_lineno = 338;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_44f69d420e920ec7e65d7e2889b9fd02, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_44f69d420e920ec7e65d7e2889b9fd02->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_44f69d420e920ec7e65d7e2889b9fd02, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_44f69d420e920ec7e65d7e2889b9fd02,
        type_description_1,
        par_self,
        par_values,
        par_clone
    );


    // Release cached frame if used for exception.
    if (frame_44f69d420e920ec7e65d7e2889b9fd02 == cache_frame_44f69d420e920ec7e65d7e2889b9fd02) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_44f69d420e920ec7e65d7e2889b9fd02);
        cache_frame_44f69d420e920ec7e65d7e2889b9fd02 = NULL;
    }

    assertFrameObject(frame_44f69d420e920ec7e65d7e2889b9fd02);

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
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);
    CHECK_OBJECT(par_clone);
    Py_DECREF(par_clone);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);
    CHECK_OBJECT(par_clone);
    Py_DECREF(par_clone);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$annotation$$$function__26__compiler_dispatch(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_visitor = python_pars[1];
    PyObject *par_kw = python_pars[2];
    struct Nuitka_FrameObject *frame_7a6e192c87f4dc2f49b223d2a75006d4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7a6e192c87f4dc2f49b223d2a75006d4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7a6e192c87f4dc2f49b223d2a75006d4)) {
        Py_XDECREF(cache_frame_7a6e192c87f4dc2f49b223d2a75006d4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7a6e192c87f4dc2f49b223d2a75006d4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7a6e192c87f4dc2f49b223d2a75006d4 = MAKE_FUNCTION_FRAME(codeobj_7a6e192c87f4dc2f49b223d2a75006d4, module_sqlalchemy$sql$annotation, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7a6e192c87f4dc2f49b223d2a75006d4->m_type_description == NULL);
    frame_7a6e192c87f4dc2f49b223d2a75006d4 = cache_frame_7a6e192c87f4dc2f49b223d2a75006d4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7a6e192c87f4dc2f49b223d2a75006d4);
    assert(Py_REFCNT(frame_7a6e192c87f4dc2f49b223d2a75006d4) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[26]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_2);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_tuple_element_1 = par_self;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_visitor);
        tmp_tuple_element_1 = par_visitor;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_kw);
        tmp_dircall_arg3_1 = par_kw;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
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
        exception_tb = MAKE_TRACEBACK(frame_7a6e192c87f4dc2f49b223d2a75006d4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7a6e192c87f4dc2f49b223d2a75006d4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7a6e192c87f4dc2f49b223d2a75006d4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7a6e192c87f4dc2f49b223d2a75006d4,
        type_description_1,
        par_self,
        par_visitor,
        par_kw
    );


    // Release cached frame if used for exception.
    if (frame_7a6e192c87f4dc2f49b223d2a75006d4 == cache_frame_7a6e192c87f4dc2f49b223d2a75006d4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7a6e192c87f4dc2f49b223d2a75006d4);
        cache_frame_7a6e192c87f4dc2f49b223d2a75006d4 = NULL;
    }

    assertFrameObject(frame_7a6e192c87f4dc2f49b223d2a75006d4);

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
    CHECK_OBJECT(par_visitor);
    Py_DECREF(par_visitor);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_visitor);
    Py_DECREF(par_visitor);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$annotation$$$function__27__constructor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_51109026fabc7458616b65463513350c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_51109026fabc7458616b65463513350c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_51109026fabc7458616b65463513350c)) {
        Py_XDECREF(cache_frame_51109026fabc7458616b65463513350c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_51109026fabc7458616b65463513350c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_51109026fabc7458616b65463513350c = MAKE_FUNCTION_FRAME(codeobj_51109026fabc7458616b65463513350c, module_sqlalchemy$sql$annotation, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_51109026fabc7458616b65463513350c->m_type_description == NULL);
    frame_51109026fabc7458616b65463513350c = cache_frame_51109026fabc7458616b65463513350c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_51109026fabc7458616b65463513350c);
    assert(Py_REFCNT(frame_51109026fabc7458616b65463513350c) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[26]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[31]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
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
        exception_tb = MAKE_TRACEBACK(frame_51109026fabc7458616b65463513350c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_51109026fabc7458616b65463513350c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_51109026fabc7458616b65463513350c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_51109026fabc7458616b65463513350c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_51109026fabc7458616b65463513350c == cache_frame_51109026fabc7458616b65463513350c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_51109026fabc7458616b65463513350c);
        cache_frame_51109026fabc7458616b65463513350c = NULL;
    }

    assertFrameObject(frame_51109026fabc7458616b65463513350c);

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


static PyObject *impl_sqlalchemy$sql$annotation$$$function__28__clone(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_kw = python_pars[1];
    PyObject *var_clone = NULL;
    struct Nuitka_FrameObject *frame_5798fc1db9c7f4e6cbccee768e79aae9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_5798fc1db9c7f4e6cbccee768e79aae9 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5798fc1db9c7f4e6cbccee768e79aae9)) {
        Py_XDECREF(cache_frame_5798fc1db9c7f4e6cbccee768e79aae9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5798fc1db9c7f4e6cbccee768e79aae9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5798fc1db9c7f4e6cbccee768e79aae9 = MAKE_FUNCTION_FRAME(codeobj_5798fc1db9c7f4e6cbccee768e79aae9, module_sqlalchemy$sql$annotation, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5798fc1db9c7f4e6cbccee768e79aae9->m_type_description == NULL);
    frame_5798fc1db9c7f4e6cbccee768e79aae9 = cache_frame_5798fc1db9c7f4e6cbccee768e79aae9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5798fc1db9c7f4e6cbccee768e79aae9);
    assert(Py_REFCNT(frame_5798fc1db9c7f4e6cbccee768e79aae9) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_dircall_arg2_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[26]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_kw);
        tmp_dircall_arg2_1 = par_kw;
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_1 = impl___main__$$$function__8_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_clone == NULL);
        var_clone = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_clone);
        tmp_cmp_expr_left_1 = var_clone;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[26]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(par_self);
    tmp_return_value = par_self;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_clone);
        tmp_expression_value_5 = var_clone;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_5);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[32]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_6);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 367;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_5798fc1db9c7f4e6cbccee768e79aae9->m_frame.f_lineno = 367;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_7);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_clone);
        tmp_args_element_value_2 = var_clone;
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[2]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 368;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_5798fc1db9c7f4e6cbccee768e79aae9->m_frame.f_lineno = 368;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_5798fc1db9c7f4e6cbccee768e79aae9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5798fc1db9c7f4e6cbccee768e79aae9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5798fc1db9c7f4e6cbccee768e79aae9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5798fc1db9c7f4e6cbccee768e79aae9,
        type_description_1,
        par_self,
        par_kw,
        var_clone
    );


    // Release cached frame if used for exception.
    if (frame_5798fc1db9c7f4e6cbccee768e79aae9 == cache_frame_5798fc1db9c7f4e6cbccee768e79aae9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5798fc1db9c7f4e6cbccee768e79aae9);
        cache_frame_5798fc1db9c7f4e6cbccee768e79aae9 = NULL;
    }

    assertFrameObject(frame_5798fc1db9c7f4e6cbccee768e79aae9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_clone);
    var_clone = NULL;
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

    Py_XDECREF(var_clone);
    var_clone = NULL;
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
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$annotation$$$function__29___reduce__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_691c62ff4a9da2f9fb092f7d14348103;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_691c62ff4a9da2f9fb092f7d14348103 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_691c62ff4a9da2f9fb092f7d14348103)) {
        Py_XDECREF(cache_frame_691c62ff4a9da2f9fb092f7d14348103);

#if _DEBUG_REFCOUNTS
        if (cache_frame_691c62ff4a9da2f9fb092f7d14348103 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_691c62ff4a9da2f9fb092f7d14348103 = MAKE_FUNCTION_FRAME(codeobj_691c62ff4a9da2f9fb092f7d14348103, module_sqlalchemy$sql$annotation, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_691c62ff4a9da2f9fb092f7d14348103->m_type_description == NULL);
    frame_691c62ff4a9da2f9fb092f7d14348103 = cache_frame_691c62ff4a9da2f9fb092f7d14348103;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_691c62ff4a9da2f9fb092f7d14348103);
    assert(Py_REFCNT(frame_691c62ff4a9da2f9fb092f7d14348103) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_expression_value_2;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[26]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 371;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_3;
                PyTuple_SET_ITEM(tmp_tuple_element_1, 0, tmp_tuple_element_2);
                CHECK_OBJECT(par_self);
                tmp_expression_value_3 = par_self;
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[2]);
                if (tmp_tuple_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 371;
                    type_description_1 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 1, tmp_tuple_element_2);
            }
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_691c62ff4a9da2f9fb092f7d14348103, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_691c62ff4a9da2f9fb092f7d14348103->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_691c62ff4a9da2f9fb092f7d14348103, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_691c62ff4a9da2f9fb092f7d14348103,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_691c62ff4a9da2f9fb092f7d14348103 == cache_frame_691c62ff4a9da2f9fb092f7d14348103) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_691c62ff4a9da2f9fb092f7d14348103);
        cache_frame_691c62ff4a9da2f9fb092f7d14348103 = NULL;
    }

    assertFrameObject(frame_691c62ff4a9da2f9fb092f7d14348103);

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


static PyObject *impl_sqlalchemy$sql$annotation$$$function__30___hash__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_2214a4956ed2cad4880c60317313048a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2214a4956ed2cad4880c60317313048a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2214a4956ed2cad4880c60317313048a)) {
        Py_XDECREF(cache_frame_2214a4956ed2cad4880c60317313048a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2214a4956ed2cad4880c60317313048a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2214a4956ed2cad4880c60317313048a = MAKE_FUNCTION_FRAME(codeobj_2214a4956ed2cad4880c60317313048a, module_sqlalchemy$sql$annotation, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2214a4956ed2cad4880c60317313048a->m_type_description == NULL);
    frame_2214a4956ed2cad4880c60317313048a = cache_frame_2214a4956ed2cad4880c60317313048a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2214a4956ed2cad4880c60317313048a);
    assert(Py_REFCNT(frame_2214a4956ed2cad4880c60317313048a) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[27]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
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
        exception_tb = MAKE_TRACEBACK(frame_2214a4956ed2cad4880c60317313048a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2214a4956ed2cad4880c60317313048a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2214a4956ed2cad4880c60317313048a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2214a4956ed2cad4880c60317313048a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_2214a4956ed2cad4880c60317313048a == cache_frame_2214a4956ed2cad4880c60317313048a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2214a4956ed2cad4880c60317313048a);
        cache_frame_2214a4956ed2cad4880c60317313048a = NULL;
    }

    assertFrameObject(frame_2214a4956ed2cad4880c60317313048a);

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


static PyObject *impl_sqlalchemy$sql$annotation$$$function__31___eq__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_818e1c8970d52f6f31aed6b574e47f3e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_818e1c8970d52f6f31aed6b574e47f3e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_818e1c8970d52f6f31aed6b574e47f3e)) {
        Py_XDECREF(cache_frame_818e1c8970d52f6f31aed6b574e47f3e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_818e1c8970d52f6f31aed6b574e47f3e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_818e1c8970d52f6f31aed6b574e47f3e = MAKE_FUNCTION_FRAME(codeobj_818e1c8970d52f6f31aed6b574e47f3e, module_sqlalchemy$sql$annotation, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_818e1c8970d52f6f31aed6b574e47f3e->m_type_description == NULL);
    frame_818e1c8970d52f6f31aed6b574e47f3e = cache_frame_818e1c8970d52f6f31aed6b574e47f3e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_818e1c8970d52f6f31aed6b574e47f3e);
    assert(Py_REFCNT(frame_818e1c8970d52f6f31aed6b574e47f3e) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[33]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 377;
            type_description_1 = "oo";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[26]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_2);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        CHECK_OBJECT(par_other);
        tmp_args_element_value_2 = par_other;
        frame_818e1c8970d52f6f31aed6b574e47f3e->m_frame.f_lineno = 378;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[34],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_hash_arg_1;
        PyObject *tmp_hash_arg_2;
        CHECK_OBJECT(par_other);
        tmp_hash_arg_1 = par_other;
        tmp_cmp_expr_left_1 = BUILTIN_HASH(tmp_hash_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_hash_arg_2 = par_self;
        tmp_cmp_expr_right_1 = BUILTIN_HASH(tmp_hash_arg_2);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 380;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_818e1c8970d52f6f31aed6b574e47f3e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_818e1c8970d52f6f31aed6b574e47f3e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_818e1c8970d52f6f31aed6b574e47f3e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_818e1c8970d52f6f31aed6b574e47f3e,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_818e1c8970d52f6f31aed6b574e47f3e == cache_frame_818e1c8970d52f6f31aed6b574e47f3e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_818e1c8970d52f6f31aed6b574e47f3e);
        cache_frame_818e1c8970d52f6f31aed6b574e47f3e = NULL;
    }

    assertFrameObject(frame_818e1c8970d52f6f31aed6b574e47f3e);

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


static PyObject *impl_sqlalchemy$sql$annotation$$$function__32_entity_namespace(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_83fae5df686c79ad880e9d9a8f04a9b4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_83fae5df686c79ad880e9d9a8f04a9b4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_83fae5df686c79ad880e9d9a8f04a9b4)) {
        Py_XDECREF(cache_frame_83fae5df686c79ad880e9d9a8f04a9b4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_83fae5df686c79ad880e9d9a8f04a9b4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_83fae5df686c79ad880e9d9a8f04a9b4 = MAKE_FUNCTION_FRAME(codeobj_83fae5df686c79ad880e9d9a8f04a9b4, module_sqlalchemy$sql$annotation, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_83fae5df686c79ad880e9d9a8f04a9b4->m_type_description == NULL);
    frame_83fae5df686c79ad880e9d9a8f04a9b4 = cache_frame_83fae5df686c79ad880e9d9a8f04a9b4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_83fae5df686c79ad880e9d9a8f04a9b4);
    assert(Py_REFCNT(frame_83fae5df686c79ad880e9d9a8f04a9b4) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        tmp_cmp_expr_left_1 = mod_consts[35];
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "o";
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
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[2]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[35];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_83fae5df686c79ad880e9d9a8f04a9b4->m_frame.f_lineno = 385;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[35]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[26]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[35]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
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
        exception_tb = MAKE_TRACEBACK(frame_83fae5df686c79ad880e9d9a8f04a9b4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_83fae5df686c79ad880e9d9a8f04a9b4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_83fae5df686c79ad880e9d9a8f04a9b4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_83fae5df686c79ad880e9d9a8f04a9b4,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_83fae5df686c79ad880e9d9a8f04a9b4 == cache_frame_83fae5df686c79ad880e9d9a8f04a9b4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_83fae5df686c79ad880e9d9a8f04a9b4);
        cache_frame_83fae5df686c79ad880e9d9a8f04a9b4 = NULL;
    }

    assertFrameObject(frame_83fae5df686c79ad880e9d9a8f04a9b4);

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


static PyObject *impl_sqlalchemy$sql$annotation$$$function__33__deep_annotate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_element = python_pars[0];
    struct Nuitka_CellObject *par_annotations = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_exclude = Nuitka_Cell_New1(python_pars[2]);
    struct Nuitka_CellObject *par_detect_subquery_cols = Nuitka_Cell_New1(python_pars[3]);
    struct Nuitka_CellObject *par_ind_cols_on_fromclause = Nuitka_Cell_New1(python_pars[4]);
    struct Nuitka_CellObject *var_cloned_ids = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_clone = Nuitka_Cell_Empty();
    struct Nuitka_FrameObject *frame_a8080681cd2087e193a6aeefc8098cad;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a8080681cd2087e193a6aeefc8098cad = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_DICT_EMPTY();
        assert(Nuitka_Cell_GET(var_cloned_ids) == NULL);
        PyCell_SET(var_cloned_ids, tmp_assign_source_1);

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_annotations_1;
        struct Nuitka_CellObject *tmp_closure_1[6];
        tmp_annotations_1 = DICT_COPY(mod_consts[38]);

        tmp_closure_1[0] = par_annotations;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = var_clone;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = var_cloned_ids;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = par_detect_subquery_cols;
        Py_INCREF(tmp_closure_1[3]);
        tmp_closure_1[4] = par_exclude;
        Py_INCREF(tmp_closure_1[4]);
        tmp_closure_1[5] = par_ind_cols_on_fromclause;
        Py_INCREF(tmp_closure_1[5]);

        tmp_assign_source_2 = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__33__deep_annotate$$$function__1_clone(tmp_annotations_1, tmp_closure_1);

        assert(Nuitka_Cell_GET(var_clone) == NULL);
        PyCell_SET(var_clone, tmp_assign_source_2);

    }
    // Tried code:
    if (isFrameUnusable(cache_frame_a8080681cd2087e193a6aeefc8098cad)) {
        Py_XDECREF(cache_frame_a8080681cd2087e193a6aeefc8098cad);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a8080681cd2087e193a6aeefc8098cad == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a8080681cd2087e193a6aeefc8098cad = MAKE_FUNCTION_FRAME(codeobj_a8080681cd2087e193a6aeefc8098cad, module_sqlalchemy$sql$annotation, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a8080681cd2087e193a6aeefc8098cad->m_type_description == NULL);
    frame_a8080681cd2087e193a6aeefc8098cad = cache_frame_a8080681cd2087e193a6aeefc8098cad;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a8080681cd2087e193a6aeefc8098cad);
    assert(Py_REFCNT(frame_a8080681cd2087e193a6aeefc8098cad) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_element);
        tmp_cmp_expr_left_1 = par_element;
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
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "occcccc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "occcccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_clone));
        tmp_called_value_2 = Nuitka_Cell_GET(var_clone);
        CHECK_OBJECT(par_element);
        tmp_args_element_value_3 = par_element;
        frame_a8080681cd2087e193a6aeefc8098cad->m_frame.f_lineno = 463;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "occcccc";
            goto frame_exception_exit_1;
        }
        frame_a8080681cd2087e193a6aeefc8098cad->m_frame.f_lineno = 463;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "occcccc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_element;
            assert(old != NULL);
            par_element = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a8080681cd2087e193a6aeefc8098cad, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a8080681cd2087e193a6aeefc8098cad->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a8080681cd2087e193a6aeefc8098cad, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a8080681cd2087e193a6aeefc8098cad,
        type_description_1,
        par_element,
        par_annotations,
        par_exclude,
        par_detect_subquery_cols,
        par_ind_cols_on_fromclause,
        var_cloned_ids,
        var_clone
    );


    // Release cached frame if used for exception.
    if (frame_a8080681cd2087e193a6aeefc8098cad == cache_frame_a8080681cd2087e193a6aeefc8098cad) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a8080681cd2087e193a6aeefc8098cad);
        cache_frame_a8080681cd2087e193a6aeefc8098cad = NULL;
    }

    assertFrameObject(frame_a8080681cd2087e193a6aeefc8098cad);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        {
            PyObject *old = Nuitka_Cell_GET(var_clone);
            PyCell_SET(var_clone, tmp_assign_source_4);
            Py_INCREF(tmp_assign_source_4);
            Py_XDECREF(old);
        }

    }
    CHECK_OBJECT(par_element);
    tmp_return_value = par_element;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);
    par_element = NULL;
    CHECK_OBJECT(var_cloned_ids);
    Py_DECREF(var_cloned_ids);
    var_cloned_ids = NULL;
    CHECK_OBJECT(var_clone);
    Py_DECREF(var_clone);
    var_clone = NULL;
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

    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);
    par_element = NULL;
    CHECK_OBJECT(var_cloned_ids);
    Py_DECREF(var_cloned_ids);
    var_cloned_ids = NULL;
    CHECK_OBJECT(var_clone);
    Py_DECREF(var_clone);
    var_clone = NULL;
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
    CHECK_OBJECT(par_annotations);
    Py_DECREF(par_annotations);
    CHECK_OBJECT(par_exclude);
    Py_DECREF(par_exclude);
    CHECK_OBJECT(par_detect_subquery_cols);
    Py_DECREF(par_detect_subquery_cols);
    CHECK_OBJECT(par_ind_cols_on_fromclause);
    Py_DECREF(par_ind_cols_on_fromclause);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_annotations);
    Py_DECREF(par_annotations);
    CHECK_OBJECT(par_exclude);
    Py_DECREF(par_exclude);
    CHECK_OBJECT(par_detect_subquery_cols);
    Py_DECREF(par_detect_subquery_cols);
    CHECK_OBJECT(par_ind_cols_on_fromclause);
    Py_DECREF(par_ind_cols_on_fromclause);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$annotation$$$function__33__deep_annotate$$$function__1_clone(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_elem = python_pars[0];
    PyObject *par_kw = python_pars[1];
    PyObject *var_id_ = NULL;
    PyObject *var_newelem = NULL;
    struct Nuitka_FrameObject *frame_b6e32e3a1334be5be8b8294396e021a2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_dictset_value;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_b6e32e3a1334be5be8b8294396e021a2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b6e32e3a1334be5be8b8294396e021a2)) {
        Py_XDECREF(cache_frame_b6e32e3a1334be5be8b8294396e021a2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b6e32e3a1334be5be8b8294396e021a2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b6e32e3a1334be5be8b8294396e021a2 = MAKE_FUNCTION_FRAME(codeobj_b6e32e3a1334be5be8b8294396e021a2, module_sqlalchemy$sql$annotation, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b6e32e3a1334be5be8b8294396e021a2->m_type_description == NULL);
    frame_b6e32e3a1334be5be8b8294396e021a2 = cache_frame_b6e32e3a1334be5be8b8294396e021a2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b6e32e3a1334be5be8b8294396e021a2);
    assert(Py_REFCNT(frame_b6e32e3a1334be5be8b8294396e021a2) == 2);

    // Framed code:
    if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

        FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[43]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 435;
        type_description_1 = "oooocccccc";
        goto frame_exception_exit_1;
    }

    tmp_dictset_value = Nuitka_Cell_GET(self->m_closure[3]);
    CHECK_OBJECT(par_kw);
    tmp_dictset_dict = par_kw;
    tmp_dictset_key = mod_consts[43];
    assert(PyDict_CheckExact(tmp_dictset_dict));
    tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

    assert(!(tmp_res != 0));
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_id_arg_1;
        CHECK_OBJECT(par_elem);
        tmp_id_arg_1 = par_elem;
        tmp_assign_source_1 = PyLong_FromVoidPtr(tmp_id_arg_1);
        assert(!(tmp_assign_source_1 == NULL));
        assert(var_id_ == NULL);
        var_id_ = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_id_);
        tmp_cmp_expr_left_1 = var_id_;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 438;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "oooocccccc";
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
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 439;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
        CHECK_OBJECT(var_id_);
        tmp_subscript_value_1 = var_id_;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_2;
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 442;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(self->m_closure[4]));
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_elem);
        tmp_expression_value_2 = par_elem;
        tmp_attribute_value_1 = mod_consts[46];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_2, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(par_elem);
        tmp_expression_value_4 = par_elem;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[46]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[47]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 444;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[4]);
        frame_b6e32e3a1334be5be8b8294396e021a2->m_frame.f_lineno = 444;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 444;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg3_1;
        if (par_elem == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 446;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = par_elem;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[14]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[39];
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 446;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kw);
        tmp_dircall_arg3_1 = par_kw;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_2 = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }
        assert(var_newelem == NULL);
        var_newelem = tmp_assign_source_2;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_6;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 447;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_2 = Nuitka_Cell_GET(self->m_closure[0]);
        if (par_elem == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 447;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = par_elem;
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[2]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;
            type_description_1 = "oooocccccc";
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
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        int tmp_truth_name_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_4;
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 448;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_3 = CHECK_IF_TRUE(Nuitka_Cell_GET(self->m_closure[3]));
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        if (par_elem == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 448;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = par_elem;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[50]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 448;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_3 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        tmp_condition_result_4 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_4 = tmp_and_left_value_3;
        and_end_3:;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dircall_arg3_2;
        PyObject *tmp_args_element_value_2;
        if (par_elem == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 449;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = par_elem;
        tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[14]);
        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = mod_consts[39];
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_dircall_arg1_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 449;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_dircall_arg2_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kw);
        tmp_dircall_arg3_2 = par_kw;
        Py_INCREF(tmp_dircall_arg3_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
            tmp_expression_value_8 = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[51]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 449;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_b6e32e3a1334be5be8b8294396e021a2->m_frame.f_lineno = 449;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }
        assert(var_newelem == NULL);
        var_newelem = tmp_assign_source_3;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_3;
        if (par_elem == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 451;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_10 = par_elem;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[51]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 451;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_b6e32e3a1334be5be8b8294396e021a2->m_frame.f_lineno = 451;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }
        assert(var_newelem == NULL);
        var_newelem = tmp_assign_source_4;
    }
    branch_end_4:;
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_5;
        if (par_elem == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 453;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_5 = par_elem;
        assert(var_newelem == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_newelem = tmp_assign_source_5;
    }
    branch_end_3:;
    branch_end_2:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        CHECK_OBJECT(var_newelem);
        tmp_expression_value_11 = var_newelem;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[52]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 456;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_value_0_1 = Nuitka_Cell_GET(self->m_closure[1]);
        if (Nuitka_Cell_GET(self->m_closure[5]) == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 456;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_value_1_1 = Nuitka_Cell_GET(self->m_closure[5]);
        frame_b6e32e3a1334be5be8b8294396e021a2->m_frame.f_lineno = 455;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_call_result_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_4, kw_values, mod_consts[54]);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_newelem);
        tmp_ass_subvalue_1 = var_newelem;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 459;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_1 = Nuitka_Cell_GET(self->m_closure[2]);
        CHECK_OBJECT(var_id_);
        tmp_ass_subscript_1 = var_id_;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "oooocccccc";
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
        exception_tb = MAKE_TRACEBACK(frame_b6e32e3a1334be5be8b8294396e021a2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b6e32e3a1334be5be8b8294396e021a2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b6e32e3a1334be5be8b8294396e021a2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b6e32e3a1334be5be8b8294396e021a2,
        type_description_1,
        par_elem,
        par_kw,
        var_id_,
        var_newelem,
        self->m_closure[3],
        self->m_closure[2],
        self->m_closure[4],
        self->m_closure[1],
        self->m_closure[0],
        self->m_closure[5]
    );


    // Release cached frame if used for exception.
    if (frame_b6e32e3a1334be5be8b8294396e021a2 == cache_frame_b6e32e3a1334be5be8b8294396e021a2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b6e32e3a1334be5be8b8294396e021a2);
        cache_frame_b6e32e3a1334be5be8b8294396e021a2 = NULL;
    }

    assertFrameObject(frame_b6e32e3a1334be5be8b8294396e021a2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_newelem);
    tmp_return_value = var_newelem;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_id_);
    Py_DECREF(var_id_);
    var_id_ = NULL;
    Py_XDECREF(var_newelem);
    var_newelem = NULL;
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

    Py_XDECREF(var_id_);
    var_id_ = NULL;
    Py_XDECREF(var_newelem);
    var_newelem = NULL;
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
    CHECK_OBJECT(par_elem);
    Py_DECREF(par_elem);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_elem);
    Py_DECREF(par_elem);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$annotation$$$function__36__deep_deannotate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_element = python_pars[0];
    struct Nuitka_CellObject *par_values = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *var_cloned = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_clone = Nuitka_Cell_Empty();
    struct Nuitka_FrameObject *frame_5799fd4b147ef81d0e5790ee05a629f7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5799fd4b147ef81d0e5790ee05a629f7 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_DICT_EMPTY();
        assert(Nuitka_Cell_GET(var_cloned) == NULL);
        PyCell_SET(var_cloned, tmp_assign_source_1);

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_annotations_1;
        struct Nuitka_CellObject *tmp_closure_1[3];
        tmp_annotations_1 = DICT_COPY(mod_consts[38]);

        tmp_closure_1[0] = var_clone;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = var_cloned;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_values;
        Py_INCREF(tmp_closure_1[2]);

        tmp_assign_source_2 = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__36__deep_deannotate$$$function__1_clone(tmp_annotations_1, tmp_closure_1);

        assert(Nuitka_Cell_GET(var_clone) == NULL);
        PyCell_SET(var_clone, tmp_assign_source_2);

    }
    // Tried code:
    if (isFrameUnusable(cache_frame_5799fd4b147ef81d0e5790ee05a629f7)) {
        Py_XDECREF(cache_frame_5799fd4b147ef81d0e5790ee05a629f7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5799fd4b147ef81d0e5790ee05a629f7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5799fd4b147ef81d0e5790ee05a629f7 = MAKE_FUNCTION_FRAME(codeobj_5799fd4b147ef81d0e5790ee05a629f7, module_sqlalchemy$sql$annotation, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5799fd4b147ef81d0e5790ee05a629f7->m_type_description == NULL);
    frame_5799fd4b147ef81d0e5790ee05a629f7 = cache_frame_5799fd4b147ef81d0e5790ee05a629f7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5799fd4b147ef81d0e5790ee05a629f7);
    assert(Py_REFCNT(frame_5799fd4b147ef81d0e5790ee05a629f7) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_element);
        tmp_cmp_expr_left_1 = par_element;
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
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_clone));
        tmp_called_value_2 = Nuitka_Cell_GET(var_clone);
        CHECK_OBJECT(par_element);
        tmp_args_element_value_3 = par_element;
        frame_5799fd4b147ef81d0e5790ee05a629f7->m_frame.f_lineno = 505;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        frame_5799fd4b147ef81d0e5790ee05a629f7->m_frame.f_lineno = 505;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_element;
            assert(old != NULL);
            par_element = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5799fd4b147ef81d0e5790ee05a629f7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5799fd4b147ef81d0e5790ee05a629f7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5799fd4b147ef81d0e5790ee05a629f7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5799fd4b147ef81d0e5790ee05a629f7,
        type_description_1,
        par_element,
        par_values,
        var_cloned,
        var_clone
    );


    // Release cached frame if used for exception.
    if (frame_5799fd4b147ef81d0e5790ee05a629f7 == cache_frame_5799fd4b147ef81d0e5790ee05a629f7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5799fd4b147ef81d0e5790ee05a629f7);
        cache_frame_5799fd4b147ef81d0e5790ee05a629f7 = NULL;
    }

    assertFrameObject(frame_5799fd4b147ef81d0e5790ee05a629f7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        {
            PyObject *old = Nuitka_Cell_GET(var_clone);
            PyCell_SET(var_clone, tmp_assign_source_4);
            Py_INCREF(tmp_assign_source_4);
            Py_XDECREF(old);
        }

    }
    CHECK_OBJECT(par_element);
    tmp_return_value = par_element;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);
    par_element = NULL;
    CHECK_OBJECT(var_cloned);
    Py_DECREF(var_cloned);
    var_cloned = NULL;
    CHECK_OBJECT(var_clone);
    Py_DECREF(var_clone);
    var_clone = NULL;
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

    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);
    par_element = NULL;
    CHECK_OBJECT(var_cloned);
    Py_DECREF(var_cloned);
    var_cloned = NULL;
    CHECK_OBJECT(var_clone);
    Py_DECREF(var_clone);
    var_clone = NULL;
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
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$annotation$$$function__36__deep_deannotate$$$function__1_clone(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_elem = python_pars[0];
    PyObject *par_kw = python_pars[1];
    PyObject *var_key = NULL;
    PyObject *var_newelem = NULL;
    struct Nuitka_FrameObject *frame_28b4785922a1ac2c34daefd2c711af19;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_28b4785922a1ac2c34daefd2c711af19 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_28b4785922a1ac2c34daefd2c711af19)) {
        Py_XDECREF(cache_frame_28b4785922a1ac2c34daefd2c711af19);

#if _DEBUG_REFCOUNTS
        if (cache_frame_28b4785922a1ac2c34daefd2c711af19 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_28b4785922a1ac2c34daefd2c711af19 = MAKE_FUNCTION_FRAME(codeobj_28b4785922a1ac2c34daefd2c711af19, module_sqlalchemy$sql$annotation, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_28b4785922a1ac2c34daefd2c711af19->m_type_description == NULL);
    frame_28b4785922a1ac2c34daefd2c711af19 = cache_frame_28b4785922a1ac2c34daefd2c711af19;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_28b4785922a1ac2c34daefd2c711af19);
    assert(Py_REFCNT(frame_28b4785922a1ac2c34daefd2c711af19) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 491;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(self->m_closure[2]));
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "ooooccc";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_id_arg_1;
        CHECK_OBJECT(par_elem);
        tmp_id_arg_1 = par_elem;
        tmp_assign_source_1 = PyLong_FromVoidPtr(tmp_id_arg_1);
        assert(!(tmp_assign_source_1 == NULL));
        assert(var_key == NULL);
        var_key = tmp_assign_source_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(par_elem);
        tmp_assign_source_2 = par_elem;
        assert(var_key == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_key = tmp_assign_source_2;
    }
    branch_end_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_key);
        tmp_cmp_expr_left_1 = var_key;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 496;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;
            type_description_1 = "ooooccc";
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
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        if (par_elem == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 497;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = par_elem;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[59]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 497;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_value_0_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_kw_call_value_1_1 = Py_True;
        frame_28b4785922a1ac2c34daefd2c711af19->m_frame.f_lineno = 497;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_assign_source_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[60]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
        assert(var_newelem == NULL);
        var_newelem = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_2;
        CHECK_OBJECT(var_newelem);
        tmp_expression_value_2 = var_newelem;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[52]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 498;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_value_0_2 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_28b4785922a1ac2c34daefd2c711af19->m_frame.f_lineno = 498;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[61]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_newelem);
        tmp_ass_subvalue_1 = var_newelem;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 499;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_1 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(var_key);
        tmp_ass_subscript_1 = var_key;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
    }
    CHECK_OBJECT(var_newelem);
    tmp_return_value = var_newelem;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 502;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(var_key);
        tmp_subscript_value_1 = var_key;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_28b4785922a1ac2c34daefd2c711af19, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_28b4785922a1ac2c34daefd2c711af19->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_28b4785922a1ac2c34daefd2c711af19, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_28b4785922a1ac2c34daefd2c711af19,
        type_description_1,
        par_elem,
        par_kw,
        var_key,
        var_newelem,
        self->m_closure[2],
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_28b4785922a1ac2c34daefd2c711af19 == cache_frame_28b4785922a1ac2c34daefd2c711af19) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_28b4785922a1ac2c34daefd2c711af19);
        cache_frame_28b4785922a1ac2c34daefd2c711af19 = NULL;
    }

    assertFrameObject(frame_28b4785922a1ac2c34daefd2c711af19);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_key);
    Py_DECREF(var_key);
    var_key = NULL;
    Py_XDECREF(var_newelem);
    var_newelem = NULL;
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

    Py_XDECREF(var_key);
    var_key = NULL;
    Py_XDECREF(var_newelem);
    var_newelem = NULL;
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
    CHECK_OBJECT(par_elem);
    Py_DECREF(par_elem);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_elem);
    Py_DECREF(par_elem);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$annotation$$$function__37__shallow_annotate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_element = python_pars[0];
    PyObject *par_annotations = python_pars[1];
    struct Nuitka_FrameObject *frame_a43a71ccd33539451e92e2f6863d3cbb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_a43a71ccd33539451e92e2f6863d3cbb = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a43a71ccd33539451e92e2f6863d3cbb)) {
        Py_XDECREF(cache_frame_a43a71ccd33539451e92e2f6863d3cbb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a43a71ccd33539451e92e2f6863d3cbb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a43a71ccd33539451e92e2f6863d3cbb = MAKE_FUNCTION_FRAME(codeobj_a43a71ccd33539451e92e2f6863d3cbb, module_sqlalchemy$sql$annotation, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a43a71ccd33539451e92e2f6863d3cbb->m_type_description == NULL);
    frame_a43a71ccd33539451e92e2f6863d3cbb = cache_frame_a43a71ccd33539451e92e2f6863d3cbb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a43a71ccd33539451e92e2f6863d3cbb);
    assert(Py_REFCNT(frame_a43a71ccd33539451e92e2f6863d3cbb) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_element);
        tmp_called_instance_1 = par_element;
        CHECK_OBJECT(par_annotations);
        tmp_args_element_value_1 = par_annotations;
        frame_a43a71ccd33539451e92e2f6863d3cbb->m_frame.f_lineno = 518;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[51], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_element;
            assert(old != NULL);
            par_element = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_element);
        tmp_called_instance_2 = par_element;
        frame_a43a71ccd33539451e92e2f6863d3cbb->m_frame.f_lineno = 519;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[52]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a43a71ccd33539451e92e2f6863d3cbb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a43a71ccd33539451e92e2f6863d3cbb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a43a71ccd33539451e92e2f6863d3cbb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a43a71ccd33539451e92e2f6863d3cbb,
        type_description_1,
        par_element,
        par_annotations
    );


    // Release cached frame if used for exception.
    if (frame_a43a71ccd33539451e92e2f6863d3cbb == cache_frame_a43a71ccd33539451e92e2f6863d3cbb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a43a71ccd33539451e92e2f6863d3cbb);
        cache_frame_a43a71ccd33539451e92e2f6863d3cbb = NULL;
    }

    assertFrameObject(frame_a43a71ccd33539451e92e2f6863d3cbb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(par_element);
    tmp_return_value = par_element;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);
    par_element = NULL;
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

    Py_XDECREF(par_element);
    par_element = NULL;
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
    CHECK_OBJECT(par_annotations);
    Py_DECREF(par_annotations);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_annotations);
    Py_DECREF(par_annotations);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$annotation$$$function__38__new_annotation_type(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_base_cls = python_pars[1];
    PyObject *var_super_ = NULL;
    PyObject *var_anno_cls = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_881ad33256a620724e8e01fb5f338537;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_881ad33256a620724e8e01fb5f338537 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_881ad33256a620724e8e01fb5f338537)) {
        Py_XDECREF(cache_frame_881ad33256a620724e8e01fb5f338537);

#if _DEBUG_REFCOUNTS
        if (cache_frame_881ad33256a620724e8e01fb5f338537 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_881ad33256a620724e8e01fb5f338537 = MAKE_FUNCTION_FRAME(codeobj_881ad33256a620724e8e01fb5f338537, module_sqlalchemy$sql$annotation, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_881ad33256a620724e8e01fb5f338537->m_type_description == NULL);
    frame_881ad33256a620724e8e01fb5f338537 = cache_frame_881ad33256a620724e8e01fb5f338537;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_881ad33256a620724e8e01fb5f338537);
    assert(Py_REFCNT(frame_881ad33256a620724e8e01fb5f338537) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_issubclass_cls_1;
        PyObject *tmp_issubclass_classes_1;
        CHECK_OBJECT(par_cls);
        tmp_issubclass_cls_1 = par_cls;
        tmp_issubclass_classes_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_issubclass_classes_1 == NULL)) {
            tmp_issubclass_classes_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_issubclass_classes_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_1, tmp_issubclass_classes_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;
            type_description_1 = "oooo";
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
    CHECK_OBJECT(par_cls);
    tmp_return_value = par_cls;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_cls);
        tmp_cmp_expr_left_1 = par_cls;
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
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
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_subscript_value_1 = par_cls;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;
    branch_end_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_2 = par_cls;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[63]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;
            type_description_1 = "oooo";
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
                type_description_1 = "oooo";
                exception_lineno = 535;
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
            PyObject *old = var_super_;
            var_super_ = tmp_assign_source_3;
            Py_INCREF(var_super_);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_super_);
        tmp_cmp_expr_left_2 = var_super_;
        tmp_cmp_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
            tmp_cmp_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_1 = "oooo";
            goto try_except_handler_2;
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
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_super_);
        tmp_subscript_value_2 = var_super_;
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = par_base_cls;
            assert(old != NULL);
            par_base_cls = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    goto loop_end_1;
    branch_no_3:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 535;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_type_name_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_bases_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dict_arg_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_subscript_value_3 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_subscript_value_3 == NULL)) {
            tmp_subscript_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_subscript_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_3);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_mod_expr_left_1 = mod_consts[65];
        CHECK_OBJECT(par_cls);
        tmp_expression_value_5 = par_cls;
        tmp_mod_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[66]);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 545;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_type_name_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_type_name_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 545;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(par_base_cls);
        tmp_tuple_element_1 = par_base_cls;
        tmp_bases_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_bases_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_cls);
        tmp_tuple_element_1 = par_cls;
        PyTuple_SET_ITEM0(tmp_bases_value_1, 1, tmp_tuple_element_1);
        tmp_dict_arg_value_1 = MAKE_DICT_EMPTY();
        tmp_args_element_value_2 = BUILTIN_TYPE3(mod_consts[67], tmp_type_name_value_1, tmp_bases_value_1, tmp_dict_arg_value_1);
        Py_DECREF(tmp_type_name_value_1);
        Py_DECREF(tmp_bases_value_1);
        Py_DECREF(tmp_dict_arg_value_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 545;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        frame_881ad33256a620724e8e01fb5f338537->m_frame.f_lineno = 543;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        assert(tmp_assign_unpack_1__assign_source == NULL);
        tmp_assign_unpack_1__assign_source = tmp_assign_source_5;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_ass_subvalue_1 = tmp_assign_unpack_1__assign_source;
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(par_cls);
        tmp_ass_subscript_1 = par_cls;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
    }
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

    Py_XDECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_6 = tmp_assign_unpack_1__assign_source;
        assert(var_anno_cls == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_anno_cls = tmp_assign_source_6;
    }
    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_anno_cls);
        tmp_ass_subvalue_2 = var_anno_cls;
        tmp_ass_subscribed_2 = (PyObject *)moduledict_sqlalchemy$sql$annotation;
        tmp_mod_expr_left_2 = mod_consts[65];
        CHECK_OBJECT(par_cls);
        tmp_expression_value_6 = par_cls;
        tmp_mod_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[66]);
        if (tmp_mod_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_ass_subscript_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscript_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_7;
        tmp_cmp_expr_left_3 = mod_consts[68];
        CHECK_OBJECT(par_cls);
        tmp_expression_value_7 = par_cls;
        tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_7);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_list_element_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_8 = par_cls;
        tmp_list_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[68]);
        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = MAKE_LIST(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = mod_consts[2];
        tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_9;
            PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_2);
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[69]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
            }

            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 551;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[70]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 551;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_list_element_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_add_expr_right_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_add_expr_right_1, 0, tmp_list_element_1);
        tmp_assattr_value_1 = BINARY_OPERATION_ADD_OBJECT_LIST_LIST(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        assert(!(tmp_assattr_value_1 == NULL));
        CHECK_OBJECT(var_anno_cls);
        tmp_assattr_target_1 = var_anno_cls;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[68], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_11 = par_cls;
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_11);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[71]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_881ad33256a620724e8e01fb5f338537->m_frame.f_lineno = 553;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[72]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 553;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_list_arg_2;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_list_element_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_12 = par_cls;
        tmp_list_arg_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[68]);
        if (tmp_list_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_2 = MAKE_LIST(tmp_list_arg_2);
        Py_DECREF(tmp_list_arg_2);
        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = mod_consts[2];
        tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_13;
            PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_3);
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[69]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;
                type_description_1 = "oooo";
                goto tuple_build_exception_2;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[70]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;
                type_description_1 = "oooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_add_expr_left_2);
        Py_DECREF(tmp_list_element_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_add_expr_right_2 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_add_expr_right_2, 0, tmp_list_element_2);
        tmp_assattr_value_2 = BINARY_OPERATION_ADD_OBJECT_LIST_LIST(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        Py_DECREF(tmp_add_expr_right_2);
        assert(!(tmp_assattr_value_2 == NULL));
        CHECK_OBJECT(var_anno_cls);
        tmp_assattr_target_2 = var_anno_cls;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[68], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_5:;
    branch_end_4:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_15 = par_cls;
        tmp_expression_value_14 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_15);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[71]);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_881ad33256a620724e8e01fb5f338537->m_frame.f_lineno = 560;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_3, mod_consts[72]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 560;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = Py_True;
        CHECK_OBJECT(var_anno_cls);
        tmp_assattr_target_3 = var_anno_cls;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[73], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_6;
    branch_no_6:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_16;
        tmp_cmp_expr_left_4 = mod_consts[73];
        CHECK_OBJECT(par_cls);
        tmp_expression_value_16 = par_cls;
        tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_16);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;
            type_description_1 = "oooo";
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
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_18 = par_cls;
        tmp_expression_value_17 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_18);
        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_4 = mod_consts[73];
        tmp_assattr_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_4);
        Py_DECREF(tmp_expression_value_17);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_anno_cls);
        tmp_assattr_target_4 = var_anno_cls;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[73], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_7:;
    branch_end_6:;
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_issubclass_cls_2;
        PyObject *tmp_issubclass_classes_2;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_cls);
        tmp_issubclass_cls_2 = par_cls;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_issubclass_classes_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[75]);
        if (tmp_issubclass_classes_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_2, tmp_issubclass_classes_2);
        Py_DECREF(tmp_issubclass_classes_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_5 = (tmp_res != 0) ? Py_True : Py_False;
        CHECK_OBJECT(var_anno_cls);
        tmp_assattr_target_5 = var_anno_cls;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[33], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;
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
        exception_tb = MAKE_TRACEBACK(frame_881ad33256a620724e8e01fb5f338537, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_881ad33256a620724e8e01fb5f338537->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_881ad33256a620724e8e01fb5f338537, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_881ad33256a620724e8e01fb5f338537,
        type_description_1,
        par_cls,
        par_base_cls,
        var_super_,
        var_anno_cls
    );


    // Release cached frame if used for exception.
    if (frame_881ad33256a620724e8e01fb5f338537 == cache_frame_881ad33256a620724e8e01fb5f338537) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_881ad33256a620724e8e01fb5f338537);
        cache_frame_881ad33256a620724e8e01fb5f338537 = NULL;
    }

    assertFrameObject(frame_881ad33256a620724e8e01fb5f338537);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_anno_cls);
    tmp_return_value = var_anno_cls;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_base_cls);
    Py_DECREF(par_base_cls);
    par_base_cls = NULL;
    Py_XDECREF(var_super_);
    var_super_ = NULL;
    Py_XDECREF(var_anno_cls);
    var_anno_cls = NULL;
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

    CHECK_OBJECT(par_base_cls);
    Py_DECREF(par_base_cls);
    par_base_cls = NULL;
    Py_XDECREF(var_super_);
    var_super_ = NULL;
    Py_XDECREF(var_anno_cls);
    var_anno_cls = NULL;
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


static PyObject *impl_sqlalchemy$sql$annotation$$$function__39__prepare_annotations(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_target_hierarchy = python_pars[0];
    PyObject *par_base_cls = python_pars[1];
    PyObject *var_cls = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_f12c7c0de4a6b1479079867549d4c8a0;
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
    static struct Nuitka_FrameObject *cache_frame_f12c7c0de4a6b1479079867549d4c8a0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f12c7c0de4a6b1479079867549d4c8a0)) {
        Py_XDECREF(cache_frame_f12c7c0de4a6b1479079867549d4c8a0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f12c7c0de4a6b1479079867549d4c8a0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f12c7c0de4a6b1479079867549d4c8a0 = MAKE_FUNCTION_FRAME(codeobj_f12c7c0de4a6b1479079867549d4c8a0, module_sqlalchemy$sql$annotation, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f12c7c0de4a6b1479079867549d4c8a0->m_type_description == NULL);
    frame_f12c7c0de4a6b1479079867549d4c8a0 = cache_frame_f12c7c0de4a6b1479079867549d4c8a0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f12c7c0de4a6b1479079867549d4c8a0);
    assert(Py_REFCNT(frame_f12c7c0de4a6b1479079867549d4c8a0) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 574;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_target_hierarchy);
        tmp_args_element_value_1 = par_target_hierarchy;
        frame_f12c7c0de4a6b1479079867549d4c8a0->m_frame.f_lineno = 574;
        tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[77], tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 574;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 574;
            type_description_1 = "ooo";
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
                type_description_1 = "ooo";
                exception_lineno = 574;
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
            PyObject *old = var_cls;
            var_cls = tmp_assign_source_3;
            Py_INCREF(var_cls);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 575;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_cls);
        tmp_args_element_value_2 = var_cls;
        if (par_base_cls == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 575;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_3 = par_base_cls;
        frame_f12c7c0de4a6b1479079867549d4c8a0->m_frame.f_lineno = 575;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 575;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 574;
        type_description_1 = "ooo";
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


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f12c7c0de4a6b1479079867549d4c8a0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f12c7c0de4a6b1479079867549d4c8a0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f12c7c0de4a6b1479079867549d4c8a0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f12c7c0de4a6b1479079867549d4c8a0,
        type_description_1,
        par_target_hierarchy,
        par_base_cls,
        var_cls
    );


    // Release cached frame if used for exception.
    if (frame_f12c7c0de4a6b1479079867549d4c8a0 == cache_frame_f12c7c0de4a6b1479079867549d4c8a0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f12c7c0de4a6b1479079867549d4c8a0);
        cache_frame_f12c7c0de4a6b1479079867549d4c8a0 = NULL;
    }

    assertFrameObject(frame_f12c7c0de4a6b1479079867549d4c8a0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_cls);
    var_cls = NULL;
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

    Py_XDECREF(var_cls);
    var_cls = NULL;
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
    CHECK_OBJECT(par_target_hierarchy);
    Py_DECREF(par_target_hierarchy);
    CHECK_OBJECT(par_base_cls);
    Py_DECREF(par_base_cls);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_target_hierarchy);
    Py_DECREF(par_target_hierarchy);
    CHECK_OBJECT(par_base_cls);
    Py_DECREF(par_base_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__10__deannotate(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        mod_consts[150],
#endif
        codeobj_3b869521520a4ea949d8de4951a44269,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$annotation,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__11__deannotate(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        mod_consts[150],
#endif
        codeobj_a5a3923876656ceb42a85d85fa6b461f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$annotation,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__12__deannotate(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$annotation$$$function__12__deannotate,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        mod_consts[150],
#endif
        codeobj_0387c84e56b3cde96d763d76d6a815ff,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$annotation,
        mod_consts[15],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__13__annotate(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$annotation$$$function__13__annotate,
        mod_consts[51],
#if PYTHON_VERSION >= 0x300
        mod_consts[154],
#endif
        codeobj_8456d2411853c02fb51bbd70f0ed8f06,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$annotation,
        mod_consts[12],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__14__with_annotations(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$annotation$$$function__14__with_annotations,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        mod_consts[155],
#endif
        codeobj_1224a6299190c7c5b5ea82738309c043,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$annotation,
        mod_consts[13],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__15__deannotate(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        mod_consts[156],
#endif
        codeobj_b054420186b4382d719b1ecbe20d0ab6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$annotation,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__16__deannotate(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        mod_consts[156],
#endif
        codeobj_9363ebe55978cefad190157fb49a96e5,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$annotation,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__17__deannotate(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$annotation$$$function__17__deannotate,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        mod_consts[156],
#endif
        codeobj_a21868f0dbd2d08d823d24d91f0beb73,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$annotation,
        mod_consts[15],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__18__as_annotated_instance(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$annotation$$$function__18__as_annotated_instance,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[160],
#endif
        codeobj_6e1875a885c43635db0289f684960136,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$annotation,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__19___new__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$annotation$$$function__19___new__,
        mod_consts[24],
#if PYTHON_VERSION >= 0x300
        mod_consts[163],
#endif
        codeobj_cba7d4d941092a4588303934d7909467,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$annotation,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__1__annotate(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$annotation$$$function__1__annotate,
        mod_consts[51],
#if PYTHON_VERSION >= 0x300
        mod_consts[133],
#endif
        codeobj_b166ef3cc678c6e71ddb2705975c7ad1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$annotation,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__20___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$annotation$$$function__20___init__,
        mod_consts[165],
#if PYTHON_VERSION >= 0x300
        mod_consts[166],
#endif
        codeobj_4d155370789fcec8fedfd575a184ab73,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$annotation,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__21__annotate(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$annotation$$$function__21__annotate,
        mod_consts[51],
#if PYTHON_VERSION >= 0x300
        mod_consts[167],
#endif
        codeobj_143b577be03b4e5270b990e95d5a5c42,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$annotation,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__22__with_annotations(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$annotation$$$function__22__with_annotations,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        mod_consts[168],
#endif
        codeobj_f7570cc434c9e23105e6a9541343deb3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$annotation,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__23__deannotate(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        mod_consts[169],
#endif
        codeobj_88d231de257feab8ad73c689815267ff,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$annotation,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__24__deannotate(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        mod_consts[169],
#endif
        codeobj_1ff2726df8bc1bed788a3455fb75b11c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$annotation,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__25__deannotate(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$annotation$$$function__25__deannotate,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        mod_consts[169],
#endif
        codeobj_44f69d420e920ec7e65d7e2889b9fd02,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$annotation,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__26__compiler_dispatch(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$annotation$$$function__26__compiler_dispatch,
        mod_consts[30],
#if PYTHON_VERSION >= 0x300
        mod_consts[173],
#endif
        codeobj_7a6e192c87f4dc2f49b223d2a75006d4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$annotation,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__27__constructor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$annotation$$$function__27__constructor,
        mod_consts[31],
#if PYTHON_VERSION >= 0x300
        mod_consts[175],
#endif
        codeobj_51109026fabc7458616b65463513350c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$sql$annotation,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__28__clone(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$annotation$$$function__28__clone,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[177],
#endif
        codeobj_5798fc1db9c7f4e6cbccee768e79aae9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$annotation,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__29___reduce__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$annotation$$$function__29___reduce__,
        mod_consts[179],
#if PYTHON_VERSION >= 0x300
        mod_consts[180],
#endif
        codeobj_691c62ff4a9da2f9fb092f7d14348103,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$annotation,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__2__deannotate(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        mod_consts[136],
#endif
        codeobj_e3e49afdce330ef29b1c740324e68fbd,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$annotation,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__30___hash__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$annotation$$$function__30___hash__,
        mod_consts[182],
#if PYTHON_VERSION >= 0x300
        mod_consts[183],
#endif
        codeobj_2214a4956ed2cad4880c60317313048a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$annotation,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__31___eq__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$annotation$$$function__31___eq__,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        mod_consts[185],
#endif
        codeobj_818e1c8970d52f6f31aed6b574e47f3e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$annotation,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__32_entity_namespace(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$annotation$$$function__32_entity_namespace,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        mod_consts[188],
#endif
        codeobj_83fae5df686c79ad880e9d9a8f04a9b4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$annotation,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__33__deep_annotate(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$annotation$$$function__33__deep_annotate,
        mod_consts[194],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a8080681cd2087e193a6aeefc8098cad,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$annotation,
        mod_consts[42],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__33__deep_annotate$$$function__1_clone(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$annotation$$$function__33__deep_annotate$$$function__1_clone,
        mod_consts[39],
#if PYTHON_VERSION >= 0x300
        mod_consts[40],
#endif
        codeobj_b6e32e3a1334be5be8b8294396e021a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$annotation,
        NULL,
        closure,
        6
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__34__deep_deannotate(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[197],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b08b3616317d4a261083572b18f0a755,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$annotation,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__35__deep_deannotate(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[197],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bd8828b33fcdbe0c424a31dc32fe35e2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$annotation,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__36__deep_deannotate(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$annotation$$$function__36__deep_deannotate,
        mod_consts[197],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5799fd4b147ef81d0e5790ee05a629f7,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$annotation,
        mod_consts[56],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__36__deep_deannotate$$$function__1_clone(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$annotation$$$function__36__deep_deannotate$$$function__1_clone,
        mod_consts[39],
#if PYTHON_VERSION >= 0x300
        mod_consts[55],
#endif
        codeobj_28b4785922a1ac2c34daefd2c711af19,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$annotation,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__37__shallow_annotate(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$annotation$$$function__37__shallow_annotate,
        mod_consts[201],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a43a71ccd33539451e92e2f6863d3cbb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$annotation,
        mod_consts[62],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__38__new_annotation_type(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$annotation$$$function__38__new_annotation_type,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_881ad33256a620724e8e01fb5f338537,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$annotation,
        mod_consts[76],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__39__prepare_annotations(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$annotation$$$function__39__prepare_annotations,
        mod_consts[204],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f12c7c0de4a6b1479079867549d4c8a0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$annotation,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__3__deannotate(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        mod_consts[136],
#endif
        codeobj_09e2ea0c9909e78149e916055d9f7f61,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$annotation,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__4__deannotate(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$annotation$$$function__4__deannotate,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        mod_consts[136],
#endif
        codeobj_7c8949406233743cb9ecaf927decec99,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$annotation,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__5__annotations_cache_key(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$annotation$$$function__5__annotations_cache_key,
        mod_consts[142],
#if PYTHON_VERSION >= 0x300
        mod_consts[143],
#endif
        codeobj_904754a54e9fefa33c1d86e16c9160e3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$annotation,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__6__gen_annotations_cache_key(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$annotation$$$function__6__gen_annotations_cache_key,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[145],
#endif
        codeobj_32a0a0d43eef17f1055f908fe1585770,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$annotation,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__8__annotate(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$annotation$$$function__8__annotate,
        mod_consts[51],
#if PYTHON_VERSION >= 0x300
        mod_consts[148],
#endif
        codeobj_15c3af5a55be520cf3f423ca202fe280,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$annotation,
        mod_consts[12],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__9__with_annotations(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$annotation$$$function__9__with_annotations,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        mod_consts[149],
#endif
        codeobj_9bc3cc12853c3e73a466b94a75de2228,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$annotation,
        mod_consts[13],
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

function_impl_code functable_sqlalchemy$sql$annotation[] = {
    impl_sqlalchemy$sql$annotation$$$function__33__deep_annotate$$$function__1_clone,
    impl_sqlalchemy$sql$annotation$$$function__36__deep_deannotate$$$function__1_clone,
    impl_sqlalchemy$sql$annotation$$$function__1__annotate,
    NULL,
    NULL,
    impl_sqlalchemy$sql$annotation$$$function__4__deannotate,
    impl_sqlalchemy$sql$annotation$$$function__5__annotations_cache_key,
    impl_sqlalchemy$sql$annotation$$$function__6__gen_annotations_cache_key,
    impl_sqlalchemy$sql$annotation$$$function__8__annotate,
    impl_sqlalchemy$sql$annotation$$$function__9__with_annotations,
    NULL,
    NULL,
    impl_sqlalchemy$sql$annotation$$$function__12__deannotate,
    impl_sqlalchemy$sql$annotation$$$function__13__annotate,
    impl_sqlalchemy$sql$annotation$$$function__14__with_annotations,
    NULL,
    NULL,
    impl_sqlalchemy$sql$annotation$$$function__17__deannotate,
    impl_sqlalchemy$sql$annotation$$$function__18__as_annotated_instance,
    impl_sqlalchemy$sql$annotation$$$function__19___new__,
    impl_sqlalchemy$sql$annotation$$$function__20___init__,
    impl_sqlalchemy$sql$annotation$$$function__21__annotate,
    impl_sqlalchemy$sql$annotation$$$function__22__with_annotations,
    NULL,
    NULL,
    impl_sqlalchemy$sql$annotation$$$function__25__deannotate,
    impl_sqlalchemy$sql$annotation$$$function__26__compiler_dispatch,
    impl_sqlalchemy$sql$annotation$$$function__27__constructor,
    impl_sqlalchemy$sql$annotation$$$function__28__clone,
    impl_sqlalchemy$sql$annotation$$$function__29___reduce__,
    impl_sqlalchemy$sql$annotation$$$function__30___hash__,
    impl_sqlalchemy$sql$annotation$$$function__31___eq__,
    impl_sqlalchemy$sql$annotation$$$function__32_entity_namespace,
    impl_sqlalchemy$sql$annotation$$$function__33__deep_annotate,
    NULL,
    NULL,
    impl_sqlalchemy$sql$annotation$$$function__36__deep_deannotate,
    impl_sqlalchemy$sql$annotation$$$function__37__shallow_annotate,
    impl_sqlalchemy$sql$annotation$$$function__38__new_annotation_type,
    impl_sqlalchemy$sql$annotation$$$function__39__prepare_annotations,
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

    function_impl_code *current = functable_sqlalchemy$sql$annotation;
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

    if (offset > sizeof(functable_sqlalchemy$sql$annotation) || offset < 0) {
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
        functable_sqlalchemy$sql$annotation[offset],
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
        module_sqlalchemy$sql$annotation,
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
PyObject *modulecode_sqlalchemy$sql$annotation(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("sqlalchemy.sql.annotation");

    // Store the module for future use.
    module_sqlalchemy$sql$annotation = module;

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
        PRINT_STRING("sqlalchemy.sql.annotation: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("sqlalchemy.sql.annotation: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("sqlalchemy.sql.annotation: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initsqlalchemy$sql$annotation\n");

    moduledict_sqlalchemy$sql$annotation = MODULE_DICT(module_sqlalchemy$sql$annotation);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_sqlalchemy$sql$annotation,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_sqlalchemy$sql$annotation,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[100]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_sqlalchemy$sql$annotation,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_sqlalchemy$sql$annotation,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_sqlalchemy$sql$annotation,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_sqlalchemy$sql$annotation);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_sqlalchemy$sql$annotation);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
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
    struct Nuitka_FrameObject *frame_4ad305e9c71abfce5d9d6047d9c9af47;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_sqlalchemy$sql$annotation$$$class__1_SupportsAnnotations_53 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_3a01bbc3c7756450e47e42935906b4eb_2;
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
    PyObject *locals_sqlalchemy$sql$annotation$$$class__2_SupportsWrappingAnnotations_114 = NULL;
    struct Nuitka_FrameObject *frame_922815378d18da3b476a361c7a81d5bb_3;
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
    PyObject *locals_sqlalchemy$sql$annotation$$$class__3_SupportsCloneAnnotations_175 = NULL;
    struct Nuitka_FrameObject *frame_538e2830aed0fecbb025d554ee6a172e_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
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
    PyObject *locals_sqlalchemy$sql$annotation$$$class__4_Annotated_252 = NULL;
    struct Nuitka_FrameObject *frame_efbdbe3d3ad0b28a755f2e2b14f4190a_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[79];
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_2);
    }
    frame_4ad305e9c71abfce5d9d6047d9c9af47 = MAKE_MODULE_FRAME(codeobj_4ad305e9c71abfce5d9d6047d9c9af47, module_sqlalchemy$sql$annotation);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4ad305e9c71abfce5d9d6047d9c9af47);
    assert(Py_REFCNT(frame_4ad305e9c71abfce5d9d6047d9c9af47) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[82]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[82]);

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
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_DICT_EMPTY();
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_5 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[49]);
        }
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        tmp_import_name_from_1 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_sqlalchemy$sql$annotation,
                mod_consts[88],
                mod_consts[89]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[88]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        tmp_import_name_from_2 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_2 == NULL));
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_sqlalchemy$sql$annotation,
                mod_consts[90],
                mod_consts[89]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[90]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        tmp_import_name_from_3 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_3 == NULL));
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_sqlalchemy$sql$annotation,
                mod_consts[36],
                mod_consts[89]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[36]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        tmp_import_name_from_4 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_4 == NULL));
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_sqlalchemy$sql$annotation,
                mod_consts[91],
                mod_consts[89]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[91]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        tmp_import_name_from_5 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_5 == NULL));
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_sqlalchemy$sql$annotation,
                mod_consts[92],
                mod_consts[89]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[92]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        tmp_import_name_from_6 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_6 == NULL));
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_sqlalchemy$sql$annotation,
                mod_consts[93],
                mod_consts[89]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[93]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        tmp_import_name_from_7 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_7 == NULL));
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_sqlalchemy$sql$annotation,
                mod_consts[94],
                mod_consts[89]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[94]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        tmp_import_name_from_8 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_8 == NULL));
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_sqlalchemy$sql$annotation,
                mod_consts[95],
                mod_consts[89]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[95]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        tmp_import_name_from_9 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_9 == NULL));
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_sqlalchemy$sql$annotation,
                mod_consts[96],
                mod_consts[89]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[96]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        tmp_import_name_from_10 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_10 == NULL));
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_sqlalchemy$sql$annotation,
                mod_consts[97],
                mod_consts[89]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[97]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        tmp_import_name_from_11 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_11 == NULL));
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_sqlalchemy$sql$annotation,
                mod_consts[64],
                mod_consts[89]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[64]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = Py_False;
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_12;
        tmp_import_name_from_12 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_12 == NULL));
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_sqlalchemy$sql$annotation,
                mod_consts[99],
                mod_consts[89]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[99]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[100];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_sqlalchemy$sql$annotation;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[101];
        tmp_level_value_1 = mod_consts[102];
        frame_4ad305e9c71abfce5d9d6047d9c9af47->m_frame.f_lineno = 35;
        tmp_import_name_from_13 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_sqlalchemy$sql$annotation,
                mod_consts[74],
                mod_consts[89]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[74]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[103];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_sqlalchemy$sql$annotation;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[104];
        tmp_level_value_2 = mod_consts[102];
        frame_4ad305e9c71abfce5d9d6047d9c9af47->m_frame.f_lineno = 36;
        tmp_import_name_from_14 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_sqlalchemy$sql$annotation,
                mod_consts[6],
                mod_consts[89]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[6]);
        }

        Py_DECREF(tmp_import_name_from_14);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[105];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_sqlalchemy$sql$annotation;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[106];
        tmp_level_value_3 = mod_consts[102];
        frame_4ad305e9c71abfce5d9d6047d9c9af47->m_frame.f_lineno = 37;
        tmp_import_name_from_15 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_sqlalchemy$sql$annotation,
                mod_consts[0],
                mod_consts[89]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_15);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[105];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_sqlalchemy$sql$annotation;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[107];
        tmp_level_value_4 = mod_consts[102];
        frame_4ad305e9c71abfce5d9d6047d9c9af47->m_frame.f_lineno = 38;
        tmp_import_name_from_16 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_sqlalchemy$sql$annotation,
                mod_consts[108],
                mod_consts[89]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_16, mod_consts[108]);
        }

        Py_DECREF(tmp_import_name_from_16);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[105];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_sqlalchemy$sql$annotation;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[109];
        tmp_level_value_5 = mod_consts[102];
        frame_4ad305e9c71abfce5d9d6047d9c9af47->m_frame.f_lineno = 39;
        tmp_import_name_from_17 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_sqlalchemy$sql$annotation,
                mod_consts[69],
                mod_consts[89]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_17, mod_consts[69]);
        }

        Py_DECREF(tmp_import_name_from_17);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_18;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[100];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_sqlalchemy$sql$annotation;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[110];
        tmp_level_value_6 = mod_consts[111];
        frame_4ad305e9c71abfce5d9d6047d9c9af47->m_frame.f_lineno = 40;
        tmp_import_name_from_18 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_sqlalchemy$sql$annotation,
                mod_consts[20],
                mod_consts[89]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME(tmp_import_name_from_18, mod_consts[20]);
        }

        Py_DECREF(tmp_import_name_from_18);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_19;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[112];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_sqlalchemy$sql$annotation;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[113];
        tmp_level_value_7 = mod_consts[111];
        frame_4ad305e9c71abfce5d9d6047d9c9af47->m_frame.f_lineno = 41;
        tmp_import_name_from_19 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_sqlalchemy$sql$annotation,
                mod_consts[114],
                mod_consts[89]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME(tmp_import_name_from_19, mod_consts[114]);
        }

        Py_DECREF(tmp_import_name_from_19);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_20;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[112];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_sqlalchemy$sql$annotation;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[115];
        tmp_level_value_8 = mod_consts[111];
        frame_4ad305e9c71abfce5d9d6047d9c9af47->m_frame.f_lineno = 42;
        tmp_import_name_from_20 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_sqlalchemy$sql$annotation,
                mod_consts[116],
                mod_consts[89]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME(tmp_import_name_from_20, mod_consts[116]);
        }

        Py_DECREF(tmp_import_name_from_20);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_tuple_element_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_subscript_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_28 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[118]);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_29);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = mod_consts[120];
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[119];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto try_except_handler_1;
        }
        tmp_assign_source_30 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_30, 0, tmp_tuple_element_2);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_31 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
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


            exception_lineno = 53;

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
        tmp_expression_value_3 = tmp_class_creation_1__bases;
        tmp_subscript_value_2 = mod_consts[89];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_2, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_33 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_33;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[121]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[121]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto try_except_handler_1;
        }
        tmp_tuple_element_3 = mod_consts[122];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_3 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_4ad305e9c71abfce5d9d6047d9c9af47->m_frame.f_lineno = 53;
        tmp_assign_source_34 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_34;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_6 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_6, mod_consts[123]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

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
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[124];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[66];
        tmp_getattr_default_1 = mod_consts[125];
        tmp_tuple_element_4 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto try_except_handler_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_7;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_7 == NULL));
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[66]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 53;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_35;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_36;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_sqlalchemy$sql$annotation$$$class__1_SupportsAnnotations_53 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[67];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__1_SupportsAnnotations_53, mod_consts[126], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[122];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__1_SupportsAnnotations_53, mod_consts[127], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto try_except_handler_3;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__1_SupportsAnnotations_53, mod_consts[86], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto try_except_handler_3;
        }
        frame_3a01bbc3c7756450e47e42935906b4eb_2 = MAKE_CLASS_FRAME(codeobj_3a01bbc3c7756450e47e42935906b4eb, module_sqlalchemy$sql$annotation, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_3a01bbc3c7756450e47e42935906b4eb_2);
        assert(Py_REFCNT(frame_3a01bbc3c7756450e47e42935906b4eb_2) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[128];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__1_SupportsAnnotations_53, mod_consts[129], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = PyObject_GetItem(locals_sqlalchemy$sql$annotation$$$class__1_SupportsAnnotations_53, mod_consts[119]);

        if (tmp_dictset_value == NULL) {
            if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                tmp_dictset_value = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[119]);

                if (unlikely(tmp_dictset_value == NULL)) {
                    tmp_dictset_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
                }

                if (tmp_dictset_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 56;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }
                Py_INCREF(tmp_dictset_value);
            } else {
                goto frame_exception_exit_2;
            }
        }

        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__1_SupportsAnnotations_53, mod_consts[2], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            tmp_ass_subvalue_2 = mod_consts[120];
            tmp_ass_subscribed_2 = PyObject_GetItem(locals_sqlalchemy$sql$annotation$$$class__1_SupportsAnnotations_53, mod_consts[86]);

            if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[86]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_2 = mod_consts[2];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
            Py_DECREF(tmp_ass_subscribed_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            tmp_ass_subvalue_3 = mod_consts[130];
            tmp_ass_subscribed_3 = PyObject_GetItem(locals_sqlalchemy$sql$annotation$$$class__1_SupportsAnnotations_53, mod_consts[86]);

            if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[86]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_3 = mod_consts[46];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
            Py_DECREF(tmp_ass_subscribed_3);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_4;
            PyObject *tmp_ass_subscribed_4;
            PyObject *tmp_ass_subscript_4;
            tmp_ass_subvalue_4 = mod_consts[131];
            tmp_ass_subscribed_4 = PyObject_GetItem(locals_sqlalchemy$sql$annotation$$$class__1_SupportsAnnotations_53, mod_consts[86]);

            if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[86]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_4 = mod_consts[50];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
            Py_DECREF(tmp_ass_subscribed_4);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_1;
            tmp_annotations_1 = DICT_COPY(mod_consts[132]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__1__annotate(tmp_annotations_1);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__1_SupportsAnnotations_53, mod_consts[51], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_2;
            tmp_called_value_2 = PyObject_GetItem(locals_sqlalchemy$sql$annotation$$$class__1_SupportsAnnotations_53, mod_consts[95]);

            if (tmp_called_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[95]);

                    if (unlikely(tmp_called_value_2 == NULL)) {
                        tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
                    }

                    if (tmp_called_value_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 65;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_2);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_1 = mod_consts[134];
            tmp_annotations_2 = DICT_COPY(mod_consts[135]);
            Py_INCREF(tmp_defaults_1);


            tmp_args_element_value_1 = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__2__deannotate(tmp_defaults_1, tmp_annotations_2);

            frame_3a01bbc3c7756450e47e42935906b4eb_2->m_frame.f_lineno = 65;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__1_SupportsAnnotations_53, mod_consts[59], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_3;
            tmp_called_value_3 = PyObject_GetItem(locals_sqlalchemy$sql$annotation$$$class__1_SupportsAnnotations_53, mod_consts[95]);

            if (tmp_called_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[95]);

                    if (unlikely(tmp_called_value_3 == NULL)) {
                        tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
                    }

                    if (tmp_called_value_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 73;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_3);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_2 = mod_consts[134];
            tmp_annotations_3 = DICT_COPY(mod_consts[137]);
            Py_INCREF(tmp_defaults_2);


            tmp_args_element_value_2 = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__3__deannotate(tmp_defaults_2, tmp_annotations_3);

            frame_3a01bbc3c7756450e47e42935906b4eb_2->m_frame.f_lineno = 73;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__1_SupportsAnnotations_53, mod_consts[59], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_3;
            PyObject *tmp_annotations_4;
            tmp_defaults_3 = mod_consts[138];
            tmp_annotations_4 = DICT_COPY(mod_consts[139]);
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__4__deannotate(tmp_defaults_3, tmp_annotations_4);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__1_SupportsAnnotations_53, mod_consts[59], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_annotations_5;
            tmp_called_instance_1 = PyObject_GetItem(locals_sqlalchemy$sql$annotation$$$class__1_SupportsAnnotations_53, mod_consts[20]);

            if (tmp_called_instance_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[20]);

                    if (unlikely(tmp_called_instance_1 == NULL)) {
                        tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                    }

                    if (tmp_called_instance_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 88;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_1);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_5 = DICT_COPY(mod_consts[141]);


            tmp_args_element_value_3 = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__5__annotations_cache_key(tmp_annotations_5);

            frame_3a01bbc3c7756450e47e42935906b4eb_2->m_frame.f_lineno = 88;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[140], tmp_args_element_value_3);
            Py_DECREF(tmp_called_instance_1);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__1_SupportsAnnotations_53, mod_consts[142], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_6;
            tmp_annotations_6 = DICT_COPY(mod_consts[144]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__6__gen_annotations_cache_key(tmp_annotations_6);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__1_SupportsAnnotations_53, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3a01bbc3c7756450e47e42935906b4eb_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3a01bbc3c7756450e47e42935906b4eb_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3a01bbc3c7756450e47e42935906b4eb_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3a01bbc3c7756450e47e42935906b4eb_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_3a01bbc3c7756450e47e42935906b4eb_2);

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


                exception_lineno = 53;

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
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__1_SupportsAnnotations_53, mod_consts[146], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto try_except_handler_3;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_4 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_5 = mod_consts[122];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_5 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_sqlalchemy$sql$annotation$$$class__1_SupportsAnnotations_53;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_4ad305e9c71abfce5d9d6047d9c9af47->m_frame.f_lineno = 53;
            tmp_assign_source_37 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_37;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_36 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_36);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_sqlalchemy$sql$annotation$$$class__1_SupportsAnnotations_53);
        locals_sqlalchemy$sql$annotation$$$class__1_SupportsAnnotations_53 = NULL;
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

        Py_DECREF(locals_sqlalchemy$sql$annotation$$$class__1_SupportsAnnotations_53);
        locals_sqlalchemy$sql$annotation$$$class__1_SupportsAnnotations_53 = NULL;
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
        exception_lineno = 53;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_36);
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
        PyObject *tmp_assign_source_38;
        PyObject *tmp_tuple_element_6;
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_4;
        }
        tmp_assign_source_38 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_38, 0, tmp_tuple_element_6);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_39 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

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
        tmp_expression_value_8 = tmp_class_creation_2__bases;
        tmp_subscript_value_3 = mod_consts[89];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_8, tmp_subscript_value_3, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_4;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_41 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_41;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_9 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_9, mod_consts[121]);
        tmp_condition_result_6 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_10 = tmp_class_creation_2__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[121]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_4;
        }
        tmp_tuple_element_7 = mod_consts[37];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_7 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_4ad305e9c71abfce5d9d6047d9c9af47->m_frame.f_lineno = 114;
        tmp_assign_source_42 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_42;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_11 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_11, mod_consts[123]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

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
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[124];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[66];
        tmp_getattr_default_2 = mod_consts[125];
        tmp_tuple_element_8 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_12;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_12 == NULL));
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[66]);
            Py_DECREF(tmp_expression_value_12);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 114;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_43;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_44;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_sqlalchemy$sql$annotation$$$class__2_SupportsWrappingAnnotations_114 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[67];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__2_SupportsWrappingAnnotations_114, mod_consts[126], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[37];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__2_SupportsWrappingAnnotations_114, mod_consts[127], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_6;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__2_SupportsWrappingAnnotations_114, mod_consts[86], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_6;
        }
        frame_922815378d18da3b476a361c7a81d5bb_3 = MAKE_CLASS_FRAME(codeobj_922815378d18da3b476a361c7a81d5bb, module_sqlalchemy$sql$annotation, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_922815378d18da3b476a361c7a81d5bb_3);
        assert(Py_REFCNT(frame_922815378d18da3b476a361c7a81d5bb_3) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[128];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__2_SupportsWrappingAnnotations_114, mod_consts[129], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_ass_subvalue_5;
            PyObject *tmp_ass_subscribed_5;
            PyObject *tmp_ass_subscript_5;
            tmp_ass_subvalue_5 = mod_consts[147];
            tmp_ass_subscribed_5 = PyObject_GetItem(locals_sqlalchemy$sql$annotation$$$class__2_SupportsWrappingAnnotations_114, mod_consts[86]);

            if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[86]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 117;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_ass_subscribed_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscript_5 = mod_consts[31];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
            Py_DECREF(tmp_ass_subscribed_5);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_7;
            tmp_annotations_7 = DICT_COPY(mod_consts[132]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__8__annotate(tmp_annotations_7);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__2_SupportsWrappingAnnotations_114, mod_consts[51], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_8;
            tmp_annotations_8 = DICT_COPY(mod_consts[132]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__9__with_annotations(tmp_annotations_8);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__2_SupportsWrappingAnnotations_114, mod_consts[28], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_defaults_4;
            PyObject *tmp_annotations_9;
            tmp_called_value_6 = PyObject_GetItem(locals_sqlalchemy$sql$annotation$$$class__2_SupportsWrappingAnnotations_114, mod_consts[95]);

            if (tmp_called_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[95]);

                    if (unlikely(tmp_called_value_6 == NULL)) {
                        tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
                    }

                    if (tmp_called_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 139;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_6);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_defaults_4 = mod_consts[134];
            tmp_annotations_9 = DICT_COPY(mod_consts[135]);
            Py_INCREF(tmp_defaults_4);


            tmp_args_element_value_4 = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__10__deannotate(tmp_defaults_4, tmp_annotations_9);

            frame_922815378d18da3b476a361c7a81d5bb_3->m_frame.f_lineno = 139;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__2_SupportsWrappingAnnotations_114, mod_consts[59], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_defaults_5;
            PyObject *tmp_annotations_10;
            tmp_called_value_7 = PyObject_GetItem(locals_sqlalchemy$sql$annotation$$$class__2_SupportsWrappingAnnotations_114, mod_consts[95]);

            if (tmp_called_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[95]);

                    if (unlikely(tmp_called_value_7 == NULL)) {
                        tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
                    }

                    if (tmp_called_value_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 147;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_7);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_defaults_5 = mod_consts[134];
            tmp_annotations_10 = DICT_COPY(mod_consts[137]);
            Py_INCREF(tmp_defaults_5);


            tmp_args_element_value_5 = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__11__deannotate(tmp_defaults_5, tmp_annotations_10);

            frame_922815378d18da3b476a361c7a81d5bb_3->m_frame.f_lineno = 147;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__2_SupportsWrappingAnnotations_114, mod_consts[59], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_6;
            PyObject *tmp_annotations_11;
            tmp_defaults_6 = mod_consts[138];
            tmp_annotations_11 = DICT_COPY(mod_consts[139]);
            Py_INCREF(tmp_defaults_6);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__12__deannotate(tmp_defaults_6, tmp_annotations_11);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__2_SupportsWrappingAnnotations_114, mod_consts[59], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_922815378d18da3b476a361c7a81d5bb_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_922815378d18da3b476a361c7a81d5bb_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_922815378d18da3b476a361c7a81d5bb_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_922815378d18da3b476a361c7a81d5bb_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_922815378d18da3b476a361c7a81d5bb_3);

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


                exception_lineno = 114;

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
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__2_SupportsWrappingAnnotations_114, mod_consts[146], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_6;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_45;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_8 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_9 = mod_consts[37];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_9 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = locals_sqlalchemy$sql$annotation$$$class__2_SupportsWrappingAnnotations_114;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_4ad305e9c71abfce5d9d6047d9c9af47->m_frame.f_lineno = 114;
            tmp_assign_source_45 = CALL_FUNCTION(tmp_called_value_8, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_45;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_44 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_44);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_sqlalchemy$sql$annotation$$$class__2_SupportsWrappingAnnotations_114);
        locals_sqlalchemy$sql$annotation$$$class__2_SupportsWrappingAnnotations_114 = NULL;
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

        Py_DECREF(locals_sqlalchemy$sql$annotation$$$class__2_SupportsWrappingAnnotations_114);
        locals_sqlalchemy$sql$annotation$$$class__2_SupportsWrappingAnnotations_114 = NULL;
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
        exception_lineno = 114;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_44);
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
        PyObject *tmp_assign_source_46;
        PyObject *tmp_tuple_element_10;
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto try_except_handler_7;
        }
        tmp_assign_source_46 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_46, 0, tmp_tuple_element_10);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_47 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

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
        tmp_expression_value_13 = tmp_class_creation_3__bases;
        tmp_subscript_value_4 = mod_consts[89];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_13, tmp_subscript_value_4, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto try_except_handler_7;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_49 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_49;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_14 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_14, mod_consts[121]);
        tmp_condition_result_10 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_15 = tmp_class_creation_3__metaclass;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[121]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto try_except_handler_7;
        }
        tmp_tuple_element_11 = mod_consts[151];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_11);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_11 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_11);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_4ad305e9c71abfce5d9d6047d9c9af47->m_frame.f_lineno = 175;
        tmp_assign_source_50 = CALL_FUNCTION(tmp_called_value_9, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_50;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_16 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_16, mod_consts[123]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

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
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[124];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[66];
        tmp_getattr_default_3 = mod_consts[125];
        tmp_tuple_element_12 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto try_except_handler_7;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_17;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_17 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_17 == NULL));
            tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[66]);
            Py_DECREF(tmp_expression_value_17);
            if (tmp_tuple_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_12);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 175;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_51;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_52;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_sqlalchemy$sql$annotation$$$class__3_SupportsCloneAnnotations_175 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[67];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__3_SupportsCloneAnnotations_175, mod_consts[126], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[151];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__3_SupportsCloneAnnotations_175, mod_consts[127], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto try_except_handler_9;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__3_SupportsCloneAnnotations_175, mod_consts[86], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto try_except_handler_9;
        }
        frame_538e2830aed0fecbb025d554ee6a172e_4 = MAKE_CLASS_FRAME(codeobj_538e2830aed0fecbb025d554ee6a172e, module_sqlalchemy$sql$annotation, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_538e2830aed0fecbb025d554ee6a172e_4);
        assert(Py_REFCNT(frame_538e2830aed0fecbb025d554ee6a172e_4) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[128];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__3_SupportsCloneAnnotations_175, mod_consts[129], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_tuple_element_13;
            tmp_tuple_element_13 = mod_consts[2];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_18;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_13);
                tmp_expression_value_18 = PyObject_GetItem(locals_sqlalchemy$sql$annotation$$$class__3_SupportsCloneAnnotations_175, mod_consts[69]);

                if (tmp_expression_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_expression_value_18 == NULL)) {
                            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                        }

                        if (tmp_expression_value_18 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 187;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_18);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[70]);
                Py_DECREF(tmp_expression_value_18);
                if (tmp_tuple_element_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 187;
                    type_description_2 = "o";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_13);
            }
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_list_element_1);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_dictset_value = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_1);
            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__3_SupportsCloneAnnotations_175, mod_consts[152], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_ass_subvalue_6;
            PyObject *tmp_ass_subscribed_6;
            PyObject *tmp_ass_subscript_6;
            tmp_ass_subvalue_6 = mod_consts[153];
            tmp_ass_subscribed_6 = PyObject_GetItem(locals_sqlalchemy$sql$annotation$$$class__3_SupportsCloneAnnotations_175, mod_consts[86]);

            if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[86]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 186;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_ass_subscribed_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subscript_6 = mod_consts[152];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
            Py_DECREF(tmp_ass_subscribed_6);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_12;
            tmp_annotations_12 = DICT_COPY(mod_consts[132]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__13__annotate(tmp_annotations_12);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__3_SupportsCloneAnnotations_175, mod_consts[51], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_13;
            tmp_annotations_13 = DICT_COPY(mod_consts[132]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__14__with_annotations(tmp_annotations_13);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__3_SupportsCloneAnnotations_175, mod_consts[28], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_defaults_7;
            PyObject *tmp_annotations_14;
            tmp_called_value_10 = PyObject_GetItem(locals_sqlalchemy$sql$annotation$$$class__3_SupportsCloneAnnotations_175, mod_consts[95]);

            if (tmp_called_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[95]);

                    if (unlikely(tmp_called_value_10 == NULL)) {
                        tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
                    }

                    if (tmp_called_value_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 212;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_10);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_defaults_7 = mod_consts[134];
            tmp_annotations_14 = DICT_COPY(mod_consts[135]);
            Py_INCREF(tmp_defaults_7);


            tmp_args_element_value_6 = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__15__deannotate(tmp_defaults_7, tmp_annotations_14);

            frame_538e2830aed0fecbb025d554ee6a172e_4->m_frame.f_lineno = 212;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__3_SupportsCloneAnnotations_175, mod_consts[59], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_defaults_8;
            PyObject *tmp_annotations_15;
            tmp_called_value_11 = PyObject_GetItem(locals_sqlalchemy$sql$annotation$$$class__3_SupportsCloneAnnotations_175, mod_consts[95]);

            if (tmp_called_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[95]);

                    if (unlikely(tmp_called_value_11 == NULL)) {
                        tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
                    }

                    if (tmp_called_value_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 220;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_11);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_defaults_8 = mod_consts[134];
            tmp_annotations_15 = DICT_COPY(mod_consts[137]);
            Py_INCREF(tmp_defaults_8);


            tmp_args_element_value_7 = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__16__deannotate(tmp_defaults_8, tmp_annotations_15);

            frame_538e2830aed0fecbb025d554ee6a172e_4->m_frame.f_lineno = 220;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__3_SupportsCloneAnnotations_175, mod_consts[59], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_defaults_9;
            PyObject *tmp_annotations_16;
            tmp_defaults_9 = mod_consts[138];
            tmp_annotations_16 = DICT_COPY(mod_consts[139]);
            Py_INCREF(tmp_defaults_9);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__17__deannotate(tmp_defaults_9, tmp_annotations_16);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__3_SupportsCloneAnnotations_175, mod_consts[59], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_538e2830aed0fecbb025d554ee6a172e_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_538e2830aed0fecbb025d554ee6a172e_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_538e2830aed0fecbb025d554ee6a172e_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_538e2830aed0fecbb025d554ee6a172e_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_538e2830aed0fecbb025d554ee6a172e_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_9;
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


                exception_lineno = 175;

                goto try_except_handler_9;
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
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__3_SupportsCloneAnnotations_175, mod_consts[146], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto try_except_handler_9;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_53;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_12 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_14 = mod_consts[151];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_14 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_14);
            tmp_tuple_element_14 = locals_sqlalchemy$sql$annotation$$$class__3_SupportsCloneAnnotations_175;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_4ad305e9c71abfce5d9d6047d9c9af47->m_frame.f_lineno = 175;
            tmp_assign_source_53 = CALL_FUNCTION(tmp_called_value_12, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;

                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_53;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_52 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_52);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_sqlalchemy$sql$annotation$$$class__3_SupportsCloneAnnotations_175);
        locals_sqlalchemy$sql$annotation$$$class__3_SupportsCloneAnnotations_175 = NULL;
        goto try_return_handler_8;
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

        Py_DECREF(locals_sqlalchemy$sql$annotation$$$class__3_SupportsCloneAnnotations_175);
        locals_sqlalchemy$sql$annotation$$$class__3_SupportsCloneAnnotations_175 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

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

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 175;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_52);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
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
        PyObject *tmp_assign_source_54;
        PyObject *tmp_tuple_element_15;
        tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_tuple_element_15 == NULL)) {
            tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
        }

        if (tmp_tuple_element_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_10;
        }
        tmp_assign_source_54 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_54, 0, tmp_tuple_element_15);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_55 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_55;
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_56;
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_10;
        }
        tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_19 = tmp_class_creation_4__bases;
        tmp_subscript_value_5 = mod_consts[89];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_19, tmp_subscript_value_5, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_10;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_10;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_57 = SELECT_METACLASS(tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_57;
    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_20 = tmp_class_creation_4__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_20, mod_consts[121]);
        tmp_condition_result_14 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_21 = tmp_class_creation_4__metaclass;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[121]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_10;
        }
        tmp_tuple_element_16 = mod_consts[10];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_16);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_16 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_16);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_4ad305e9c71abfce5d9d6047d9c9af47->m_frame.f_lineno = 252;
        tmp_assign_source_58 = CALL_FUNCTION(tmp_called_value_13, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_58;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_22 = tmp_class_creation_4__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_22, mod_consts[123]);
        tmp_operand_value_4 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_10;
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
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_getattr_target_4;
        PyObject *tmp_getattr_attr_4;
        PyObject *tmp_getattr_default_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[124];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
        tmp_getattr_attr_4 = mod_consts[66];
        tmp_getattr_default_4 = mod_consts[125];
        tmp_tuple_element_17 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
        if (tmp_tuple_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_10;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_23;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_23 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_23 == NULL));
            tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[66]);
            Py_DECREF(tmp_expression_value_23);
            if (tmp_tuple_element_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_17);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 252;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_10;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_59;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_60;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_sqlalchemy$sql$annotation$$$class__4_Annotated_252 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[67];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__4_Annotated_252, mod_consts[126], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[157];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__4_Annotated_252, mod_consts[80], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[10];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__4_Annotated_252, mod_consts[127], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_12;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__4_Annotated_252, mod_consts[86], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_12;
        }
        frame_efbdbe3d3ad0b28a755f2e2b14f4190a_5 = MAKE_CLASS_FRAME(codeobj_efbdbe3d3ad0b28a755f2e2b14f4190a, module_sqlalchemy$sql$annotation, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_efbdbe3d3ad0b28a755f2e2b14f4190a_5);
        assert(Py_REFCNT(frame_efbdbe3d3ad0b28a755f2e2b14f4190a_5) == 2);

        // Framed code:
        tmp_dictset_value = Py_False;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__4_Annotated_252, mod_consts[33], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_annotations_17;
            PyObject *tmp_classmethod_arg_1;
            PyObject *tmp_annotations_18;
            tmp_res = MAPPING_HAS_ITEM(locals_sqlalchemy$sql$annotation$$$class__4_Annotated_252, mod_consts[158]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_condition_result_16 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            tmp_called_value_14 = PyObject_GetItem(locals_sqlalchemy$sql$annotation$$$class__4_Annotated_252, mod_consts[158]);

            if (unlikely(tmp_called_value_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[158]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 274;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_called_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_annotations_17 = DICT_COPY(mod_consts[159]);


            tmp_args_element_value_8 = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__18__as_annotated_instance(tmp_annotations_17);

            frame_efbdbe3d3ad0b28a755f2e2b14f4190a_5->m_frame.f_lineno = 274;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_8);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_annotations_18 = DICT_COPY(mod_consts[159]);


            tmp_classmethod_arg_1 = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__18__as_annotated_instance(tmp_annotations_18);

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_1);
            Py_DECREF(tmp_classmethod_arg_1);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_5:;
            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__4_Annotated_252, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_7;
            PyObject *tmp_ass_subscribed_7;
            PyObject *tmp_ass_subscript_7;
            tmp_ass_subvalue_7 = mod_consts[120];
            tmp_ass_subscribed_7 = PyObject_GetItem(locals_sqlalchemy$sql$annotation$$$class__4_Annotated_252, mod_consts[86]);

            if (unlikely(tmp_ass_subscribed_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[86]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 284;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_7 = mod_consts[2];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
            Py_DECREF(tmp_ass_subscribed_7);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_8;
            PyObject *tmp_ass_subscribed_8;
            PyObject *tmp_ass_subscript_8;
            tmp_ass_subvalue_8 = mod_consts[37];
            tmp_ass_subscribed_8 = PyObject_GetItem(locals_sqlalchemy$sql$annotation$$$class__4_Annotated_252, mod_consts[86]);

            if (unlikely(tmp_ass_subscribed_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[86]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 285;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_8 = mod_consts[26];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
            Py_DECREF(tmp_ass_subscribed_8);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_9;
            PyObject *tmp_ass_subscribed_9;
            PyObject *tmp_ass_subscript_9;
            tmp_ass_subvalue_9 = mod_consts[161];
            tmp_ass_subscribed_9 = PyObject_GetItem(locals_sqlalchemy$sql$annotation$$$class__4_Annotated_252, mod_consts[86]);

            if (unlikely(tmp_ass_subscribed_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[86]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 286;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_9 = mod_consts[27];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
            Py_DECREF(tmp_ass_subscribed_9);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_annotations_19;
            tmp_annotations_19 = DICT_COPY(mod_consts[162]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__19___new__(tmp_annotations_19);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__4_Annotated_252, mod_consts[24], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_annotations_20;
            tmp_annotations_20 = DICT_COPY(mod_consts[164]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__20___init__(tmp_annotations_20);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__4_Annotated_252, mod_consts[165], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_annotations_21;
            tmp_annotations_21 = DICT_COPY(mod_consts[132]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__21__annotate(tmp_annotations_21);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__4_Annotated_252, mod_consts[51], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 301;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_annotations_22;
            tmp_annotations_22 = DICT_COPY(mod_consts[132]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__22__with_annotations(tmp_annotations_22);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__4_Annotated_252, mod_consts[28], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 306;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_defaults_10;
            PyObject *tmp_annotations_23;
            tmp_called_value_15 = PyObject_GetItem(locals_sqlalchemy$sql$annotation$$$class__4_Annotated_252, mod_consts[95]);

            if (tmp_called_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[95]);

                    if (unlikely(tmp_called_value_15 == NULL)) {
                        tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
                    }

                    if (tmp_called_value_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 314;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_value_15);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_defaults_10 = mod_consts[134];
            tmp_annotations_23 = DICT_COPY(mod_consts[135]);
            Py_INCREF(tmp_defaults_10);


            tmp_args_element_value_9 = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__23__deannotate(tmp_defaults_10, tmp_annotations_23);

            frame_efbdbe3d3ad0b28a755f2e2b14f4190a_5->m_frame.f_lineno = 314;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 314;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__4_Annotated_252, mod_consts[59], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 314;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_defaults_11;
            PyObject *tmp_annotations_24;
            tmp_called_value_16 = PyObject_GetItem(locals_sqlalchemy$sql$annotation$$$class__4_Annotated_252, mod_consts[95]);

            if (tmp_called_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[95]);

                    if (unlikely(tmp_called_value_16 == NULL)) {
                        tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
                    }

                    if (tmp_called_value_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 322;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_value_16);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_defaults_11 = mod_consts[134];
            tmp_annotations_24 = DICT_COPY(mod_consts[170]);
            Py_INCREF(tmp_defaults_11);


            tmp_args_element_value_10 = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__24__deannotate(tmp_defaults_11, tmp_annotations_24);

            frame_efbdbe3d3ad0b28a755f2e2b14f4190a_5->m_frame.f_lineno = 322;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_10);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 322;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__4_Annotated_252, mod_consts[59], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 322;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_defaults_12;
            PyObject *tmp_annotations_25;
            tmp_defaults_12 = mod_consts[171];
            tmp_annotations_25 = DICT_COPY(mod_consts[139]);
            Py_INCREF(tmp_defaults_12);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__25__deannotate(tmp_defaults_12, tmp_annotations_25);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__4_Annotated_252, mod_consts[59], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 330;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_annotations_26;
            tmp_annotations_26 = DICT_COPY(mod_consts[172]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__26__compiler_dispatch(tmp_annotations_26);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__4_Annotated_252, mod_consts[30], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 350;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_element_value_12;
            tmp_res = MAPPING_HAS_ITEM(locals_sqlalchemy$sql$annotation$$$class__4_Annotated_252, mod_consts[174]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 355;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_condition_result_17 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_6;
            } else {
                goto condexpr_false_6;
            }
            condexpr_true_6:;
            tmp_called_value_17 = PyObject_GetItem(locals_sqlalchemy$sql$annotation$$$class__4_Annotated_252, mod_consts[174]);

            if (unlikely(tmp_called_value_17 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[174]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 355;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_called_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 355;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }


            tmp_args_element_value_11 = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__27__constructor();

            frame_efbdbe3d3ad0b28a755f2e2b14f4190a_5->m_frame.f_lineno = 355;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_11);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 355;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_called_value_18 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_12 = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__27__constructor();

            frame_efbdbe3d3ad0b28a755f2e2b14f4190a_5->m_frame.f_lineno = 355;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 355;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__4_Annotated_252, mod_consts[31], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 355;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_annotations_27;
            tmp_annotations_27 = DICT_COPY(mod_consts[176]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__28__clone(tmp_annotations_27);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__4_Annotated_252, mod_consts[14], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 359;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_annotations_28;
            tmp_annotations_28 = DICT_COPY(mod_consts[178]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__29___reduce__(tmp_annotations_28);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__4_Annotated_252, mod_consts[179], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 370;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_annotations_29;
            tmp_annotations_29 = DICT_COPY(mod_consts[181]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__30___hash__(tmp_annotations_29);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__4_Annotated_252, mod_consts[182], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_annotations_30;
            tmp_annotations_30 = DICT_COPY(mod_consts[184]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__31___eq__(tmp_annotations_30);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__4_Annotated_252, mod_consts[34], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 376;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_annotations_31;
            tmp_called_instance_2 = PyObject_GetItem(locals_sqlalchemy$sql$annotation$$$class__4_Annotated_252, mod_consts[20]);

            if (tmp_called_instance_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[20]);

                    if (unlikely(tmp_called_instance_2 == NULL)) {
                        tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                    }

                    if (tmp_called_instance_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 382;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_2);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_annotations_31 = DICT_COPY(mod_consts[187]);


            tmp_args_element_value_13 = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__32_entity_namespace(tmp_annotations_31);

            frame_efbdbe3d3ad0b28a755f2e2b14f4190a_5->m_frame.f_lineno = 382;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[186], tmp_args_element_value_13);
            Py_DECREF(tmp_called_instance_2);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 382;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__4_Annotated_252, mod_consts[35], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 382;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_efbdbe3d3ad0b28a755f2e2b14f4190a_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_efbdbe3d3ad0b28a755f2e2b14f4190a_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_efbdbe3d3ad0b28a755f2e2b14f4190a_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_efbdbe3d3ad0b28a755f2e2b14f4190a_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_efbdbe3d3ad0b28a755f2e2b14f4190a_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_12;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_18 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_18 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;

                goto try_except_handler_12;
            }
            if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$annotation$$$class__4_Annotated_252, mod_consts[146], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_12;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_61;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_19 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_18 = mod_consts[10];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_18 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_18);
            tmp_tuple_element_18 = locals_sqlalchemy$sql$annotation$$$class__4_Annotated_252;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_4ad305e9c71abfce5d9d6047d9c9af47->m_frame.f_lineno = 252;
            tmp_assign_source_61 = CALL_FUNCTION(tmp_called_value_19, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;

                goto try_except_handler_12;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_61;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_60 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_60);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_sqlalchemy$sql$annotation$$$class__4_Annotated_252);
        locals_sqlalchemy$sql$annotation$$$class__4_Annotated_252 = NULL;
        goto try_return_handler_11;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_sqlalchemy$sql$annotation$$$class__4_Annotated_252);
        locals_sqlalchemy$sql$annotation$$$class__4_Annotated_252 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

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

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 252;
        goto try_except_handler_10;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_60);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
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
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
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
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = MAKE_DICT_EMPTY();
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_62);
    }
    {
        PyObject *tmp_ass_subvalue_10;
        PyObject *tmp_ass_subscribed_10;
        PyObject *tmp_ass_subscript_10;
        tmp_ass_subvalue_10 = mod_consts[189];
        tmp_ass_subscribed_10 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_ass_subscribed_10 == NULL)) {
            tmp_ass_subscribed_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_ass_subscribed_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_10 = mod_consts[22];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_called_value_20;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto frame_exception_exit_1;
        }
        frame_4ad305e9c71abfce5d9d6047d9c9af47->m_frame.f_lineno = 402;
        tmp_assign_source_63 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_20, &PyTuple_GET_ITEM(mod_consts[190], 0), mod_consts[191]);
        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_defaults_13;
        PyObject *tmp_annotations_32;
        tmp_defaults_13 = mod_consts[192];
        tmp_annotations_32 = DICT_COPY(mod_consts[193]);
        Py_INCREF(tmp_defaults_13);


        tmp_assign_source_64 = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__33__deep_annotate(tmp_defaults_13, tmp_annotations_32);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_called_value_21;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_defaults_14;
        PyObject *tmp_annotations_33;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;

            goto frame_exception_exit_1;
        }
        tmp_defaults_14 = mod_consts[195];
        tmp_annotations_33 = DICT_COPY(mod_consts[196]);
        Py_INCREF(tmp_defaults_14);


        tmp_args_element_value_14 = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__34__deep_deannotate(tmp_defaults_14, tmp_annotations_33);

        frame_4ad305e9c71abfce5d9d6047d9c9af47->m_frame.f_lineno = 468;
        tmp_assign_source_65 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_14);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_called_value_22;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_defaults_15;
        PyObject *tmp_annotations_34;
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;

            goto frame_exception_exit_1;
        }
        tmp_defaults_15 = mod_consts[195];
        tmp_annotations_34 = DICT_COPY(mod_consts[198]);
        Py_INCREF(tmp_defaults_15);


        tmp_args_element_value_15 = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__35__deep_deannotate(tmp_defaults_15, tmp_annotations_34);

        frame_4ad305e9c71abfce5d9d6047d9c9af47->m_frame.f_lineno = 475;
        tmp_assign_source_66 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_15);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_66);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_5;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4ad305e9c71abfce5d9d6047d9c9af47, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4ad305e9c71abfce5d9d6047d9c9af47->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4ad305e9c71abfce5d9d6047d9c9af47, exception_lineno);
    }



    assertFrameObject(frame_4ad305e9c71abfce5d9d6047d9c9af47);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_5:;
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_defaults_16;
        PyObject *tmp_annotations_35;
        tmp_defaults_16 = mod_consts[195];
        tmp_annotations_35 = DICT_COPY(mod_consts[199]);
        Py_INCREF(tmp_defaults_16);


        tmp_assign_source_67 = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__36__deep_deannotate(tmp_defaults_16, tmp_annotations_35);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_annotations_36;
        tmp_annotations_36 = DICT_COPY(mod_consts[200]);


        tmp_assign_source_68 = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__37__shallow_annotate(tmp_annotations_36);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_annotations_37;
        tmp_annotations_37 = DICT_COPY(mod_consts[202]);


        tmp_assign_source_69 = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__38__new_annotation_type(tmp_annotations_37);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_annotations_38;
        tmp_annotations_38 = DICT_COPY(mod_consts[203]);


        tmp_assign_source_70 = MAKE_FUNCTION_sqlalchemy$sql$annotation$$$function__39__prepare_annotations(tmp_annotations_38);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_70);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("sqlalchemy.sql.annotation", false);

    Py_INCREF(module_sqlalchemy$sql$annotation);
    return module_sqlalchemy$sql$annotation;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$annotation, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("sqlalchemy$sql$annotation", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
