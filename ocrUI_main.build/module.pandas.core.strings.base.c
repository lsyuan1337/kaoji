/* Generated code for Python module 'pandas.core.strings.base'
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

/* The "module_pandas$core$strings$base" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pandas$core$strings$base;
PyDictObject *moduledict_pandas$core$strings$base;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[175];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[175];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("pandas.core.strings.base"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 175; i++) {
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
void checkModuleConstants_pandas$core$strings$base(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 175; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_d74978ec3b4938b2f76f22dca0ad4505;
static PyCodeObject *codeobj_84ee5dc237cf8f3faae6832bc568aeff;
static PyCodeObject *codeobj_c5853d4848f002b35399473ea405ad11;
static PyCodeObject *codeobj_59aa18cb854c03d936175d5e741ab3d8;
static PyCodeObject *codeobj_2b0afc29b8475d4709347979fd27d95e;
static PyCodeObject *codeobj_6da66704a00c3107c5275ca1844926ff;
static PyCodeObject *codeobj_9ddc2df38b18e4febb6a11244d163a27;
static PyCodeObject *codeobj_ee69b6a4286c87abf9908f280dcd619c;
static PyCodeObject *codeobj_7e6b38c844062d95675cc304a6b54759;
static PyCodeObject *codeobj_65b2a2d6f258f2bc7f8b6a6546defd74;
static PyCodeObject *codeobj_c0c72472121b0cb140263e46dd14f0a7;
static PyCodeObject *codeobj_8bac357a68f123256c1cb399e0677bd3;
static PyCodeObject *codeobj_5ca42a26e381abac320f7d6e8a8d8ca5;
static PyCodeObject *codeobj_607104eacca145300e0f84e7c288b339;
static PyCodeObject *codeobj_f4e66cabf0a2e21be164d2ce586d392d;
static PyCodeObject *codeobj_253ca18c805a5157573532d1825b871d;
static PyCodeObject *codeobj_42f2039843d0b3e96489be7fcafcff26;
static PyCodeObject *codeobj_a44db4a28dd6c2b00f4fdf52b129673e;
static PyCodeObject *codeobj_886cb0ff0fa589345bcc838f8b90fad7;
static PyCodeObject *codeobj_da15c4acac705d02a44110cbf39ffc10;
static PyCodeObject *codeobj_bf944a11a0217596c01393a1cf56f739;
static PyCodeObject *codeobj_3b0520d71df176071426abd360366198;
static PyCodeObject *codeobj_0ba5dc80f8bc664dc3317eb2650f69ca;
static PyCodeObject *codeobj_36bc7931a676e5061ea949fed96326ca;
static PyCodeObject *codeobj_ce73ba716e616da5735aec8e9883d3ff;
static PyCodeObject *codeobj_a6265c85dbd9a25ee82400ad1b1c74b0;
static PyCodeObject *codeobj_f1fa252815c49c6f2c00220310027224;
static PyCodeObject *codeobj_ebd6ab9196cf2920e138ccf94640058d;
static PyCodeObject *codeobj_69d5a99454eef293fdcad948da9524ef;
static PyCodeObject *codeobj_d21f6aceb50d465dccb1ae08fc302eda;
static PyCodeObject *codeobj_bda4a73bda7bf2aa9144b6e11bbf35cd;
static PyCodeObject *codeobj_22ba723d767ff7e77308b216bcf369e9;
static PyCodeObject *codeobj_f6bb1b5fa75e09eea80330d934b25d1c;
static PyCodeObject *codeobj_5bb886f72f7aaf3f272f2f60f5e8e165;
static PyCodeObject *codeobj_fd49f5a94d2bbb314cf7132f97f209d4;
static PyCodeObject *codeobj_6fa16b827dfd3d0d495e9c14e8b06158;
static PyCodeObject *codeobj_24e46c81fb3456343eb15afb06bef8a7;
static PyCodeObject *codeobj_d279ea1c6ae3de247b4d2dc4e663828e;
static PyCodeObject *codeobj_35d6fa076e256bb9a5b81cd879175f72;
static PyCodeObject *codeobj_a080876d41ea77c5ecdfff3b989f1c75;
static PyCodeObject *codeobj_7524e158a0507c4782ee1d2fdd9f9c96;
static PyCodeObject *codeobj_ac2ccafe46ece76eda118144692fc830;
static PyCodeObject *codeobj_6588bce71bdf6255c08142a2e89b677d;
static PyCodeObject *codeobj_f479741dc8bcc5e7dd25d830f8ca8bd3;
static PyCodeObject *codeobj_48a3624bdcb9e9de0159a8ddce26d3f6;
static PyCodeObject *codeobj_9ba44bca52b380e4eda54ab41b703011;
static PyCodeObject *codeobj_94c94dfece557c11eafdd58403e884bd;
static PyCodeObject *codeobj_f54fc9c6c3346ab97e7369ef6a4d7b90;
static PyCodeObject *codeobj_18e4d2dabd15cefe64e3eea76c427edf;
static PyCodeObject *codeobj_556d6352b89fb399c66fb1a2d7f49f13;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[148]); CHECK_OBJECT(module_filename_obj);
    codeobj_d74978ec3b4938b2f76f22dca0ad4505 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[149], mod_consts[149], NULL, NULL, 0, 0, 0);
    codeobj_84ee5dc237cf8f3faae6832bc568aeff = MAKE_CODE_OBJECT(module_filename_obj, 12, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[26], mod_consts[26], mod_consts[150], NULL, 0, 0, 0);
    codeobj_c5853d4848f002b35399473ea405ad11 = MAKE_CODE_OBJECT(module_filename_obj, 186, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[117], mod_consts[117], mod_consts[151], NULL, 1, 0, 0);
    codeobj_59aa18cb854c03d936175d5e741ab3d8 = MAKE_CODE_OBJECT(module_filename_obj, 190, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[119], mod_consts[119], mod_consts[151], NULL, 1, 0, 0);
    codeobj_2b0afc29b8475d4709347979fd27d95e = MAKE_CODE_OBJECT(module_filename_obj, 42, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[45], mod_consts[45], mod_consts[152], NULL, 6, 0, 0);
    codeobj_6da66704a00c3107c5275ca1844926ff = MAKE_CODE_OBJECT(module_filename_obj, 34, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[39], mod_consts[39], mod_consts[153], NULL, 3, 0, 0);
    codeobj_9ddc2df38b18e4febb6a11244d163a27 = MAKE_CODE_OBJECT(module_filename_obj, 86, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[66], mod_consts[66], mod_consts[154], NULL, 3, 0, 0);
    codeobj_ee69b6a4286c87abf9908f280dcd619c = MAKE_CODE_OBJECT(module_filename_obj, 50, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[50], mod_consts[50], mod_consts[155], NULL, 3, 0, 0);
    codeobj_7e6b38c844062d95675cc304a6b54759 = MAKE_CODE_OBJECT(module_filename_obj, 234, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[145], mod_consts[145], mod_consts[156], NULL, 4, 0, 0);
    codeobj_65b2a2d6f258f2bc7f8b6a6546defd74 = MAKE_CODE_OBJECT(module_filename_obj, 90, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[69], mod_consts[69], mod_consts[157], NULL, 4, 0, 0);
    codeobj_c0c72472121b0cb140263e46dd14f0a7 = MAKE_CODE_OBJECT(module_filename_obj, 98, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[73], mod_consts[73], mod_consts[153], NULL, 3, 0, 0);
    codeobj_8bac357a68f123256c1cb399e0677bd3 = MAKE_CODE_OBJECT(module_filename_obj, 76, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[63], mod_consts[63], mod_consts[158], NULL, 5, 0, 0);
    codeobj_5ca42a26e381abac320f7d6e8a8d8ca5 = MAKE_CODE_OBJECT(module_filename_obj, 102, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[5], mod_consts[5], mod_consts[159], NULL, 2, 0, 0);
    codeobj_607104eacca145300e0f84e7c288b339 = MAKE_CODE_OBJECT(module_filename_obj, 146, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[97], mod_consts[97], mod_consts[160], NULL, 2, 0, 0);
    codeobj_f4e66cabf0a2e21be164d2ce586d392d = MAKE_CODE_OBJECT(module_filename_obj, 28, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[35], mod_consts[35], mod_consts[161], NULL, 2, 0, 0);
    codeobj_253ca18c805a5157573532d1825b871d = MAKE_CODE_OBJECT(module_filename_obj, 106, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[76], mod_consts[76], mod_consts[157], NULL, 4, 0, 0);
    codeobj_42f2039843d0b3e96489be7fcafcff26 = MAKE_CODE_OBJECT(module_filename_obj, 150, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[99], mod_consts[99], mod_consts[151], NULL, 1, 0, 0);
    codeobj_a44db4a28dd6c2b00f4fdf52b129673e = MAKE_CODE_OBJECT(module_filename_obj, 154, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[101], mod_consts[101], mod_consts[151], NULL, 1, 0, 0);
    codeobj_886cb0ff0fa589345bcc838f8b90fad7 = MAKE_CODE_OBJECT(module_filename_obj, 158, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[103], mod_consts[103], mod_consts[151], NULL, 1, 0, 0);
    codeobj_da15c4acac705d02a44110cbf39ffc10 = MAKE_CODE_OBJECT(module_filename_obj, 162, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[105], mod_consts[105], mod_consts[151], NULL, 1, 0, 0);
    codeobj_bf944a11a0217596c01393a1cf56f739 = MAKE_CODE_OBJECT(module_filename_obj, 166, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[107], mod_consts[107], mod_consts[151], NULL, 1, 0, 0);
    codeobj_3b0520d71df176071426abd360366198 = MAKE_CODE_OBJECT(module_filename_obj, 170, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[109], mod_consts[109], mod_consts[151], NULL, 1, 0, 0);
    codeobj_0ba5dc80f8bc664dc3317eb2650f69ca = MAKE_CODE_OBJECT(module_filename_obj, 174, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[111], mod_consts[111], mod_consts[151], NULL, 1, 0, 0);
    codeobj_36bc7931a676e5061ea949fed96326ca = MAKE_CODE_OBJECT(module_filename_obj, 178, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[113], mod_consts[113], mod_consts[151], NULL, 1, 0, 0);
    codeobj_ce73ba716e616da5735aec8e9883d3ff = MAKE_CODE_OBJECT(module_filename_obj, 182, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[115], mod_consts[115], mod_consts[151], NULL, 1, 0, 0);
    codeobj_a6265c85dbd9a25ee82400ad1b1c74b0 = MAKE_CODE_OBJECT(module_filename_obj, 114, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[80], mod_consts[80], mod_consts[160], NULL, 2, 0, 0);
    codeobj_f1fa252815c49c6f2c00220310027224 = MAKE_CODE_OBJECT(module_filename_obj, 126, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[86], mod_consts[86], mod_consts[151], NULL, 1, 0, 0);
    codeobj_ebd6ab9196cf2920e138ccf94640058d = MAKE_CODE_OBJECT(module_filename_obj, 202, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[125], mod_consts[125], mod_consts[151], NULL, 1, 0, 0);
    codeobj_69d5a99454eef293fdcad948da9524ef = MAKE_CODE_OBJECT(module_filename_obj, 218, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[133], mod_consts[133], mod_consts[162], NULL, 2, 0, 0);
    codeobj_d21f6aceb50d465dccb1ae08fc302eda = MAKE_CODE_OBJECT(module_filename_obj, 70, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[60], mod_consts[60], mod_consts[158], NULL, 5, 0, 0);
    codeobj_bda4a73bda7bf2aa9144b6e11bbf35cd = MAKE_CODE_OBJECT(module_filename_obj, 210, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[129], mod_consts[129], mod_consts[163], NULL, 2, 0, 0);
    codeobj_22ba723d767ff7e77308b216bcf369e9 = MAKE_CODE_OBJECT(module_filename_obj, 38, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[42], mod_consts[42], mod_consts[164], NULL, 4, 0, 0);
    codeobj_f6bb1b5fa75e09eea80330d934b25d1c = MAKE_CODE_OBJECT(module_filename_obj, 118, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[82], mod_consts[82], mod_consts[165], NULL, 3, 0, 0);
    codeobj_5bb886f72f7aaf3f272f2f60f5e8e165 = MAKE_CODE_OBJECT(module_filename_obj, 66, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[56], mod_consts[56], mod_consts[166], NULL, 2, 0, 0);
    codeobj_fd49f5a94d2bbb314cf7132f97f209d4 = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[54], mod_consts[54], mod_consts[167], NULL, 7, 0, 0);
    codeobj_6fa16b827dfd3d0d495e9c14e8b06158 = MAKE_CODE_OBJECT(module_filename_obj, 94, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[71], mod_consts[71], mod_consts[157], NULL, 4, 0, 0);
    codeobj_24e46c81fb3456343eb15afb06bef8a7 = MAKE_CODE_OBJECT(module_filename_obj, 110, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[78], mod_consts[78], mod_consts[157], NULL, 4, 0, 0);
    codeobj_d279ea1c6ae3de247b4d2dc4e663828e = MAKE_CODE_OBJECT(module_filename_obj, 122, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[84], mod_consts[84], mod_consts[165], NULL, 3, 0, 0);
    codeobj_35d6fa076e256bb9a5b81cd879175f72 = MAKE_CODE_OBJECT(module_filename_obj, 230, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[141], mod_consts[141], mod_consts[168], NULL, 3, 0, 0);
    codeobj_a080876d41ea77c5ecdfff3b989f1c75 = MAKE_CODE_OBJECT(module_filename_obj, 222, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[135], mod_consts[135], mod_consts[162], NULL, 2, 0, 0);
    codeobj_7524e158a0507c4782ee1d2fdd9f9c96 = MAKE_CODE_OBJECT(module_filename_obj, 130, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[0], mod_consts[0], mod_consts[169], NULL, 4, 0, 0);
    codeobj_ac2ccafe46ece76eda118144692fc830 = MAKE_CODE_OBJECT(module_filename_obj, 134, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[90], mod_consts[90], mod_consts[170], NULL, 4, 0, 0);
    codeobj_6588bce71bdf6255c08142a2e89b677d = MAKE_CODE_OBJECT(module_filename_obj, 226, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[138], mod_consts[138], mod_consts[171], NULL, 4, 0, 0);
    codeobj_f479741dc8bcc5e7dd25d830f8ca8bd3 = MAKE_CODE_OBJECT(module_filename_obj, 46, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[48], mod_consts[48], mod_consts[155], NULL, 3, 0, 0);
    codeobj_48a3624bdcb9e9de0159a8ddce26d3f6 = MAKE_CODE_OBJECT(module_filename_obj, 214, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[131], mod_consts[131], mod_consts[162], NULL, 2, 0, 0);
    codeobj_9ba44bca52b380e4eda54ab41b703011 = MAKE_CODE_OBJECT(module_filename_obj, 198, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[123], mod_consts[123], mod_consts[151], NULL, 1, 0, 0);
    codeobj_94c94dfece557c11eafdd58403e884bd = MAKE_CODE_OBJECT(module_filename_obj, 194, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[121], mod_consts[121], mod_consts[151], NULL, 1, 0, 0);
    codeobj_f54fc9c6c3346ab97e7369ef6a4d7b90 = MAKE_CODE_OBJECT(module_filename_obj, 138, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[92], mod_consts[92], mod_consts[172], NULL, 2, 0, 0);
    codeobj_18e4d2dabd15cefe64e3eea76c427edf = MAKE_CODE_OBJECT(module_filename_obj, 206, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[127], mod_consts[127], mod_consts[151], NULL, 1, 0, 0);
    codeobj_556d6352b89fb399c66fb1a2d7f49f13 = MAKE_CODE_OBJECT(module_filename_obj, 142, CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[94], mod_consts[94], mod_consts[173], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__10__str_fullmatch(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__11__str_encode(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__12__str_find(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__13__str_rfind(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__14__str_findall(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__15__str_get();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__16__str_index(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__17__str_rindex(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__18__str_join();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__19__str_partition();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__1__str_getitem();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__20__str_rpartition();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__21__str_len();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__22__str_slice(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__23__str_slice_replace(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__24__str_translate();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__25__str_wrap();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__26__str_get_dummies(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__27__str_isalnum();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__28__str_isalpha();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__29__str_isdecimal();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__2__str_count(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__30__str_isdigit();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__31__str_islower();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__32__str_isnumeric();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__33__str_isspace();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__34__str_istitle();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__35__str_isupper();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__36__str_capitalize();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__37__str_casefold();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__38__str_title();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__39__str_swapcase();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__3__str_pad(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__40__str_lower();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__41__str_upper();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__42__str_normalize();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__43__str_strip(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__44__str_lstrip(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__45__str_rstrip(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__46__str_split(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__47__str_rsplit(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__48__str_extract(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__4__str_contains(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__5__str_startswith(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__6__str_endswith(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__7__str_replace(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__8__str_repeat();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__9__str_match(PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_pandas$core$strings$base$$$function__1__str_getitem(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_key = python_pars[1];
    struct Nuitka_FrameObject *frame_f4e66cabf0a2e21be164d2ce586d392d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f4e66cabf0a2e21be164d2ce586d392d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f4e66cabf0a2e21be164d2ce586d392d)) {
        Py_XDECREF(cache_frame_f4e66cabf0a2e21be164d2ce586d392d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f4e66cabf0a2e21be164d2ce586d392d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f4e66cabf0a2e21be164d2ce586d392d = MAKE_FUNCTION_FRAME(codeobj_f4e66cabf0a2e21be164d2ce586d392d, module_pandas$core$strings$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f4e66cabf0a2e21be164d2ce586d392d->m_type_description == NULL);
    frame_f4e66cabf0a2e21be164d2ce586d392d = cache_frame_f4e66cabf0a2e21be164d2ce586d392d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f4e66cabf0a2e21be164d2ce586d392d);
    assert(Py_REFCNT(frame_f4e66cabf0a2e21be164d2ce586d392d) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_key);
        tmp_isinstance_inst_1 = par_key;
        tmp_isinstance_cls_1 = (PyObject *)&PySlice_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oo";
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
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_expression_value_2 = par_key;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 30;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_expression_value_3 = par_key;
        tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[2]);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 30;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_expression_value_4 = par_key;
        tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[3]);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 30;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_f4e66cabf0a2e21be164d2ce586d392d->m_frame.f_lineno = 30;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[4]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_key);
        tmp_args_element_value_1 = par_key;
        frame_f4e66cabf0a2e21be164d2ce586d392d->m_frame.f_lineno = 32;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[5], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
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
        exception_tb = MAKE_TRACEBACK(frame_f4e66cabf0a2e21be164d2ce586d392d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f4e66cabf0a2e21be164d2ce586d392d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f4e66cabf0a2e21be164d2ce586d392d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f4e66cabf0a2e21be164d2ce586d392d,
        type_description_1,
        par_self,
        par_key
    );


    // Release cached frame if used for exception.
    if (frame_f4e66cabf0a2e21be164d2ce586d392d == cache_frame_f4e66cabf0a2e21be164d2ce586d392d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f4e66cabf0a2e21be164d2ce586d392d);
        cache_frame_f4e66cabf0a2e21be164d2ce586d392d = NULL;
    }

    assertFrameObject(frame_f4e66cabf0a2e21be164d2ce586d392d);

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



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__10__str_fullmatch(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        mod_consts[64],
#endif
        codeobj_8bac357a68f123256c1cb399e0677bd3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__11__str_encode(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[66],
#if PYTHON_VERSION >= 0x300
        mod_consts[67],
#endif
        codeobj_9ddc2df38b18e4febb6a11244d163a27,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__12__str_find(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[69],
#if PYTHON_VERSION >= 0x300
        mod_consts[70],
#endif
        codeobj_65b2a2d6f258f2bc7f8b6a6546defd74,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__13__str_rfind(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[71],
#if PYTHON_VERSION >= 0x300
        mod_consts[72],
#endif
        codeobj_6fa16b827dfd3d0d495e9c14e8b06158,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__14__str_findall(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[73],
#if PYTHON_VERSION >= 0x300
        mod_consts[74],
#endif
        codeobj_c0c72472121b0cb140263e46dd14f0a7,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__15__str_get() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[75],
#endif
        codeobj_5ca42a26e381abac320f7d6e8a8d8ca5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__16__str_index(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        mod_consts[77],
#endif
        codeobj_253ca18c805a5157573532d1825b871d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__17__str_rindex(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        mod_consts[79],
#endif
        codeobj_24e46c81fb3456343eb15afb06bef8a7,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__18__str_join() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[80],
#if PYTHON_VERSION >= 0x300
        mod_consts[81],
#endif
        codeobj_a6265c85dbd9a25ee82400ad1b1c74b0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__19__str_partition() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[82],
#if PYTHON_VERSION >= 0x300
        mod_consts[83],
#endif
        codeobj_f6bb1b5fa75e09eea80330d934b25d1c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__1__str_getitem() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$strings$base$$$function__1__str_getitem,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        mod_consts[36],
#endif
        codeobj_f4e66cabf0a2e21be164d2ce586d392d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__20__str_rpartition() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        mod_consts[85],
#endif
        codeobj_d279ea1c6ae3de247b4d2dc4e663828e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__21__str_len() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[86],
#if PYTHON_VERSION >= 0x300
        mod_consts[87],
#endif
        codeobj_f1fa252815c49c6f2c00220310027224,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__22__str_slice(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        mod_consts[89],
#endif
        codeobj_7524e158a0507c4782ee1d2fdd9f9c96,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__23__str_slice_replace(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[90],
#if PYTHON_VERSION >= 0x300
        mod_consts[91],
#endif
        codeobj_ac2ccafe46ece76eda118144692fc830,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__24__str_translate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[92],
#if PYTHON_VERSION >= 0x300
        mod_consts[93],
#endif
        codeobj_f54fc9c6c3346ab97e7369ef6a4d7b90,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__25__str_wrap() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        mod_consts[95],
#endif
        codeobj_556d6352b89fb399c66fb1a2d7f49f13,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__26__str_get_dummies(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[97],
#if PYTHON_VERSION >= 0x300
        mod_consts[98],
#endif
        codeobj_607104eacca145300e0f84e7c288b339,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__27__str_isalnum() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[99],
#if PYTHON_VERSION >= 0x300
        mod_consts[100],
#endif
        codeobj_42f2039843d0b3e96489be7fcafcff26,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__28__str_isalpha() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[101],
#if PYTHON_VERSION >= 0x300
        mod_consts[102],
#endif
        codeobj_a44db4a28dd6c2b00f4fdf52b129673e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__29__str_isdecimal() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[103],
#if PYTHON_VERSION >= 0x300
        mod_consts[104],
#endif
        codeobj_886cb0ff0fa589345bcc838f8b90fad7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__2__str_count(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[39],
#if PYTHON_VERSION >= 0x300
        mod_consts[40],
#endif
        codeobj_6da66704a00c3107c5275ca1844926ff,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__30__str_isdigit() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[105],
#if PYTHON_VERSION >= 0x300
        mod_consts[106],
#endif
        codeobj_da15c4acac705d02a44110cbf39ffc10,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__31__str_islower() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[107],
#if PYTHON_VERSION >= 0x300
        mod_consts[108],
#endif
        codeobj_bf944a11a0217596c01393a1cf56f739,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__32__str_isnumeric() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[109],
#if PYTHON_VERSION >= 0x300
        mod_consts[110],
#endif
        codeobj_3b0520d71df176071426abd360366198,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__33__str_isspace() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[111],
#if PYTHON_VERSION >= 0x300
        mod_consts[112],
#endif
        codeobj_0ba5dc80f8bc664dc3317eb2650f69ca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__34__str_istitle() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        mod_consts[114],
#endif
        codeobj_36bc7931a676e5061ea949fed96326ca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__35__str_isupper() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[115],
#if PYTHON_VERSION >= 0x300
        mod_consts[116],
#endif
        codeobj_ce73ba716e616da5735aec8e9883d3ff,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__36__str_capitalize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[117],
#if PYTHON_VERSION >= 0x300
        mod_consts[118],
#endif
        codeobj_c5853d4848f002b35399473ea405ad11,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__37__str_casefold() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[119],
#if PYTHON_VERSION >= 0x300
        mod_consts[120],
#endif
        codeobj_59aa18cb854c03d936175d5e741ab3d8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__38__str_title() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[121],
#if PYTHON_VERSION >= 0x300
        mod_consts[122],
#endif
        codeobj_94c94dfece557c11eafdd58403e884bd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__39__str_swapcase() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[123],
#if PYTHON_VERSION >= 0x300
        mod_consts[124],
#endif
        codeobj_9ba44bca52b380e4eda54ab41b703011,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__3__str_pad(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[42],
#if PYTHON_VERSION >= 0x300
        mod_consts[43],
#endif
        codeobj_22ba723d767ff7e77308b216bcf369e9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__40__str_lower() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[125],
#if PYTHON_VERSION >= 0x300
        mod_consts[126],
#endif
        codeobj_ebd6ab9196cf2920e138ccf94640058d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__41__str_upper() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[127],
#if PYTHON_VERSION >= 0x300
        mod_consts[128],
#endif
        codeobj_18e4d2dabd15cefe64e3eea76c427edf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__42__str_normalize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[129],
#if PYTHON_VERSION >= 0x300
        mod_consts[130],
#endif
        codeobj_bda4a73bda7bf2aa9144b6e11bbf35cd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__43__str_strip(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[131],
#if PYTHON_VERSION >= 0x300
        mod_consts[132],
#endif
        codeobj_48a3624bdcb9e9de0159a8ddce26d3f6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__44__str_lstrip(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[133],
#if PYTHON_VERSION >= 0x300
        mod_consts[134],
#endif
        codeobj_69d5a99454eef293fdcad948da9524ef,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__45__str_rstrip(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[135],
#if PYTHON_VERSION >= 0x300
        mod_consts[136],
#endif
        codeobj_a080876d41ea77c5ecdfff3b989f1c75,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__46__str_split(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[138],
#if PYTHON_VERSION >= 0x300
        mod_consts[139],
#endif
        codeobj_6588bce71bdf6255c08142a2e89b677d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__47__str_rsplit(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[141],
#if PYTHON_VERSION >= 0x300
        mod_consts[142],
#endif
        codeobj_35d6fa076e256bb9a5b81cd879175f72,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__48__str_extract(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[145],
#if PYTHON_VERSION >= 0x300
        mod_consts[146],
#endif
        codeobj_7e6b38c844062d95675cc304a6b54759,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__4__str_contains(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[45],
#if PYTHON_VERSION >= 0x300
        mod_consts[46],
#endif
        codeobj_2b0afc29b8475d4709347979fd27d95e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__5__str_startswith(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        mod_consts[49],
#endif
        codeobj_f479741dc8bcc5e7dd25d830f8ca8bd3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__6__str_endswith(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        mod_consts[51],
#endif
        codeobj_ee69b6a4286c87abf9908f280dcd619c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__7__str_replace(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        mod_consts[55],
#endif
        codeobj_fd49f5a94d2bbb314cf7132f97f209d4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__8__str_repeat() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[56],
#if PYTHON_VERSION >= 0x300
        mod_consts[57],
#endif
        codeobj_5bb886f72f7aaf3f272f2f60f5e8e165,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__9__str_match(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        mod_consts[61],
#endif
        codeobj_d21f6aceb50d465dccb1ae08fc302eda,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$strings$base,
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

function_impl_code functable_pandas$core$strings$base[] = {
    impl_pandas$core$strings$base$$$function__1__str_getitem,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
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

    function_impl_code *current = functable_pandas$core$strings$base;
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

    if (offset > sizeof(functable_pandas$core$strings$base) || offset < 0) {
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
        functable_pandas$core$strings$base[offset],
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
        module_pandas$core$strings$base,
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
PyObject *modulecode_pandas$core$strings$base(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pandas.core.strings.base");

    // Store the module for future use.
    module_pandas$core$strings$base = module;

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
        PRINT_STRING("pandas.core.strings.base: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("pandas.core.strings.base: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("pandas.core.strings.base: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpandas$core$strings$base\n");

    moduledict_pandas$core$strings$base = MODULE_DICT(module_pandas$core$strings$base);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pandas$core$strings$base,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pandas$core$strings$base,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[174]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pandas$core$strings$base,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pandas$core$strings$base,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pandas$core$strings$base,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pandas$core$strings$base);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_pandas$core$strings$base);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_d74978ec3b4938b2f76f22dca0ad4505;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_84ee5dc237cf8f3faae6832bc568aeff_2;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_2);
    }
    frame_d74978ec3b4938b2f76f22dca0ad4505 = MAKE_MODULE_FRAME(codeobj_d74978ec3b4938b2f76f22dca0ad4505, module_pandas$core$strings$base);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d74978ec3b4938b2f76f22dca0ad4505);
    assert(Py_REFCNT(frame_d74978ec3b4938b2f76f22dca0ad4505) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[9], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[10], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[12]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[13];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pandas$core$strings$base;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[14];
        frame_d74978ec3b4938b2f76f22dca0ad4505->m_frame.f_lineno = 3;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[15];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pandas$core$strings$base;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[16];
        tmp_level_value_2 = mod_consts[14];
        frame_d74978ec3b4938b2f76f22dca0ad4505->m_frame.f_lineno = 4;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$core$strings$base,
                mod_consts[17],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[17]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[18];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_pandas$core$strings$base;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[14];
        frame_d74978ec3b4938b2f76f22dca0ad4505->m_frame.f_lineno = 5;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[19];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_pandas$core$strings$base;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[14];
        frame_d74978ec3b4938b2f76f22dca0ad4505->m_frame.f_lineno = 7;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[21];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_pandas$core$strings$base;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[22];
        tmp_level_value_5 = mod_consts[14];
        frame_d74978ec3b4938b2f76f22dca0ad4505->m_frame.f_lineno = 9;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_pandas$core$strings$base,
                mod_consts[23],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[23]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_9);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[24]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        tmp_assign_source_10 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_10, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_11 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

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
        tmp_expression_value_2 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[14];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_13 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_13;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_3, mod_consts[25]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[25]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        tmp_tuple_element_2 = mod_consts[26];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_d74978ec3b4938b2f76f22dca0ad4505->m_frame.f_lineno = 12;
        tmp_assign_source_14 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_14;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_5 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_5, mod_consts[27]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

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
        tmp_mod_expr_left_1 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[29];
        tmp_getattr_default_1 = mod_consts[30];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_6 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[29]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

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


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 12;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_15;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_16;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[33];
        tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[6], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[26];
        tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        frame_84ee5dc237cf8f3faae6832bc568aeff_2 = MAKE_CLASS_FRAME(codeobj_84ee5dc237cf8f3faae6832bc568aeff, module_pandas$core$strings$base, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_84ee5dc237cf8f3faae6832bc568aeff_2);
        assert(Py_REFCNT(frame_84ee5dc237cf8f3faae6832bc568aeff_2) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_pandas$core$strings$base$$$function__1__str_getitem();

        tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[35], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_defaults_1;
            tmp_called_instance_1 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_1 == NULL)) {
                        tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 34;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_1);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_1 = mod_consts[38];
            Py_INCREF(tmp_defaults_1);


            tmp_args_element_value_1 = MAKE_FUNCTION_pandas$core$strings$base$$$function__2__str_count(tmp_defaults_1);

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 34;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[37], tmp_args_element_value_1);
            Py_DECREF(tmp_called_instance_1);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[39], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_defaults_2;
            tmp_called_instance_2 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_2 == NULL)) {
                        tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 38;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_2);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_2 = mod_consts[41];
            Py_INCREF(tmp_defaults_2);


            tmp_args_element_value_2 = MAKE_FUNCTION_pandas$core$strings$base$$$function__3__str_pad(tmp_defaults_2);

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 38;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[37], tmp_args_element_value_2);
            Py_DECREF(tmp_called_instance_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[42], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_defaults_3;
            tmp_called_instance_3 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_3 == NULL)) {
                        tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 42;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_3);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_3 = mod_consts[44];
            Py_INCREF(tmp_defaults_3);


            tmp_args_element_value_3 = MAKE_FUNCTION_pandas$core$strings$base$$$function__4__str_contains(tmp_defaults_3);

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 42;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[37], tmp_args_element_value_3);
            Py_DECREF(tmp_called_instance_3);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[45], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_defaults_4;
            tmp_called_instance_4 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_4 == NULL)) {
                        tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 46;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_4);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_4 = mod_consts[47];
            Py_INCREF(tmp_defaults_4);


            tmp_args_element_value_4 = MAKE_FUNCTION_pandas$core$strings$base$$$function__5__str_startswith(tmp_defaults_4);

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 46;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[37], tmp_args_element_value_4);
            Py_DECREF(tmp_called_instance_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[48], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_5;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_defaults_5;
            tmp_called_instance_5 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_5 == NULL)) {
                        tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 50;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_5);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_5 = mod_consts[47];
            Py_INCREF(tmp_defaults_5);


            tmp_args_element_value_5 = MAKE_FUNCTION_pandas$core$strings$base$$$function__6__str_endswith(tmp_defaults_5);

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 50;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[37], tmp_args_element_value_5);
            Py_DECREF(tmp_called_instance_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[50], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_6;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_defaults_6;
            PyObject *tmp_annotations_1;
            tmp_called_instance_6 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_6 == NULL)) {
                        tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 54;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_6 = mod_consts[52];
            tmp_annotations_1 = DICT_COPY(mod_consts[53]);
            Py_INCREF(tmp_defaults_6);


            tmp_args_element_value_6 = MAKE_FUNCTION_pandas$core$strings$base$$$function__7__str_replace(tmp_defaults_6, tmp_annotations_1);

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 54;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[37], tmp_args_element_value_6);
            Py_DECREF(tmp_called_instance_6);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[54], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_7;
            PyObject *tmp_args_element_value_7;
            tmp_called_instance_7 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_7 == NULL)) {
                        tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 66;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_7);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_7 = MAKE_FUNCTION_pandas$core$strings$base$$$function__8__str_repeat();

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 66;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_7, mod_consts[37], tmp_args_element_value_7);
            Py_DECREF(tmp_called_instance_7);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[56], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_defaults_7;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_annotations_2;
            tmp_expression_value_7 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_expression_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_expression_value_7 == NULL)) {
                        tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_expression_value_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 70;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_7);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[37]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_tuple_element_4 = Py_True;
            tmp_defaults_7 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_8;
                PyTuple_SET_ITEM0(tmp_defaults_7, 0, tmp_tuple_element_4);
                tmp_tuple_element_4 = mod_consts[14];
                PyTuple_SET_ITEM0(tmp_defaults_7, 1, tmp_tuple_element_4);
                tmp_expression_value_8 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[20]);

                if (tmp_expression_value_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_expression_value_8 == NULL)) {
                            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                        }

                        if (tmp_expression_value_8 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 72;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_8);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[58]);
                Py_DECREF(tmp_expression_value_8);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 72;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_defaults_7, 2, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_defaults_7);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_annotations_2 = DICT_COPY(mod_consts[59]);


            tmp_args_element_value_8 = MAKE_FUNCTION_pandas$core$strings$base$$$function__9__str_match(tmp_defaults_7, tmp_annotations_2);

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 70;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_8);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[60], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_defaults_8;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_annotations_3;
            tmp_expression_value_9 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_expression_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_expression_value_9 == NULL)) {
                        tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_expression_value_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 76;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_9);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[37]);
            Py_DECREF(tmp_expression_value_9);
            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_tuple_element_5 = Py_True;
            tmp_defaults_8 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_10;
                PyTuple_SET_ITEM0(tmp_defaults_8, 0, tmp_tuple_element_5);
                tmp_tuple_element_5 = mod_consts[14];
                PyTuple_SET_ITEM0(tmp_defaults_8, 1, tmp_tuple_element_5);
                tmp_expression_value_10 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[20]);

                if (tmp_expression_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_expression_value_10 == NULL)) {
                            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                        }

                        if (tmp_expression_value_10 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 82;
                            type_description_2 = "o";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_10);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[58]);
                Py_DECREF(tmp_expression_value_10);
                if (tmp_tuple_element_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 82;
                    type_description_2 = "o";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_defaults_8, 2, tmp_tuple_element_5);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_defaults_8);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_annotations_3 = DICT_COPY(mod_consts[62]);


            tmp_args_element_value_9 = MAKE_FUNCTION_pandas$core$strings$base$$$function__10__str_fullmatch(tmp_defaults_8, tmp_annotations_3);

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 76;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[63], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_8;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_defaults_9;
            tmp_called_instance_8 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_8 == NULL)) {
                        tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 86;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_8);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_9 = mod_consts[65];
            Py_INCREF(tmp_defaults_9);


            tmp_args_element_value_10 = MAKE_FUNCTION_pandas$core$strings$base$$$function__11__str_encode(tmp_defaults_9);

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 86;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_8, mod_consts[37], tmp_args_element_value_10);
            Py_DECREF(tmp_called_instance_8);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[66], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_9;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_defaults_10;
            tmp_called_instance_9 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_9 == NULL)) {
                        tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 90;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_9);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_10 = mod_consts[68];
            Py_INCREF(tmp_defaults_10);


            tmp_args_element_value_11 = MAKE_FUNCTION_pandas$core$strings$base$$$function__12__str_find(tmp_defaults_10);

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 90;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_9, mod_consts[37], tmp_args_element_value_11);
            Py_DECREF(tmp_called_instance_9);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[69], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_10;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_defaults_11;
            tmp_called_instance_10 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_10 == NULL)) {
                        tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 94;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_10);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_11 = mod_consts[68];
            Py_INCREF(tmp_defaults_11);


            tmp_args_element_value_12 = MAKE_FUNCTION_pandas$core$strings$base$$$function__13__str_rfind(tmp_defaults_11);

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 94;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_10, mod_consts[37], tmp_args_element_value_12);
            Py_DECREF(tmp_called_instance_10);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[71], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_11;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_defaults_12;
            tmp_called_instance_11 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_11 == NULL)) {
                        tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 98;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_11);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_12 = mod_consts[38];
            Py_INCREF(tmp_defaults_12);


            tmp_args_element_value_13 = MAKE_FUNCTION_pandas$core$strings$base$$$function__14__str_findall(tmp_defaults_12);

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 98;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_11, mod_consts[37], tmp_args_element_value_13);
            Py_DECREF(tmp_called_instance_11);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[73], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_12;
            PyObject *tmp_args_element_value_14;
            tmp_called_instance_12 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_12 == NULL)) {
                        tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 102;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_12);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_14 = MAKE_FUNCTION_pandas$core$strings$base$$$function__15__str_get();

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 102;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_12, mod_consts[37], tmp_args_element_value_14);
            Py_DECREF(tmp_called_instance_12);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_13;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_defaults_13;
            tmp_called_instance_13 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_13 == NULL)) {
                        tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 106;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_13);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_13 = mod_consts[68];
            Py_INCREF(tmp_defaults_13);


            tmp_args_element_value_15 = MAKE_FUNCTION_pandas$core$strings$base$$$function__16__str_index(tmp_defaults_13);

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 106;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_13, mod_consts[37], tmp_args_element_value_15);
            Py_DECREF(tmp_called_instance_13);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[76], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_14;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_defaults_14;
            tmp_called_instance_14 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_14 == NULL)) {
                        tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 110;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_14);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_14 = mod_consts[68];
            Py_INCREF(tmp_defaults_14);


            tmp_args_element_value_16 = MAKE_FUNCTION_pandas$core$strings$base$$$function__17__str_rindex(tmp_defaults_14);

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 110;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_14, mod_consts[37], tmp_args_element_value_16);
            Py_DECREF(tmp_called_instance_14);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[78], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_15;
            PyObject *tmp_args_element_value_17;
            tmp_called_instance_15 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_15 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_15 == NULL)) {
                        tmp_called_instance_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 114;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_15);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_17 = MAKE_FUNCTION_pandas$core$strings$base$$$function__18__str_join();

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 114;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_15, mod_consts[37], tmp_args_element_value_17);
            Py_DECREF(tmp_called_instance_15);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[80], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_16;
            PyObject *tmp_args_element_value_18;
            tmp_called_instance_16 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_16 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_16 == NULL)) {
                        tmp_called_instance_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 118;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_16);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_18 = MAKE_FUNCTION_pandas$core$strings$base$$$function__19__str_partition();

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 118;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_16, mod_consts[37], tmp_args_element_value_18);
            Py_DECREF(tmp_called_instance_16);
            Py_DECREF(tmp_args_element_value_18);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[82], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_17;
            PyObject *tmp_args_element_value_19;
            tmp_called_instance_17 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_17 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_17 == NULL)) {
                        tmp_called_instance_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 122;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_17);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_19 = MAKE_FUNCTION_pandas$core$strings$base$$$function__20__str_rpartition();

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 122;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_17, mod_consts[37], tmp_args_element_value_19);
            Py_DECREF(tmp_called_instance_17);
            Py_DECREF(tmp_args_element_value_19);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[84], tmp_dictset_value);
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
            PyObject *tmp_called_instance_18;
            PyObject *tmp_args_element_value_20;
            tmp_called_instance_18 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_18 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_18 == NULL)) {
                        tmp_called_instance_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 126;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_18);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_20 = MAKE_FUNCTION_pandas$core$strings$base$$$function__21__str_len();

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 126;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_18, mod_consts[37], tmp_args_element_value_20);
            Py_DECREF(tmp_called_instance_18);
            Py_DECREF(tmp_args_element_value_20);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[86], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_19;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_defaults_15;
            tmp_called_instance_19 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_19 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_19 == NULL)) {
                        tmp_called_instance_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 130;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_19);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_15 = mod_consts[88];
            Py_INCREF(tmp_defaults_15);


            tmp_args_element_value_21 = MAKE_FUNCTION_pandas$core$strings$base$$$function__22__str_slice(tmp_defaults_15);

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 130;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_19, mod_consts[37], tmp_args_element_value_21);
            Py_DECREF(tmp_called_instance_19);
            Py_DECREF(tmp_args_element_value_21);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[0], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_20;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_defaults_16;
            tmp_called_instance_20 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_20 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_20 == NULL)) {
                        tmp_called_instance_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 134;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_20);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_16 = mod_consts[88];
            Py_INCREF(tmp_defaults_16);


            tmp_args_element_value_22 = MAKE_FUNCTION_pandas$core$strings$base$$$function__23__str_slice_replace(tmp_defaults_16);

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 134;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_20, mod_consts[37], tmp_args_element_value_22);
            Py_DECREF(tmp_called_instance_20);
            Py_DECREF(tmp_args_element_value_22);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[90], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_21;
            PyObject *tmp_args_element_value_23;
            tmp_called_instance_21 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_21 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_21 == NULL)) {
                        tmp_called_instance_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 138;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_21);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_23 = MAKE_FUNCTION_pandas$core$strings$base$$$function__24__str_translate();

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 138;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_21, mod_consts[37], tmp_args_element_value_23);
            Py_DECREF(tmp_called_instance_21);
            Py_DECREF(tmp_args_element_value_23);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[92], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_22;
            PyObject *tmp_args_element_value_24;
            tmp_called_instance_22 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_22 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_22 == NULL)) {
                        tmp_called_instance_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 142;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_22);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_24 = MAKE_FUNCTION_pandas$core$strings$base$$$function__25__str_wrap();

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 142;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_22, mod_consts[37], tmp_args_element_value_24);
            Py_DECREF(tmp_called_instance_22);
            Py_DECREF(tmp_args_element_value_24);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[94], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_23;
            PyObject *tmp_args_element_value_25;
            PyObject *tmp_defaults_17;
            tmp_called_instance_23 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_23 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_23 == NULL)) {
                        tmp_called_instance_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 146;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_23);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_17 = mod_consts[96];
            Py_INCREF(tmp_defaults_17);


            tmp_args_element_value_25 = MAKE_FUNCTION_pandas$core$strings$base$$$function__26__str_get_dummies(tmp_defaults_17);

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 146;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_23, mod_consts[37], tmp_args_element_value_25);
            Py_DECREF(tmp_called_instance_23);
            Py_DECREF(tmp_args_element_value_25);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[97], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_24;
            PyObject *tmp_args_element_value_26;
            tmp_called_instance_24 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_24 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_24 == NULL)) {
                        tmp_called_instance_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 150;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_24);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_26 = MAKE_FUNCTION_pandas$core$strings$base$$$function__27__str_isalnum();

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 150;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_24, mod_consts[37], tmp_args_element_value_26);
            Py_DECREF(tmp_called_instance_24);
            Py_DECREF(tmp_args_element_value_26);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[99], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_25;
            PyObject *tmp_args_element_value_27;
            tmp_called_instance_25 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_25 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_25 == NULL)) {
                        tmp_called_instance_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 154;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_25);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_27 = MAKE_FUNCTION_pandas$core$strings$base$$$function__28__str_isalpha();

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 154;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_25, mod_consts[37], tmp_args_element_value_27);
            Py_DECREF(tmp_called_instance_25);
            Py_DECREF(tmp_args_element_value_27);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[101], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_26;
            PyObject *tmp_args_element_value_28;
            tmp_called_instance_26 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_26 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_26 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_26 == NULL)) {
                        tmp_called_instance_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_26 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 158;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_26);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_28 = MAKE_FUNCTION_pandas$core$strings$base$$$function__29__str_isdecimal();

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 158;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_26, mod_consts[37], tmp_args_element_value_28);
            Py_DECREF(tmp_called_instance_26);
            Py_DECREF(tmp_args_element_value_28);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[103], tmp_dictset_value);
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
            PyObject *tmp_called_instance_27;
            PyObject *tmp_args_element_value_29;
            tmp_called_instance_27 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_27 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_27 == NULL)) {
                        tmp_called_instance_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_27 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 162;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_27);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_29 = MAKE_FUNCTION_pandas$core$strings$base$$$function__30__str_isdigit();

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 162;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_27, mod_consts[37], tmp_args_element_value_29);
            Py_DECREF(tmp_called_instance_27);
            Py_DECREF(tmp_args_element_value_29);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[105], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_28;
            PyObject *tmp_args_element_value_30;
            tmp_called_instance_28 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_28 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_28 == NULL)) {
                        tmp_called_instance_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_28 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 166;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_28);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_30 = MAKE_FUNCTION_pandas$core$strings$base$$$function__31__str_islower();

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 166;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_28, mod_consts[37], tmp_args_element_value_30);
            Py_DECREF(tmp_called_instance_28);
            Py_DECREF(tmp_args_element_value_30);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[107], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_29;
            PyObject *tmp_args_element_value_31;
            tmp_called_instance_29 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_29 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_29 == NULL)) {
                        tmp_called_instance_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_29 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 170;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_29);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_31 = MAKE_FUNCTION_pandas$core$strings$base$$$function__32__str_isnumeric();

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 170;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_29, mod_consts[37], tmp_args_element_value_31);
            Py_DECREF(tmp_called_instance_29);
            Py_DECREF(tmp_args_element_value_31);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[109], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_30;
            PyObject *tmp_args_element_value_32;
            tmp_called_instance_30 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_30 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_30 == NULL)) {
                        tmp_called_instance_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_30 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 174;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_30);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_32 = MAKE_FUNCTION_pandas$core$strings$base$$$function__33__str_isspace();

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 174;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_30, mod_consts[37], tmp_args_element_value_32);
            Py_DECREF(tmp_called_instance_30);
            Py_DECREF(tmp_args_element_value_32);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[111], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_31;
            PyObject *tmp_args_element_value_33;
            tmp_called_instance_31 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_31 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_31 == NULL)) {
                        tmp_called_instance_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_31 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 178;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_31);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_33 = MAKE_FUNCTION_pandas$core$strings$base$$$function__34__str_istitle();

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 178;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_31, mod_consts[37], tmp_args_element_value_33);
            Py_DECREF(tmp_called_instance_31);
            Py_DECREF(tmp_args_element_value_33);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[113], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_32;
            PyObject *tmp_args_element_value_34;
            tmp_called_instance_32 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_32 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_32 == NULL)) {
                        tmp_called_instance_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_32 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 182;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_32);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_34 = MAKE_FUNCTION_pandas$core$strings$base$$$function__35__str_isupper();

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 182;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_32, mod_consts[37], tmp_args_element_value_34);
            Py_DECREF(tmp_called_instance_32);
            Py_DECREF(tmp_args_element_value_34);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[115], tmp_dictset_value);
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
            PyObject *tmp_called_instance_33;
            PyObject *tmp_args_element_value_35;
            tmp_called_instance_33 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_33 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_33 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_33 == NULL)) {
                        tmp_called_instance_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_33 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 186;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_33);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_35 = MAKE_FUNCTION_pandas$core$strings$base$$$function__36__str_capitalize();

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 186;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_33, mod_consts[37], tmp_args_element_value_35);
            Py_DECREF(tmp_called_instance_33);
            Py_DECREF(tmp_args_element_value_35);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[117], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_34;
            PyObject *tmp_args_element_value_36;
            tmp_called_instance_34 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_34 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_34 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_34 == NULL)) {
                        tmp_called_instance_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_34 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 190;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_34);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_36 = MAKE_FUNCTION_pandas$core$strings$base$$$function__37__str_casefold();

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 190;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_34, mod_consts[37], tmp_args_element_value_36);
            Py_DECREF(tmp_called_instance_34);
            Py_DECREF(tmp_args_element_value_36);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[119], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_35;
            PyObject *tmp_args_element_value_37;
            tmp_called_instance_35 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_35 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_35 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_35 == NULL)) {
                        tmp_called_instance_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_35 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 194;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_35);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_37 = MAKE_FUNCTION_pandas$core$strings$base$$$function__38__str_title();

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 194;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_35, mod_consts[37], tmp_args_element_value_37);
            Py_DECREF(tmp_called_instance_35);
            Py_DECREF(tmp_args_element_value_37);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[121], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_36;
            PyObject *tmp_args_element_value_38;
            tmp_called_instance_36 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_36 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_36 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_36 == NULL)) {
                        tmp_called_instance_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_36 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 198;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_36);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_38 = MAKE_FUNCTION_pandas$core$strings$base$$$function__39__str_swapcase();

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 198;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_36, mod_consts[37], tmp_args_element_value_38);
            Py_DECREF(tmp_called_instance_36);
            Py_DECREF(tmp_args_element_value_38);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[123], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_37;
            PyObject *tmp_args_element_value_39;
            tmp_called_instance_37 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_37 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_37 == NULL)) {
                        tmp_called_instance_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_37 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 202;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_37);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_39 = MAKE_FUNCTION_pandas$core$strings$base$$$function__40__str_lower();

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 202;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_37, mod_consts[37], tmp_args_element_value_39);
            Py_DECREF(tmp_called_instance_37);
            Py_DECREF(tmp_args_element_value_39);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[125], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_38;
            PyObject *tmp_args_element_value_40;
            tmp_called_instance_38 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_38 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_38 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_38 == NULL)) {
                        tmp_called_instance_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_38 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 206;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_38);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_40 = MAKE_FUNCTION_pandas$core$strings$base$$$function__41__str_upper();

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 206;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_38, mod_consts[37], tmp_args_element_value_40);
            Py_DECREF(tmp_called_instance_38);
            Py_DECREF(tmp_args_element_value_40);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[127], tmp_dictset_value);
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
            PyObject *tmp_called_instance_39;
            PyObject *tmp_args_element_value_41;
            tmp_called_instance_39 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_39 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_39 == NULL)) {
                        tmp_called_instance_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_39 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 210;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_39);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_41 = MAKE_FUNCTION_pandas$core$strings$base$$$function__42__str_normalize();

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 210;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_39, mod_consts[37], tmp_args_element_value_41);
            Py_DECREF(tmp_called_instance_39);
            Py_DECREF(tmp_args_element_value_41);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[129], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_40;
            PyObject *tmp_args_element_value_42;
            PyObject *tmp_defaults_18;
            tmp_called_instance_40 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_40 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_40 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_40 == NULL)) {
                        tmp_called_instance_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_40 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 214;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_40);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_18 = mod_consts[47];
            Py_INCREF(tmp_defaults_18);


            tmp_args_element_value_42 = MAKE_FUNCTION_pandas$core$strings$base$$$function__43__str_strip(tmp_defaults_18);

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 214;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_40, mod_consts[37], tmp_args_element_value_42);
            Py_DECREF(tmp_called_instance_40);
            Py_DECREF(tmp_args_element_value_42);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[131], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_41;
            PyObject *tmp_args_element_value_43;
            PyObject *tmp_defaults_19;
            tmp_called_instance_41 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_41 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_41 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_41 == NULL)) {
                        tmp_called_instance_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_41 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 218;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_41);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_19 = mod_consts[47];
            Py_INCREF(tmp_defaults_19);


            tmp_args_element_value_43 = MAKE_FUNCTION_pandas$core$strings$base$$$function__44__str_lstrip(tmp_defaults_19);

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 218;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_41, mod_consts[37], tmp_args_element_value_43);
            Py_DECREF(tmp_called_instance_41);
            Py_DECREF(tmp_args_element_value_43);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[133], tmp_dictset_value);
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
            PyObject *tmp_called_instance_42;
            PyObject *tmp_args_element_value_44;
            PyObject *tmp_defaults_20;
            tmp_called_instance_42 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_42 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_42 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_42 == NULL)) {
                        tmp_called_instance_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_42 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 222;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_42);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_20 = mod_consts[47];
            Py_INCREF(tmp_defaults_20);


            tmp_args_element_value_44 = MAKE_FUNCTION_pandas$core$strings$base$$$function__45__str_rstrip(tmp_defaults_20);

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 222;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_42, mod_consts[37], tmp_args_element_value_44);
            Py_DECREF(tmp_called_instance_42);
            Py_DECREF(tmp_args_element_value_44);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[135], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_43;
            PyObject *tmp_args_element_value_45;
            PyObject *tmp_defaults_21;
            tmp_called_instance_43 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_43 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_43 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_43 == NULL)) {
                        tmp_called_instance_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_43 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 226;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_43);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_21 = mod_consts[137];
            Py_INCREF(tmp_defaults_21);


            tmp_args_element_value_45 = MAKE_FUNCTION_pandas$core$strings$base$$$function__46__str_split(tmp_defaults_21);

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 226;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_43, mod_consts[37], tmp_args_element_value_45);
            Py_DECREF(tmp_called_instance_43);
            Py_DECREF(tmp_args_element_value_45);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[138], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_44;
            PyObject *tmp_args_element_value_46;
            PyObject *tmp_defaults_22;
            tmp_called_instance_44 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_44 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_44 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_44 == NULL)) {
                        tmp_called_instance_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_44 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 230;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_44);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_22 = mod_consts[140];
            Py_INCREF(tmp_defaults_22);


            tmp_args_element_value_46 = MAKE_FUNCTION_pandas$core$strings$base$$$function__47__str_rsplit(tmp_defaults_22);

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 230;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_44, mod_consts[37], tmp_args_element_value_46);
            Py_DECREF(tmp_called_instance_44);
            Py_DECREF(tmp_args_element_value_46);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[141], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_45;
            PyObject *tmp_args_element_value_47;
            PyObject *tmp_defaults_23;
            PyObject *tmp_annotations_4;
            tmp_called_instance_45 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[13]);

            if (tmp_called_instance_45 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_45 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_instance_45 == NULL)) {
                        tmp_called_instance_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_called_instance_45 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 234;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_45);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_23 = mod_consts[143];
            tmp_annotations_4 = DICT_COPY(mod_consts[144]);
            Py_INCREF(tmp_defaults_23);


            tmp_args_element_value_47 = MAKE_FUNCTION_pandas$core$strings$base$$$function__48__str_extract(tmp_defaults_23, tmp_annotations_4);

            frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame.f_lineno = 234;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_45, mod_consts[37], tmp_args_element_value_47);
            Py_DECREF(tmp_called_instance_45);
            Py_DECREF(tmp_args_element_value_47);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[145], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_84ee5dc237cf8f3faae6832bc568aeff_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_84ee5dc237cf8f3faae6832bc568aeff_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_84ee5dc237cf8f3faae6832bc568aeff_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_84ee5dc237cf8f3faae6832bc568aeff_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_84ee5dc237cf8f3faae6832bc568aeff_2);

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


                exception_lineno = 12;

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
        tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12, mod_consts[147], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_4 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_6 = mod_consts[26];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_6 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_d74978ec3b4938b2f76f22dca0ad4505->m_frame.f_lineno = 12;
            tmp_assign_source_17 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_17;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_16 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_16);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12);
        locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12 = NULL;
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

        Py_DECREF(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12);
        locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_12 = NULL;
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
        exception_lineno = 12;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_16);
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


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d74978ec3b4938b2f76f22dca0ad4505, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d74978ec3b4938b2f76f22dca0ad4505->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d74978ec3b4938b2f76f22dca0ad4505, exception_lineno);
    }



    assertFrameObject(frame_d74978ec3b4938b2f76f22dca0ad4505);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
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

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pandas.core.strings.base", false);

    Py_INCREF(module_pandas$core$strings$base);
    return module_pandas$core$strings$base;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("pandas$core$strings$base", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
