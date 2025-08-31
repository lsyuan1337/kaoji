/* Generated code for Python module 'sqlalchemy.engine.row'
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

/* The "module_sqlalchemy$engine$row" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_sqlalchemy$engine$row;
PyDictObject *moduledict_sqlalchemy$engine$row;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[226];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[226];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("sqlalchemy.engine.row"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 226; i++) {
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
void checkModuleConstants_sqlalchemy$engine$row(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 226; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_6c91f67f80370ba7faf22dc72db900f0;
static PyCodeObject *codeobj_c83fcac2b3686cd497868e51c9a3787c;
static PyCodeObject *codeobj_1aefb31778910ea243202f15263fabc8;
static PyCodeObject *codeobj_4656e9d8ddbe92218344875f6797270f;
static PyCodeObject *codeobj_bd04fb40a85720789ae42c442c07d91b;
static PyCodeObject *codeobj_1b23a02abdaca83f9ff12f3fcd7be1d7;
static PyCodeObject *codeobj_bbc72f8748dcd380e2ece84bad27616e;
static PyCodeObject *codeobj_0fc32f52e97daadd76a8b4f44d1e6f58;
static PyCodeObject *codeobj_cbc031296e01cce92f718bfe2b756590;
static PyCodeObject *codeobj_eb7e3cae61f40941b5ad17d0c601ba4b;
static PyCodeObject *codeobj_e567dd57b6641b4d4613b3b12cc2a19e;
static PyCodeObject *codeobj_7c8337988755ab232e7567deadd88c28;
static PyCodeObject *codeobj_00569432ddfafc4aa1be5ce9bf175db1;
static PyCodeObject *codeobj_61e6b211a75e41a2dd1146432f2cdc7c;
static PyCodeObject *codeobj_c2d6b125f60f7c7e4e586fabe7291835;
static PyCodeObject *codeobj_0a7080d0b2eb1da8edf9725b473df008;
static PyCodeObject *codeobj_a37b1632e1c188ec2d285f7a39e63b12;
static PyCodeObject *codeobj_04a09dfb454b89026c9f844e75fb8590;
static PyCodeObject *codeobj_b40c8db3a40734d8bf36d374ca67991b;
static PyCodeObject *codeobj_eaa22bed8809de0ce7bf093f05bfd0a7;
static PyCodeObject *codeobj_3df1345ac383a0482ce895e2b3d76664;
static PyCodeObject *codeobj_7d4f7dadb342a7cd1daa0af9143ee545;
static PyCodeObject *codeobj_c0081a3d68c3d5d778742577f9ebc87d;
static PyCodeObject *codeobj_cf378d30dfff34ac27ab8a1dd66f25cb;
static PyCodeObject *codeobj_c12e6b097ef2b16312b3094ef61b4170;
static PyCodeObject *codeobj_85b9815a253eab4356edc8866f3b9781;
static PyCodeObject *codeobj_01650a83b9cab80e3ff5e0b13b29872f;
static PyCodeObject *codeobj_7772d50ab8d3c03f2a02eadbacb74390;
static PyCodeObject *codeobj_0f32479e739fa6cc3e825d5861304a7a;
static PyCodeObject *codeobj_c9a3a4a1365fcc44555f5036f5e0e1d2;
static PyCodeObject *codeobj_983f634376dee3b13f09963bdffb060d;
static PyCodeObject *codeobj_5806d07fb2bde92caeb30cc13bb51a1b;
static PyCodeObject *codeobj_4e77fda9e454bbbcbd52a41ac91209a4;
static PyCodeObject *codeobj_509c8bfc697e47663483a78e245371b2;
static PyCodeObject *codeobj_2e4a02fe9e0b062a0759851008cc9e22;
static PyCodeObject *codeobj_6820cb0aa7edee5e0044191a6a8b5e53;
static PyCodeObject *codeobj_2c4ae9e42ea8fac61f406825e6ccf58f;
static PyCodeObject *codeobj_774c0f1f3e55aefc2f9811cdcc646095;
static PyCodeObject *codeobj_d42a44be9aeb3515ae10ff0c56d909c4;
static PyCodeObject *codeobj_f14bd7476014da7075d75737b59c459e;
static PyCodeObject *codeobj_1ccdd845519aec866b796f9ed2078f2e;
static PyCodeObject *codeobj_93a1d46001cb1a234497159fc59daf4f;
static PyCodeObject *codeobj_0ba63cd48927f05a6b1ccd9ef8ae2030;
static PyCodeObject *codeobj_9af57ab708d340eda46e5d5cd39f6a82;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[204]); CHECK_OBJECT(module_filename_obj);
    codeobj_6c91f67f80370ba7faf22dc72db900f0 = MAKE_CODE_OBJECT(module_filename_obj, 352, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[41], mod_consts[41], mod_consts[205], NULL, 1, 0, 0);
    codeobj_c83fcac2b3686cd497868e51c9a3787c = MAKE_CODE_OBJECT(module_filename_obj, 246, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[206], mod_consts[206], mod_consts[207], NULL, 1, 0, 0);
    codeobj_1aefb31778910ea243202f15263fabc8 = MAKE_CODE_OBJECT(module_filename_obj, 369, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[206], mod_consts[206], mod_consts[208], NULL, 1, 0, 0);
    codeobj_4656e9d8ddbe92218344875f6797270f = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[209], mod_consts[209], NULL, NULL, 0, 0, 0);
    codeobj_bd04fb40a85720789ae42c442c07d91b = MAKE_CODE_OBJECT(module_filename_obj, 305, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[43], mod_consts[43], mod_consts[210], NULL, 0, 0, 0);
    codeobj_1b23a02abdaca83f9ff12f3fcd7be1d7 = MAKE_CODE_OBJECT(module_filename_obj, 300, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[46], mod_consts[46], mod_consts[210], NULL, 0, 0, 0);
    codeobj_bbc72f8748dcd380e2ece84bad27616e = MAKE_CODE_OBJECT(module_filename_obj, 270, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[164], mod_consts[164], mod_consts[210], NULL, 0, 0, 0);
    codeobj_0fc32f52e97daadd76a8b4f44d1e6f58 = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[10], mod_consts[10], mod_consts[210], NULL, 0, 0, 0);
    codeobj_cbc031296e01cce92f718bfe2b756590 = MAKE_CODE_OBJECT(module_filename_obj, 309, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[4], mod_consts[4], mod_consts[210], NULL, 0, 0, 0);
    codeobj_eb7e3cae61f40941b5ad17d0c601ba4b = MAKE_CODE_OBJECT(module_filename_obj, 289, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[134], mod_consts[134], mod_consts[211], NULL, 2, 0, 0);
    codeobj_e567dd57b6641b4d4613b3b12cc2a19e = MAKE_CODE_OBJECT(module_filename_obj, 179, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[134], mod_consts[134], mod_consts[212], NULL, 2, 0, 0);
    codeobj_7c8337988755ab232e7567deadd88c28 = MAKE_CODE_OBJECT(module_filename_obj, 357, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[134], mod_consts[134], mod_consts[212], NULL, 2, 0, 0);
    codeobj_00569432ddfafc4aa1be5ce9bf175db1 = MAKE_CODE_OBJECT(module_filename_obj, 88, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[113], mod_consts[113], mod_consts[213], NULL, 2, 0, 0);
    codeobj_61e6b211a75e41a2dd1146432f2cdc7c = MAKE_CODE_OBJECT(module_filename_obj, 218, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[148], mod_consts[148], mod_consts[214], NULL, 2, 0, 0);
    codeobj_c2d6b125f60f7c7e4e586fabe7291835 = MAKE_CODE_OBJECT(module_filename_obj, 292, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[148], mod_consts[148], mod_consts[214], NULL, 2, 0, 0);
    codeobj_0a7080d0b2eb1da8edf9725b473df008 = MAKE_CODE_OBJECT(module_filename_obj, 212, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[144], mod_consts[144], mod_consts[214], NULL, 2, 0, 0);
    codeobj_a37b1632e1c188ec2d285f7a39e63b12 = MAKE_CODE_OBJECT(module_filename_obj, 215, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[146], mod_consts[146], mod_consts[214], NULL, 2, 0, 0);
    codeobj_04a09dfb454b89026c9f844e75fb8590 = MAKE_CODE_OBJECT(module_filename_obj, 276, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[169], mod_consts[169], mod_consts[215], NULL, 3, 0, 0);
    codeobj_b40c8db3a40734d8bf36d374ca67991b = MAKE_CODE_OBJECT(module_filename_obj, 286, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[176], mod_consts[176], mod_consts[216], NULL, 1, 0, 0);
    codeobj_eaa22bed8809de0ce7bf093f05bfd0a7 = MAKE_CODE_OBJECT(module_filename_obj, 351, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[176], mod_consts[176], mod_consts[216], NULL, 1, 0, 0);
    codeobj_3df1345ac383a0482ce895e2b3d76664 = MAKE_CODE_OBJECT(module_filename_obj, 209, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[142], mod_consts[142], mod_consts[214], NULL, 2, 0, 0);
    codeobj_7d4f7dadb342a7cd1daa0af9143ee545 = MAKE_CODE_OBJECT(module_filename_obj, 280, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[172], mod_consts[172], mod_consts[216], NULL, 1, 0, 0);
    codeobj_c0081a3d68c3d5d778742577f9ebc87d = MAKE_CODE_OBJECT(module_filename_obj, 354, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[172], mod_consts[172], mod_consts[216], NULL, 1, 0, 0);
    codeobj_cf378d30dfff34ac27ab8a1dd66f25cb = MAKE_CODE_OBJECT(module_filename_obj, 206, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[140], mod_consts[140], mod_consts[214], NULL, 2, 0, 0);
    codeobj_c12e6b097ef2b16312b3094ef61b4170 = MAKE_CODE_OBJECT(module_filename_obj, 221, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[150], mod_consts[150], mod_consts[214], NULL, 2, 0, 0);
    codeobj_85b9815a253eab4356edc8866f3b9781 = MAKE_CODE_OBJECT(module_filename_obj, 295, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[150], mod_consts[150], mod_consts[214], NULL, 2, 0, 0);
    codeobj_01650a83b9cab80e3ff5e0b13b29872f = MAKE_CODE_OBJECT(module_filename_obj, 224, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[153], mod_consts[153], mod_consts[216], NULL, 1, 0, 0);
    codeobj_7772d50ab8d3c03f2a02eadbacb74390 = MAKE_CODE_OBJECT(module_filename_obj, 283, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[153], mod_consts[153], mod_consts[216], NULL, 1, 0, 0);
    codeobj_0f32479e739fa6cc3e825d5861304a7a = MAKE_CODE_OBJECT(module_filename_obj, 360, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[153], mod_consts[153], mod_consts[216], NULL, 1, 0, 0);
    codeobj_c9a3a4a1365fcc44555f5036f5e0e1d2 = MAKE_CODE_OBJECT(module_filename_obj, 85, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[110], mod_consts[110], mod_consts[217], NULL, 3, 0, 0);
    codeobj_983f634376dee3b13f09963bdffb060d = MAKE_CODE_OBJECT(module_filename_obj, 248, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[159], mod_consts[159], mod_consts[216], NULL, 1, 0, 0);
    codeobj_5806d07fb2bde92caeb30cc13bb51a1b = MAKE_CODE_OBJECT(module_filename_obj, 227, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[156], mod_consts[156], mod_consts[216], NULL, 1, 0, 0);
    codeobj_4e77fda9e454bbbcbd52a41ac91209a4 = MAKE_CODE_OBJECT(module_filename_obj, 145, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[124], mod_consts[124], mod_consts[218], NULL, 2, 0, 0);
    codeobj_509c8bfc697e47663483a78e245371b2 = MAKE_CODE_OBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[37], mod_consts[37], mod_consts[216], NULL, 1, 0, 0);
    codeobj_2e4a02fe9e0b062a0759851008cc9e22 = MAKE_CODE_OBJECT(module_filename_obj, 182, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[25], mod_consts[25], mod_consts[219], NULL, 3, 0, 0);
    codeobj_6820cb0aa7edee5e0044191a6a8b5e53 = MAKE_CODE_OBJECT(module_filename_obj, 158, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[127], mod_consts[127], mod_consts[220], NULL, 1, 0, 0);
    codeobj_2c4ae9e42ea8fac61f406825e6ccf58f = MAKE_CODE_OBJECT(module_filename_obj, 348, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[47], mod_consts[47], mod_consts[216], NULL, 1, 0, 0);
    codeobj_774c0f1f3e55aefc2f9811cdcc646095 = MAKE_CODE_OBJECT(module_filename_obj, 161, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[13], mod_consts[13], mod_consts[221], mod_consts[222], 1, 0, 0);
    codeobj_d42a44be9aeb3515ae10ff0c56d909c4 = MAKE_CODE_OBJECT(module_filename_obj, 363, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[197], mod_consts[197], mod_consts[216], NULL, 1, 0, 0);
    codeobj_f14bd7476014da7075d75737b59c459e = MAKE_CODE_OBJECT(module_filename_obj, 372, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[35], mod_consts[35], mod_consts[216], NULL, 1, 0, 0);
    codeobj_1ccdd845519aec866b796f9ed2078f2e = MAKE_CODE_OBJECT(module_filename_obj, 167, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[20], mod_consts[20], mod_consts[223], mod_consts[224], 0, 0, 0);
    codeobj_93a1d46001cb1a234497159fc59daf4f = MAKE_CODE_OBJECT(module_filename_obj, 109, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[119], mod_consts[119], mod_consts[216], NULL, 1, 0, 0);
    codeobj_0ba63cd48927f05a6b1ccd9ef8ae2030 = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[116], mod_consts[116], mod_consts[216], NULL, 1, 0, 0);
    codeobj_9af57ab708d340eda46e5d5cd39f6a82 = MAKE_CODE_OBJECT(module_filename_obj, 380, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[202], mod_consts[202], mod_consts[216], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_sqlalchemy$engine$row$$$function__31___iter__$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__6_complex_call_helper_pos_star_list_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__13___lt__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__14___le__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__15___ge__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__16___gt__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__17___eq__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__18___ne__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__19___repr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__1___setattr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__20__fields(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__21__asdict(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__22___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__23___len__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__24___repr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__25___iter__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__26___contains__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__27___eq__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__28___ne__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__2___delattr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__30__values_impl(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__31___iter__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__32___len__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__33___contains__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__34___repr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__35_items(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__36_keys(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__37_values(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__3_tuple(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__4_t(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__5__mapping(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__6__filter_on_values(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__7__special_name_accessor(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__7__special_name_accessor$$$function__1_go(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__7__special_name_accessor$$$function__1_go$$$function__1_meth(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__8___contains__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__9__op(PyObject *annotations);


// The module function definitions.
static PyObject *impl_sqlalchemy$engine$row$$$function__1___setattr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_value = python_pars[2];
    struct Nuitka_FrameObject *frame_c9a3a4a1365fcc44555f5036f5e0e1d2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c9a3a4a1365fcc44555f5036f5e0e1d2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c9a3a4a1365fcc44555f5036f5e0e1d2)) {
        Py_XDECREF(cache_frame_c9a3a4a1365fcc44555f5036f5e0e1d2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c9a3a4a1365fcc44555f5036f5e0e1d2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c9a3a4a1365fcc44555f5036f5e0e1d2 = MAKE_FUNCTION_FRAME(codeobj_c9a3a4a1365fcc44555f5036f5e0e1d2, module_sqlalchemy$engine$row, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c9a3a4a1365fcc44555f5036f5e0e1d2->m_type_description == NULL);
    frame_c9a3a4a1365fcc44555f5036f5e0e1d2 = cache_frame_c9a3a4a1365fcc44555f5036f5e0e1d2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c9a3a4a1365fcc44555f5036f5e0e1d2);
    assert(Py_REFCNT(frame_c9a3a4a1365fcc44555f5036f5e0e1d2) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[0];
        frame_c9a3a4a1365fcc44555f5036f5e0e1d2->m_frame.f_lineno = 86;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_AttributeError, tmp_make_exception_arg_1);
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
        exception_tb = MAKE_TRACEBACK(frame_c9a3a4a1365fcc44555f5036f5e0e1d2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c9a3a4a1365fcc44555f5036f5e0e1d2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c9a3a4a1365fcc44555f5036f5e0e1d2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c9a3a4a1365fcc44555f5036f5e0e1d2,
        type_description_1,
        par_self,
        par_name,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_c9a3a4a1365fcc44555f5036f5e0e1d2 == cache_frame_c9a3a4a1365fcc44555f5036f5e0e1d2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c9a3a4a1365fcc44555f5036f5e0e1d2);
        cache_frame_c9a3a4a1365fcc44555f5036f5e0e1d2 = NULL;
    }

    assertFrameObject(frame_c9a3a4a1365fcc44555f5036f5e0e1d2);

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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$row$$$function__2___delattr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    struct Nuitka_FrameObject *frame_00569432ddfafc4aa1be5ce9bf175db1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_00569432ddfafc4aa1be5ce9bf175db1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_00569432ddfafc4aa1be5ce9bf175db1)) {
        Py_XDECREF(cache_frame_00569432ddfafc4aa1be5ce9bf175db1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_00569432ddfafc4aa1be5ce9bf175db1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_00569432ddfafc4aa1be5ce9bf175db1 = MAKE_FUNCTION_FRAME(codeobj_00569432ddfafc4aa1be5ce9bf175db1, module_sqlalchemy$engine$row, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_00569432ddfafc4aa1be5ce9bf175db1->m_type_description == NULL);
    frame_00569432ddfafc4aa1be5ce9bf175db1 = cache_frame_00569432ddfafc4aa1be5ce9bf175db1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_00569432ddfafc4aa1be5ce9bf175db1);
    assert(Py_REFCNT(frame_00569432ddfafc4aa1be5ce9bf175db1) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[1];
        frame_00569432ddfafc4aa1be5ce9bf175db1->m_frame.f_lineno = 89;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_AttributeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 89;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_00569432ddfafc4aa1be5ce9bf175db1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_00569432ddfafc4aa1be5ce9bf175db1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_00569432ddfafc4aa1be5ce9bf175db1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_00569432ddfafc4aa1be5ce9bf175db1,
        type_description_1,
        par_self,
        par_name
    );


    // Release cached frame if used for exception.
    if (frame_00569432ddfafc4aa1be5ce9bf175db1 == cache_frame_00569432ddfafc4aa1be5ce9bf175db1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_00569432ddfafc4aa1be5ce9bf175db1);
        cache_frame_00569432ddfafc4aa1be5ce9bf175db1 = NULL;
    }

    assertFrameObject(frame_00569432ddfafc4aa1be5ce9bf175db1);

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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$row$$$function__3_tuple(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_self);
    tmp_return_value = par_self;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

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


static PyObject *impl_sqlalchemy$engine$row$$$function__4_t(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_self);
    tmp_return_value = par_self;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

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


static PyObject *impl_sqlalchemy$engine$row$$$function__5__mapping(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_509c8bfc697e47663483a78e245371b2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_509c8bfc697e47663483a78e245371b2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_509c8bfc697e47663483a78e245371b2)) {
        Py_XDECREF(cache_frame_509c8bfc697e47663483a78e245371b2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_509c8bfc697e47663483a78e245371b2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_509c8bfc697e47663483a78e245371b2 = MAKE_FUNCTION_FRAME(codeobj_509c8bfc697e47663483a78e245371b2, module_sqlalchemy$engine$row, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_509c8bfc697e47663483a78e245371b2->m_type_description == NULL);
    frame_509c8bfc697e47663483a78e245371b2 = cache_frame_509c8bfc697e47663483a78e245371b2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_509c8bfc697e47663483a78e245371b2);
    assert(Py_REFCNT(frame_509c8bfc697e47663483a78e245371b2) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[6]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 140;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 141;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[7]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 141;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[8]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 142;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_509c8bfc697e47663483a78e245371b2->m_frame.f_lineno = 137;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
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
        exception_tb = MAKE_TRACEBACK(frame_509c8bfc697e47663483a78e245371b2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_509c8bfc697e47663483a78e245371b2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_509c8bfc697e47663483a78e245371b2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_509c8bfc697e47663483a78e245371b2,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_509c8bfc697e47663483a78e245371b2 == cache_frame_509c8bfc697e47663483a78e245371b2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_509c8bfc697e47663483a78e245371b2);
        cache_frame_509c8bfc697e47663483a78e245371b2 = NULL;
    }

    assertFrameObject(frame_509c8bfc697e47663483a78e245371b2);

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


static PyObject *impl_sqlalchemy$engine$row$$$function__6__filter_on_values(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_filters = python_pars[1];
    struct Nuitka_FrameObject *frame_4e77fda9e454bbbcbd52a41ac91209a4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4e77fda9e454bbbcbd52a41ac91209a4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4e77fda9e454bbbcbd52a41ac91209a4)) {
        Py_XDECREF(cache_frame_4e77fda9e454bbbcbd52a41ac91209a4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4e77fda9e454bbbcbd52a41ac91209a4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4e77fda9e454bbbcbd52a41ac91209a4 = MAKE_FUNCTION_FRAME(codeobj_4e77fda9e454bbbcbd52a41ac91209a4, module_sqlalchemy$engine$row, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4e77fda9e454bbbcbd52a41ac91209a4->m_type_description == NULL);
    frame_4e77fda9e454bbbcbd52a41ac91209a4 = cache_frame_4e77fda9e454bbbcbd52a41ac91209a4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4e77fda9e454bbbcbd52a41ac91209a4);
    assert(Py_REFCNT(frame_4e77fda9e454bbbcbd52a41ac91209a4) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_filters);
        tmp_args_element_value_2 = par_filters;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[6]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 151;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[11]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 152;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[8]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 153;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_4e77fda9e454bbbcbd52a41ac91209a4->m_frame.f_lineno = 148;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
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
        exception_tb = MAKE_TRACEBACK(frame_4e77fda9e454bbbcbd52a41ac91209a4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4e77fda9e454bbbcbd52a41ac91209a4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4e77fda9e454bbbcbd52a41ac91209a4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4e77fda9e454bbbcbd52a41ac91209a4,
        type_description_1,
        par_self,
        par_filters
    );


    // Release cached frame if used for exception.
    if (frame_4e77fda9e454bbbcbd52a41ac91209a4 == cache_frame_4e77fda9e454bbbcbd52a41ac91209a4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4e77fda9e454bbbcbd52a41ac91209a4);
        cache_frame_4e77fda9e454bbbcbd52a41ac91209a4 = NULL;
    }

    assertFrameObject(frame_4e77fda9e454bbbcbd52a41ac91209a4);

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
    CHECK_OBJECT(par_filters);
    Py_DECREF(par_filters);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_filters);
    Py_DECREF(par_filters);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$engine$row$$$function__7__special_name_accessor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_name = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var_go = NULL;
    struct Nuitka_FrameObject *frame_6820cb0aa7edee5e0044191a6a8b5e53;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6820cb0aa7edee5e0044191a6a8b5e53 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6820cb0aa7edee5e0044191a6a8b5e53)) {
        Py_XDECREF(cache_frame_6820cb0aa7edee5e0044191a6a8b5e53);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6820cb0aa7edee5e0044191a6a8b5e53 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6820cb0aa7edee5e0044191a6a8b5e53 = MAKE_FUNCTION_FRAME(codeobj_6820cb0aa7edee5e0044191a6a8b5e53, module_sqlalchemy$engine$row, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6820cb0aa7edee5e0044191a6a8b5e53->m_type_description == NULL);
    frame_6820cb0aa7edee5e0044191a6a8b5e53 = cache_frame_6820cb0aa7edee5e0044191a6a8b5e53;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6820cb0aa7edee5e0044191a6a8b5e53);
    assert(Py_REFCNT(frame_6820cb0aa7edee5e0044191a6a8b5e53) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_annotations_1;
        struct Nuitka_CellObject *tmp_closure_1[1];
        tmp_called_value_1 = (PyObject *)&PyProperty_Type;
        tmp_annotations_1 = DICT_COPY(mod_consts[12]);

        tmp_closure_1[0] = par_name;
        Py_INCREF(tmp_closure_1[0]);

        tmp_args_element_value_1 = MAKE_FUNCTION_sqlalchemy$engine$row$$$function__7__special_name_accessor$$$function__1_go(tmp_annotations_1, tmp_closure_1);

        frame_6820cb0aa7edee5e0044191a6a8b5e53->m_frame.f_lineno = 161;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        assert(var_go == NULL);
        var_go = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6820cb0aa7edee5e0044191a6a8b5e53, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6820cb0aa7edee5e0044191a6a8b5e53->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6820cb0aa7edee5e0044191a6a8b5e53, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6820cb0aa7edee5e0044191a6a8b5e53,
        type_description_1,
        par_name,
        var_go
    );


    // Release cached frame if used for exception.
    if (frame_6820cb0aa7edee5e0044191a6a8b5e53 == cache_frame_6820cb0aa7edee5e0044191a6a8b5e53) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6820cb0aa7edee5e0044191a6a8b5e53);
        cache_frame_6820cb0aa7edee5e0044191a6a8b5e53 = NULL;
    }

    assertFrameObject(frame_6820cb0aa7edee5e0044191a6a8b5e53);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_go);
    tmp_return_value = var_go;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_go);
    Py_DECREF(var_go);
    var_go = NULL;
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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$engine$row$$$function__7__special_name_accessor$$$function__1_go(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var_meth = NULL;
    struct Nuitka_FrameObject *frame_774c0f1f3e55aefc2f9811cdcc646095;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_774c0f1f3e55aefc2f9811cdcc646095 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_774c0f1f3e55aefc2f9811cdcc646095)) {
        Py_XDECREF(cache_frame_774c0f1f3e55aefc2f9811cdcc646095);

#if _DEBUG_REFCOUNTS
        if (cache_frame_774c0f1f3e55aefc2f9811cdcc646095 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_774c0f1f3e55aefc2f9811cdcc646095 = MAKE_FUNCTION_FRAME(codeobj_774c0f1f3e55aefc2f9811cdcc646095, module_sqlalchemy$engine$row, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_774c0f1f3e55aefc2f9811cdcc646095->m_type_description == NULL);
    frame_774c0f1f3e55aefc2f9811cdcc646095 = cache_frame_774c0f1f3e55aefc2f9811cdcc646095;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_774c0f1f3e55aefc2f9811cdcc646095);
    assert(Py_REFCNT(frame_774c0f1f3e55aefc2f9811cdcc646095) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_2 = Nuitka_Cell_GET(par_self);
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "coc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[16]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "coc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 163;
            type_description_1 = "coc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_774c0f1f3e55aefc2f9811cdcc646095->m_frame.f_lineno = 163;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "coc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 163;
            type_description_1 = "coc";
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
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_3 = Nuitka_Cell_GET(par_self);
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[18]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "coc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 164;
            type_description_1 = "coc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_774c0f1f3e55aefc2f9811cdcc646095->m_frame.f_lineno = 164;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "coc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_annotations_1;
        struct Nuitka_CellObject *tmp_closure_1[2];
        tmp_annotations_1 = DICT_COPY(mod_consts[19]);

        tmp_closure_1[0] = self->m_closure[0];
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_self;
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_1 = MAKE_FUNCTION_sqlalchemy$engine$row$$$function__7__special_name_accessor$$$function__1_go$$$function__1_meth(tmp_annotations_1, tmp_closure_1);

        assert(var_meth == NULL);
        var_meth = tmp_assign_source_1;
    }
    CHECK_OBJECT(var_meth);
    tmp_return_value = var_meth;
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
        exception_tb = MAKE_TRACEBACK(frame_774c0f1f3e55aefc2f9811cdcc646095, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_774c0f1f3e55aefc2f9811cdcc646095->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_774c0f1f3e55aefc2f9811cdcc646095, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_774c0f1f3e55aefc2f9811cdcc646095,
        type_description_1,
        par_self,
        var_meth,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_774c0f1f3e55aefc2f9811cdcc646095 == cache_frame_774c0f1f3e55aefc2f9811cdcc646095) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_774c0f1f3e55aefc2f9811cdcc646095);
        cache_frame_774c0f1f3e55aefc2f9811cdcc646095 = NULL;
    }

    assertFrameObject(frame_774c0f1f3e55aefc2f9811cdcc646095);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_meth);
    var_meth = NULL;
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


static PyObject *impl_sqlalchemy$engine$row$$$function__7__special_name_accessor$$$function__1_go$$$function__1_meth(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arg = python_pars[0];
    PyObject *par_kw = python_pars[1];
    struct Nuitka_FrameObject *frame_1ccdd845519aec866b796f9ed2078f2e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1ccdd845519aec866b796f9ed2078f2e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1ccdd845519aec866b796f9ed2078f2e)) {
        Py_XDECREF(cache_frame_1ccdd845519aec866b796f9ed2078f2e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1ccdd845519aec866b796f9ed2078f2e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1ccdd845519aec866b796f9ed2078f2e = MAKE_FUNCTION_FRAME(codeobj_1ccdd845519aec866b796f9ed2078f2e, module_sqlalchemy$engine$row, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1ccdd845519aec866b796f9ed2078f2e->m_type_description == NULL);
    frame_1ccdd845519aec866b796f9ed2078f2e = cache_frame_1ccdd845519aec866b796f9ed2078f2e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1ccdd845519aec866b796f9ed2078f2e);
    assert(Py_REFCNT(frame_1ccdd845519aec866b796f9ed2078f2e) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        tmp_getattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[23]);
        if (tmp_getattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_getattr_target_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 168;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_getattr_attr_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_dircall_arg1_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        Py_DECREF(tmp_getattr_target_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 169;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_arg);
        tmp_dircall_arg3_1 = par_arg;
        CHECK_OBJECT(par_kw);
        tmp_dircall_arg4_1 = par_kw;
        Py_INCREF(tmp_dircall_arg3_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___main__$$$function__6_complex_call_helper_pos_star_list_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oocc";
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
        exception_tb = MAKE_TRACEBACK(frame_1ccdd845519aec866b796f9ed2078f2e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1ccdd845519aec866b796f9ed2078f2e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1ccdd845519aec866b796f9ed2078f2e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1ccdd845519aec866b796f9ed2078f2e,
        type_description_1,
        par_arg,
        par_kw,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_1ccdd845519aec866b796f9ed2078f2e == cache_frame_1ccdd845519aec866b796f9ed2078f2e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1ccdd845519aec866b796f9ed2078f2e);
        cache_frame_1ccdd845519aec866b796f9ed2078f2e = NULL;
    }

    assertFrameObject(frame_1ccdd845519aec866b796f9ed2078f2e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_arg);
    Py_DECREF(par_arg);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_arg);
    Py_DECREF(par_arg);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$engine$row$$$function__8___contains__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_key = python_pars[1];
    struct Nuitka_FrameObject *frame_e567dd57b6641b4d4613b3b12cc2a19e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_e567dd57b6641b4d4613b3b12cc2a19e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e567dd57b6641b4d4613b3b12cc2a19e)) {
        Py_XDECREF(cache_frame_e567dd57b6641b4d4613b3b12cc2a19e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e567dd57b6641b4d4613b3b12cc2a19e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e567dd57b6641b4d4613b3b12cc2a19e = MAKE_FUNCTION_FRAME(codeobj_e567dd57b6641b4d4613b3b12cc2a19e, module_sqlalchemy$engine$row, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e567dd57b6641b4d4613b3b12cc2a19e->m_type_description == NULL);
    frame_e567dd57b6641b4d4613b3b12cc2a19e = cache_frame_e567dd57b6641b4d4613b3b12cc2a19e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e567dd57b6641b4d4613b3b12cc2a19e);
    assert(Py_REFCNT(frame_e567dd57b6641b4d4613b3b12cc2a19e) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_key);
        tmp_cmp_expr_left_1 = par_key;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[8]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 1) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_e567dd57b6641b4d4613b3b12cc2a19e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e567dd57b6641b4d4613b3b12cc2a19e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e567dd57b6641b4d4613b3b12cc2a19e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e567dd57b6641b4d4613b3b12cc2a19e,
        type_description_1,
        par_self,
        par_key
    );


    // Release cached frame if used for exception.
    if (frame_e567dd57b6641b4d4613b3b12cc2a19e == cache_frame_e567dd57b6641b4d4613b3b12cc2a19e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e567dd57b6641b4d4613b3b12cc2a19e);
        cache_frame_e567dd57b6641b4d4613b3b12cc2a19e = NULL;
    }

    assertFrameObject(frame_e567dd57b6641b4d4613b3b12cc2a19e);

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
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$engine$row$$$function__9__op(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    PyObject *par_op = python_pars[2];
    struct Nuitka_FrameObject *frame_2e4a02fe9e0b062a0759851008cc9e22;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_2e4a02fe9e0b062a0759851008cc9e22 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2e4a02fe9e0b062a0759851008cc9e22)) {
        Py_XDECREF(cache_frame_2e4a02fe9e0b062a0759851008cc9e22);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2e4a02fe9e0b062a0759851008cc9e22 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2e4a02fe9e0b062a0759851008cc9e22 = MAKE_FUNCTION_FRAME(codeobj_2e4a02fe9e0b062a0759851008cc9e22, module_sqlalchemy$engine$row, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2e4a02fe9e0b062a0759851008cc9e22->m_type_description == NULL);
    frame_2e4a02fe9e0b062a0759851008cc9e22 = cache_frame_2e4a02fe9e0b062a0759851008cc9e22;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2e4a02fe9e0b062a0759851008cc9e22);
    assert(Py_REFCNT(frame_2e4a02fe9e0b062a0759851008cc9e22) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_tuple_arg_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_tuple_arg_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_tuple_arg_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_other);
        tmp_isinstance_inst_1 = par_other;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_op);
        tmp_called_value_1 = par_op;
        CHECK_OBJECT(par_self);
        tmp_tuple_arg_1 = par_self;
        tmp_args_element_value_1 = PySequence_Tuple(tmp_tuple_arg_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_tuple_arg_2 = par_other;
        tmp_args_element_value_2 = PySequence_Tuple(tmp_tuple_arg_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 184;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_2e4a02fe9e0b062a0759851008cc9e22->m_frame.f_lineno = 184;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_op);
        tmp_called_value_2 = par_op;
        CHECK_OBJECT(par_self);
        tmp_tuple_arg_3 = par_self;
        tmp_args_element_value_3 = PySequence_Tuple(tmp_tuple_arg_3);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_args_element_value_4 = par_other;
        frame_2e4a02fe9e0b062a0759851008cc9e22->m_frame.f_lineno = 186;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_2e4a02fe9e0b062a0759851008cc9e22, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2e4a02fe9e0b062a0759851008cc9e22->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2e4a02fe9e0b062a0759851008cc9e22, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2e4a02fe9e0b062a0759851008cc9e22,
        type_description_1,
        par_self,
        par_other,
        par_op
    );


    // Release cached frame if used for exception.
    if (frame_2e4a02fe9e0b062a0759851008cc9e22 == cache_frame_2e4a02fe9e0b062a0759851008cc9e22) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2e4a02fe9e0b062a0759851008cc9e22);
        cache_frame_2e4a02fe9e0b062a0759851008cc9e22 = NULL;
    }

    assertFrameObject(frame_2e4a02fe9e0b062a0759851008cc9e22);

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
    CHECK_OBJECT(par_op);
    Py_DECREF(par_op);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    CHECK_OBJECT(par_op);
    Py_DECREF(par_op);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$engine$row$$$function__13___lt__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_cf378d30dfff34ac27ab8a1dd66f25cb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cf378d30dfff34ac27ab8a1dd66f25cb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cf378d30dfff34ac27ab8a1dd66f25cb)) {
        Py_XDECREF(cache_frame_cf378d30dfff34ac27ab8a1dd66f25cb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cf378d30dfff34ac27ab8a1dd66f25cb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cf378d30dfff34ac27ab8a1dd66f25cb = MAKE_FUNCTION_FRAME(codeobj_cf378d30dfff34ac27ab8a1dd66f25cb, module_sqlalchemy$engine$row, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cf378d30dfff34ac27ab8a1dd66f25cb->m_type_description == NULL);
    frame_cf378d30dfff34ac27ab8a1dd66f25cb = cache_frame_cf378d30dfff34ac27ab8a1dd66f25cb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cf378d30dfff34ac27ab8a1dd66f25cb);
    assert(Py_REFCNT(frame_cf378d30dfff34ac27ab8a1dd66f25cb) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_args_element_value_1 = par_other;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 207;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[27]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 207;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_cf378d30dfff34ac27ab8a1dd66f25cb->m_frame.f_lineno = 207;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
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
        exception_tb = MAKE_TRACEBACK(frame_cf378d30dfff34ac27ab8a1dd66f25cb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cf378d30dfff34ac27ab8a1dd66f25cb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cf378d30dfff34ac27ab8a1dd66f25cb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cf378d30dfff34ac27ab8a1dd66f25cb,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_cf378d30dfff34ac27ab8a1dd66f25cb == cache_frame_cf378d30dfff34ac27ab8a1dd66f25cb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cf378d30dfff34ac27ab8a1dd66f25cb);
        cache_frame_cf378d30dfff34ac27ab8a1dd66f25cb = NULL;
    }

    assertFrameObject(frame_cf378d30dfff34ac27ab8a1dd66f25cb);

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


static PyObject *impl_sqlalchemy$engine$row$$$function__14___le__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_3df1345ac383a0482ce895e2b3d76664;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3df1345ac383a0482ce895e2b3d76664 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3df1345ac383a0482ce895e2b3d76664)) {
        Py_XDECREF(cache_frame_3df1345ac383a0482ce895e2b3d76664);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3df1345ac383a0482ce895e2b3d76664 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3df1345ac383a0482ce895e2b3d76664 = MAKE_FUNCTION_FRAME(codeobj_3df1345ac383a0482ce895e2b3d76664, module_sqlalchemy$engine$row, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3df1345ac383a0482ce895e2b3d76664->m_type_description == NULL);
    frame_3df1345ac383a0482ce895e2b3d76664 = cache_frame_3df1345ac383a0482ce895e2b3d76664;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3df1345ac383a0482ce895e2b3d76664);
    assert(Py_REFCNT(frame_3df1345ac383a0482ce895e2b3d76664) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_args_element_value_1 = par_other;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 210;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[28]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 210;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3df1345ac383a0482ce895e2b3d76664->m_frame.f_lineno = 210;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
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
        exception_tb = MAKE_TRACEBACK(frame_3df1345ac383a0482ce895e2b3d76664, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3df1345ac383a0482ce895e2b3d76664->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3df1345ac383a0482ce895e2b3d76664, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3df1345ac383a0482ce895e2b3d76664,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_3df1345ac383a0482ce895e2b3d76664 == cache_frame_3df1345ac383a0482ce895e2b3d76664) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3df1345ac383a0482ce895e2b3d76664);
        cache_frame_3df1345ac383a0482ce895e2b3d76664 = NULL;
    }

    assertFrameObject(frame_3df1345ac383a0482ce895e2b3d76664);

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


static PyObject *impl_sqlalchemy$engine$row$$$function__15___ge__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_0a7080d0b2eb1da8edf9725b473df008;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0a7080d0b2eb1da8edf9725b473df008 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0a7080d0b2eb1da8edf9725b473df008)) {
        Py_XDECREF(cache_frame_0a7080d0b2eb1da8edf9725b473df008);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0a7080d0b2eb1da8edf9725b473df008 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0a7080d0b2eb1da8edf9725b473df008 = MAKE_FUNCTION_FRAME(codeobj_0a7080d0b2eb1da8edf9725b473df008, module_sqlalchemy$engine$row, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0a7080d0b2eb1da8edf9725b473df008->m_type_description == NULL);
    frame_0a7080d0b2eb1da8edf9725b473df008 = cache_frame_0a7080d0b2eb1da8edf9725b473df008;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0a7080d0b2eb1da8edf9725b473df008);
    assert(Py_REFCNT(frame_0a7080d0b2eb1da8edf9725b473df008) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_args_element_value_1 = par_other;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 213;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[29]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 213;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_0a7080d0b2eb1da8edf9725b473df008->m_frame.f_lineno = 213;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
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
        exception_tb = MAKE_TRACEBACK(frame_0a7080d0b2eb1da8edf9725b473df008, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0a7080d0b2eb1da8edf9725b473df008->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0a7080d0b2eb1da8edf9725b473df008, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0a7080d0b2eb1da8edf9725b473df008,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_0a7080d0b2eb1da8edf9725b473df008 == cache_frame_0a7080d0b2eb1da8edf9725b473df008) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0a7080d0b2eb1da8edf9725b473df008);
        cache_frame_0a7080d0b2eb1da8edf9725b473df008 = NULL;
    }

    assertFrameObject(frame_0a7080d0b2eb1da8edf9725b473df008);

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


static PyObject *impl_sqlalchemy$engine$row$$$function__16___gt__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_a37b1632e1c188ec2d285f7a39e63b12;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a37b1632e1c188ec2d285f7a39e63b12 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a37b1632e1c188ec2d285f7a39e63b12)) {
        Py_XDECREF(cache_frame_a37b1632e1c188ec2d285f7a39e63b12);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a37b1632e1c188ec2d285f7a39e63b12 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a37b1632e1c188ec2d285f7a39e63b12 = MAKE_FUNCTION_FRAME(codeobj_a37b1632e1c188ec2d285f7a39e63b12, module_sqlalchemy$engine$row, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a37b1632e1c188ec2d285f7a39e63b12->m_type_description == NULL);
    frame_a37b1632e1c188ec2d285f7a39e63b12 = cache_frame_a37b1632e1c188ec2d285f7a39e63b12;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a37b1632e1c188ec2d285f7a39e63b12);
    assert(Py_REFCNT(frame_a37b1632e1c188ec2d285f7a39e63b12) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_args_element_value_1 = par_other;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 216;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[30]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 216;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_a37b1632e1c188ec2d285f7a39e63b12->m_frame.f_lineno = 216;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
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
        exception_tb = MAKE_TRACEBACK(frame_a37b1632e1c188ec2d285f7a39e63b12, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a37b1632e1c188ec2d285f7a39e63b12->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a37b1632e1c188ec2d285f7a39e63b12, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a37b1632e1c188ec2d285f7a39e63b12,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_a37b1632e1c188ec2d285f7a39e63b12 == cache_frame_a37b1632e1c188ec2d285f7a39e63b12) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a37b1632e1c188ec2d285f7a39e63b12);
        cache_frame_a37b1632e1c188ec2d285f7a39e63b12 = NULL;
    }

    assertFrameObject(frame_a37b1632e1c188ec2d285f7a39e63b12);

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


static PyObject *impl_sqlalchemy$engine$row$$$function__17___eq__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_61e6b211a75e41a2dd1146432f2cdc7c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_61e6b211a75e41a2dd1146432f2cdc7c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_61e6b211a75e41a2dd1146432f2cdc7c)) {
        Py_XDECREF(cache_frame_61e6b211a75e41a2dd1146432f2cdc7c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_61e6b211a75e41a2dd1146432f2cdc7c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_61e6b211a75e41a2dd1146432f2cdc7c = MAKE_FUNCTION_FRAME(codeobj_61e6b211a75e41a2dd1146432f2cdc7c, module_sqlalchemy$engine$row, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_61e6b211a75e41a2dd1146432f2cdc7c->m_type_description == NULL);
    frame_61e6b211a75e41a2dd1146432f2cdc7c = cache_frame_61e6b211a75e41a2dd1146432f2cdc7c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_61e6b211a75e41a2dd1146432f2cdc7c);
    assert(Py_REFCNT(frame_61e6b211a75e41a2dd1146432f2cdc7c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_args_element_value_1 = par_other;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 219;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[31]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 219;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_61e6b211a75e41a2dd1146432f2cdc7c->m_frame.f_lineno = 219;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
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
        exception_tb = MAKE_TRACEBACK(frame_61e6b211a75e41a2dd1146432f2cdc7c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_61e6b211a75e41a2dd1146432f2cdc7c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_61e6b211a75e41a2dd1146432f2cdc7c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_61e6b211a75e41a2dd1146432f2cdc7c,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_61e6b211a75e41a2dd1146432f2cdc7c == cache_frame_61e6b211a75e41a2dd1146432f2cdc7c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_61e6b211a75e41a2dd1146432f2cdc7c);
        cache_frame_61e6b211a75e41a2dd1146432f2cdc7c = NULL;
    }

    assertFrameObject(frame_61e6b211a75e41a2dd1146432f2cdc7c);

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


static PyObject *impl_sqlalchemy$engine$row$$$function__18___ne__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_c12e6b097ef2b16312b3094ef61b4170;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c12e6b097ef2b16312b3094ef61b4170 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c12e6b097ef2b16312b3094ef61b4170)) {
        Py_XDECREF(cache_frame_c12e6b097ef2b16312b3094ef61b4170);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c12e6b097ef2b16312b3094ef61b4170 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c12e6b097ef2b16312b3094ef61b4170 = MAKE_FUNCTION_FRAME(codeobj_c12e6b097ef2b16312b3094ef61b4170, module_sqlalchemy$engine$row, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c12e6b097ef2b16312b3094ef61b4170->m_type_description == NULL);
    frame_c12e6b097ef2b16312b3094ef61b4170 = cache_frame_c12e6b097ef2b16312b3094ef61b4170;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c12e6b097ef2b16312b3094ef61b4170);
    assert(Py_REFCNT(frame_c12e6b097ef2b16312b3094ef61b4170) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_args_element_value_1 = par_other;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[32]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_c12e6b097ef2b16312b3094ef61b4170->m_frame.f_lineno = 222;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
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
        exception_tb = MAKE_TRACEBACK(frame_c12e6b097ef2b16312b3094ef61b4170, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c12e6b097ef2b16312b3094ef61b4170->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c12e6b097ef2b16312b3094ef61b4170, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c12e6b097ef2b16312b3094ef61b4170,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_c12e6b097ef2b16312b3094ef61b4170 == cache_frame_c12e6b097ef2b16312b3094ef61b4170) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c12e6b097ef2b16312b3094ef61b4170);
        cache_frame_c12e6b097ef2b16312b3094ef61b4170 = NULL;
    }

    assertFrameObject(frame_c12e6b097ef2b16312b3094ef61b4170);

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


static PyObject *impl_sqlalchemy$engine$row$$$function__19___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_01650a83b9cab80e3ff5e0b13b29872f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_01650a83b9cab80e3ff5e0b13b29872f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_01650a83b9cab80e3ff5e0b13b29872f)) {
        Py_XDECREF(cache_frame_01650a83b9cab80e3ff5e0b13b29872f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_01650a83b9cab80e3ff5e0b13b29872f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_01650a83b9cab80e3ff5e0b13b29872f = MAKE_FUNCTION_FRAME(codeobj_01650a83b9cab80e3ff5e0b13b29872f, module_sqlalchemy$engine$row, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_01650a83b9cab80e3ff5e0b13b29872f->m_type_description == NULL);
    frame_01650a83b9cab80e3ff5e0b13b29872f = cache_frame_01650a83b9cab80e3ff5e0b13b29872f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_01650a83b9cab80e3ff5e0b13b29872f);
    assert(Py_REFCNT(frame_01650a83b9cab80e3ff5e0b13b29872f) == 2);

    // Framed code:
    {
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_01650a83b9cab80e3ff5e0b13b29872f->m_frame.f_lineno = 225;
        tmp_operand_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[34], tmp_args_element_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
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
        exception_tb = MAKE_TRACEBACK(frame_01650a83b9cab80e3ff5e0b13b29872f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_01650a83b9cab80e3ff5e0b13b29872f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_01650a83b9cab80e3ff5e0b13b29872f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_01650a83b9cab80e3ff5e0b13b29872f,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_01650a83b9cab80e3ff5e0b13b29872f == cache_frame_01650a83b9cab80e3ff5e0b13b29872f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_01650a83b9cab80e3ff5e0b13b29872f);
        cache_frame_01650a83b9cab80e3ff5e0b13b29872f = NULL;
    }

    assertFrameObject(frame_01650a83b9cab80e3ff5e0b13b29872f);

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


static PyObject *impl_sqlalchemy$engine$row$$$function__20__fields(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *outline_0_var_k = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_5806d07fb2bde92caeb30cc13bb51a1b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_c83fcac2b3686cd497868e51c9a3787c_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_c83fcac2b3686cd497868e51c9a3787c_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_5806d07fb2bde92caeb30cc13bb51a1b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5806d07fb2bde92caeb30cc13bb51a1b)) {
        Py_XDECREF(cache_frame_5806d07fb2bde92caeb30cc13bb51a1b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5806d07fb2bde92caeb30cc13bb51a1b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5806d07fb2bde92caeb30cc13bb51a1b = MAKE_FUNCTION_FRAME(codeobj_5806d07fb2bde92caeb30cc13bb51a1b, module_sqlalchemy$engine$row, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5806d07fb2bde92caeb30cc13bb51a1b->m_type_description == NULL);
    frame_5806d07fb2bde92caeb30cc13bb51a1b = cache_frame_5806d07fb2bde92caeb30cc13bb51a1b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5806d07fb2bde92caeb30cc13bb51a1b);
    assert(Py_REFCNT(frame_5806d07fb2bde92caeb30cc13bb51a1b) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_arg_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_expression_value_2;
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
            if (tmp_expression_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[35]);
            Py_DECREF(tmp_expression_value_1);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
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
        if (isFrameUnusable(cache_frame_c83fcac2b3686cd497868e51c9a3787c_2)) {
            Py_XDECREF(cache_frame_c83fcac2b3686cd497868e51c9a3787c_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_c83fcac2b3686cd497868e51c9a3787c_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_c83fcac2b3686cd497868e51c9a3787c_2 = MAKE_FUNCTION_FRAME(codeobj_c83fcac2b3686cd497868e51c9a3787c, module_sqlalchemy$engine$row, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_c83fcac2b3686cd497868e51c9a3787c_2->m_type_description == NULL);
        frame_c83fcac2b3686cd497868e51c9a3787c_2 = cache_frame_c83fcac2b3686cd497868e51c9a3787c_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_c83fcac2b3686cd497868e51c9a3787c_2);
        assert(Py_REFCNT(frame_c83fcac2b3686cd497868e51c9a3787c_2) == 2);

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
                    exception_lineno = 246;
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
                PyObject *old = outline_0_var_k;
                outline_0_var_k = tmp_assign_source_4;
                Py_INCREF(outline_0_var_k);
                Py_XDECREF(old);
            }

        }
        {
            bool tmp_condition_result_1;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(outline_0_var_k);
            tmp_cmp_expr_left_1 = outline_0_var_k;
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
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_k);
            tmp_append_value_1 = outline_0_var_k;
            tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_2 = "o";
                goto try_except_handler_2;
            }
        }
        branch_no_1:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_tuple_arg_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_tuple_arg_1);
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
            exception_tb = MAKE_TRACEBACK(frame_c83fcac2b3686cd497868e51c9a3787c_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c83fcac2b3686cd497868e51c9a3787c_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c83fcac2b3686cd497868e51c9a3787c_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c83fcac2b3686cd497868e51c9a3787c_2,
            type_description_2,
            outline_0_var_k
        );


        // Release cached frame if used for exception.
        if (frame_c83fcac2b3686cd497868e51c9a3787c_2 == cache_frame_c83fcac2b3686cd497868e51c9a3787c_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_c83fcac2b3686cd497868e51c9a3787c_2);
            cache_frame_c83fcac2b3686cd497868e51c9a3787c_2 = NULL;
        }

        assertFrameObject(frame_c83fcac2b3686cd497868e51c9a3787c_2);

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
        Py_XDECREF(outline_0_var_k);
        outline_0_var_k = NULL;
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

        Py_XDECREF(outline_0_var_k);
        outline_0_var_k = NULL;
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
        exception_lineno = 246;
        goto frame_exception_exit_1;
        outline_result_1:;
        tmp_return_value = PySequence_Tuple(tmp_tuple_arg_1);
        Py_DECREF(tmp_tuple_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
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
        exception_tb = MAKE_TRACEBACK(frame_5806d07fb2bde92caeb30cc13bb51a1b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5806d07fb2bde92caeb30cc13bb51a1b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5806d07fb2bde92caeb30cc13bb51a1b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5806d07fb2bde92caeb30cc13bb51a1b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_5806d07fb2bde92caeb30cc13bb51a1b == cache_frame_5806d07fb2bde92caeb30cc13bb51a1b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5806d07fb2bde92caeb30cc13bb51a1b);
        cache_frame_5806d07fb2bde92caeb30cc13bb51a1b = NULL;
    }

    assertFrameObject(frame_5806d07fb2bde92caeb30cc13bb51a1b);

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


static PyObject *impl_sqlalchemy$engine$row$$$function__21__asdict(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_983f634376dee3b13f09963bdffb060d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_983f634376dee3b13f09963bdffb060d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_983f634376dee3b13f09963bdffb060d)) {
        Py_XDECREF(cache_frame_983f634376dee3b13f09963bdffb060d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_983f634376dee3b13f09963bdffb060d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_983f634376dee3b13f09963bdffb060d = MAKE_FUNCTION_FRAME(codeobj_983f634376dee3b13f09963bdffb060d, module_sqlalchemy$engine$row, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_983f634376dee3b13f09963bdffb060d->m_type_description == NULL);
    frame_983f634376dee3b13f09963bdffb060d = cache_frame_983f634376dee3b13f09963bdffb060d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_983f634376dee3b13f09963bdffb060d);
    assert(Py_REFCNT(frame_983f634376dee3b13f09963bdffb060d) == 2);

    // Framed code:
    {
        PyObject *tmp_dict_seq_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_dict_seq_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[37]);
        if (tmp_dict_seq_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = TO_DICT(tmp_dict_seq_1, NULL);
        Py_DECREF(tmp_dict_seq_1);
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

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_983f634376dee3b13f09963bdffb060d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_983f634376dee3b13f09963bdffb060d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_983f634376dee3b13f09963bdffb060d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_983f634376dee3b13f09963bdffb060d,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_983f634376dee3b13f09963bdffb060d == cache_frame_983f634376dee3b13f09963bdffb060d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_983f634376dee3b13f09963bdffb060d);
        cache_frame_983f634376dee3b13f09963bdffb060d = NULL;
    }

    assertFrameObject(frame_983f634376dee3b13f09963bdffb060d);

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


static PyObject *impl_sqlalchemy$engine$row$$$function__22___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_mapping = python_pars[1];
    PyObject *par_items = python_pars[2];
    struct Nuitka_FrameObject *frame_04a09dfb454b89026c9f844e75fb8590;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_04a09dfb454b89026c9f844e75fb8590 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_04a09dfb454b89026c9f844e75fb8590)) {
        Py_XDECREF(cache_frame_04a09dfb454b89026c9f844e75fb8590);

#if _DEBUG_REFCOUNTS
        if (cache_frame_04a09dfb454b89026c9f844e75fb8590 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_04a09dfb454b89026c9f844e75fb8590 = MAKE_FUNCTION_FRAME(codeobj_04a09dfb454b89026c9f844e75fb8590, module_sqlalchemy$engine$row, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_04a09dfb454b89026c9f844e75fb8590->m_type_description == NULL);
    frame_04a09dfb454b89026c9f844e75fb8590 = cache_frame_04a09dfb454b89026c9f844e75fb8590;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_04a09dfb454b89026c9f844e75fb8590);
    assert(Py_REFCNT(frame_04a09dfb454b89026c9f844e75fb8590) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_mapping);
        tmp_assattr_value_1 = par_mapping;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[37], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_items);
        tmp_assattr_value_2 = par_items;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[39], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_04a09dfb454b89026c9f844e75fb8590, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_04a09dfb454b89026c9f844e75fb8590->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_04a09dfb454b89026c9f844e75fb8590, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_04a09dfb454b89026c9f844e75fb8590,
        type_description_1,
        par_self,
        par_mapping,
        par_items
    );


    // Release cached frame if used for exception.
    if (frame_04a09dfb454b89026c9f844e75fb8590 == cache_frame_04a09dfb454b89026c9f844e75fb8590) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_04a09dfb454b89026c9f844e75fb8590);
        cache_frame_04a09dfb454b89026c9f844e75fb8590 = NULL;
    }

    assertFrameObject(frame_04a09dfb454b89026c9f844e75fb8590);

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
    CHECK_OBJECT(par_mapping);
    Py_DECREF(par_mapping);
    CHECK_OBJECT(par_items);
    Py_DECREF(par_items);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_mapping);
    Py_DECREF(par_mapping);
    CHECK_OBJECT(par_items);
    Py_DECREF(par_items);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$engine$row$$$function__23___len__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_7d4f7dadb342a7cd1daa0af9143ee545;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7d4f7dadb342a7cd1daa0af9143ee545 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7d4f7dadb342a7cd1daa0af9143ee545)) {
        Py_XDECREF(cache_frame_7d4f7dadb342a7cd1daa0af9143ee545);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7d4f7dadb342a7cd1daa0af9143ee545 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7d4f7dadb342a7cd1daa0af9143ee545 = MAKE_FUNCTION_FRAME(codeobj_7d4f7dadb342a7cd1daa0af9143ee545, module_sqlalchemy$engine$row, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7d4f7dadb342a7cd1daa0af9143ee545->m_type_description == NULL);
    frame_7d4f7dadb342a7cd1daa0af9143ee545 = cache_frame_7d4f7dadb342a7cd1daa0af9143ee545;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7d4f7dadb342a7cd1daa0af9143ee545);
    assert(Py_REFCNT(frame_7d4f7dadb342a7cd1daa0af9143ee545) == 2);

    // Framed code:
    {
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[39]);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
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
        exception_tb = MAKE_TRACEBACK(frame_7d4f7dadb342a7cd1daa0af9143ee545, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7d4f7dadb342a7cd1daa0af9143ee545->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7d4f7dadb342a7cd1daa0af9143ee545, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7d4f7dadb342a7cd1daa0af9143ee545,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7d4f7dadb342a7cd1daa0af9143ee545 == cache_frame_7d4f7dadb342a7cd1daa0af9143ee545) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7d4f7dadb342a7cd1daa0af9143ee545);
        cache_frame_7d4f7dadb342a7cd1daa0af9143ee545 = NULL;
    }

    assertFrameObject(frame_7d4f7dadb342a7cd1daa0af9143ee545);

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


static PyObject *impl_sqlalchemy$engine$row$$$function__24___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_7772d50ab8d3c03f2a02eadbacb74390;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7772d50ab8d3c03f2a02eadbacb74390 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7772d50ab8d3c03f2a02eadbacb74390)) {
        Py_XDECREF(cache_frame_7772d50ab8d3c03f2a02eadbacb74390);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7772d50ab8d3c03f2a02eadbacb74390 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7772d50ab8d3c03f2a02eadbacb74390 = MAKE_FUNCTION_FRAME(codeobj_7772d50ab8d3c03f2a02eadbacb74390, module_sqlalchemy$engine$row, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7772d50ab8d3c03f2a02eadbacb74390->m_type_description == NULL);
    frame_7772d50ab8d3c03f2a02eadbacb74390 = cache_frame_7772d50ab8d3c03f2a02eadbacb74390;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7772d50ab8d3c03f2a02eadbacb74390);
    assert(Py_REFCNT(frame_7772d50ab8d3c03f2a02eadbacb74390) == 2);

    // Framed code:
    {
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[40];
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_1_1 = par_self;
        frame_7772d50ab8d3c03f2a02eadbacb74390->m_frame.f_lineno = 284;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
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
        exception_tb = MAKE_TRACEBACK(frame_7772d50ab8d3c03f2a02eadbacb74390, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7772d50ab8d3c03f2a02eadbacb74390->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7772d50ab8d3c03f2a02eadbacb74390, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7772d50ab8d3c03f2a02eadbacb74390,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7772d50ab8d3c03f2a02eadbacb74390 == cache_frame_7772d50ab8d3c03f2a02eadbacb74390) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7772d50ab8d3c03f2a02eadbacb74390);
        cache_frame_7772d50ab8d3c03f2a02eadbacb74390 = NULL;
    }

    assertFrameObject(frame_7772d50ab8d3c03f2a02eadbacb74390);

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


static PyObject *impl_sqlalchemy$engine$row$$$function__25___iter__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_b40c8db3a40734d8bf36d374ca67991b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b40c8db3a40734d8bf36d374ca67991b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b40c8db3a40734d8bf36d374ca67991b)) {
        Py_XDECREF(cache_frame_b40c8db3a40734d8bf36d374ca67991b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b40c8db3a40734d8bf36d374ca67991b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b40c8db3a40734d8bf36d374ca67991b = MAKE_FUNCTION_FRAME(codeobj_b40c8db3a40734d8bf36d374ca67991b, module_sqlalchemy$engine$row, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b40c8db3a40734d8bf36d374ca67991b->m_type_description == NULL);
    frame_b40c8db3a40734d8bf36d374ca67991b = cache_frame_b40c8db3a40734d8bf36d374ca67991b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b40c8db3a40734d8bf36d374ca67991b);
    assert(Py_REFCNT(frame_b40c8db3a40734d8bf36d374ca67991b) == 2);

    // Framed code:
    {
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[39]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
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
        exception_tb = MAKE_TRACEBACK(frame_b40c8db3a40734d8bf36d374ca67991b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b40c8db3a40734d8bf36d374ca67991b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b40c8db3a40734d8bf36d374ca67991b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b40c8db3a40734d8bf36d374ca67991b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_b40c8db3a40734d8bf36d374ca67991b == cache_frame_b40c8db3a40734d8bf36d374ca67991b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b40c8db3a40734d8bf36d374ca67991b);
        cache_frame_b40c8db3a40734d8bf36d374ca67991b = NULL;
    }

    assertFrameObject(frame_b40c8db3a40734d8bf36d374ca67991b);

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


static PyObject *impl_sqlalchemy$engine$row$$$function__26___contains__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_item = python_pars[1];
    struct Nuitka_FrameObject *frame_eb7e3cae61f40941b5ad17d0c601ba4b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_eb7e3cae61f40941b5ad17d0c601ba4b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_eb7e3cae61f40941b5ad17d0c601ba4b)) {
        Py_XDECREF(cache_frame_eb7e3cae61f40941b5ad17d0c601ba4b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_eb7e3cae61f40941b5ad17d0c601ba4b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_eb7e3cae61f40941b5ad17d0c601ba4b = MAKE_FUNCTION_FRAME(codeobj_eb7e3cae61f40941b5ad17d0c601ba4b, module_sqlalchemy$engine$row, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_eb7e3cae61f40941b5ad17d0c601ba4b->m_type_description == NULL);
    frame_eb7e3cae61f40941b5ad17d0c601ba4b = cache_frame_eb7e3cae61f40941b5ad17d0c601ba4b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_eb7e3cae61f40941b5ad17d0c601ba4b);
    assert(Py_REFCNT(frame_eb7e3cae61f40941b5ad17d0c601ba4b) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_item);
        tmp_cmp_expr_left_1 = par_item;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[39]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 1) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_eb7e3cae61f40941b5ad17d0c601ba4b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_eb7e3cae61f40941b5ad17d0c601ba4b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_eb7e3cae61f40941b5ad17d0c601ba4b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_eb7e3cae61f40941b5ad17d0c601ba4b,
        type_description_1,
        par_self,
        par_item
    );


    // Release cached frame if used for exception.
    if (frame_eb7e3cae61f40941b5ad17d0c601ba4b == cache_frame_eb7e3cae61f40941b5ad17d0c601ba4b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_eb7e3cae61f40941b5ad17d0c601ba4b);
        cache_frame_eb7e3cae61f40941b5ad17d0c601ba4b = NULL;
    }

    assertFrameObject(frame_eb7e3cae61f40941b5ad17d0c601ba4b);

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
    CHECK_OBJECT(par_item);
    Py_DECREF(par_item);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_item);
    Py_DECREF(par_item);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$engine$row$$$function__27___eq__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_c2d6b125f60f7c7e4e586fabe7291835;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c2d6b125f60f7c7e4e586fabe7291835 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c2d6b125f60f7c7e4e586fabe7291835)) {
        Py_XDECREF(cache_frame_c2d6b125f60f7c7e4e586fabe7291835);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c2d6b125f60f7c7e4e586fabe7291835 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c2d6b125f60f7c7e4e586fabe7291835 = MAKE_FUNCTION_FRAME(codeobj_c2d6b125f60f7c7e4e586fabe7291835, module_sqlalchemy$engine$row, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c2d6b125f60f7c7e4e586fabe7291835->m_type_description == NULL);
    frame_c2d6b125f60f7c7e4e586fabe7291835 = cache_frame_c2d6b125f60f7c7e4e586fabe7291835;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c2d6b125f60f7c7e4e586fabe7291835);
    assert(Py_REFCNT(frame_c2d6b125f60f7c7e4e586fabe7291835) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_list_arg_2;
        CHECK_OBJECT(par_other);
        tmp_list_arg_1 = par_other;
        tmp_cmp_expr_left_1 = MAKE_LIST(tmp_list_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_list_arg_2 = par_self;
        tmp_cmp_expr_right_1 = MAKE_LIST(tmp_list_arg_2);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 293;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_LIST_LIST(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
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
        exception_tb = MAKE_TRACEBACK(frame_c2d6b125f60f7c7e4e586fabe7291835, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c2d6b125f60f7c7e4e586fabe7291835->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c2d6b125f60f7c7e4e586fabe7291835, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c2d6b125f60f7c7e4e586fabe7291835,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_c2d6b125f60f7c7e4e586fabe7291835 == cache_frame_c2d6b125f60f7c7e4e586fabe7291835) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c2d6b125f60f7c7e4e586fabe7291835);
        cache_frame_c2d6b125f60f7c7e4e586fabe7291835 = NULL;
    }

    assertFrameObject(frame_c2d6b125f60f7c7e4e586fabe7291835);

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


static PyObject *impl_sqlalchemy$engine$row$$$function__28___ne__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_85b9815a253eab4356edc8866f3b9781;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_85b9815a253eab4356edc8866f3b9781 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_85b9815a253eab4356edc8866f3b9781)) {
        Py_XDECREF(cache_frame_85b9815a253eab4356edc8866f3b9781);

#if _DEBUG_REFCOUNTS
        if (cache_frame_85b9815a253eab4356edc8866f3b9781 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_85b9815a253eab4356edc8866f3b9781 = MAKE_FUNCTION_FRAME(codeobj_85b9815a253eab4356edc8866f3b9781, module_sqlalchemy$engine$row, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_85b9815a253eab4356edc8866f3b9781->m_type_description == NULL);
    frame_85b9815a253eab4356edc8866f3b9781 = cache_frame_85b9815a253eab4356edc8866f3b9781;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_85b9815a253eab4356edc8866f3b9781);
    assert(Py_REFCNT(frame_85b9815a253eab4356edc8866f3b9781) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_list_arg_2;
        CHECK_OBJECT(par_other);
        tmp_list_arg_1 = par_other;
        tmp_cmp_expr_left_1 = MAKE_LIST(tmp_list_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_list_arg_2 = par_self;
        tmp_cmp_expr_right_1 = MAKE_LIST(tmp_list_arg_2);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 296;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_NE_OBJECT_LIST_LIST(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
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
        exception_tb = MAKE_TRACEBACK(frame_85b9815a253eab4356edc8866f3b9781, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_85b9815a253eab4356edc8866f3b9781->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_85b9815a253eab4356edc8866f3b9781, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_85b9815a253eab4356edc8866f3b9781,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_85b9815a253eab4356edc8866f3b9781 == cache_frame_85b9815a253eab4356edc8866f3b9781) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_85b9815a253eab4356edc8866f3b9781);
        cache_frame_85b9815a253eab4356edc8866f3b9781 = NULL;
    }

    assertFrameObject(frame_85b9815a253eab4356edc8866f3b9781);

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


static PyObject *impl_sqlalchemy$engine$row$$$function__30__values_impl(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_2c4ae9e42ea8fac61f406825e6ccf58f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2c4ae9e42ea8fac61f406825e6ccf58f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2c4ae9e42ea8fac61f406825e6ccf58f)) {
        Py_XDECREF(cache_frame_2c4ae9e42ea8fac61f406825e6ccf58f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2c4ae9e42ea8fac61f406825e6ccf58f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2c4ae9e42ea8fac61f406825e6ccf58f = MAKE_FUNCTION_FRAME(codeobj_2c4ae9e42ea8fac61f406825e6ccf58f, module_sqlalchemy$engine$row, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2c4ae9e42ea8fac61f406825e6ccf58f->m_type_description == NULL);
    frame_2c4ae9e42ea8fac61f406825e6ccf58f = cache_frame_2c4ae9e42ea8fac61f406825e6ccf58f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2c4ae9e42ea8fac61f406825e6ccf58f);
    assert(Py_REFCNT(frame_2c4ae9e42ea8fac61f406825e6ccf58f) == 2);

    // Framed code:
    {
        PyObject *tmp_list_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_list_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[8]);
        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_LIST(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
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
        exception_tb = MAKE_TRACEBACK(frame_2c4ae9e42ea8fac61f406825e6ccf58f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2c4ae9e42ea8fac61f406825e6ccf58f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2c4ae9e42ea8fac61f406825e6ccf58f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2c4ae9e42ea8fac61f406825e6ccf58f,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_2c4ae9e42ea8fac61f406825e6ccf58f == cache_frame_2c4ae9e42ea8fac61f406825e6ccf58f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2c4ae9e42ea8fac61f406825e6ccf58f);
        cache_frame_2c4ae9e42ea8fac61f406825e6ccf58f = NULL;
    }

    assertFrameObject(frame_2c4ae9e42ea8fac61f406825e6ccf58f);

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


static PyObject *impl_sqlalchemy$engine$row$$$function__31___iter__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_eaa22bed8809de0ce7bf093f05bfd0a7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_eaa22bed8809de0ce7bf093f05bfd0a7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_eaa22bed8809de0ce7bf093f05bfd0a7)) {
        Py_XDECREF(cache_frame_eaa22bed8809de0ce7bf093f05bfd0a7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_eaa22bed8809de0ce7bf093f05bfd0a7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_eaa22bed8809de0ce7bf093f05bfd0a7 = MAKE_FUNCTION_FRAME(codeobj_eaa22bed8809de0ce7bf093f05bfd0a7, module_sqlalchemy$engine$row, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_eaa22bed8809de0ce7bf093f05bfd0a7->m_type_description == NULL);
    frame_eaa22bed8809de0ce7bf093f05bfd0a7 = cache_frame_eaa22bed8809de0ce7bf093f05bfd0a7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_eaa22bed8809de0ce7bf093f05bfd0a7);
    assert(Py_REFCNT(frame_eaa22bed8809de0ce7bf093f05bfd0a7) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[35]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        assert(tmp_genexpr_1__$0 == NULL);
        tmp_genexpr_1__$0 = tmp_assign_source_1;
    }
    // Tried code:
    {
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

        tmp_return_value = MAKE_GENERATOR_sqlalchemy$engine$row$$$function__31___iter__$$$genexpr__1_genexpr(tmp_closure_1);

        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(tmp_genexpr_1__$0);
    Py_DECREF(tmp_genexpr_1__$0);
    tmp_genexpr_1__$0 = NULL;
    goto outline_result_1;
    // End of try:
    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;
    outline_result_1:;
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_eaa22bed8809de0ce7bf093f05bfd0a7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_eaa22bed8809de0ce7bf093f05bfd0a7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_eaa22bed8809de0ce7bf093f05bfd0a7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_eaa22bed8809de0ce7bf093f05bfd0a7,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_eaa22bed8809de0ce7bf093f05bfd0a7 == cache_frame_eaa22bed8809de0ce7bf093f05bfd0a7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_eaa22bed8809de0ce7bf093f05bfd0a7);
        cache_frame_eaa22bed8809de0ce7bf093f05bfd0a7 = NULL;
    }

    assertFrameObject(frame_eaa22bed8809de0ce7bf093f05bfd0a7);

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



struct sqlalchemy$engine$row$$$function__31___iter__$$$genexpr__1_genexpr_locals {
    PyObject *var_k;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *sqlalchemy$engine$row$$$function__31___iter__$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct sqlalchemy$engine$row$$$function__31___iter__$$$genexpr__1_genexpr_locals *generator_heap = (struct sqlalchemy$engine$row$$$function__31___iter__$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_6c91f67f80370ba7faf22dc72db900f0, module_sqlalchemy$engine$row, sizeof(void *)+sizeof(void *));
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
                generator_heap->exception_lineno = 352;
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
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(generator_heap->var_k);
        tmp_cmp_expr_left_1 = generator_heap->var_k;
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
        PyObject *tmp_expression_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_k);
        tmp_expression_value_1 = generator_heap->var_k;
        Py_INCREF(tmp_expression_value_1);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 352;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 352;
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

static PyObject *MAKE_GENERATOR_sqlalchemy$engine$row$$$function__31___iter__$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        sqlalchemy$engine$row$$$function__31___iter__$$$genexpr__1_genexpr_context,
        module_sqlalchemy$engine$row,
        mod_consts[41],
#if PYTHON_VERSION >= 0x350
        mod_consts[42],
#endif
        codeobj_6c91f67f80370ba7faf22dc72db900f0,
        closure,
        1,
        sizeof(struct sqlalchemy$engine$row$$$function__31___iter__$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_sqlalchemy$engine$row$$$function__32___len__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_c0081a3d68c3d5d778742577f9ebc87d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c0081a3d68c3d5d778742577f9ebc87d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c0081a3d68c3d5d778742577f9ebc87d)) {
        Py_XDECREF(cache_frame_c0081a3d68c3d5d778742577f9ebc87d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c0081a3d68c3d5d778742577f9ebc87d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c0081a3d68c3d5d778742577f9ebc87d = MAKE_FUNCTION_FRAME(codeobj_c0081a3d68c3d5d778742577f9ebc87d, module_sqlalchemy$engine$row, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c0081a3d68c3d5d778742577f9ebc87d->m_type_description == NULL);
    frame_c0081a3d68c3d5d778742577f9ebc87d = cache_frame_c0081a3d68c3d5d778742577f9ebc87d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c0081a3d68c3d5d778742577f9ebc87d);
    assert(Py_REFCNT(frame_c0081a3d68c3d5d778742577f9ebc87d) == 2);

    // Framed code:
    {
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[8]);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
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
        exception_tb = MAKE_TRACEBACK(frame_c0081a3d68c3d5d778742577f9ebc87d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c0081a3d68c3d5d778742577f9ebc87d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c0081a3d68c3d5d778742577f9ebc87d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c0081a3d68c3d5d778742577f9ebc87d,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_c0081a3d68c3d5d778742577f9ebc87d == cache_frame_c0081a3d68c3d5d778742577f9ebc87d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c0081a3d68c3d5d778742577f9ebc87d);
        cache_frame_c0081a3d68c3d5d778742577f9ebc87d = NULL;
    }

    assertFrameObject(frame_c0081a3d68c3d5d778742577f9ebc87d);

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


static PyObject *impl_sqlalchemy$engine$row$$$function__33___contains__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_key = python_pars[1];
    struct Nuitka_FrameObject *frame_7c8337988755ab232e7567deadd88c28;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7c8337988755ab232e7567deadd88c28 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7c8337988755ab232e7567deadd88c28)) {
        Py_XDECREF(cache_frame_7c8337988755ab232e7567deadd88c28);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7c8337988755ab232e7567deadd88c28 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7c8337988755ab232e7567deadd88c28 = MAKE_FUNCTION_FRAME(codeobj_7c8337988755ab232e7567deadd88c28, module_sqlalchemy$engine$row, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7c8337988755ab232e7567deadd88c28->m_type_description == NULL);
    frame_7c8337988755ab232e7567deadd88c28 = cache_frame_7c8337988755ab232e7567deadd88c28;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7c8337988755ab232e7567deadd88c28);
    assert(Py_REFCNT(frame_7c8337988755ab232e7567deadd88c28) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_value_1 = par_key;
        frame_7c8337988755ab232e7567deadd88c28->m_frame.f_lineno = 358;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[16], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
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
        exception_tb = MAKE_TRACEBACK(frame_7c8337988755ab232e7567deadd88c28, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7c8337988755ab232e7567deadd88c28->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7c8337988755ab232e7567deadd88c28, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7c8337988755ab232e7567deadd88c28,
        type_description_1,
        par_self,
        par_key
    );


    // Release cached frame if used for exception.
    if (frame_7c8337988755ab232e7567deadd88c28 == cache_frame_7c8337988755ab232e7567deadd88c28) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7c8337988755ab232e7567deadd88c28);
        cache_frame_7c8337988755ab232e7567deadd88c28 = NULL;
    }

    assertFrameObject(frame_7c8337988755ab232e7567deadd88c28);

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
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$engine$row$$$function__34___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_0f32479e739fa6cc3e825d5861304a7a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0f32479e739fa6cc3e825d5861304a7a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0f32479e739fa6cc3e825d5861304a7a)) {
        Py_XDECREF(cache_frame_0f32479e739fa6cc3e825d5861304a7a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0f32479e739fa6cc3e825d5861304a7a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0f32479e739fa6cc3e825d5861304a7a = MAKE_FUNCTION_FRAME(codeobj_0f32479e739fa6cc3e825d5861304a7a, module_sqlalchemy$engine$row, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0f32479e739fa6cc3e825d5861304a7a->m_type_description == NULL);
    frame_0f32479e739fa6cc3e825d5861304a7a = cache_frame_0f32479e739fa6cc3e825d5861304a7a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0f32479e739fa6cc3e825d5861304a7a);
    assert(Py_REFCNT(frame_0f32479e739fa6cc3e825d5861304a7a) == 2);

    // Framed code:
    {
        PyObject *tmp_operand_value_1;
        PyObject *tmp_dict_seq_1;
        CHECK_OBJECT(par_self);
        tmp_dict_seq_1 = par_self;
        tmp_operand_value_1 = TO_DICT(tmp_dict_seq_1, NULL);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
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
        exception_tb = MAKE_TRACEBACK(frame_0f32479e739fa6cc3e825d5861304a7a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0f32479e739fa6cc3e825d5861304a7a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0f32479e739fa6cc3e825d5861304a7a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0f32479e739fa6cc3e825d5861304a7a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_0f32479e739fa6cc3e825d5861304a7a == cache_frame_0f32479e739fa6cc3e825d5861304a7a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0f32479e739fa6cc3e825d5861304a7a);
        cache_frame_0f32479e739fa6cc3e825d5861304a7a = NULL;
    }

    assertFrameObject(frame_0f32479e739fa6cc3e825d5861304a7a);

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


static PyObject *impl_sqlalchemy$engine$row$$$function__35_items(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *outline_0_var_key = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_d42a44be9aeb3515ae10ff0c56d909c4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_1aefb31778910ea243202f15263fabc8_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_1aefb31778910ea243202f15263fabc8_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_d42a44be9aeb3515ae10ff0c56d909c4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d42a44be9aeb3515ae10ff0c56d909c4)) {
        Py_XDECREF(cache_frame_d42a44be9aeb3515ae10ff0c56d909c4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d42a44be9aeb3515ae10ff0c56d909c4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d42a44be9aeb3515ae10ff0c56d909c4 = MAKE_FUNCTION_FRAME(codeobj_d42a44be9aeb3515ae10ff0c56d909c4, module_sqlalchemy$engine$row, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d42a44be9aeb3515ae10ff0c56d909c4->m_type_description == NULL);
    frame_d42a44be9aeb3515ae10ff0c56d909c4 = cache_frame_d42a44be9aeb3515ae10ff0c56d909c4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d42a44be9aeb3515ae10ff0c56d909c4);
    assert(Py_REFCNT(frame_d42a44be9aeb3515ae10ff0c56d909c4) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_1;
            CHECK_OBJECT(par_self);
            tmp_expression_value_1 = par_self;
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[35]);
            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 369;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            frame_d42a44be9aeb3515ae10ff0c56d909c4->m_frame.f_lineno = 369;
            tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
            Py_DECREF(tmp_called_value_2);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 369;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 369;
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
        if (isFrameUnusable(cache_frame_1aefb31778910ea243202f15263fabc8_2)) {
            Py_XDECREF(cache_frame_1aefb31778910ea243202f15263fabc8_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_1aefb31778910ea243202f15263fabc8_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_1aefb31778910ea243202f15263fabc8_2 = MAKE_FUNCTION_FRAME(codeobj_1aefb31778910ea243202f15263fabc8, module_sqlalchemy$engine$row, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_1aefb31778910ea243202f15263fabc8_2->m_type_description == NULL);
        frame_1aefb31778910ea243202f15263fabc8_2 = cache_frame_1aefb31778910ea243202f15263fabc8_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_1aefb31778910ea243202f15263fabc8_2);
        assert(Py_REFCNT(frame_1aefb31778910ea243202f15263fabc8_2) == 2);

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
                    type_description_2 = "oo";
                    exception_lineno = 369;
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
                PyObject *old = outline_0_var_key;
                outline_0_var_key = tmp_assign_source_4;
                Py_INCREF(outline_0_var_key);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_key);
            tmp_tuple_element_1 = outline_0_var_key;
            tmp_append_value_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_2;
                PyObject *tmp_subscript_value_1;
                PyTuple_SET_ITEM0(tmp_append_value_1, 0, tmp_tuple_element_1);
                CHECK_OBJECT(par_self);
                tmp_expression_value_2 = par_self;
                CHECK_OBJECT(outline_0_var_key);
                tmp_subscript_value_1 = outline_0_var_key;
                tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
                if (tmp_tuple_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 369;
                    type_description_2 = "oo";
                    goto tuple_build_exception_1;
                }
                PyTuple_SET_ITEM(tmp_append_value_1, 1, tmp_tuple_element_1);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_append_value_1);
            goto try_except_handler_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 369;
                type_description_2 = "oo";
                goto try_except_handler_2;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_2 = "oo";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_args_element_value_2 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_args_element_value_2);
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
            exception_tb = MAKE_TRACEBACK(frame_1aefb31778910ea243202f15263fabc8_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_1aefb31778910ea243202f15263fabc8_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_1aefb31778910ea243202f15263fabc8_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_1aefb31778910ea243202f15263fabc8_2,
            type_description_2,
            outline_0_var_key,
            par_self
        );


        // Release cached frame if used for exception.
        if (frame_1aefb31778910ea243202f15263fabc8_2 == cache_frame_1aefb31778910ea243202f15263fabc8_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_1aefb31778910ea243202f15263fabc8_2);
            cache_frame_1aefb31778910ea243202f15263fabc8_2 = NULL;
        }

        assertFrameObject(frame_1aefb31778910ea243202f15263fabc8_2);

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
        Py_XDECREF(outline_0_var_key);
        outline_0_var_key = NULL;
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
        exception_lineno = 369;
        goto frame_exception_exit_1;
        outline_result_1:;
        frame_d42a44be9aeb3515ae10ff0c56d909c4->m_frame.f_lineno = 368;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
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
        exception_tb = MAKE_TRACEBACK(frame_d42a44be9aeb3515ae10ff0c56d909c4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d42a44be9aeb3515ae10ff0c56d909c4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d42a44be9aeb3515ae10ff0c56d909c4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d42a44be9aeb3515ae10ff0c56d909c4,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_d42a44be9aeb3515ae10ff0c56d909c4 == cache_frame_d42a44be9aeb3515ae10ff0c56d909c4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d42a44be9aeb3515ae10ff0c56d909c4);
        cache_frame_d42a44be9aeb3515ae10ff0c56d909c4 = NULL;
    }

    assertFrameObject(frame_d42a44be9aeb3515ae10ff0c56d909c4);

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


static PyObject *impl_sqlalchemy$engine$row$$$function__36_keys(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f14bd7476014da7075d75737b59c459e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f14bd7476014da7075d75737b59c459e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f14bd7476014da7075d75737b59c459e)) {
        Py_XDECREF(cache_frame_f14bd7476014da7075d75737b59c459e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f14bd7476014da7075d75737b59c459e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f14bd7476014da7075d75737b59c459e = MAKE_FUNCTION_FRAME(codeobj_f14bd7476014da7075d75737b59c459e, module_sqlalchemy$engine$row, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f14bd7476014da7075d75737b59c459e->m_type_description == NULL);
    frame_f14bd7476014da7075d75737b59c459e = cache_frame_f14bd7476014da7075d75737b59c459e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f14bd7476014da7075d75737b59c459e);
    assert(Py_REFCNT(frame_f14bd7476014da7075d75737b59c459e) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[35]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
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
        exception_tb = MAKE_TRACEBACK(frame_f14bd7476014da7075d75737b59c459e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f14bd7476014da7075d75737b59c459e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f14bd7476014da7075d75737b59c459e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f14bd7476014da7075d75737b59c459e,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f14bd7476014da7075d75737b59c459e == cache_frame_f14bd7476014da7075d75737b59c459e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f14bd7476014da7075d75737b59c459e);
        cache_frame_f14bd7476014da7075d75737b59c459e = NULL;
    }

    assertFrameObject(frame_f14bd7476014da7075d75737b59c459e);

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


static PyObject *impl_sqlalchemy$engine$row$$$function__37_values(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9af57ab708d340eda46e5d5cd39f6a82;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9af57ab708d340eda46e5d5cd39f6a82 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9af57ab708d340eda46e5d5cd39f6a82)) {
        Py_XDECREF(cache_frame_9af57ab708d340eda46e5d5cd39f6a82);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9af57ab708d340eda46e5d5cd39f6a82 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9af57ab708d340eda46e5d5cd39f6a82 = MAKE_FUNCTION_FRAME(codeobj_9af57ab708d340eda46e5d5cd39f6a82, module_sqlalchemy$engine$row, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9af57ab708d340eda46e5d5cd39f6a82->m_type_description == NULL);
    frame_9af57ab708d340eda46e5d5cd39f6a82 = cache_frame_9af57ab708d340eda46e5d5cd39f6a82;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9af57ab708d340eda46e5d5cd39f6a82);
    assert(Py_REFCNT(frame_9af57ab708d340eda46e5d5cd39f6a82) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_instance_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_9af57ab708d340eda46e5d5cd39f6a82->m_frame.f_lineno = 385;
        tmp_args_element_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[47]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_9af57ab708d340eda46e5d5cd39f6a82->m_frame.f_lineno = 385;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
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
        exception_tb = MAKE_TRACEBACK(frame_9af57ab708d340eda46e5d5cd39f6a82, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9af57ab708d340eda46e5d5cd39f6a82->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9af57ab708d340eda46e5d5cd39f6a82, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9af57ab708d340eda46e5d5cd39f6a82,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_9af57ab708d340eda46e5d5cd39f6a82 == cache_frame_9af57ab708d340eda46e5d5cd39f6a82) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9af57ab708d340eda46e5d5cd39f6a82);
        cache_frame_9af57ab708d340eda46e5d5cd39f6a82 = NULL;
    }

    assertFrameObject(frame_9af57ab708d340eda46e5d5cd39f6a82);

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



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__13___lt__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$row$$$function__13___lt__,
        mod_consts[140],
#if PYTHON_VERSION >= 0x300
        mod_consts[141],
#endif
        codeobj_cf378d30dfff34ac27ab8a1dd66f25cb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$row,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__14___le__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$row$$$function__14___le__,
        mod_consts[142],
#if PYTHON_VERSION >= 0x300
        mod_consts[143],
#endif
        codeobj_3df1345ac383a0482ce895e2b3d76664,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$row,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__15___ge__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$row$$$function__15___ge__,
        mod_consts[144],
#if PYTHON_VERSION >= 0x300
        mod_consts[145],
#endif
        codeobj_0a7080d0b2eb1da8edf9725b473df008,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$row,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__16___gt__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$row$$$function__16___gt__,
        mod_consts[146],
#if PYTHON_VERSION >= 0x300
        mod_consts[147],
#endif
        codeobj_a37b1632e1c188ec2d285f7a39e63b12,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$row,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__17___eq__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$row$$$function__17___eq__,
        mod_consts[148],
#if PYTHON_VERSION >= 0x300
        mod_consts[149],
#endif
        codeobj_61e6b211a75e41a2dd1146432f2cdc7c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$row,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__18___ne__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$row$$$function__18___ne__,
        mod_consts[150],
#if PYTHON_VERSION >= 0x300
        mod_consts[151],
#endif
        codeobj_c12e6b097ef2b16312b3094ef61b4170,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$row,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__19___repr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$row$$$function__19___repr__,
        mod_consts[153],
#if PYTHON_VERSION >= 0x300
        mod_consts[154],
#endif
        codeobj_01650a83b9cab80e3ff5e0b13b29872f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$row,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__1___setattr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$row$$$function__1___setattr__,
        mod_consts[110],
#if PYTHON_VERSION >= 0x300
        mod_consts[111],
#endif
        codeobj_c9a3a4a1365fcc44555f5036f5e0e1d2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$row,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__20__fields(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$row$$$function__20__fields,
        mod_consts[156],
#if PYTHON_VERSION >= 0x300
        mod_consts[157],
#endif
        codeobj_5806d07fb2bde92caeb30cc13bb51a1b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$row,
        mod_consts[36],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__21__asdict(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$row$$$function__21__asdict,
        mod_consts[159],
#if PYTHON_VERSION >= 0x300
        mod_consts[160],
#endif
        codeobj_983f634376dee3b13f09963bdffb060d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$row,
        mod_consts[38],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__22___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$row$$$function__22___init__,
        mod_consts[169],
#if PYTHON_VERSION >= 0x300
        mod_consts[170],
#endif
        codeobj_04a09dfb454b89026c9f844e75fb8590,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$row,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__23___len__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$row$$$function__23___len__,
        mod_consts[172],
#if PYTHON_VERSION >= 0x300
        mod_consts[173],
#endif
        codeobj_7d4f7dadb342a7cd1daa0af9143ee545,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$row,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__24___repr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$row$$$function__24___repr__,
        mod_consts[153],
#if PYTHON_VERSION >= 0x300
        mod_consts[174],
#endif
        codeobj_7772d50ab8d3c03f2a02eadbacb74390,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$row,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__25___iter__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$row$$$function__25___iter__,
        mod_consts[176],
#if PYTHON_VERSION >= 0x300
        mod_consts[177],
#endif
        codeobj_b40c8db3a40734d8bf36d374ca67991b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$row,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__26___contains__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$row$$$function__26___contains__,
        mod_consts[134],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        codeobj_eb7e3cae61f40941b5ad17d0c601ba4b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$row,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__27___eq__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$row$$$function__27___eq__,
        mod_consts[148],
#if PYTHON_VERSION >= 0x300
        mod_consts[180],
#endif
        codeobj_c2d6b125f60f7c7e4e586fabe7291835,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$row,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__28___ne__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$row$$$function__28___ne__,
        mod_consts[150],
#if PYTHON_VERSION >= 0x300
        mod_consts[181],
#endif
        codeobj_85b9815a253eab4356edc8866f3b9781,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$row,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__2___delattr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$row$$$function__2___delattr__,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        mod_consts[114],
#endif
        codeobj_00569432ddfafc4aa1be5ce9bf175db1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$row,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__30__values_impl(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$row$$$function__30__values_impl,
        mod_consts[47],
#if PYTHON_VERSION >= 0x300
        mod_consts[189],
#endif
        codeobj_2c4ae9e42ea8fac61f406825e6ccf58f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$row,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__31___iter__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$row$$$function__31___iter__,
        mod_consts[176],
#if PYTHON_VERSION >= 0x300
        mod_consts[191],
#endif
        codeobj_eaa22bed8809de0ce7bf093f05bfd0a7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$row,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__32___len__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$row$$$function__32___len__,
        mod_consts[172],
#if PYTHON_VERSION >= 0x300
        mod_consts[192],
#endif
        codeobj_c0081a3d68c3d5d778742577f9ebc87d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$row,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__33___contains__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$row$$$function__33___contains__,
        mod_consts[134],
#if PYTHON_VERSION >= 0x300
        mod_consts[194],
#endif
        codeobj_7c8337988755ab232e7567deadd88c28,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$row,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__34___repr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$row$$$function__34___repr__,
        mod_consts[153],
#if PYTHON_VERSION >= 0x300
        mod_consts[195],
#endif
        codeobj_0f32479e739fa6cc3e825d5861304a7a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$row,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__35_items(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$row$$$function__35_items,
        mod_consts[197],
#if PYTHON_VERSION >= 0x300
        mod_consts[198],
#endif
        codeobj_d42a44be9aeb3515ae10ff0c56d909c4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$row,
        mod_consts[44],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__36_keys(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$row$$$function__36_keys,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        mod_consts[200],
#endif
        codeobj_f14bd7476014da7075d75737b59c459e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$row,
        mod_consts[45],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__37_values(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$row$$$function__37_values,
        mod_consts[202],
#if PYTHON_VERSION >= 0x300
        mod_consts[203],
#endif
        codeobj_9af57ab708d340eda46e5d5cd39f6a82,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$row,
        mod_consts[48],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__3_tuple(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$row$$$function__3_tuple,
        mod_consts[116],
#if PYTHON_VERSION >= 0x300
        mod_consts[117],
#endif
        codeobj_0ba63cd48927f05a6b1ccd9ef8ae2030,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$row,
        mod_consts[2],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__4_t(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$row$$$function__4_t,
        mod_consts[119],
#if PYTHON_VERSION >= 0x300
        mod_consts[120],
#endif
        codeobj_93a1d46001cb1a234497159fc59daf4f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$row,
        mod_consts[3],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__5__mapping(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$row$$$function__5__mapping,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        mod_consts[122],
#endif
        codeobj_509c8bfc697e47663483a78e245371b2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$row,
        mod_consts[9],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__6__filter_on_values(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$row$$$function__6__filter_on_values,
        mod_consts[124],
#if PYTHON_VERSION >= 0x300
        mod_consts[125],
#endif
        codeobj_4e77fda9e454bbbcbd52a41ac91209a4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$row,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__7__special_name_accessor(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$row$$$function__7__special_name_accessor,
        mod_consts[127],
#if PYTHON_VERSION >= 0x300
        mod_consts[128],
#endif
        codeobj_6820cb0aa7edee5e0044191a6a8b5e53,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$row,
        mod_consts[15],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__7__special_name_accessor$$$function__1_go(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$row$$$function__7__special_name_accessor$$$function__1_go,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[14],
#endif
        codeobj_774c0f1f3e55aefc2f9811cdcc646095,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$row,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__7__special_name_accessor$$$function__1_go$$$function__1_meth(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$row$$$function__7__special_name_accessor$$$function__1_go$$$function__1_meth,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        mod_consts[21],
#endif
        codeobj_1ccdd845519aec866b796f9ed2078f2e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$row,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__8___contains__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$row$$$function__8___contains__,
        mod_consts[134],
#if PYTHON_VERSION >= 0x300
        mod_consts[135],
#endif
        codeobj_e567dd57b6641b4d4613b3b12cc2a19e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$row,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$row$$$function__9__op(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$row$$$function__9__op,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[137],
#endif
        codeobj_2e4a02fe9e0b062a0759851008cc9e22,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$engine$row,
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

function_impl_code functable_sqlalchemy$engine$row[] = {
    impl_sqlalchemy$engine$row$$$function__7__special_name_accessor$$$function__1_go,
    impl_sqlalchemy$engine$row$$$function__7__special_name_accessor$$$function__1_go$$$function__1_meth,
    impl_sqlalchemy$engine$row$$$function__1___setattr__,
    impl_sqlalchemy$engine$row$$$function__2___delattr__,
    impl_sqlalchemy$engine$row$$$function__3_tuple,
    impl_sqlalchemy$engine$row$$$function__4_t,
    impl_sqlalchemy$engine$row$$$function__5__mapping,
    impl_sqlalchemy$engine$row$$$function__6__filter_on_values,
    impl_sqlalchemy$engine$row$$$function__7__special_name_accessor,
    impl_sqlalchemy$engine$row$$$function__8___contains__,
    impl_sqlalchemy$engine$row$$$function__9__op,
    impl_sqlalchemy$engine$row$$$function__13___lt__,
    impl_sqlalchemy$engine$row$$$function__14___le__,
    impl_sqlalchemy$engine$row$$$function__15___ge__,
    impl_sqlalchemy$engine$row$$$function__16___gt__,
    impl_sqlalchemy$engine$row$$$function__17___eq__,
    impl_sqlalchemy$engine$row$$$function__18___ne__,
    impl_sqlalchemy$engine$row$$$function__19___repr__,
    impl_sqlalchemy$engine$row$$$function__20__fields,
    impl_sqlalchemy$engine$row$$$function__21__asdict,
    impl_sqlalchemy$engine$row$$$function__22___init__,
    impl_sqlalchemy$engine$row$$$function__23___len__,
    impl_sqlalchemy$engine$row$$$function__24___repr__,
    impl_sqlalchemy$engine$row$$$function__25___iter__,
    impl_sqlalchemy$engine$row$$$function__26___contains__,
    impl_sqlalchemy$engine$row$$$function__27___eq__,
    impl_sqlalchemy$engine$row$$$function__28___ne__,
    impl_sqlalchemy$engine$row$$$function__30__values_impl,
    impl_sqlalchemy$engine$row$$$function__31___iter__,
    impl_sqlalchemy$engine$row$$$function__32___len__,
    impl_sqlalchemy$engine$row$$$function__33___contains__,
    impl_sqlalchemy$engine$row$$$function__34___repr__,
    impl_sqlalchemy$engine$row$$$function__35_items,
    impl_sqlalchemy$engine$row$$$function__36_keys,
    impl_sqlalchemy$engine$row$$$function__37_values,
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

    function_impl_code *current = functable_sqlalchemy$engine$row;
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

    if (offset > sizeof(functable_sqlalchemy$engine$row) || offset < 0) {
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
        functable_sqlalchemy$engine$row[offset],
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
        module_sqlalchemy$engine$row,
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
PyObject *modulecode_sqlalchemy$engine$row(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("sqlalchemy.engine.row");

    // Store the module for future use.
    module_sqlalchemy$engine$row = module;

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
        PRINT_STRING("sqlalchemy.engine.row: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("sqlalchemy.engine.row: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("sqlalchemy.engine.row: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initsqlalchemy$engine$row\n");

    moduledict_sqlalchemy$engine$row = MODULE_DICT(module_sqlalchemy$engine$row);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_sqlalchemy$engine$row,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_sqlalchemy$engine$row,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[225]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_sqlalchemy$engine$row,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_sqlalchemy$engine$row,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_sqlalchemy$engine$row,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_sqlalchemy$engine$row);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_sqlalchemy$engine$row);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
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
    struct Nuitka_FrameObject *frame_4656e9d8ddbe92218344875f6797270f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_sqlalchemy$engine$row$$$class__1_Row_53 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_0fc32f52e97daadd76a8b4f44d1e6f58_2;
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
    PyObject *locals_sqlalchemy$engine$row$$$class__2_ROMappingView_270 = NULL;
    struct Nuitka_FrameObject *frame_bbc72f8748dcd380e2ece84bad27616e_3;
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
    PyObject *locals_sqlalchemy$engine$row$$$class__3_ROMappingKeysValuesView_300 = NULL;
    struct Nuitka_FrameObject *frame_1b23a02abdaca83f9ff12f3fcd7be1d7_4;
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
    PyObject *locals_sqlalchemy$engine$row$$$class__4_ROMappingItemsView_305 = NULL;
    struct Nuitka_FrameObject *frame_bd04fb40a85720789ae42c442c07d91b_5;
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
    PyObject *locals_sqlalchemy$engine$row$$$class__5_RowMapping_309 = NULL;
    struct Nuitka_FrameObject *frame_cbc031296e01cce92f718bfe2b756590_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_2);
    }
    frame_4656e9d8ddbe92218344875f6797270f = MAKE_MODULE_FRAME(codeobj_4656e9d8ddbe92218344875f6797270f, module_sqlalchemy$engine$row);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4656e9d8ddbe92218344875f6797270f);
    assert(Py_REFCNT(frame_4656e9d8ddbe92218344875f6797270f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[53], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[54], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[56]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[57];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_sqlalchemy$engine$row;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[58];
        tmp_level_value_1 = mod_consts[59];
        frame_4656e9d8ddbe92218344875f6797270f->m_frame.f_lineno = 12;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_sqlalchemy$engine$row,
                mod_consts[60],
                mod_consts[59]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[60]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[61];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_sqlalchemy$engine$row;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[59];
        frame_4656e9d8ddbe92218344875f6797270f->m_frame.f_lineno = 13;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_sqlalchemy$engine$row,
                mod_consts[57],
                mod_consts[59]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[57]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[26];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_sqlalchemy$engine$row;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[59];
        frame_4656e9d8ddbe92218344875f6797270f->m_frame.f_lineno = 14;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_8 == NULL));
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        tmp_import_name_from_3 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_3 == NULL));
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_sqlalchemy$engine$row,
                mod_consts[63],
                mod_consts[59]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[63]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        tmp_import_name_from_4 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_4 == NULL));
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_sqlalchemy$engine$row,
                mod_consts[64],
                mod_consts[59]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[64]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        tmp_import_name_from_5 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_5 == NULL));
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_sqlalchemy$engine$row,
                mod_consts[65],
                mod_consts[59]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[65]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        tmp_import_name_from_6 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_6 == NULL));
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_sqlalchemy$engine$row,
                mod_consts[66],
                mod_consts[59]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[66]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        tmp_import_name_from_7 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_7 == NULL));
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_sqlalchemy$engine$row,
                mod_consts[67],
                mod_consts[59]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[67]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        tmp_import_name_from_8 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_8 == NULL));
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_sqlalchemy$engine$row,
                mod_consts[68],
                mod_consts[59]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[68]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        tmp_import_name_from_9 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_9 == NULL));
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_sqlalchemy$engine$row,
                mod_consts[69],
                mod_consts[59]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[69]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        tmp_import_name_from_10 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_10 == NULL));
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_sqlalchemy$engine$row,
                mod_consts[70],
                mod_consts[59]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[70]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        tmp_import_name_from_11 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_11 == NULL));
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_sqlalchemy$engine$row,
                mod_consts[71],
                mod_consts[59]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[71]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_12;
        tmp_import_name_from_12 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_12 == NULL));
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_sqlalchemy$engine$row,
                mod_consts[72],
                mod_consts[59]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[72]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_13;
        tmp_import_name_from_13 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_13 == NULL));
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_sqlalchemy$engine$row,
                mod_consts[23],
                mod_consts[59]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[23]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_14;
        tmp_import_name_from_14 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_14 == NULL));
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_sqlalchemy$engine$row,
                mod_consts[73],
                mod_consts[59]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[73]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = Py_False;
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_15;
        tmp_import_name_from_15 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_15 == NULL));
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_sqlalchemy$engine$row,
                mod_consts[75],
                mod_consts[59]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[75]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_16;
        tmp_import_name_from_16 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_16 == NULL));
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_sqlalchemy$engine$row,
                mod_consts[76],
                mod_consts[59]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_16, mod_consts[76]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[77];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_sqlalchemy$engine$row;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[78];
        tmp_level_value_4 = mod_consts[79];
        frame_4656e9d8ddbe92218344875f6797270f->m_frame.f_lineno = 32;
        tmp_import_name_from_17 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_sqlalchemy$engine$row,
                mod_consts[80],
                mod_consts[59]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_17, mod_consts[80]);
        }

        Py_DECREF(tmp_import_name_from_17);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_18;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[81];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_sqlalchemy$engine$row;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[82];
        tmp_level_value_5 = mod_consts[79];
        frame_4656e9d8ddbe92218344875f6797270f->m_frame.f_lineno = 33;
        tmp_import_name_from_18 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_sqlalchemy$engine$row,
                mod_consts[83],
                mod_consts[59]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME(tmp_import_name_from_18, mod_consts[83]);
        }

        Py_DECREF(tmp_import_name_from_18);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_25);
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_mvar_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_operand_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_mvar_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_operand_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_operand_value_1 == NULL)) {
            tmp_operand_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        assert(!(tmp_operand_value_1 == NULL));
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_19;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[84];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_sqlalchemy$engine$row;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[85];
        tmp_level_value_6 = mod_consts[86];
        frame_4656e9d8ddbe92218344875f6797270f->m_frame.f_lineno = 36;
        tmp_import_name_from_19 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_sqlalchemy$engine$row,
                mod_consts[87],
                mod_consts[59]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME(tmp_import_name_from_19, mod_consts[87]);
        }

        Py_DECREF(tmp_import_name_from_19);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_20;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[84];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_sqlalchemy$engine$row;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[88];
        tmp_level_value_7 = mod_consts[86];
        frame_4656e9d8ddbe92218344875f6797270f->m_frame.f_lineno = 37;
        tmp_import_name_from_20 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_sqlalchemy$engine$row,
                mod_consts[89],
                mod_consts[59]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME(tmp_import_name_from_20, mod_consts[89]);
        }

        Py_DECREF(tmp_import_name_from_20);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_21;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[84];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_sqlalchemy$engine$row;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[90];
        tmp_level_value_8 = mod_consts[86];
        frame_4656e9d8ddbe92218344875f6797270f->m_frame.f_lineno = 38;
        tmp_import_name_from_21 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_sqlalchemy$engine$row,
                mod_consts[91],
                mod_consts[59]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME(tmp_import_name_from_21, mod_consts[91]);
        }

        Py_DECREF(tmp_import_name_from_21);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_28);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_22;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[92];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_sqlalchemy$engine$row;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[85];
        tmp_level_value_9 = mod_consts[59];
        frame_4656e9d8ddbe92218344875f6797270f->m_frame.f_lineno = 40;
        tmp_import_name_from_22 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict_sqlalchemy$engine$row,
                mod_consts[87],
                mod_consts[59]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME(tmp_import_name_from_22, mod_consts[87]);
        }

        Py_DECREF(tmp_import_name_from_22);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_23;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[92];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_sqlalchemy$engine$row;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[88];
        tmp_level_value_10 = mod_consts[59];
        frame_4656e9d8ddbe92218344875f6797270f->m_frame.f_lineno = 41;
        tmp_import_name_from_23 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_import_name_from_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_23,
                (PyObject *)moduledict_sqlalchemy$engine$row,
                mod_consts[89],
                mod_consts[59]
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME(tmp_import_name_from_23, mod_consts[89]);
        }

        Py_DECREF(tmp_import_name_from_23);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_24;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[92];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_sqlalchemy$engine$row;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[90];
        tmp_level_value_11 = mod_consts[59];
        frame_4656e9d8ddbe92218344875f6797270f->m_frame.f_lineno = 42;
        tmp_import_name_from_24 = IMPORT_MODULE5(tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_import_name_from_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_24,
                (PyObject *)moduledict_sqlalchemy$engine$row,
                mod_consts[91],
                mod_consts[59]
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME(tmp_import_name_from_24, mod_consts[91]);
        }

        Py_DECREF(tmp_import_name_from_24);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_31);
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
            tmp_kw_call_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        frame_4656e9d8ddbe92218344875f6797270f->m_frame.f_lineno = 49;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_assign_source_32 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_1, mod_consts[93], kw_values, mod_consts[94]);
        }

        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_tuple_element_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = Py_Ellipsis;
        PyTuple_SET_ITEM0(tmp_subscript_value_1, 1, tmp_tuple_element_1);
        tmp_kw_call_value_0_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        frame_4656e9d8ddbe92218344875f6797270f->m_frame.f_lineno = 50;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};
            tmp_assign_source_33 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_2, mod_consts[96], kw_values, mod_consts[94]);
        }

        Py_DECREF(tmp_kw_call_value_0_2);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_33);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto try_except_handler_1;
        }
        tmp_assign_source_34 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_3;
            PyTuple_SET_ITEM0(tmp_assign_source_34, 0, tmp_tuple_element_2);
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto tuple_build_exception_1;
            }
            tmp_subscript_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[63]);

            if (unlikely(tmp_subscript_value_2 == NULL)) {
                tmp_subscript_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
            }

            if (tmp_subscript_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_34, 1, tmp_tuple_element_2);
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[66]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto tuple_build_exception_1;
            }
            tmp_subscript_value_3 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_subscript_value_3 == NULL)) {
                tmp_subscript_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
            }

            if (tmp_subscript_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_34, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_34);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_35 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto try_except_handler_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_4 = tmp_class_creation_1__bases;
        tmp_subscript_value_4 = mod_consts[59];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_4, 0);
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
        tmp_assign_source_37 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_37;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_5, mod_consts[98]);
        tmp_condition_result_3 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_6 = tmp_class_creation_1__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[98]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto try_except_handler_1;
        }
        tmp_tuple_element_3 = mod_consts[10];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_3 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_4656e9d8ddbe92218344875f6797270f->m_frame.f_lineno = 53;
        tmp_assign_source_38 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_38;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_7 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_7, mod_consts[99]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto try_except_handler_1;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
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
        tmp_mod_expr_left_1 = mod_consts[100];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[101];
        tmp_getattr_default_1 = mod_consts[102];
        tmp_tuple_element_4 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto try_except_handler_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_8;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_8 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_8 == NULL));
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[101]);
            Py_DECREF(tmp_expression_value_8);
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
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_39;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_40;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_sqlalchemy$engine$row$$$class__1_Row_53 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[103];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__1_Row_53, mod_consts[104], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[105];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__1_Row_53, mod_consts[50], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[10];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__1_Row_53, mod_consts[106], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto try_except_handler_3;
        }
        frame_0fc32f52e97daadd76a8b4f44d1e6f58_2 = MAKE_CLASS_FRAME(codeobj_0fc32f52e97daadd76a8b4f44d1e6f58, module_sqlalchemy$engine$row, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_0fc32f52e97daadd76a8b4f44d1e6f58_2);
        assert(Py_REFCNT(frame_0fc32f52e97daadd76a8b4f44d1e6f58_2) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[107];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__1_Row_53, mod_consts[108], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = PyObject_GetItem(locals_sqlalchemy$engine$row$$$class__1_Row_53, mod_consts[89]);

        if (tmp_dictset_value == NULL) {
            if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                tmp_dictset_value = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[89]);

                if (unlikely(tmp_dictset_value == NULL)) {
                    tmp_dictset_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
                }

                if (tmp_dictset_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 83;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }
                Py_INCREF(tmp_dictset_value);
            } else {
                goto frame_exception_exit_2;
            }
        }

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__1_Row_53, mod_consts[7], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_annotations_1;
            tmp_annotations_1 = DICT_COPY(mod_consts[109]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$row$$$function__1___setattr__(tmp_annotations_1);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__1_Row_53, mod_consts[110], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_2;
            tmp_annotations_2 = DICT_COPY(mod_consts[112]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$row$$$function__2___delattr__(tmp_annotations_2);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__1_Row_53, mod_consts[113], tmp_dictset_value);
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
            PyObject *tmp_annotations_3;
            tmp_annotations_3 = DICT_COPY(mod_consts[115]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$row$$$function__3_tuple(tmp_annotations_3);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__1_Row_53, mod_consts[116], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_annotations_4;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_annotations_5;
            tmp_res = MAPPING_HAS_ITEM(locals_sqlalchemy$engine$row$$$class__1_Row_53, mod_consts[118]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_5 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_called_value_4 = PyObject_GetItem(locals_sqlalchemy$engine$row$$$class__1_Row_53, mod_consts[118]);

            if (unlikely(tmp_called_value_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[118]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 109;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_4 = DICT_COPY(mod_consts[115]);


            tmp_args_element_value_1 = MAKE_FUNCTION_sqlalchemy$engine$row$$$function__4_t(tmp_annotations_4);

            frame_0fc32f52e97daadd76a8b4f44d1e6f58_2->m_frame.f_lineno = 109;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_called_value_5 = (PyObject *)&PyProperty_Type;
            tmp_annotations_5 = DICT_COPY(mod_consts[115]);


            tmp_args_element_value_2 = MAKE_FUNCTION_sqlalchemy$engine$row$$$function__4_t(tmp_annotations_5);

            frame_0fc32f52e97daadd76a8b4f44d1e6f58_2->m_frame.f_lineno = 109;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__1_Row_53, mod_consts[119], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_annotations_6;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_annotations_7;
            tmp_res = MAPPING_HAS_ITEM(locals_sqlalchemy$engine$row$$$class__1_Row_53, mod_consts[118]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_6 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_value_6 = PyObject_GetItem(locals_sqlalchemy$engine$row$$$class__1_Row_53, mod_consts[118]);

            if (unlikely(tmp_called_value_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[118]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_6 = DICT_COPY(mod_consts[121]);


            tmp_args_element_value_3 = MAKE_FUNCTION_sqlalchemy$engine$row$$$function__5__mapping(tmp_annotations_6);

            frame_0fc32f52e97daadd76a8b4f44d1e6f58_2->m_frame.f_lineno = 122;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_called_value_7 = (PyObject *)&PyProperty_Type;
            tmp_annotations_7 = DICT_COPY(mod_consts[121]);


            tmp_args_element_value_4 = MAKE_FUNCTION_sqlalchemy$engine$row$$$function__5__mapping(tmp_annotations_7);

            frame_0fc32f52e97daadd76a8b4f44d1e6f58_2->m_frame.f_lineno = 122;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__1_Row_53, mod_consts[37], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_8;
            tmp_annotations_8 = DICT_COPY(mod_consts[123]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$row$$$function__6__filter_on_values(tmp_annotations_8);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__1_Row_53, mod_consts[124], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            bool tmp_condition_result_7;
            PyObject *tmp_operand_value_3;
            tmp_operand_value_3 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[74]);

            if (unlikely(tmp_operand_value_3 == NULL)) {
                tmp_operand_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
            }

            if (tmp_operand_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_7 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_7 != false) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
        }
        branch_yes_4:;
        {
            PyObject *tmp_annotations_9;
            tmp_annotations_9 = DICT_COPY(mod_consts[126]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$row$$$function__7__special_name_accessor(tmp_annotations_9);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__1_Row_53, mod_consts[127], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_8;
            tmp_called_value_8 = PyObject_GetItem(locals_sqlalchemy$engine$row$$$class__1_Row_53, mod_consts[127]);

            if (unlikely(tmp_called_value_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[127]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 176;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_0fc32f52e97daadd76a8b4f44d1e6f58_2->m_frame.f_lineno = 176;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_8, mod_consts[129]);

            Py_DECREF(tmp_called_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__1_Row_53, mod_consts[130], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_9;
            tmp_called_value_9 = PyObject_GetItem(locals_sqlalchemy$engine$row$$$class__1_Row_53, mod_consts[127]);

            if (unlikely(tmp_called_value_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[127]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 177;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_0fc32f52e97daadd76a8b4f44d1e6f58_2->m_frame.f_lineno = 177;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_9, mod_consts[131]);

            Py_DECREF(tmp_called_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__1_Row_53, mod_consts[132], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        branch_no_4:;
        {
            PyObject *tmp_annotations_10;
            tmp_annotations_10 = DICT_COPY(mod_consts[133]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$row$$$function__8___contains__(tmp_annotations_10);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__1_Row_53, mod_consts[134], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_11;
            tmp_annotations_11 = DICT_COPY(mod_consts[136]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$row$$$function__9__op(tmp_annotations_11);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__1_Row_53, mod_consts[25], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_expression_value_9;
            tmp_expression_value_9 = PyObject_GetItem(locals_sqlalchemy$engine$row$$$class__1_Row_53, mod_consts[87]);

            if (tmp_expression_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[87]);

                    if (unlikely(tmp_expression_value_9 == NULL)) {
                        tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
                    }

                    if (tmp_expression_value_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 189;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_9);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[138]);
            Py_DECREF(tmp_expression_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__1_Row_53, mod_consts[138], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_12;
            tmp_annotations_12 = DICT_COPY(mod_consts[139]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$row$$$function__13___lt__(tmp_annotations_12);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__1_Row_53, mod_consts[140], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_13;
            tmp_annotations_13 = DICT_COPY(mod_consts[139]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$row$$$function__14___le__(tmp_annotations_13);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__1_Row_53, mod_consts[142], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_14;
            tmp_annotations_14 = DICT_COPY(mod_consts[139]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$row$$$function__15___ge__(tmp_annotations_14);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__1_Row_53, mod_consts[144], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_15;
            tmp_annotations_15 = DICT_COPY(mod_consts[139]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$row$$$function__16___gt__(tmp_annotations_15);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__1_Row_53, mod_consts[146], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_16;
            tmp_annotations_16 = DICT_COPY(mod_consts[139]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$row$$$function__17___eq__(tmp_annotations_16);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__1_Row_53, mod_consts[148], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_17;
            tmp_annotations_17 = DICT_COPY(mod_consts[139]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$row$$$function__18___ne__(tmp_annotations_17);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__1_Row_53, mod_consts[150], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_18;
            tmp_annotations_18 = DICT_COPY(mod_consts[152]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$row$$$function__19___repr__(tmp_annotations_18);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__1_Row_53, mod_consts[153], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_annotations_19;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_annotations_20;
            tmp_res = MAPPING_HAS_ITEM(locals_sqlalchemy$engine$row$$$class__1_Row_53, mod_consts[118]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_8 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_value_10 = PyObject_GetItem(locals_sqlalchemy$engine$row$$$class__1_Row_53, mod_consts[118]);

            if (unlikely(tmp_called_value_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[118]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 227;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_19 = DICT_COPY(mod_consts[155]);


            tmp_args_element_value_5 = MAKE_FUNCTION_sqlalchemy$engine$row$$$function__20__fields(tmp_annotations_19);

            frame_0fc32f52e97daadd76a8b4f44d1e6f58_2->m_frame.f_lineno = 227;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_5);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_value_11 = (PyObject *)&PyProperty_Type;
            tmp_annotations_20 = DICT_COPY(mod_consts[155]);


            tmp_args_element_value_6 = MAKE_FUNCTION_sqlalchemy$engine$row$$$function__20__fields(tmp_annotations_20);

            frame_0fc32f52e97daadd76a8b4f44d1e6f58_2->m_frame.f_lineno = 227;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__1_Row_53, mod_consts[156], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_21;
            tmp_annotations_21 = DICT_COPY(mod_consts[158]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$row$$$function__21__asdict(tmp_annotations_21);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__1_Row_53, mod_consts[159], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0fc32f52e97daadd76a8b4f44d1e6f58_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0fc32f52e97daadd76a8b4f44d1e6f58_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0fc32f52e97daadd76a8b4f44d1e6f58_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0fc32f52e97daadd76a8b4f44d1e6f58_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_0fc32f52e97daadd76a8b4f44d1e6f58_2);

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
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_9 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto try_except_handler_3;
            }
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto branch_yes_5;
            } else {
                goto branch_no_5;
            }
        }
        branch_yes_5:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__1_Row_53, mod_consts[161], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto try_except_handler_3;
        }
        branch_no_5:;
        {
            PyObject *tmp_assign_source_41;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_12 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_5 = mod_consts[10];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_5 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_sqlalchemy$engine$row$$$class__1_Row_53;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_4656e9d8ddbe92218344875f6797270f->m_frame.f_lineno = 53;
            tmp_assign_source_41 = CALL_FUNCTION(tmp_called_value_12, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_41;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_40 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_40);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_sqlalchemy$engine$row$$$class__1_Row_53);
        locals_sqlalchemy$engine$row$$$class__1_Row_53 = NULL;
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

        Py_DECREF(locals_sqlalchemy$engine$row$$$class__1_Row_53);
        locals_sqlalchemy$engine$row$$$class__1_Row_53 = NULL;
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
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_40);
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
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_assign_source_42 == NULL)) {
            tmp_assign_source_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
        }

        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_assign_source_43 == NULL)) {
            tmp_assign_source_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_43);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_tuple_element_6;
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto try_except_handler_4;
        }
        tmp_assign_source_44 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_44, 0, tmp_tuple_element_6);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_45 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto try_except_handler_4;
        }
        tmp_condition_result_10 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_10 = tmp_class_creation_2__bases;
        tmp_subscript_value_5 = mod_consts[59];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_10, tmp_subscript_value_5, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto try_except_handler_4;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_47 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_47;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_11 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_11, mod_consts[98]);
        tmp_condition_result_11 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_12 = tmp_class_creation_2__metaclass;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[98]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto try_except_handler_4;
        }
        tmp_tuple_element_7 = mod_consts[164];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_7 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_4656e9d8ddbe92218344875f6797270f->m_frame.f_lineno = 270;
        tmp_assign_source_48 = CALL_FUNCTION(tmp_called_value_13, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_48;
    }
    {
        bool tmp_condition_result_12;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_13 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_13, mod_consts[99]);
        tmp_operand_value_4 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto try_except_handler_4;
        }
        tmp_condition_result_12 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
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
        tmp_mod_expr_left_2 = mod_consts[100];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[101];
        tmp_getattr_default_2 = mod_consts[102];
        tmp_tuple_element_8 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_14;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_14 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_14 == NULL));
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[101]);
            Py_DECREF(tmp_expression_value_14);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;

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


            exception_lineno = 270;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 270;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_7:;
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_49;
    }
    branch_end_6:;
    {
        PyObject *tmp_assign_source_50;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_sqlalchemy$engine$row$$$class__2_ROMappingView_270 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[103];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__2_ROMappingView_270, mod_consts[104], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[164];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__2_ROMappingView_270, mod_consts[106], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto try_except_handler_6;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__2_ROMappingView_270, mod_consts[165], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto try_except_handler_6;
        }
        frame_bbc72f8748dcd380e2ece84bad27616e_3 = MAKE_CLASS_FRAME(codeobj_bbc72f8748dcd380e2ece84bad27616e, module_sqlalchemy$engine$row, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_bbc72f8748dcd380e2ece84bad27616e_3);
        assert(Py_REFCNT(frame_bbc72f8748dcd380e2ece84bad27616e_3) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[107];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__2_ROMappingView_270, mod_consts[108], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            tmp_ass_subvalue_1 = mod_consts[166];
            tmp_ass_subscribed_1 = PyObject_GetItem(locals_sqlalchemy$engine$row$$$class__2_ROMappingView_270, mod_consts[165]);

            if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[165]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 273;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_ass_subscribed_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 273;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscript_1 = mod_consts[39];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
            Py_DECREF(tmp_ass_subscribed_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 273;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            tmp_ass_subvalue_2 = mod_consts[167];
            tmp_ass_subscribed_2 = PyObject_GetItem(locals_sqlalchemy$engine$row$$$class__2_ROMappingView_270, mod_consts[165]);

            if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[165]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 274;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_ass_subscribed_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscript_2 = mod_consts[37];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
            Py_DECREF(tmp_ass_subscribed_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_22;
            tmp_annotations_22 = DICT_COPY(mod_consts[168]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$row$$$function__22___init__(tmp_annotations_22);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__2_ROMappingView_270, mod_consts[169], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_23;
            tmp_annotations_23 = DICT_COPY(mod_consts[171]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$row$$$function__23___len__(tmp_annotations_23);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__2_ROMappingView_270, mod_consts[172], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_24;
            tmp_annotations_24 = DICT_COPY(mod_consts[152]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$row$$$function__24___repr__(tmp_annotations_24);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__2_ROMappingView_270, mod_consts[153], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_25;
            tmp_annotations_25 = DICT_COPY(mod_consts[175]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$row$$$function__25___iter__(tmp_annotations_25);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__2_ROMappingView_270, mod_consts[176], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_26;
            tmp_annotations_26 = DICT_COPY(mod_consts[178]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$row$$$function__26___contains__(tmp_annotations_26);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__2_ROMappingView_270, mod_consts[134], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_27;
            tmp_annotations_27 = DICT_COPY(mod_consts[139]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$row$$$function__27___eq__(tmp_annotations_27);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__2_ROMappingView_270, mod_consts[148], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_28;
            tmp_annotations_28 = DICT_COPY(mod_consts[139]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$row$$$function__28___ne__(tmp_annotations_28);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__2_ROMappingView_270, mod_consts[150], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_bbc72f8748dcd380e2ece84bad27616e_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_bbc72f8748dcd380e2ece84bad27616e_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_bbc72f8748dcd380e2ece84bad27616e_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_bbc72f8748dcd380e2ece84bad27616e_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_bbc72f8748dcd380e2ece84bad27616e_3);

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
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_13 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
        }
        branch_yes_8:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__2_ROMappingView_270, mod_consts[161], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto try_except_handler_6;
        }
        branch_no_8:;
        {
            PyObject *tmp_assign_source_51;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_14 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_9 = mod_consts[164];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_9 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = locals_sqlalchemy$engine$row$$$class__2_ROMappingView_270;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_4656e9d8ddbe92218344875f6797270f->m_frame.f_lineno = 270;
            tmp_assign_source_51 = CALL_FUNCTION(tmp_called_value_14, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_51;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_50 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_50);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_sqlalchemy$engine$row$$$class__2_ROMappingView_270);
        locals_sqlalchemy$engine$row$$$class__2_ROMappingView_270 = NULL;
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

        Py_DECREF(locals_sqlalchemy$engine$row$$$class__2_ROMappingView_270);
        locals_sqlalchemy$engine$row$$$class__2_ROMappingView_270 = NULL;
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
        exception_lineno = 270;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_50);
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
        PyObject *tmp_assign_source_52;
        PyObject *tmp_tuple_element_10;
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[164]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[164]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto try_except_handler_7;
        }
        tmp_assign_source_52 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_15;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_subscript_value_7;
            PyTuple_SET_ITEM0(tmp_assign_source_52, 0, tmp_tuple_element_10);
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[62]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
            }

            assert(!(tmp_expression_value_16 == NULL));
            tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[182]);
            if (tmp_expression_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 300;

                goto tuple_build_exception_4;
            }
            tmp_subscript_value_6 = (PyObject *)&PyUnicode_Type;
            tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_6);
            Py_DECREF(tmp_expression_value_15);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 300;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_assign_source_52, 1, tmp_tuple_element_10);
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[62]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
            }

            assert(!(tmp_expression_value_18 == NULL));
            tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[183]);
            if (tmp_expression_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 300;

                goto tuple_build_exception_4;
            }
            tmp_subscript_value_7 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[63]);

            if (unlikely(tmp_subscript_value_7 == NULL)) {
                tmp_subscript_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
            }

            if (tmp_subscript_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_17);

                exception_lineno = 300;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_7);
            Py_DECREF(tmp_expression_value_17);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 300;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_assign_source_52, 2, tmp_tuple_element_10);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_assign_source_52);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_53 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_14;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto try_except_handler_7;
        }
        tmp_condition_result_14 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_19 = tmp_class_creation_3__bases;
        tmp_subscript_value_8 = mod_consts[59];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_19, tmp_subscript_value_8, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto try_except_handler_7;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_55 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_55;
    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_20 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_20, mod_consts[98]);
        tmp_condition_result_15 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_21 = tmp_class_creation_3__metaclass;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[98]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto try_except_handler_7;
        }
        tmp_tuple_element_11 = mod_consts[46];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_11);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_11 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_11);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_4656e9d8ddbe92218344875f6797270f->m_frame.f_lineno = 300;
        tmp_assign_source_56 = CALL_FUNCTION(tmp_called_value_15, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_56;
    }
    {
        bool tmp_condition_result_16;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_22 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_22, mod_consts[99]);
        tmp_operand_value_5 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto try_except_handler_7;
        }
        tmp_condition_result_16 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
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
        tmp_mod_expr_left_3 = mod_consts[100];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[101];
        tmp_getattr_default_3 = mod_consts[102];
        tmp_tuple_element_12 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto try_except_handler_7;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_23;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_23 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_23 == NULL));
            tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[101]);
            Py_DECREF(tmp_expression_value_23);
            if (tmp_tuple_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 300;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_12);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 300;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_10:;
    goto branch_end_9;
    branch_no_9:;
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_57;
    }
    branch_end_9:;
    {
        PyObject *tmp_assign_source_58;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_sqlalchemy$engine$row$$$class__3_ROMappingKeysValuesView_300 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[103];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__3_ROMappingKeysValuesView_300, mod_consts[104], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[46];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__3_ROMappingKeysValuesView_300, mod_consts[106], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto try_except_handler_9;
        }
        frame_1b23a02abdaca83f9ff12f3fcd7be1d7_4 = MAKE_CLASS_FRAME(codeobj_1b23a02abdaca83f9ff12f3fcd7be1d7, module_sqlalchemy$engine$row, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_1b23a02abdaca83f9ff12f3fcd7be1d7_4);
        assert(Py_REFCNT(frame_1b23a02abdaca83f9ff12f3fcd7be1d7_4) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[184];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__3_ROMappingKeysValuesView_300, mod_consts[108], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_1b23a02abdaca83f9ff12f3fcd7be1d7_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_1b23a02abdaca83f9ff12f3fcd7be1d7_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_1b23a02abdaca83f9ff12f3fcd7be1d7_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_1b23a02abdaca83f9ff12f3fcd7be1d7_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_1b23a02abdaca83f9ff12f3fcd7be1d7_4);

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
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_17 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_17 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 300;

                goto try_except_handler_9;
            }
            if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
                goto branch_yes_11;
            } else {
                goto branch_no_11;
            }
        }
        branch_yes_11:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__3_ROMappingKeysValuesView_300, mod_consts[161], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto try_except_handler_9;
        }
        branch_no_11:;
        {
            PyObject *tmp_assign_source_59;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_16 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_13 = mod_consts[46];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_13 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_13);
            tmp_tuple_element_13 = locals_sqlalchemy$engine$row$$$class__3_ROMappingKeysValuesView_300;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_4656e9d8ddbe92218344875f6797270f->m_frame.f_lineno = 300;
            tmp_assign_source_59 = CALL_FUNCTION(tmp_called_value_16, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 300;

                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_59;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_58 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_58);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_sqlalchemy$engine$row$$$class__3_ROMappingKeysValuesView_300);
        locals_sqlalchemy$engine$row$$$class__3_ROMappingKeysValuesView_300 = NULL;
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

        Py_DECREF(locals_sqlalchemy$engine$row$$$class__3_ROMappingKeysValuesView_300);
        locals_sqlalchemy$engine$row$$$class__3_ROMappingKeysValuesView_300 = NULL;
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
        exception_lineno = 300;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_58);
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
        PyObject *tmp_assign_source_60;
        PyObject *tmp_tuple_element_14;
        tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[164]);

        if (unlikely(tmp_tuple_element_14 == NULL)) {
            tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[164]);
        }

        if (tmp_tuple_element_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto try_except_handler_10;
        }
        tmp_assign_source_60 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_24;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_subscript_value_9;
            PyObject *tmp_tuple_element_15;
            PyTuple_SET_ITEM0(tmp_assign_source_60, 0, tmp_tuple_element_14);
            tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[62]);

            if (unlikely(tmp_expression_value_25 == NULL)) {
                tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
            }

            assert(!(tmp_expression_value_25 == NULL));
            tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[185]);
            if (tmp_expression_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 305;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_15 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_9 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_9, 0, tmp_tuple_element_15);
            tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[63]);

            if (unlikely(tmp_tuple_element_15 == NULL)) {
                tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
            }

            if (tmp_tuple_element_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 305;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_9, 1, tmp_tuple_element_15);
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_expression_value_24);
            Py_DECREF(tmp_subscript_value_9);
            goto tuple_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_tuple_element_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_9);
            Py_DECREF(tmp_expression_value_24);
            Py_DECREF(tmp_subscript_value_9);
            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 305;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_60, 1, tmp_tuple_element_14);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_assign_source_60);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_60;
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_61 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_62;
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_18;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto try_except_handler_10;
        }
        tmp_condition_result_18 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_26 = tmp_class_creation_4__bases;
        tmp_subscript_value_10 = mod_consts[59];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_26, tmp_subscript_value_10, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto try_except_handler_10;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto try_except_handler_10;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_7:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_63 = SELECT_METACLASS(tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_63;
    }
    {
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_expression_value_27;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_27 = tmp_class_creation_4__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_27, mod_consts[98]);
        tmp_condition_result_19 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_28 = tmp_class_creation_4__metaclass;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[98]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto try_except_handler_10;
        }
        tmp_tuple_element_16 = mod_consts[43];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_16);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_16 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_16);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_4656e9d8ddbe92218344875f6797270f->m_frame.f_lineno = 305;
        tmp_assign_source_64 = CALL_FUNCTION(tmp_called_value_17, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_64;
    }
    {
        bool tmp_condition_result_20;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_29;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_29 = tmp_class_creation_4__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_29, mod_consts[99]);
        tmp_operand_value_6 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto try_except_handler_10;
        }
        tmp_condition_result_20 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_20 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
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
        tmp_mod_expr_left_4 = mod_consts[100];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
        tmp_getattr_attr_4 = mod_consts[101];
        tmp_getattr_default_4 = mod_consts[102];
        tmp_tuple_element_17 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
        if (tmp_tuple_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto try_except_handler_10;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_30;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_30 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_30 == NULL));
            tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[101]);
            Py_DECREF(tmp_expression_value_30);
            if (tmp_tuple_element_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 305;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_17);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 305;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_10;
    }
    branch_no_13:;
    goto branch_end_12;
    branch_no_12:;
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_65;
    }
    branch_end_12:;
    {
        PyObject *tmp_assign_source_66;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_sqlalchemy$engine$row$$$class__4_ROMappingItemsView_305 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[103];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__4_ROMappingItemsView_305, mod_consts[104], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[43];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__4_ROMappingItemsView_305, mod_consts[106], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto try_except_handler_12;
        }
        frame_bd04fb40a85720789ae42c442c07d91b_5 = MAKE_CLASS_FRAME(codeobj_bd04fb40a85720789ae42c442c07d91b, module_sqlalchemy$engine$row, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_bd04fb40a85720789ae42c442c07d91b_5);
        assert(Py_REFCNT(frame_bd04fb40a85720789ae42c442c07d91b_5) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[184];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__4_ROMappingItemsView_305, mod_consts[108], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_bd04fb40a85720789ae42c442c07d91b_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_bd04fb40a85720789ae42c442c07d91b_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_bd04fb40a85720789ae42c442c07d91b_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_bd04fb40a85720789ae42c442c07d91b_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_bd04fb40a85720789ae42c442c07d91b_5);

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
            nuitka_bool tmp_condition_result_21;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_21 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_21 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 305;

                goto try_except_handler_12;
            }
            if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
                goto branch_yes_14;
            } else {
                goto branch_no_14;
            }
        }
        branch_yes_14:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__4_ROMappingItemsView_305, mod_consts[161], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto try_except_handler_12;
        }
        branch_no_14:;
        {
            PyObject *tmp_assign_source_67;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_18 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_18 = mod_consts[43];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_18 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_18);
            tmp_tuple_element_18 = locals_sqlalchemy$engine$row$$$class__4_ROMappingItemsView_305;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_4656e9d8ddbe92218344875f6797270f->m_frame.f_lineno = 305;
            tmp_assign_source_67 = CALL_FUNCTION(tmp_called_value_18, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_67 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 305;

                goto try_except_handler_12;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_67;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_66 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_66);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_sqlalchemy$engine$row$$$class__4_ROMappingItemsView_305);
        locals_sqlalchemy$engine$row$$$class__4_ROMappingItemsView_305 = NULL;
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

        Py_DECREF(locals_sqlalchemy$engine$row$$$class__4_ROMappingItemsView_305);
        locals_sqlalchemy$engine$row$$$class__4_ROMappingItemsView_305 = NULL;
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
        exception_lineno = 305;
        goto try_except_handler_10;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_66);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_tuple_element_19;
        tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_tuple_element_19 == NULL)) {
            tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
        }

        if (tmp_tuple_element_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_13;
        }
        tmp_assign_source_68 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_31;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_subscript_value_11;
            PyObject *tmp_tuple_element_20;
            PyTuple_SET_ITEM0(tmp_assign_source_68, 0, tmp_tuple_element_19);
            tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[62]);

            if (unlikely(tmp_expression_value_32 == NULL)) {
                tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
            }

            assert(!(tmp_expression_value_32 == NULL));
            tmp_expression_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[69]);
            if (tmp_expression_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_20 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_11 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_11, 0, tmp_tuple_element_20);
            tmp_tuple_element_20 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[63]);

            if (unlikely(tmp_tuple_element_20 == NULL)) {
                tmp_tuple_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
            }

            if (tmp_tuple_element_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_11, 1, tmp_tuple_element_20);
            goto tuple_build_noexception_9;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_10:;
            Py_DECREF(tmp_expression_value_31);
            Py_DECREF(tmp_subscript_value_11);
            goto tuple_build_exception_9;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_9:;
            tmp_tuple_element_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_11);
            Py_DECREF(tmp_expression_value_31);
            Py_DECREF(tmp_subscript_value_11);
            if (tmp_tuple_element_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_68, 1, tmp_tuple_element_19);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_assign_source_68);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_68;
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_69 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_70;
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_metaclass_value_5;
        nuitka_bool tmp_condition_result_22;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_bases_value_5;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_13;
        }
        tmp_condition_result_22 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_33 = tmp_class_creation_5__bases;
        tmp_subscript_value_12 = mod_consts[59];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_33, tmp_subscript_value_12, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_13;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_13;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_8:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_5 = tmp_class_creation_5__bases;
        tmp_assign_source_71 = SELECT_METACLASS(tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_71;
    }
    {
        nuitka_bool tmp_condition_result_23;
        PyObject *tmp_expression_value_34;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_34 = tmp_class_creation_5__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_34, mod_consts[98]);
        tmp_condition_result_23 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_35 = tmp_class_creation_5__metaclass;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[98]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_13;
        }
        tmp_tuple_element_21 = mod_consts[4];
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_21);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_21 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_21);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
        frame_4656e9d8ddbe92218344875f6797270f->m_frame.f_lineno = 309;
        tmp_assign_source_72 = CALL_FUNCTION(tmp_called_value_19, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_72;
    }
    {
        bool tmp_condition_result_24;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_expression_value_36;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_36 = tmp_class_creation_5__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_36, mod_consts[99]);
        tmp_operand_value_7 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_13;
        }
        tmp_condition_result_24 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_24 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        PyObject *tmp_tuple_element_22;
        PyObject *tmp_getattr_target_5;
        PyObject *tmp_getattr_attr_5;
        PyObject *tmp_getattr_default_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[100];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_getattr_target_5 = tmp_class_creation_5__metaclass;
        tmp_getattr_attr_5 = mod_consts[101];
        tmp_getattr_default_5 = mod_consts[102];
        tmp_tuple_element_22 = BUILTIN_GETATTR(tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5);
        if (tmp_tuple_element_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_13;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_37;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_22);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_10 = tmp_class_creation_5__prepared;
            tmp_expression_value_37 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_37 == NULL));
            tmp_tuple_element_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[101]);
            Py_DECREF(tmp_expression_value_37);
            if (tmp_tuple_element_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_22);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_13;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 309;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_13;
    }
    branch_no_16:;
    goto branch_end_15;
    branch_no_15:;
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_73;
    }
    branch_end_15:;
    {
        PyObject *tmp_assign_source_74;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_sqlalchemy$engine$row$$$class__5_RowMapping_309 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[103];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__5_RowMapping_309, mod_consts[104], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[186];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__5_RowMapping_309, mod_consts[50], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[4];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__5_RowMapping_309, mod_consts[106], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_15;
        }
        frame_cbc031296e01cce92f718bfe2b756590_6 = MAKE_CLASS_FRAME(codeobj_cbc031296e01cce92f718bfe2b756590, module_sqlalchemy$engine$row, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_cbc031296e01cce92f718bfe2b756590_6);
        assert(Py_REFCNT(frame_cbc031296e01cce92f718bfe2b756590_6) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[107];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__5_RowMapping_309, mod_consts[108], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        tmp_dictset_value = PyObject_GetItem(locals_sqlalchemy$engine$row$$$class__5_RowMapping_309, mod_consts[91]);

        if (tmp_dictset_value == NULL) {
            if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                tmp_dictset_value = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[91]);

                if (unlikely(tmp_dictset_value == NULL)) {
                    tmp_dictset_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
                }

                if (tmp_dictset_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 338;
                    type_description_2 = "o";
                    goto frame_exception_exit_6;
                }
                Py_INCREF(tmp_dictset_value);
            } else {
                goto frame_exception_exit_6;
            }
        }

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__5_RowMapping_309, mod_consts[7], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        {
            PyObject *tmp_expression_value_38;
            tmp_expression_value_38 = PyObject_GetItem(locals_sqlalchemy$engine$row$$$class__5_RowMapping_309, mod_consts[87]);

            if (tmp_expression_value_38 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[87]);

                    if (unlikely(tmp_expression_value_38 == NULL)) {
                        tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
                    }

                    if (tmp_expression_value_38 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 346;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_expression_value_38);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[187]);
            Py_DECREF(tmp_expression_value_38);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__5_RowMapping_309, mod_consts[99], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_annotations_29;
            tmp_annotations_29 = DICT_COPY(mod_consts[188]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$row$$$function__30__values_impl(tmp_annotations_29);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__5_RowMapping_309, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 348;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_annotations_30;
            tmp_annotations_30 = DICT_COPY(mod_consts[190]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$row$$$function__31___iter__(tmp_annotations_30);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__5_RowMapping_309, mod_consts[176], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_annotations_31;
            tmp_annotations_31 = DICT_COPY(mod_consts[171]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$row$$$function__32___len__(tmp_annotations_31);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__5_RowMapping_309, mod_consts[172], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_annotations_32;
            tmp_annotations_32 = DICT_COPY(mod_consts[193]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$row$$$function__33___contains__(tmp_annotations_32);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__5_RowMapping_309, mod_consts[134], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 357;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_annotations_33;
            tmp_annotations_33 = DICT_COPY(mod_consts[152]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$row$$$function__34___repr__(tmp_annotations_33);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__5_RowMapping_309, mod_consts[153], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 360;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_annotations_34;
            tmp_annotations_34 = DICT_COPY(mod_consts[196]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$row$$$function__35_items(tmp_annotations_34);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__5_RowMapping_309, mod_consts[197], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 363;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_annotations_35;
            tmp_annotations_35 = DICT_COPY(mod_consts[199]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$row$$$function__36_keys(tmp_annotations_35);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__5_RowMapping_309, mod_consts[35], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 372;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_annotations_36;
            tmp_annotations_36 = DICT_COPY(mod_consts[201]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$row$$$function__37_values(tmp_annotations_36);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__5_RowMapping_309, mod_consts[202], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 380;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_cbc031296e01cce92f718bfe2b756590_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_cbc031296e01cce92f718bfe2b756590_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_cbc031296e01cce92f718bfe2b756590_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_cbc031296e01cce92f718bfe2b756590_6,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_cbc031296e01cce92f718bfe2b756590_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_15;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_25;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_5 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_25 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_25 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;

                goto try_except_handler_15;
            }
            if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
                goto branch_yes_17;
            } else {
                goto branch_no_17;
            }
        }
        branch_yes_17:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$row$$$class__5_RowMapping_309, mod_consts[161], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_15;
        }
        branch_no_17:;
        {
            PyObject *tmp_assign_source_75;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_23;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_20 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_23 = mod_consts[4];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_23 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_23);
            tmp_tuple_element_23 = locals_sqlalchemy$engine$row$$$class__5_RowMapping_309;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
            frame_4656e9d8ddbe92218344875f6797270f->m_frame.f_lineno = 309;
            tmp_assign_source_75 = CALL_FUNCTION(tmp_called_value_20, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_75 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;

                goto try_except_handler_15;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_75;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_74 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_74);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_sqlalchemy$engine$row$$$class__5_RowMapping_309);
        locals_sqlalchemy$engine$row$$$class__5_RowMapping_309 = NULL;
        goto try_return_handler_14;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_sqlalchemy$engine$row$$$class__5_RowMapping_309);
        locals_sqlalchemy$engine$row$$$class__5_RowMapping_309 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

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

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 309;
        goto try_except_handler_13;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_74);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
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
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_6;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4656e9d8ddbe92218344875f6797270f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4656e9d8ddbe92218344875f6797270f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4656e9d8ddbe92218344875f6797270f, exception_lineno);
    }



    assertFrameObject(frame_4656e9d8ddbe92218344875f6797270f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_6:;
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

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("sqlalchemy.engine.row", false);

    Py_INCREF(module_sqlalchemy$engine$row);
    return module_sqlalchemy$engine$row;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$row, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("sqlalchemy$engine$row", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
